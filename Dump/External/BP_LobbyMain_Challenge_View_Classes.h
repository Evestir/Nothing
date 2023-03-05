#pragma once 
#include <BP_LobbyMain_Challenge_View_Structs.h>
 
 
 
class UBP_LobbyMain_Challenge_View_C
{
public:
	UBP_LobbyMain_Challenge_View_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWidgetAnimation GetAnim_ChangeEvent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 608);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UWidgetAnimation GetAnim_ChangePremiumPass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UBP_LobbyMain_Challenge_List_Daily_C GetV_ChalList_Daily() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return struct UBP_LobbyMain_Challenge_List_Daily_C(ptr_addr);
	}
	struct UBP_LobbyMain_Challenge_List_Premium_C GetV_ChalList_Premium() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 632);
		return struct UBP_LobbyMain_Challenge_List_Premium_C(ptr_addr);
	}
	struct UWidgetSwitcher GetV_WidgetSwitcher_Season() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct UWidgetSwitcher(ptr_addr);
	}
	struct FMulticastInlineDelegate GetSendChalTrophySetCompleteNormal() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 648);
	}
	struct FMulticastInlineDelegate GetSendChalTrophySetCompletePremium() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 664);
	}

private:
	std::uint64_t m_addr = 0;
};


