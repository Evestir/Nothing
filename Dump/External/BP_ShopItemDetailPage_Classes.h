#pragma once 
#include <BP_ShopItemDetailPage_Structs.h>
 
 
 
class UBP_ShopItemDetailPage_C
{
public:
	UBP_ShopItemDetailPage_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 608);
	}
	struct UWidgetAnimation GetOnEnter() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UBP_ItemViewBack_C GetBP_ItemViewBack() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return struct UBP_ItemViewBack_C(ptr_addr);
	}
	struct UBP_KeyIcon_Bottom_C GetBP_KeyIcon_Select_4() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 632);
		return struct UBP_KeyIcon_Bottom_C(ptr_addr);
	}
	struct UBP_PageKeySlotTemplate_new_C GetBP_PageKeySlotTemplate_new() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct UBP_PageKeySlotTemplate_new_C(ptr_addr);
	}
	struct UImage GetImage_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 648);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_127() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 656);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_351() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 664);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_471() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 672);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_570() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 680);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_679() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 688);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_777() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 696);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_857() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 704);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_TimeIcon() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 712);
		return struct UImage(ptr_addr);
	}
	struct UInvalidationBox GetInvalidationBox_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 720);
		return struct UInvalidationBox(ptr_addr);
	}
	struct UInvalidationBox GetInvalidationBox_4() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 728);
		return struct UInvalidationBox(ptr_addr);
	}
	struct UInvalidationBox GetInvalidationBox_5() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 736);
		return struct UInvalidationBox(ptr_addr);
	}
	struct UInvalidationBox GetInvalidationBox_6() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 744);
		return struct UInvalidationBox(ptr_addr);
	}
	struct UInvalidationBox GetInvalidationBox_7() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 752);
		return struct UInvalidationBox(ptr_addr);
	}
	struct UInvalidationBox GetInvalidationBox_8() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 760);
		return struct UInvalidationBox(ptr_addr);
	}
	struct UInvalidationBox GetInvalidationBox_9() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 768);
		return struct UInvalidationBox(ptr_addr);
	}
	struct UInvalidationBox GetInvalidationBox_10() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 776);
		return struct UInvalidationBox(ptr_addr);
	}
	struct UInvalidationBox GetInvalidationBox_11() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 784);
		return struct UInvalidationBox(ptr_addr);
	}
	struct UInvalidationBox GetInvalidationBox_12() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 792);
		return struct UInvalidationBox(ptr_addr);
	}
	struct UKdButtonImage GetKdButtonImage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 800);
		return struct UKdButtonImage(ptr_addr);
	}
	struct UKdButtonImage GetKdButtonImage_3() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 808);
		return struct UKdButtonImage(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 816);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 824);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_3() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 832);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_4() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 840);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_6() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 848);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_86() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 856);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_127() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 864);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_191() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 872);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_220() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 880);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetTextBlock_EquipAll() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 888);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetTextBlock_UnequipAll() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 896);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UBP_CashKoinLucci_ShopItemDetail_C GetV_BP_CashKoinLucci() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 904);
		return struct UBP_CashKoinLucci_ShopItemDetail_C(ptr_addr);
	}
	struct UBP_ItemInfoPanel_LeftAlign_C GetV_BP_ItemInfoPanel() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 912);
		return struct UBP_ItemInfoPanel_LeftAlign_C(ptr_addr);
	}
	struct UBP_KeyIcon_Bottom_C GetV_BP_KeyIcon_Back() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 920);
		return struct UBP_KeyIcon_Bottom_C(ptr_addr);
	}
	struct UBP_KeyIcon_Bottom_C GetV_BP_KeyIcon_Detail() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 928);
		return struct UBP_KeyIcon_Bottom_C(ptr_addr);
	}
	struct UBP_KeyIcon_Bottom_C GetV_BP_KeyIcon_Select() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 936);
		return struct UBP_KeyIcon_Bottom_C(ptr_addr);
	}
	struct UBP_Price_C GetV_BP_Price() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 944);
		return struct UBP_Price_C(ptr_addr);
	}
	struct UBP_ShopSimpleItemEntry_C GetV_BP_ShopSimpleItemEntry() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 952);
		return struct UBP_ShopSimpleItemEntry_C(ptr_addr);
	}
	struct UBP_KeyIcon_Bottom_C GetV_Button_Cash() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 960);
		return struct UBP_KeyIcon_Bottom_C(ptr_addr);
	}
	struct UBP_KeyIcon_Bottom_C GetV_Button_EquipAll() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 968);
		return struct UBP_KeyIcon_Bottom_C(ptr_addr);
	}
	struct UBP_KeyIcon_SimpleButton_C GetV_Button_Gift() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 976);
		return struct UBP_KeyIcon_SimpleButton_C(ptr_addr);
	}
	struct UBP_KeyIcon_SimpleButton_C GetV_Button_Purchase() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 984);
		return struct UBP_KeyIcon_SimpleButton_C(ptr_addr);
	}
	struct UKdTextBlock GetV_KdTextBlock_Cash() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 992);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetV_RichTextBlock_ItemDesc() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1000);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetV_TextBlock_EventDesc() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1008);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetV_TextBlock_EventDesc_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1016);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetV_TextBlock_ItemName() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1024);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetV_TextBlock_Time() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1032);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTileView GetV_TileView_InvenItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1040);
		return struct UKdTileView(ptr_addr);
	}
	struct UWidgetSwitcher GetV_WidgetSwitcher_Buttons() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1048);
		return struct UWidgetSwitcher(ptr_addr);
	}
	struct UWidgetSwitcher GetV_WidgetSwitcher_EquipAll() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1056);
		return struct UWidgetSwitcher(ptr_addr);
	}
	struct UWidgetSwitcher GetV_WidgetSwitcher_Items() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1064);
		return struct UWidgetSwitcher(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


