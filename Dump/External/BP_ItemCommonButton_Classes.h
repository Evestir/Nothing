#pragma once 
#include <BP_ItemCommonButton_Structs.h>
 
 
 
class UBP_ItemCommonButton_C
{
public:
	UBP_ItemCommonButton_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

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
	struct UImage Getimg_focus() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1024);
		return struct UImage(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1032);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1040);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_3() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1048);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_6() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1056);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_115() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1064);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UBP_ButtonTemplate_C GetV_BP_BtnFocused() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1072);
		return struct UBP_ButtonTemplate_C(ptr_addr);
	}
	struct UWidgetSwitcher GetV_FocusedEquipSwitcher() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1080);
		return struct UWidgetSwitcher(ptr_addr);
	}
	struct UBP_ItemNewAlert_C GetV_Notification() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1088);
		return struct UBP_ItemNewAlert_C(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


