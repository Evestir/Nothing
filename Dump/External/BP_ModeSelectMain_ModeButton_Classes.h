#pragma once 
#include <BP_ModeSelectMain_ModeButton_Structs.h>
 
 
 
class UBP_ModeSelectMain_ModeButton_C
{
public:
	UBP_ModeSelectMain_ModeButton_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWidgetAnimation GetAnim_Enable() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1624);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UWidgetAnimation GetAnim_Disable() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1632);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UWidgetAnimation GetAnim_UnFocus() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1640);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UWidgetAnimation GetAnim_Focus() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1648);
		return struct UWidgetAnimation(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


