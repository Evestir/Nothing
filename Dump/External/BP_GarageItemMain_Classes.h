#pragma once 
#include <BP_GarageItemMain_Structs.h>
 
 
 
class UBP_GarageItemMain_C
{
public:
	UBP_GarageItemMain_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWidgetAnimation GetOnEnter() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 608);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UBP_PageTitle_C GetBP_PageTitle() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UBP_PageTitle_C(ptr_addr);
	}
	struct UKdImage Getcon_title_bar-1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return struct UKdImage(ptr_addr);
	}
	struct UKdImage Getcon_title_bar-2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 632);
		return struct UKdImage(ptr_addr);
	}
	struct UImage GetImage_155() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct UImage(ptr_addr);
	}
	struct UBP_ItemInfoPanel_LeftAlign_C GetV_BP_ItemInfoPanel() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 648);
		return struct UBP_ItemInfoPanel_LeftAlign_C(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


