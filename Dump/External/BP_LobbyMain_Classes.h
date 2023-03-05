#pragma once 
#include <BP_LobbyMain_Structs.h>
 
 
 
class UBP_LobbyMain_C
{
public:
	UBP_LobbyMain_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 1072);
	}
	struct UWidgetAnimation GetOnEnter_SocialNotActive() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1080);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UWidgetAnimation GetGuideOpen() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1088);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UWidgetAnimation GetGuideClose() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1096);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UWidgetAnimation GetOnEnter() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1104);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UBP_PageKeySlotTemplate_new_C GetBP_PageKeySlotTemplate_new() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1112);
		return struct UBP_PageKeySlotTemplate_new_C(ptr_addr);
	}
	struct UMenuAnchor GetContextSlot() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1120);
		return struct UMenuAnchor(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1128);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_4() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1136);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_7() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1144);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_108() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1152);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetLiveryReportTextBlock() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1160);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UImage GetUserLevelFull() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1168);
		return struct UImage(ptr_addr);
	}
	struct UBP_KeyIcon_Bottom_C GetV_ChattingButton() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1176);
		return struct UBP_KeyIcon_Bottom_C(ptr_addr);
	}
	struct UBP_KeyIcon_Bottom_C GetV_CommonMenuButton() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1184);
		return struct UBP_KeyIcon_Bottom_C(ptr_addr);
	}
	struct UBP_KeyIcon_Bottom_C GetV_EmoticonButton() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1192);
		return struct UBP_KeyIcon_Bottom_C(ptr_addr);
	}
	struct UBP_KeyIcon_Bottom_C GetV_KeyIcon_LiveryReportViewer() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1200);
		return struct UBP_KeyIcon_Bottom_C(ptr_addr);
	}
	struct UBP_KeyIcon_C GetV_KeyIcon_PCRoom_DTEvent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1208);
		return struct UBP_KeyIcon_C(ptr_addr);
	}
	struct UBP_KeyIcon_C GetV_KeyIcon_PCRoom_Emblem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1216);
		return struct UBP_KeyIcon_C(ptr_addr);
	}
	struct UBP_KeyIcon_Bottom_C GetV_KeyIcon_Quit() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1224);
		return struct UBP_KeyIcon_Bottom_C(ptr_addr);
	}
	struct UBP_KeyIcon_Bottom_C GetV_KeyIcon_Select() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1232);
		return struct UBP_KeyIcon_Bottom_C(ptr_addr);
	}
	struct UWidgetSwitcher GetV_LevelGaugeSwitcher() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1240);
		return struct UWidgetSwitcher(ptr_addr);
	}
	struct UBP_ButtonTemplate_C GetV_LobbyDTEvenUI() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1248);
		return struct UBP_ButtonTemplate_C(ptr_addr);
	}
	struct UBP_LobbyMain_Challenge_C GetV_LobbyMain_Challenge() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1256);
		return struct UBP_LobbyMain_Challenge_C(ptr_addr);
	}
	struct UBP_LobbyMainTab_C GetV_OutGameMainTab() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1264);
		return struct UBP_LobbyMainTab_C(ptr_addr);
	}
	struct UBP_KeyIcon_Empty_C GetV_RotateCharacterLeftButton() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1272);
		return struct UBP_KeyIcon_Empty_C(ptr_addr);
	}
	struct UBP_KeyIcon_Bottom_C GetV_RotateCharacterRightButton() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1280);
		return struct UBP_KeyIcon_Bottom_C(ptr_addr);
	}
	struct UKdTextBlock GetV_RotateCharRightTextBlock() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1288);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UBP_KeyIcon_Empty_C GetV_RotatePawnLeftButton() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1296);
		return struct UBP_KeyIcon_Empty_C(ptr_addr);
	}
	struct UBP_KeyIcon_Bottom_C GetV_RotatePawnRightButton() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1304);
		return struct UBP_KeyIcon_Bottom_C(ptr_addr);
	}
	struct UKdTextBlock GetV_RotateRightTextBlock() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1312);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetV_SelectTextBlock() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1320);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UBP_UserEmblem_C GetV_UserEmblem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1328);
		return struct UBP_UserEmblem_C(ptr_addr);
	}
	struct UProgressBar GetV_UserLevelProgressBar() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1336);
		return struct UProgressBar(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


