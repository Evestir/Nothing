#pragma once 
#include <BP_UnderlineTabButton_new_Main_Structs.h>
 
 
 
class UBP_UnderlineTabButton_new_Main_C
{
public:
	UBP_UnderlineTabButton_new_Main_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 1000);
	}
	struct UWidgetAnimation GetUnHover() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1008);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UWidgetAnimation GetHover() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1016);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UFocusAnimSet_Underline_B_C GetFocusAnimSet_Underline_B() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1024);
		return struct UFocusAnimSet_Underline_B_C(ptr_addr);
	}
	struct UKdTextBlock GetV_BtnName() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1032);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UBP_ItemNewAlert_C GetV_Notification() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1040);
		return struct UBP_ItemNewAlert_C(ptr_addr);
	}
	struct FText GetI_TabBtnName() {
		return memory.read<struct FText>(m_addr + 1048);
	}

private:
	std::uint64_t m_addr = 0;
};


