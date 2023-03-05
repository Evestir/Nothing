#pragma once 
#include <BP_ShopPromotionTabCell_Structs.h>
 
 
 
class UBP_ShopPromotionTabCell_C
{
public:
	UBP_ShopPromotionTabCell_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UFocusAnimSet_Fill_C GetFocusAnimSet_Fill() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1000);
		return struct UFocusAnimSet_Fill_C(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


