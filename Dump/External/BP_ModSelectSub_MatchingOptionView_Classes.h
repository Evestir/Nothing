#pragma once 
#include <BP_ModSelectSub_MatchingOptionView_Structs.h>
 
 
 
class UBP_ModSelectSub_MatchingOptionView_C
{
public:
	UBP_ModSelectSub_MatchingOptionView_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UKdTextBlock GetKdTextBlock() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 608);
		return struct UKdTextBlock(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


