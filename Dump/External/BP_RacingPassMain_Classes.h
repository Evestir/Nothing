#pragma once 
#include <BP_RacingPassMain_Structs.h>
 
 
 
class UBP_RacingPassMain_C
{
public:
	UBP_RacingPassMain_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 928);
	}
	struct UWidgetAnimation GetGuideOpen() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 936);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UWidgetAnimation GetGuideClose() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 944);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UWidgetAnimation GetOnEnter() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 952);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UBP_ItemViewBack_C GetBP_ItemViewBack() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 960);
		return struct UBP_ItemViewBack_C(ptr_addr);
	}
	struct UBP_RacingPassMain_PremiumSymbolBGAnim_C GetBP_RacingPassMain_PremiumSymbolBGAnim() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 968);
		return struct UBP_RacingPassMain_PremiumSymbolBGAnim_C(ptr_addr);
	}
	struct UKdButtonImage GetBtn_BG() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 976);
		return struct UKdButtonImage(ptr_addr);
	}
	struct UImage GetImage_126() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 984);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_559() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 992);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_965() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1000);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_CircularLoading() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1008);
		return struct UImage(ptr_addr);
	}
	struct UImage Getimg_Clock() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1016);
		return struct UImage(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_10() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1024);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UBP_PageKeySlotTemplate_new_C GetV_BP_PageKeySlotTemplate_new_Racing() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1032);
		return struct UBP_PageKeySlotTemplate_new_C(ptr_addr);
	}
	struct UKdTextBlock GetV_ButtonText() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1040);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UBP_KeyIcon_Bottom_C GetV_ChattingButton() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1048);
		return struct UBP_KeyIcon_Bottom_C(ptr_addr);
	}
	struct UWidgetSwitcher GetV_EmoticonStickerEmblemBgSwitcher() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1056);
		return struct UWidgetSwitcher(ptr_addr);
	}
	struct UBP_PageTitle_C GetV_PageTitle() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1064);
		return struct UBP_PageTitle_C(ptr_addr);
	}
	struct UWidgetSwitcher GetV_PremiumSymbolSwitcher() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1072);
		return struct UWidgetSwitcher(ptr_addr);
	}
	struct UBP_RacingPassMain_Btn_PremiumPassPurchaseAni_C GetV_PurchaseButton() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1080);
		return struct UBP_RacingPassMain_Btn_PremiumPassPurchaseAni_C(ptr_addr);
	}
	struct UWidgetSwitcher GetV_RacingPassItemSwitcher() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1088);
		return struct UWidgetSwitcher(ptr_addr);
	}
	struct UBP_RacingPassMain_PremiumBGAnim_C GetV_RacingPassMain_PremiumBGAnim() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1096);
		return struct UBP_RacingPassMain_PremiumBGAnim_C(ptr_addr);
	}
	struct UKdListView GetV_RewardListView() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1104);
		return struct UKdListView(ptr_addr);
	}
	struct UWidgetSwitcher GetV_Switcher_ItemListBG_Premium() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1112);
		return struct UWidgetSwitcher(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


