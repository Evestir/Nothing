#pragma once 
#include <BP_DtStackMain_ItemBox_Structs.h>
 
 
 
class UBP_DtStackMain_ItemBox_C
{
public:
	UBP_DtStackMain_ItemBox_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 1000);
	}
	struct UWidgetAnimation GetOn_Unfocus() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1008);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UWidgetAnimation GetOn_Focus() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1016);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UImage GetImage_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1024);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_3() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1032);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_74() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1040);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_98() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1048);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_148() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1056);
		return struct UImage(ptr_addr);
	}
	struct UKdButtonImage GetKdButtonImage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1064);
		return struct UKdButtonImage(ptr_addr);
	}
	struct UKdButtonImage GetKdButtonImage_3() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1072);
		return struct UKdButtonImage(ptr_addr);
	}
	struct UKdButtonImage GetKdButtonImage_4() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1080);
		return struct UKdButtonImage(ptr_addr);
	}
	struct UKdButtonImage GetKdButtonImage_5() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1088);
		return struct UKdButtonImage(ptr_addr);
	}
	struct UKdButtonImage GetKdButtonImage_102() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1096);
		return struct UKdButtonImage(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1104);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1112);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_3() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1120);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_4() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1128);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_90() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1136);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UOverlay GetOV_FocusBack() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1144);
		return struct UOverlay(ptr_addr);
	}
	struct UOverlay GetOV_ItemBox() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1152);
		return struct UOverlay(ptr_addr);
	}
	struct UBP_ItemCommonIcon_C GetV_BP_ItemCommonIcon() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1160);
		return struct UBP_ItemCommonIcon_C(ptr_addr);
	}
	struct UWidgetSwitcher GetV_EventTypeSwitcher() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1168);
		return struct UWidgetSwitcher(ptr_addr);
	}
	struct UKdTextBlock GetV_NormalLeftTimeText() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1176);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetV_PremiumLeftTimeText() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1184);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UWidgetSwitcher GetV_StepSwitcher() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1192);
		return struct UWidgetSwitcher(ptr_addr);
	}
	struct UKdTextBlock GetV_StepText() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1200);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UWidgetSwitcher GetV_StepTypeSwitcher() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1208);
		return struct UWidgetSwitcher(ptr_addr);
	}
	struct UProgressBar GetV_StopProgressBar() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1216);
		return struct UProgressBar(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


