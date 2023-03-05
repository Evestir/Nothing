#pragma once 
#include <BP_ModeSelectMain_Structs.h>
 
 
 
class UBP_ModeSelectMain_C
{
public:
	UBP_ModeSelectMain_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWidgetAnimation GetOnEnter() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 848);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UBP_CommonBGWhiteGra_C GetBP_CommonBGWhiteGra() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 856);
		return struct UBP_CommonBGWhiteGra_C(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


