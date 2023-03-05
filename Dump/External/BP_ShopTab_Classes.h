#pragma once 
#include <BP_ShopTab_Structs.h>
 
 
 
class UBP_ShopTab_C
{
public:
	UBP_ShopTab_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UBP_KeyIcon_C GetV_BP_KeyIcon_Next() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 760);
		return struct UBP_KeyIcon_C(ptr_addr);
	}
	struct UBP_KeyIcon_C GetV_BP_KeyIcon_Prev() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 768);
		return struct UBP_KeyIcon_C(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


