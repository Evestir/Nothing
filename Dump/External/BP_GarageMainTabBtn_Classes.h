#pragma once 
#include <BP_GarageMainTabBtn_Structs.h>
 
 
 
class UBP_GarageMainTabBtn_C
{
public:
	UBP_GarageMainTabBtn_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 1000);
	}
	struct UWidgetAnimation GetUnFocus() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1008);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UWidgetAnimation GetFocus() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1016);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UWidgetAnimation GetAnim_LockImage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1024);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UWidgetAnimation GetAnim_Enable() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1032);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UWidgetAnimation GetAnim_Disable() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1040);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UWidgetAnimation GetUnHover() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1048);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UWidgetAnimation GetHover() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1056);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UKdButtonImage Getimg_lock_Disable_Focus() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1064);
		return struct UKdButtonImage(ptr_addr);
	}
	struct UKdButtonImage Getimg_lock_Disable_UnFocus() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1072);
		return struct UKdButtonImage(ptr_addr);
	}
	struct USizeBox GetSB_BtnName() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1080);
		return struct USizeBox(ptr_addr);
	}
	struct UKdTextBlock Gettxt_titleName_Disable_Focus() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1088);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock Gettxt_titleName_Disable_UnFocus() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1096);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UBP_ItemNewAlert_C GetV_Notification() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1104);
		return struct UBP_ItemNewAlert_C(ptr_addr);
	}
	struct UWidgetSwitcher GetWS_BtnName() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1112);
		return struct UWidgetSwitcher(ptr_addr);
	}
	struct UWidgetSwitcher GetWS_Lock() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1120);
		return struct UWidgetSwitcher(ptr_addr);
	}
	struct FText GetI_Text_BtnName() {
		return memory.read<struct FText>(m_addr + 1128);
	}

private:
	std::uint64_t m_addr = 0;
};


