#pragma once 
#include <BP_ShopPromotionView_Structs.h>
 
 
 
class UBP_ShopPromotionView_C
{
public:
	UBP_ShopPromotionView_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 1000);
	}
	struct UWidgetAnimation GetAnim_UnFocus() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1008);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UWidgetAnimation GetAnim_Focus() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1016);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UFocusAnimSet_Stroke_C GetFocusAnimSet_Stroke() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1024);
		return struct UFocusAnimSet_Stroke_C(ptr_addr);
	}
	struct UImage GetImg_TextBg() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1032);
		return struct UImage(ptr_addr);
	}
	struct UOverlay GetOV_Promotion() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1040);
		return struct UOverlay(ptr_addr);
	}
	struct UKdTextBlock GetTextBlock_New() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1048);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetTextBlock_Recommandation() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1056);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UBP_PageButtonList_C GetV_BP_ShopPromotionSubTab() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1064);
		return struct UBP_PageButtonList_C(ptr_addr);
	}
	struct UBP_ShopPromotionSubTab_C GetV_BP_ShopPromotionSubTab__() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1072);
		return struct UBP_ShopPromotionSubTab_C(ptr_addr);
	}
	struct UKdImage GetV_Image_Promotion() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1080);
		return struct UKdImage(ptr_addr);
	}
	struct UKdTextBlock GetV_TextBlock_Desc() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1088);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetV_TextBlock_Title() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1096);
		return struct UKdTextBlock(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


