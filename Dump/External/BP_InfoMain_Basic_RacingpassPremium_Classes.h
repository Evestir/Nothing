#pragma once 
#include <BP_InfoMain_Basic_RacingpassPremium_Structs.h>
 
 
 
class UBP_InfoMain_Basic_RacingpassPremium_C
{
public:
	UBP_InfoMain_Basic_RacingpassPremium_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UInvalidationBox GetInvalidationBox_12() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 608);
		return struct UInvalidationBox(ptr_addr);
	}
	struct UKdTextBlock GetText_Premium() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UKdTextBlock(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


