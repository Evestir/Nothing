#pragma once 
#include <BP_InfoMain_Structs.h>
 
 
 
class UBP_InfoMain_C
{
public:
	UBP_InfoMain_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWidgetAnimation GetOnEnter() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 608);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UImage GetImage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UImage(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_3() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_44() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 632);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UWidgetSwitcher GetV_EventCompleteSwitcher() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct UWidgetSwitcher(ptr_addr);
	}
	struct UListView GetV_InfoList() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 648);
		return struct UListView(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


