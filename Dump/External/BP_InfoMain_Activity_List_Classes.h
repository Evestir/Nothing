#pragma once 
#include <BP_InfoMain_Activity_List_Structs.h>
 
 
 
class UBP_InfoMain_Activity_List_C
{
public:
	UBP_InfoMain_Activity_List_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UKdTextBlock GetKdTextBlock_185() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1000);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_503() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1008);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UWidgetSwitcher GetV_ActivitySwitcher() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1016);
		return struct UWidgetSwitcher(ptr_addr);
	}
	struct UFocusAnimSet_Stroke_C GetV_FocusAnimSet() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1024);
		return struct UFocusAnimSet_Stroke_C(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


