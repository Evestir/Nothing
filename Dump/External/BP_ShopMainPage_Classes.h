#pragma once 
#include <BP_ShopMainPage_Structs.h>
 
 
 
class UBP_ShopMainPage_C
{
public:
	UBP_ShopMainPage_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 608);
	}
	struct UWidgetAnimation GetOnEnter() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UWidgetAnimation GetAnim_DisappearPromotionView() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UBP_KeyIcon_Bottom_C GetBP_KeyIcon_Select_4() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 632);
		return struct UBP_KeyIcon_Bottom_C(ptr_addr);
	}
	struct UBP_PageKeySlotTemplate_new_C GetBP_PageKeySlotTemplate_new() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct UBP_PageKeySlotTemplate_new_C(ptr_addr);
	}
	struct UBP_PageTitle_C GetBP_PageTitle() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 648);
		return struct UBP_PageTitle_C(ptr_addr);
	}
	struct UBP_ShopMain_KeyIcon_PartyFriends_C GetBP_PartyFriends() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 656);
		return struct UBP_ShopMain_KeyIcon_PartyFriends_C(ptr_addr);
	}
	struct UImage GetImage_132() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 664);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_155() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 672);
		return struct UImage(ptr_addr);
	}
	struct UInvalidationBox GetInvalidationBox_1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 680);
		return struct UInvalidationBox(ptr_addr);
	}
	struct UInvalidationBox GetInvalidationBox_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 688);
		return struct UInvalidationBox(ptr_addr);
	}
	struct UInvalidationBox GetInvalidationBox_3() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 696);
		return struct UInvalidationBox(ptr_addr);
	}
	struct UInvalidationBox GetInvalidationBox_5() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 704);
		return struct UInvalidationBox(ptr_addr);
	}
	struct UInvalidationBox GetInvalidationBox_7() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 712);
		return struct UInvalidationBox(ptr_addr);
	}
	struct UInvalidationBox GetInvalidationBox_8() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 720);
		return struct UInvalidationBox(ptr_addr);
	}
	struct UKdImageTextBlock GetKdImageTextBlock_162() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 728);
		return struct UKdImageTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 736);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 744);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_3() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 752);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_4() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 760);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_5() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 768);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_220() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 776);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UBP_CashKoinLucci_C GetV_BP_CashKoinLucci() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 784);
		return struct UBP_CashKoinLucci_C(ptr_addr);
	}
	struct UBP_KeyIcon_Bottom_C GetV_BP_KeyIcon_Back() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 792);
		return struct UBP_KeyIcon_Bottom_C(ptr_addr);
	}
	struct UBP_KeyIcon_C GetV_BP_KeyIcon_MyKcoin() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 800);
		return struct UBP_KeyIcon_C(ptr_addr);
	}
	struct UBP_KeyIcon_Bottom_C GetV_BP_KeyIcon_Select() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 808);
		return struct UBP_KeyIcon_Bottom_C(ptr_addr);
	}
	struct UBP_ShopTab_C GetV_BP_ShopTab() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 816);
		return struct UBP_ShopTab_C(ptr_addr);
	}
	struct UBP_KeyIcon_Bottom_C GetV_Button_Cash() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 824);
		return struct UBP_KeyIcon_Bottom_C(ptr_addr);
	}
	struct UKdListView GetV_ListView_Item() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 832);
		return struct UKdListView(ptr_addr);
	}
	struct UKdListView GetV_ListView_Koin() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 840);
		return struct UKdListView(ptr_addr);
	}
	struct UBP_KeyIcon_Bottom_C GetV_RiderNameChangeBtn() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 848);
		return struct UBP_KeyIcon_Bottom_C(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


