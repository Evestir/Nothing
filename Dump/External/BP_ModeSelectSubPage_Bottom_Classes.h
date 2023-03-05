#pragma once 
#include <BP_ModeSelectSubPage_Bottom_Structs.h>
 
 
 
class UBP_ModeSelectSubPage_Bottom_C
{
public:
	UBP_ModeSelectSubPage_Bottom_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UImage GetImage_715() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 608);
		return struct UImage(ptr_addr);
	}
	struct UKdTextBlock GetV_Description() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UKdTextBlock(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


