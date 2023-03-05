#pragma once 
#include <BP_ShopMainListButton_Item_Structs.h>
 
 
 
class UBP_ShopMainListButton_Item_C
{
public:
	UBP_ShopMainListButton_Item_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

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
	struct UImage GetImage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1032);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_235() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1040);
		return struct UImage(ptr_addr);
	}
	struct UKdImage GetKdImage_157() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1048);
		return struct UKdImage(ptr_addr);
	}
	struct UKdImage GetKdImage_444() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1056);
		return struct UKdImage(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_201() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1064);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UOverlay GetOV_ShopBoxSmall() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1072);
		return struct UOverlay(ptr_addr);
	}
	struct UKdTextBlock GetTextBlock_New() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1080);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetTextBlock_Package() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1088);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetTextBlock_Recommandation() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1096);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UWidgetSwitcher GetV_Item_Switcher() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1104);
		return struct UWidgetSwitcher(ptr_addr);
	}
	struct UKdTextBlock GetV_TextBlock_ItemDesc() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1112);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetV_TextBlock_ItemName() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1120);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetV_TextBlock_Time() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1128);
		return struct UKdTextBlock(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


