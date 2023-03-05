#pragma once 
#include <BP_GarageMain_Structs.h>
 
 
 
class UBP_GarageMain_C
{
public:
	UBP_GarageMain_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 1232);
	}
	struct UWidgetAnimation GetOnEnter() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1240);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UBP_PageTitle_C GetBP_PageTitle() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1248);
		return struct UBP_PageTitle_C(ptr_addr);
	}
	struct UImage GetImage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1256);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1264);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_3() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1272);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_116() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1280);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_479() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1288);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_603() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1296);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_935() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1304);
		return struct UImage(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1312);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1320);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_3() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1328);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_4() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1336);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_8() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1344);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_10() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1352);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UBP_GarageCategoryMain_C GetV_BP_GarageCategoryMain() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1360);
		return struct UBP_GarageCategoryMain_C(ptr_addr);
	}
	struct UBP_GarageCharacterMain_C GetV_BP_GarageCharacterMain() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1368);
		return struct UBP_GarageCharacterMain_C(ptr_addr);
	}
	struct UBP_GarageItemMain_C GetV_BP_GarageItemMain() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1376);
		return struct UBP_GarageItemMain_C(ptr_addr);
	}
	struct UBP_GarageKartMain_C GetV_BP_GarageKartMain() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1384);
		return struct UBP_GarageKartMain_C(ptr_addr);
	}
	struct UBP_ItemInfoPanel_LeftAlign_C GetV_BP_ItemInfoPanel() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1392);
		return struct UBP_ItemInfoPanel_LeftAlign_C(ptr_addr);
	}
	struct UBP_ItemInfoPanel_RightAlign_C GetV_BP_ItemInfoPanel_RightAlign() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1400);
		return struct UBP_ItemInfoPanel_RightAlign_C(ptr_addr);
	}
	struct UBP_KeyIcon_Bottom_C GetV_BP_KeyIcon_Back() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1408);
		return struct UBP_KeyIcon_Bottom_C(ptr_addr);
	}
	struct UBP_KeyIcon_Bottom_C GetV_BP_KeyIcon_Detail() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1416);
		return struct UBP_KeyIcon_Bottom_C(ptr_addr);
	}
	struct UBP_KeyIcon_Bottom_C GetV_BP_KeyIcon_ItemOnlyView() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1424);
		return struct UBP_KeyIcon_Bottom_C(ptr_addr);
	}
	struct UBP_KeyIcon_Bottom_C GetV_BP_KeyIcon_MenuMoving() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1432);
		return struct UBP_KeyIcon_Bottom_C(ptr_addr);
	}
	struct UBP_KeyIcon_Bottom_C GetV_BP_KeyIcon_Preset() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1440);
		return struct UBP_KeyIcon_Bottom_C(ptr_addr);
	}
	struct UBP_KeyIcon_Bottom_C GetV_BP_KeyIcon_Select() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1448);
		return struct UBP_KeyIcon_Bottom_C(ptr_addr);
	}
	struct UBP_PageKeySlotTemplate_new_C GetV_BP_PageKeySlotTemplate_new() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1456);
		return struct UBP_PageKeySlotTemplate_new_C(ptr_addr);
	}
	struct UBP_KeyIcon_Bottom_C GetV_ChattingButton() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1464);
		return struct UBP_KeyIcon_Bottom_C(ptr_addr);
	}
	struct UImage GetV_Image_Icon_KOIN() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1472);
		return struct UImage(ptr_addr);
	}
	struct UImage GetV_Image_Icon_XP() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1480);
		return struct UImage(ptr_addr);
	}
	struct UKdTextBlock GetV_ItemRestTime_KOIN() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1488);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetV_ItemRestTime_XP() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1496);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetV_KdTextBlock_Buff_desc_KOIN() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1504);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetV_KdTextBlock_Buff_desc_XP() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1512);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetV_KdTextBlock_ButtonName() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1520);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetV_KdTextBlock_Notification() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1528);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UBP_KeyIcon_Empty_C GetV_RotatePawnLeftButton() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1536);
		return struct UBP_KeyIcon_Empty_C(ptr_addr);
	}
	struct UBP_KeyIcon_Bottom_C GetV_RotatePawnRightButton() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1544);
		return struct UBP_KeyIcon_Bottom_C(ptr_addr);
	}
	struct UWidgetSwitcher GetV_WidgetSwitcher_Main() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1552);
		return struct UWidgetSwitcher(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


