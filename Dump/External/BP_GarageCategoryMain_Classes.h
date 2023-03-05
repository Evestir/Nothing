#pragma once 
#include <BP_GarageCategoryMain_Structs.h>
 
 
 
class UBP_GarageCategoryMain_C
{
public:
	UBP_GarageCategoryMain_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWidgetAnimation GetOnEnter() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 608);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UImage GetImage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_155() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_357() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 632);
		return struct UImage(ptr_addr);
	}
	struct UBP_GarageCharacterCostumeTab_C GetV_BP_GarageCharacterCostumeTab() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct UBP_GarageCharacterCostumeTab_C(ptr_addr);
	}
	struct UBP_GarageCharacterEmoticonTab_C GetV_BP_GarageCharacterEmoticonTab() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 648);
		return struct UBP_GarageCharacterEmoticonTab_C(ptr_addr);
	}
	struct UBP_GarageCharacterMotionTab_C GetV_BP_GarageCharacterMotionTab() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 656);
		return struct UBP_GarageCharacterMotionTab_C(ptr_addr);
	}
	struct UBP_GarageItemLootBoxTab_C GetV_BP_GarageItemLootBoxTab() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 664);
		return struct UBP_GarageItemLootBoxTab_C(ptr_addr);
	}
	struct UBP_GarageItemPageList_C GetV_BP_GarageItemPageList() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 672);
		return struct UBP_GarageItemPageList_C(ptr_addr);
	}
	struct UBP_GarageKartBodyPartsTab_C GetV_BP_GarageKartBodyPartsTab() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 680);
		return struct UBP_GarageKartBodyPartsTab_C(ptr_addr);
	}
	struct UBP_GarageKartDecoPartsTab_C GetV_BP_GarageKartDecoPartsTab() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 688);
		return struct UBP_GarageKartDecoPartsTab_C(ptr_addr);
	}
	struct UBP_ItemInfoPanel_WithList_C GetV_BP_ItemInfoPanel() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 696);
		return struct UBP_ItemInfoPanel_WithList_C(ptr_addr);
	}
	struct UOverlay GetV_EmoticonBG() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 704);
		return struct UOverlay(ptr_addr);
	}
	struct UBP_PageTitle_C GetV_PageTitle() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 712);
		return struct UBP_PageTitle_C(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


