#pragma once 
#include <BP_LobbyMain_Challenge_TrophyStart_Structs.h>
 
 
 
class UBP_LobbyMain_Challenge_TrophyStart_C
{
public:
	UBP_LobbyMain_Challenge_TrophyStart_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 608);
	}
	struct UWidgetAnimation GetAnim_StartGiftBox() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UWidgetAnimation GetAnim_StartTrophy() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UBP_KdSoundWidget_C GetBP_KdSoundWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 632);
		return struct UBP_KdSoundWidget_C(ptr_addr);
	}
	struct UWidgetSwitcher GetV_WidgetSwitcher_BackLight() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct UWidgetSwitcher(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


