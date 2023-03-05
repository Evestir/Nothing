#pragma once 
#include <BP_MatchModeSelectButton_Structs.h>
 
 
 
class UBP_MatchModeSelectButton_C
{
public:
	UBP_MatchModeSelectButton_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWidgetAnimation GetOnUnHover() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1624);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UWidgetAnimation GetOnHover() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1632);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UWidgetAnimation GetOnUncheck() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1640);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UWidgetAnimation GetOnCheck() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1648);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UWidgetAnimation GetOnUnfocus() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1656);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UWidgetAnimation GetOnFocus() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1664);
		return struct UWidgetAnimation(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


