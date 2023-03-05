#pragma once 
#include <BP_GarageItemPageList_Structs.h>
 
 
 
class UBP_GarageItemPageList_C
{
public:
	UBP_GarageItemPageList_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UBP_ItemCommonButton_C GetBP_GarageItemButton_C_1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 784);
		return struct UBP_ItemCommonButton_C(ptr_addr);
	}
	struct UBP_ItemCommonButton_C GetBP_GarageItemButton_C_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 792);
		return struct UBP_ItemCommonButton_C(ptr_addr);
	}
	struct UBP_ItemCommonButton_C GetBP_GarageItemButton_C_3() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 800);
		return struct UBP_ItemCommonButton_C(ptr_addr);
	}
	struct UBP_ItemCommonButton_C GetBP_GarageItemButton_C_4() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 808);
		return struct UBP_ItemCommonButton_C(ptr_addr);
	}
	struct UBP_ItemCommonButton_C GetBP_GarageItemButton_C_5() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 816);
		return struct UBP_ItemCommonButton_C(ptr_addr);
	}
	struct UBP_ItemCommonButton_C GetBP_GarageItemButton_C_6() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 824);
		return struct UBP_ItemCommonButton_C(ptr_addr);
	}
	struct UBP_ItemCommonButton_C GetBP_GarageItemButton_C_7() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 832);
		return struct UBP_ItemCommonButton_C(ptr_addr);
	}
	struct UBP_ItemCommonButton_C GetBP_GarageItemButton_C_8() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 840);
		return struct UBP_ItemCommonButton_C(ptr_addr);
	}
	struct UBP_ItemCommonButton_C GetBP_GarageItemButton_C_9() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 848);
		return struct UBP_ItemCommonButton_C(ptr_addr);
	}
	struct UBP_ItemCommonButton_C GetBP_GarageItemButton_C_10() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 856);
		return struct UBP_ItemCommonButton_C(ptr_addr);
	}
	struct UBP_ItemCommonButton_C GetBP_GarageItemButton_C_11() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 864);
		return struct UBP_ItemCommonButton_C(ptr_addr);
	}
	struct UBP_ItemCommonButton_C GetBP_GarageItemButton_C_12() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 872);
		return struct UBP_ItemCommonButton_C(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


