#pragma once 
#include <BP_LobbyMain_Challenge_Structs.h>
 
 
 
class UBP_LobbyMain_Challenge_C
{
public:
	UBP_LobbyMain_Challenge_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

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
	struct UBP_LobbyMain_Challenge_EventBox_C GetV_ChalEvent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return struct UBP_LobbyMain_Challenge_EventBox_C(ptr_addr);
	}
	struct UBP_LobbyMain_Challenge_View_C GetV_ChallengeInfo() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 632);
		return struct UBP_LobbyMain_Challenge_View_C(ptr_addr);
	}
	struct UBP_LobbyMain_Challenge_PremiumPass_C GetV_ChalPremiumPass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct UBP_LobbyMain_Challenge_PremiumPass_C(ptr_addr);
	}
	struct UBP_LobbyMain_Challenge_Alert_C GetV_LobbyMain_Challenge_Alert() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 648);
		return struct UBP_LobbyMain_Challenge_Alert_C(ptr_addr);
	}
	struct UBP_LobbyMain_Challenge_TrophyEnd_C GetV_LobbyMain_Challenge_TrophyEnd() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 656);
		return struct UBP_LobbyMain_Challenge_TrophyEnd_C(ptr_addr);
	}
	int32_t GetInt_Grade() {
		return memory.read<int32_t>(m_addr + 664);
	}

private:
	std::uint64_t m_addr = 0;
};


