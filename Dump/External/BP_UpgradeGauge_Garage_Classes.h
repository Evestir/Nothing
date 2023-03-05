#pragma once 
#include <BP_UpgradeGauge_Garage_Structs.h>
 
 
 
class UBP_UpgradeGauge_Garage_C
{
public:
	UBP_UpgradeGauge_Garage_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UBP_UpgradeGauge_GarageList_C GetBP_UpgradeLv_GarageList() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 608);
		return struct UBP_UpgradeGauge_GarageList_C(ptr_addr);
	}
	struct UBP_UpgradeGauge_GarageList_C GetBP_UpgradeLv_GarageList_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UBP_UpgradeGauge_GarageList_C(ptr_addr);
	}
	struct UBP_UpgradeGauge_GarageList_C GetBP_UpgradeLv_GarageList_3() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return struct UBP_UpgradeGauge_GarageList_C(ptr_addr);
	}
	struct UBP_UpgradeGauge_GarageList_C GetBP_UpgradeLv_GarageList_4() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 632);
		return struct UBP_UpgradeGauge_GarageList_C(ptr_addr);
	}
	struct FSlateColor Gettext() {
		return memory.read<struct FSlateColor>(m_addr + 640);
	}

private:
	std::uint64_t m_addr = 0;
};


