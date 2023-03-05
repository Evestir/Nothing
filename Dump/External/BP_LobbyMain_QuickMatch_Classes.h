#pragma once 
#include <BP_LobbyMain_QuickMatch_Structs.h>
 
 
 
class UBP_LobbyMain_QuickMatch_C
{
public:
	UBP_LobbyMain_QuickMatch_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UKdTextBlock GetKdTextBlock_5() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 608);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UBP_CommonPopupGuide2_C GetV_BP_CommonPopupGuide() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UBP_CommonPopupGuide2_C(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


