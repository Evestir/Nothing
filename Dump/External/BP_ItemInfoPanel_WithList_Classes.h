#pragma once 
#include <BP_ItemInfoPanel_WithList_Structs.h>
 
 
 
class UBP_ItemInfoPanel_WithList_C
{
public:
	UBP_ItemInfoPanel_WithList_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UImage GetImage_95() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 608);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_935() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UImage(ptr_addr);
	}
	struct UImage Getimg_restTimeBG() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return struct UImage(ptr_addr);
	}
	struct UKdImage GetV_ItemGrade_BG() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 632);
		return struct UKdImage(ptr_addr);
	}
	struct UKdTextBlock GetV_ItemGrade_text() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetV_KdTextBlock_KartLevel() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 648);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UWidgetSwitcher GetV_WidgetSwitcher_Gauge() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 656);
		return struct UWidgetSwitcher(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


