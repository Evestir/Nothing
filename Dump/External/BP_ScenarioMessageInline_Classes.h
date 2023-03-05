#pragma once 
#include <BP_ScenarioMessageInline_Structs.h>
 
 
 
class UBP_ScenarioMessageInline_C
{
public:
	UBP_ScenarioMessageInline_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UKdImage GetV_KeyImage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 608);
		return struct UKdImage(ptr_addr);
	}
	struct UKdTextBlock GetV_KeyText() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdImage GetV_OtherImage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return struct UKdImage(ptr_addr);
	}
	struct UWidgetSwitcher GetV_Switcher() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 632);
		return struct UWidgetSwitcher(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


