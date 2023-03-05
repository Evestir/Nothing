#pragma once 
#include <BP_ShopMain_Structs.h>
 
 
 
class UBP_ShopMain_C
{
public:
	UBP_ShopMain_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UBP_ShopItemDetailPage_C GetV_BP_ShopItemDetail() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1160);
		return struct UBP_ShopItemDetailPage_C(ptr_addr);
	}
	struct UBP_ShopMainPage_C GetV_BP_ShopMainPage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1168);
		return struct UBP_ShopMainPage_C(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


