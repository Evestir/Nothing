#pragma once 
#include <BP_LobbyMain_QuickMatch_PersonIcon_Speed_Structs.h>
 
 
 
class UBP_LobbyMain_QuickMatch_PersonIcon_Speed_C
{
public:
	UBP_LobbyMain_QuickMatch_PersonIcon_Speed_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UBP_LobbyMain_QuickMatch_Persons_Template_C GetV_PersonDuo() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 608);
		return struct UBP_LobbyMain_QuickMatch_Persons_Template_C(ptr_addr);
	}
	struct UBP_LobbyMain_QuickMatch_Persons_Template_C GetV_PersonSolo() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UBP_LobbyMain_QuickMatch_Persons_Template_C(ptr_addr);
	}
	struct UBP_LobbyMain_QuickMatch_Persons_Template_C GetV_PersonSquad() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return struct UBP_LobbyMain_QuickMatch_Persons_Template_C(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


