#pragma once 
#include <BP_InfoMain_License_ListItem_Structs.h>
 
 
 
class UBP_InfoMain_License_ListItem_C
{
public:
	UBP_InfoMain_License_ListItem_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UImage GetImage_107() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 944);
		return struct UImage(ptr_addr);
	}
	struct UInvalidationBox GetInvalidationBox_22() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 952);
		return struct UInvalidationBox(ptr_addr);
	}
	struct UWidgetSwitcher GetV_Emblem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 960);
		return struct UWidgetSwitcher(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


