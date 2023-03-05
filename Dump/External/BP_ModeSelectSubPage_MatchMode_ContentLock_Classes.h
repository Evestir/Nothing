#pragma once 
#include <BP_ModeSelectSubPage_MatchMode_ContentLock_Structs.h>
 
 
 
class UBP_ModeSelectSubPage_MatchMode_ContentLock_C
{
public:
	UBP_ModeSelectSubPage_MatchMode_ContentLock_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UKdTextBlock GetKdTextBlock() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 608);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_3() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_6() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return struct UKdTextBlock(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


