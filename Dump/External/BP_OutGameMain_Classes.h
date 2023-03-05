#pragma once 
#include <BP_OutGameMain_Structs.h>
 
 
 
class UBP_OutGameMain_C
{
public:
	UBP_OutGameMain_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UBP_LobbyMain_C GetBP_LobbyMain() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1144);
		return struct UBP_LobbyMain_C(ptr_addr);
	}
	struct UBP_Chatting_C GetV_BP_Chatting() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1152);
		return struct UBP_Chatting_C(ptr_addr);
	}
	struct UWidgetSwitcher GetV_MainSwitcher() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1160);
		return struct UWidgetSwitcher(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


