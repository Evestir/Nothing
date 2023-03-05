#pragma once 
#include <BP_ModeSelectSubPage_Template_Structs.h>
 
 
 
class UBP_ModeSelectSubPage_Template_C
{
public:
	UBP_ModeSelectSubPage_Template_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UNamedSlot GetContent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 608);
		return struct UNamedSlot(ptr_addr);
	}
	struct UNamedSlot GetContent_Back() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UNamedSlot(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


