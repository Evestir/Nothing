#pragma once 
#include <BP_InfoMain_Challenge_ListItem_Event_Structs.h>
 
 
 
class UBP_InfoMain_Challenge_ListItem_Event_C
{
public:
	UBP_InfoMain_Challenge_ListItem_Event_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UInvalidationBox GetInvalidationBox_18() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 608);
		return struct UInvalidationBox(ptr_addr);
	}
	struct UWidgetSwitcher GetV_Switcher_Complete() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UWidgetSwitcher(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


