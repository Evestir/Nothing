#pragma once 
#include <BP_ShopItemEntry_Structs.h>
 
 
 
class UBP_ShopItemEntry_C
{
public:
	UBP_ShopItemEntry_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 608);
	}
	struct UInvalidationBox GetInvalidationBox_3() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UInvalidationBox(ptr_addr);
	}
	struct UBP_ShopMainListButton_Item_C GetV_BP_ShopMainListButton_Item_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return struct UBP_ShopMainListButton_Item_C(ptr_addr);
	}
	struct UBP_ShopMainListButton_Item_C GetV_BP_ShopMainListButton_Item_3() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 632);
		return struct UBP_ShopMainListButton_Item_C(ptr_addr);
	}
	struct UBP_ShopMainListButton_Package_C GetV_BP_ShopMainListButton_Package() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct UBP_ShopMainListButton_Package_C(ptr_addr);
	}
	struct UWidgetSwitcher GetV_WidgetSwitcher_SlotType() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 648);
		return struct UWidgetSwitcher(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


