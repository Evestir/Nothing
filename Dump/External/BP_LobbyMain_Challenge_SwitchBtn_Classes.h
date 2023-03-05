#pragma once 
#include <BP_LobbyMain_Challenge_SwitchBtn_Structs.h>
 
 
 
class UBP_LobbyMain_Challenge_SwitchBtn_C
{
public:
	UBP_LobbyMain_Challenge_SwitchBtn_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWidgetAnimation GetAnim_Click() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1280);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UOverlay GetString_PC_KEY() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1288);
		return struct UOverlay(ptr_addr);
	}
	struct UKdButtonImage GetV_KeyDualShock() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1296);
		return struct UKdButtonImage(ptr_addr);
	}
	struct UKdButtonImage GetV_KeyPC() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1304);
		return struct UKdButtonImage(ptr_addr);
	}
	struct UKdButtonImage GetV_KeyXBox() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1312);
		return struct UKdButtonImage(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


