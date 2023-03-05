#pragma once 
#include <BP_ShopKoinShopbutton_Structs.h>
 
 
 
class UBP_ShopKoinShopbutton_C
{
public:
	UBP_ShopKoinShopbutton_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 1000);
	}
	struct UWidgetAnimation GetAnim_UnFocus() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1008);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UWidgetAnimation GetAnim_Focus() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1016);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UFocusAnimSet_Stroke_C GetFocusAnimSet_Stroke() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1024);
		return struct UFocusAnimSet_Stroke_C(ptr_addr);
	}
	struct UImage GetImage_KoinList() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1032);
		return struct UImage(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_110() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1040);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_368() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1048);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_454() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1056);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UOverlay GetOV_KoinBox() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1064);
		return struct UOverlay(ptr_addr);
	}
	struct USizeBox GetSizeBox_1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1072);
		return struct USizeBox(ptr_addr);
	}
	struct UKdTextBlock GetV_KdTextBlock_EventTime() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1080);
		return struct UKdTextBlock(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


