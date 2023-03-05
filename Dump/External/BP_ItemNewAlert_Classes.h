#pragma once 
#include <BP_ItemNewAlert_Structs.h>
 
 
 
class UBP_ItemNewAlert_C
{
public:
	UBP_ItemNewAlert_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UKdTextBlock GetKdTextBlock_88() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 608);
		return struct UKdTextBlock(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


