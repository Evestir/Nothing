#pragma once 
#include <BP_LobbyMain_Challenge_ListItem_SeasonOff_Structs.h>
 
 
 
class UBP_LobbyMain_Challenge_ListItem_SeasonOff_C
{
public:
	UBP_LobbyMain_Challenge_ListItem_SeasonOff_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 608);
	}
	struct UWidgetAnimation GetAnim_Init() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UWidgetAnimation GetAnim_Complete() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct FMulticastInlineDelegate GetEvent_SendChalDailyComplete() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 632);
	}

private:
	std::uint64_t m_addr = 0;
};


