#pragma once 
#include <BP_Garage_Btn_PartyFriends_Keyicon_Structs.h>
 
 
 
class UBP_Garage_Btn_PartyFriends_Keyicon_C
{
public:
	UBP_Garage_Btn_PartyFriends_Keyicon_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UImage GetImage_273() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1280);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_358() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1288);
		return struct UImage(ptr_addr);
	}
	struct USpacer GetSpacer_Right() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1296);
		return struct USpacer(ptr_addr);
	}
	struct UKdTextBlock Gettxt_titleName() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1304);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdButtonImage GetV_KeyDualShock() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1312);
		return struct UKdButtonImage(ptr_addr);
	}
	struct UKdButtonImage GetV_KeyPC() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1320);
		return struct UKdButtonImage(ptr_addr);
	}
	struct UKdButtonImage GetV_KeyXBox() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1328);
		return struct UKdButtonImage(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


