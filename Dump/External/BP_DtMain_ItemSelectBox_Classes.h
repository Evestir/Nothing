#pragma once 
#include <BP_DtMain_ItemSelectBox_Structs.h>
 
 
 
class UBP_DtMain_ItemSelectBox_C
{
public:
	UBP_DtMain_ItemSelectBox_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWidgetAnimation GetUnFocus() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1000);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UWidgetAnimation GetFocus() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1008);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UFocusAnimSet_Stroke_C GetFocusAnimSet_Stroke() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1016);
		return struct UFocusAnimSet_Stroke_C(ptr_addr);
	}
	struct UImage GetImage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1024);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1032);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_3() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1040);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_4() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1048);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_6() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1056);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_74() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1064);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_98() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1072);
		return struct UImage(ptr_addr);
	}
	struct UKdButtonImage GetKdButtonImage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1080);
		return struct UKdButtonImage(ptr_addr);
	}
	struct UKdButtonImage GetKdButtonImage_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1088);
		return struct UKdButtonImage(ptr_addr);
	}
	struct UKdButtonImage GetKdButtonImage_102() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1096);
		return struct UKdButtonImage(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1104);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_3() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1112);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_4() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1120);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_90() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1128);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_138() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1136);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UBP_ItemCommonIcon_C GetV_BP_ItemCommonIcon() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1144);
		return struct UBP_ItemCommonIcon_C(ptr_addr);
	}
	struct UWidgetSwitcher GetV_EventTypeSwitcher() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1152);
		return struct UWidgetSwitcher(ptr_addr);
	}
	struct UKdTextBlock GetV_Item_Name() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1160);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UWidgetSwitcher GetV_ItemSwitcher() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1168);
		return struct UWidgetSwitcher(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


