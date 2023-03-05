#pragma once 
#include <BP_KeyIcon_Empty_Structs.h>
 
 
 
class UBP_KeyIcon_Empty_C
{
public:
	UBP_KeyIcon_Empty_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UOverlay GetString_PC_KEY() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1280);
		return struct UOverlay(ptr_addr);
	}
	struct UKdButtonImage GetV_KeyDualShock() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1288);
		return struct UKdButtonImage(ptr_addr);
	}
	struct UKdButtonImage GetV_KeyPC() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1296);
		return struct UKdButtonImage(ptr_addr);
	}
	struct UKdButtonImage GetV_KeyXBox() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1304);
		return struct UKdButtonImage(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


