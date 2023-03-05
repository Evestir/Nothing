// Windows Header Files
#include <windows.h>
#include <iostream>
#include <MinHook.h>
#include <d3d11.h>
#include <imgui/imgui.h>
#include <imgui/imgui_impl_win32.h>
#include <imgui/imgui_impl_dx11.h>
#include <imgui/imgui_internal.h>
#pragma comment(lib, "d3d11.lib")

#if _WIN64 
#pragma comment(lib, "libMinHook.x64.lib")
#else
#pragma comment(lib, "libMinHook.x86.lib")
#endif

HINSTANCE DllHandle;

typedef long(__stdcall* present)(IDXGISwapChain*, UINT, UINT);
present p_present;
present p_present_target;
bool get_present_pointer()
{
	DXGI_SWAP_CHAIN_DESC sd;
	ZeroMemory(&sd, sizeof(sd));
	sd.BufferCount = 2;
	sd.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
	sd.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
	sd.OutputWindow = GetForegroundWindow();
	sd.SampleDesc.Count = 1;
	sd.Windowed = TRUE;
	sd.SwapEffect = DXGI_SWAP_EFFECT_DISCARD;

	IDXGISwapChain* swap_chain;
	ID3D11Device* device;

	const D3D_FEATURE_LEVEL feature_levels[] = { D3D_FEATURE_LEVEL_11_0, D3D_FEATURE_LEVEL_10_0, };
	if (D3D11CreateDeviceAndSwapChain(
		NULL,
		D3D_DRIVER_TYPE_HARDWARE,
		NULL,
		0,
		feature_levels,
		2,
		D3D11_SDK_VERSION,
		&sd,
		&swap_chain,
		&device,
		nullptr,
		nullptr) == S_OK)
	{
		void** p_vtable = *reinterpret_cast<void***>(swap_chain);
		swap_chain->Release();
		device->Release();
		//context->Release();
		p_present_target = (present)p_vtable[8];
		return true;
	}
	return false;
}

WNDPROC oWndProc;
// Win32 message handler your application need to call.
// - You should COPY the line below into your .cpp code to forward declare the function and then you can call it.
// - Call from your application's message handler. Keep calling your message handler unless this function returns TRUE.
// Forward declare message handler from imgui_impl_win32.cpp
extern LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
LRESULT __stdcall WndProc(const HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
	// handle input issues here.

	if (true && ImGui_ImplWin32_WndProcHandler(hWnd, uMsg, wParam, lParam))
		return true;

	return CallWindowProc(oWndProc, hWnd, uMsg, wParam, lParam);
}


bool show_menu = true;
bool show_canvas = false;
float speed = 0.5;
bool sShutdown = false;
bool show_esp_t = false;
bool show_esp = false;

bool init = false;
HWND window = NULL;
ID3D11Device* p_device = NULL;
ID3D11DeviceContext* p_context = NULL;
ID3D11RenderTargetView* mainRenderTargetView = NULL;
static long __stdcall detour_present(IDXGISwapChain* p_swap_chain, UINT sync_interval, UINT flags) {
	if (!init) {
		if (SUCCEEDED(p_swap_chain->GetDevice(__uuidof(ID3D11Device), (void**)&p_device)))
		{
			p_device->GetImmediateContext(&p_context);

			// Get HWND to the current window of the target/game
			DXGI_SWAP_CHAIN_DESC sd;
			p_swap_chain->GetDesc(&sd);
			window = sd.OutputWindow;

			// Location in memory where imgui is rendered to
			ID3D11Texture2D* pBackBuffer;
			p_swap_chain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);
			// create a render target pointing to the back buffer
			p_device->CreateRenderTargetView(pBackBuffer, NULL, &mainRenderTargetView);
			// This does not destroy the back buffer! It only releases the pBackBuffer object which we only needed to create the RTV.
			pBackBuffer->Release();
			oWndProc = (WNDPROC)SetWindowLongPtr(window, GWLP_WNDPROC, (LONG_PTR)WndProc);

			// Init ImGui 
			ImGui::CreateContext();
			ImGuiIO& io = ImGui::GetIO();
			//io.ConfigFlags = ImGuiConfigFlags_NoMouseCursorChange;
			ImGui_ImplWin32_Init(window);
			ImGui_ImplDX11_Init(p_device, p_context);
			init = true;
		}
		else
			return p_present(p_swap_chain, sync_interval, flags);
	}
	ImGui_ImplDX11_NewFrame();
	ImGui_ImplWin32_NewFrame();

	ImGui::NewFrame();

	if (show_menu) {
		ImGui::Begin("Nothing", &show_menu);
		ImGui::SetWindowSize(ImVec2(200, 200), ImGuiCond_Always);
		ImGui::Text("Options:");
		ImGui::Checkbox("Bypass AnTiChEaTs", &show_canvas);
		ImGui::Checkbox("Show Players ESP", &show_esp_t);
		if (ImGui::Button("Unload")) {
			sShutdown = true;
		}
		ImGui::SliderFloat("Speed", &speed, 0.01, 1);
		ImGui::End();
	}

	if (show_esp_t) {
		show_esp = true;
	}

	if (show_canvas) {
		ImGuiIO& io = ImGui::GetIO();

		ImGui::PushStyleVar(ImGuiStyleVar_WindowBorderSize, 0.0f);
		ImGui::PushStyleVar(ImGuiStyleVar_WindowPadding, { 0.0f, 0.0f });
		ImGui::PushStyleColor(ImGuiCol_WindowBg, { 0.0f, 0.0f, 0.0f, 0.0f });
		ImGui::Begin("XXX", nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoInputs);

		ImGui::SetWindowPos(ImVec2(0, 0), ImGuiCond_Always);
		ImGui::SetWindowSize(ImVec2(io.DisplaySize.x, io.DisplaySize.y), ImGuiCond_Always);

		ImGuiWindow* window = ImGui::GetCurrentWindow();
		ImDrawList* draw_list = window->DrawList;
		ImVec2 p0 = ImVec2(50, 25);
		ImVec2 p1 = ImVec2(200, 250);
		draw_list->AddRectFilled(p0, p1, IM_COL32(50, 50, 50, 255));
		draw_list->AddRect(p0, p1, IM_COL32(255, 255, 255, 255));

		ImVec2 midpoint = ImVec2(500, 500);
		draw_list->AddCircle(midpoint, 30, ImColor(51, 255, 0), 0, 20);

		window->DrawList->PushClipRectFullScreen();
		ImGui::End();
		ImGui::PopStyleColor();
		ImGui::PopStyleVar(2);

	}

	ImGui::EndFrame();

	// Prepare the data for rendering so we can call GetDrawData()
	ImGui::Render();

	p_context->OMSetRenderTargets(1, &mainRenderTargetView, NULL);
	// The real rendering
	ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());

	return p_present(p_swap_chain, sync_interval, flags);
}


// hooks
DWORD __stdcall EjectThread(LPVOID lpParameter) {
	Sleep(100);
	FreeLibraryAndExitThread(DllHandle, 0);
	return 0;
}

void shutdown(FILE* fp, std::string reason) {
	if (MH_DisableHook(MH_ALL_HOOKS) != MH_OK)
		std::cout << "[*] Failed to disable all hooks" << std::endl;
	else 
		std::cout << "[*] Disabled all hooks" << std::endl;
	if (MH_Uninitialize() != MH_OK)
		std::cout << "[*] Failed to uninitializing all hooks" << std::endl;
	else
		std::cout << "[*] Uninitialized all hooks" << std::endl;
	ImGui_ImplDX11_Shutdown();
	ImGui_ImplWin32_Shutdown();
	ImGui::DestroyContext();
	std::cout << reason << std::endl;
	system("pause");

	ImGui_ImplDX11_Shutdown();
	ImGui_ImplWin32_Shutdown();
	ImGui::DestroyContext();

	if (mainRenderTargetView) { mainRenderTargetView->Release(); mainRenderTargetView = NULL; }
	if (p_context) { p_context->Release(); p_context = NULL; }
	if (p_device) { p_device->Release(); p_device = NULL; }
	SetWindowLongPtr(window, GWLP_WNDPROC, (LONG_PTR)(oWndProc)); // "unhook"

	if (fp != nullptr)
		fclose(fp);
	FreeConsole();
	CreateThread(0, 0, EjectThread, 0, 0, 0);
	return;
}

DWORD WINAPI Menue(HINSTANCE hModule) {
	AllocConsole();
	FILE* fp;
	freopen_s(&fp, "CONOUT$", "w", stdout); //sets cout to be used with our newly created console

	if (!get_present_pointer())
	{
		shutdown(fp, "[*] Failed to get pointer!");
		return 0;
	}

	MH_STATUS status = MH_Initialize();
	if (status != MH_OK)
	{
		std::string sStatus = MH_StatusToString(status);
		shutdown(fp, "[*] Minhook init Failed!");
		return 0;
	}
    else {
        std::cout << "\r\n[*] MinHook Init Succeeded" << std::endl;
    }

	if (MH_CreateHook(reinterpret_cast<void**>(p_present_target), &detour_present, reinterpret_cast<void**>(&p_present)) != MH_OK) {
		shutdown(fp, "[*] ImGui Hook Failed!");
		return 0;
	}
	else {
		std::cout << "[*] ImGui Hook Succeeded" << std::endl;
	}

	if (MH_EnableHook(p_present_target) != MH_OK) {
		return 1;
	}
    
	while (true) {
		if (sShutdown == true) {
			shutdown(fp, "[*] Hey hey let's go!, kenka suru.");
		}
		if (GetAsyncKeyState(VK_F4) & 1) {
			show_menu = !show_menu;
		}
		if (show_esp) {

		}
    }
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved)
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        DllHandle = hModule;
        CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)Menue, NULL, 0, NULL);
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}