#pragma once 
#include <BP_EventMain_Structs.h>
 
 
 
class UBP_EventMain_C
{
public:
	UBP_EventMain_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 1184);
	}
	struct UWidgetAnimation GetOnEnter() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1192);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UBP_EventMainBtn_PartyFriends_Keyicon_C GetBP_EventMainBtn_PartyFriends_Keyicon() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1200);
		return struct UBP_EventMainBtn_PartyFriends_Keyicon_C(ptr_addr);
	}
	struct UBP_PageKeySlotTemplate_new_C GetBP_PageKeySlotTemplate_new() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1208);
		return struct UBP_PageKeySlotTemplate_new_C(ptr_addr);
	}
	struct UBP_PageTitle_C GetBP_PageTitle() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1216);
		return struct UBP_PageTitle_C(ptr_addr);
	}
	struct UImage GetImage_187() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1224);
		return struct UImage(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1232);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1240);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_4() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1248);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_5() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1256);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_6() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1264);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_381() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1272);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdImage GetMainTitle_BG01() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1280);
		return struct UKdImage(ptr_addr);
	}
	struct UKdImage GetMainTitle_BG02() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1288);
		return struct UKdImage(ptr_addr);
	}
	struct UBP_KeyIcon_Bottom_C GetV_ChattingButton() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1296);
		return struct UBP_KeyIcon_Bottom_C(ptr_addr);
	}
	struct UBP_EventMainTab_C GetV_EventMainTab() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1304);
		return struct UBP_EventMainTab_C(ptr_addr);
	}
	struct UWidgetSwitcher GetV_EventPageSwitcher() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1312);
		return struct UWidgetSwitcher(ptr_addr);
	}
	struct UKdTextBlock GetV_SelectBtnText() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1320);
		return struct UKdTextBlock(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


