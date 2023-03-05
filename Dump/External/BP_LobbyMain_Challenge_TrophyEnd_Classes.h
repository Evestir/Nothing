#pragma once 
#include <BP_LobbyMain_Challenge_TrophyEnd_Structs.h>
 
 
 
class UBP_LobbyMain_Challenge_TrophyEnd_C
{
public:
	UBP_LobbyMain_Challenge_TrophyEnd_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 608);
	}
	struct UWidgetAnimation GetAnim_EndTrophy() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UBP_KdSoundWidget_C GetBP_KdSoundWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return struct UBP_KdSoundWidget_C(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 632);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetV_KdTextBlock_Reward() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UWidgetSwitcher GetV_WidgetSwitcher_BackLight() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 648);
		return struct UWidgetSwitcher(ptr_addr);
	}
	int32_t GetSetBackLight() {
		return memory.read<int32_t>(m_addr + 656);
	}

private:
	std::uint64_t m_addr = 0;
};


