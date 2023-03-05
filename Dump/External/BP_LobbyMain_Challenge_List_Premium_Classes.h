#pragma once 
#include <BP_LobbyMain_Challenge_List_Premium_Structs.h>
 
 
 
class UBP_LobbyMain_Challenge_List_Premium_C
{
public:
	UBP_LobbyMain_Challenge_List_Premium_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWidgetAnimation GetAnim_ListChange02() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 608);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UWidgetAnimation GetAnim_ListChange01() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UButton GetButton_Test() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return struct UButton(ptr_addr);
	}
	struct UBP_LobbyMain_Challenge_ListItem_Premium_C GetV_ChallengeInfo1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 632);
		return struct UBP_LobbyMain_Challenge_ListItem_Premium_C(ptr_addr);
	}
	struct UBP_LobbyMain_Challenge_ListItem_Premium_C GetV_ChallengeInfo2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct UBP_LobbyMain_Challenge_ListItem_Premium_C(ptr_addr);
	}
	struct UBP_LobbyMain_Challenge_TrophyStart_C GetV_LobbyMain_Challenge_TrophyStart() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 648);
		return struct UBP_LobbyMain_Challenge_TrophyStart_C(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


