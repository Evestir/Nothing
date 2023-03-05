#pragma once 
#include <WebBrowserWidget_Structs.h>
 
 
 
class UWebBrowser
{
public:
	UWebBrowser(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate GetOnUrlChanged() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 264);
	}
	struct FMulticastInlineDelegate GetOnBeforePopup() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 280);
	}
	struct FString GetInitialURL() {
		return memory.read<struct FString>(m_addr + 296);
	}
	bool GetbSupportsTransparency() {
		return memory.read<bool>(m_addr + 312);
	}

private:
	std::uint64_t m_addr = 0;
};


class UWebBrowserAssetManager
{
public:
	UWebBrowserAssetManager(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TSoftObjectPtr<UMaterial> GetDefaultMaterial() {
		return memory.read<struct TSoftObjectPtr<UMaterial>>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};


