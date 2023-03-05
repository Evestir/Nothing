#pragma once 
#include <BP_DtStackMain_Structs.h>
 
 
 
class UBP_DtStackMain_C
{
public:
	UBP_DtStackMain_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWidgetAnimation GetOnEnter() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 608);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UBP_ItemViewBack_C GetBP_ItemViewBack() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UBP_ItemViewBack_C(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


