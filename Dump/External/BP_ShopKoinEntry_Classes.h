#pragma once 
#include <BP_ShopKoinEntry_Structs.h>
 
 
 
class UBP_ShopKoinEntry_C
{
public:
	UBP_ShopKoinEntry_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

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
	struct UImage GetImage_265() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1032);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_BG_gra() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1040);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_BonusBG() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1048);
		return struct UImage(ptr_addr);
	}
	struct UImage Getimg-bg() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1056);
		return struct UImage(ptr_addr);
	}
	struct UInvalidationBox GetInvalidationBox_1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1064);
		return struct UInvalidationBox(ptr_addr);
	}
	struct UKdTextBlock GetTextBlock_EventDesc() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1072);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetTextBlock_Package() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1080);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetTextBlock_TotalKoin() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1088);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UBP_Price_C GetV_BP_Price() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1096);
		return struct UBP_Price_C(ptr_addr);
	}
	struct UImage GetV_Image_Item() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1104);
		return struct UImage(ptr_addr);
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
	struct UKdTextBlock GetV_TextBlock_TotalKoin() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1136);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetV_TotalKoin_shadow() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1144);
		return struct UKdTextBlock(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


