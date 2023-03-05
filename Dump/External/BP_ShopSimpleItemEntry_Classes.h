#pragma once 
#include <BP_ShopSimpleItemEntry_Structs.h>
 
 
 
class UBP_ShopSimpleItemEntry_C
{
public:
	UBP_ShopSimpleItemEntry_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 1000);
	}
	struct UWidgetAnimation GetAnim_Enable() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1008);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UWidgetAnimation GetAnim_Disable() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1016);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UWidgetAnimation GetAnim_UnFocus() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1024);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UWidgetAnimation GetAnim_Focus() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1032);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UImage Getimg_Disable() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1040);
		return struct UImage(ptr_addr);
	}
	struct UInvalidationBox GetInvalidationBox_1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1048);
		return struct UInvalidationBox(ptr_addr);
	}
	struct UImage Getstroke() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1056);
		return struct UImage(ptr_addr);
	}
	struct UBP_ItemCommonIcon_C GetV_BP_ItemCommonIcon() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1064);
		return struct UBP_ItemCommonIcon_C(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


