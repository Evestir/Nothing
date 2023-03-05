#pragma once 
#include <BP_ModeSelectSubPage_Common_Button_Structs.h>
 
 
 
class UBP_ModeSelectSubPage_Common_Button_C
{
public:
	UBP_ModeSelectSubPage_Common_Button_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWidgetAnimation GetAnim_UnFocus() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1624);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UWidgetAnimation GetAnim_Focus() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1632);
		return struct UWidgetAnimation(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


