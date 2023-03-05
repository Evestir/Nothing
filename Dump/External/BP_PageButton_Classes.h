#pragma once 
#include <BP_PageButton_Structs.h>
 
 
 
class UBP_PageButton_C
{
public:
	UBP_PageButton_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UKdButtonImage Getkdimg() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1000);
		return struct UKdButtonImage(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


