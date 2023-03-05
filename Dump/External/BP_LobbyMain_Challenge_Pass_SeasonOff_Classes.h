#pragma once 
#include <BP_LobbyMain_Challenge_Pass_SeasonOff_Structs.h>
 
 
 
class UBP_LobbyMain_Challenge_Pass_SeasonOff_C
{
public:
	UBP_LobbyMain_Challenge_Pass_SeasonOff_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWidgetAnimation GetAnim_PassLevelUp() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 608);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UWidgetAnimation GetAnim_GetComplete() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UWidgetAnimation(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


