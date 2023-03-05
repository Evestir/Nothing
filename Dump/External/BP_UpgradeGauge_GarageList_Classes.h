#pragma once 
#include <BP_UpgradeGauge_GarageList_Structs.h>
 
 
 
class UBP_UpgradeGauge_GarageList_C
{
public:
	UBP_UpgradeGauge_GarageList_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 608);
	}
	struct UBP_UpgradeGauge_List_C GetBP_UpgradeGauge_List() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UBP_UpgradeGauge_List_C(ptr_addr);
	}
	struct UBP_UpgradeGauge_List_C GetBP_UpgradeGauge_List_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return struct UBP_UpgradeGauge_List_C(ptr_addr);
	}
	struct UBP_UpgradeGauge_List_C GetBP_UpgradeGauge_List_3() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 632);
		return struct UBP_UpgradeGauge_List_C(ptr_addr);
	}
	struct UBP_UpgradeGauge_List_C GetBP_UpgradeGauge_List_4() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct UBP_UpgradeGauge_List_C(ptr_addr);
	}
	struct UBP_UpgradeGauge_List_C GetBP_UpgradeGauge_List_5() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 648);
		return struct UBP_UpgradeGauge_List_C(ptr_addr);
	}
	struct UBP_UpgradeGauge_List_C GetBP_UpgradeGauge_List_6() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 656);
		return struct UBP_UpgradeGauge_List_C(ptr_addr);
	}
	struct UBP_UpgradeGauge_List_C GetBP_UpgradeGauge_List_7() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 664);
		return struct UBP_UpgradeGauge_List_C(ptr_addr);
	}
	struct UBP_UpgradeGauge_List_C GetBP_UpgradeGauge_List_8() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 672);
		return struct UBP_UpgradeGauge_List_C(ptr_addr);
	}
	struct UBP_UpgradeGauge_List_C GetBP_UpgradeGauge_List_9() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 680);
		return struct UBP_UpgradeGauge_List_C(ptr_addr);
	}
	struct UBP_UpgradeGauge_List_C GetBP_UpgradeGauge_List_10() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 688);
		return struct UBP_UpgradeGauge_List_C(ptr_addr);
	}
	struct UKdTextBlock Gettxt_titleName() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 696);
		return struct UKdTextBlock(ptr_addr);
	}
	struct FText GetTxt_String() {
		return memory.read<struct FText>(m_addr + 704);
	}

private:
	std::uint64_t m_addr = 0;
};


