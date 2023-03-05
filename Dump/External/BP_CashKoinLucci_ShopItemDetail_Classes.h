#pragma once 
#include <BP_CashKoinLucci_ShopItemDetail_Structs.h>
 
 
 
class UBP_CashKoinLucci_ShopItemDetail_C
{
public:
	UBP_CashKoinLucci_ShopItemDetail_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UInvalidationBox GetInvalidationBox_1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 608);
		return struct UInvalidationBox(ptr_addr);
	}
	struct UBP_Price_C GetV_BP_Cash() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UBP_Price_C(ptr_addr);
	}
	struct UBP_Price_C GetV_BP_KOIN() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return struct UBP_Price_C(ptr_addr);
	}
	struct UBP_Price_C GetV_BP_Lucci() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 632);
		return struct UBP_Price_C(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


