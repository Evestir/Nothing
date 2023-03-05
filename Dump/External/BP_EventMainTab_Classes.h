#pragma once 
#include <BP_EventMainTab_Structs.h>
 
 
 
class UBP_EventMainTab_C
{
public:
	UBP_EventMainTab_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UBP_EventMainTab_Button_C GetBP_EventMainTab_Button() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 760);
		return struct UBP_EventMainTab_Button_C(ptr_addr);
	}
	struct UBP_EventMainTab_Button_C GetBP_EventMainTab_Button_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 768);
		return struct UBP_EventMainTab_Button_C(ptr_addr);
	}
	struct UBP_EventMainTab_Button_C GetBP_EventMainTab_Button_3() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 776);
		return struct UBP_EventMainTab_Button_C(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


