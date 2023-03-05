#pragma once 
#include <BP_GrandPrixSelectButton_Structs.h>
 
 
 
class UBP_GrandPrixSelectButton_C
{
public:
	UBP_GrandPrixSelectButton_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWidgetAnimation GetUnFocus() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1000);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UWidgetAnimation GetFocus() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1008);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UFocusAnimSet_Stroke_C GetFocusAnimSet_Stroke() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1016);
		return struct UFocusAnimSet_Stroke_C(ptr_addr);
	}
	struct FSlateBrush GetInst_BtnImage() {
		return memory.read<struct FSlateBrush>(m_addr + 1024);
	}

private:
	std::uint64_t m_addr = 0;
};


