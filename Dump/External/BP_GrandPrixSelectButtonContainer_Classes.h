#pragma once 
#include <BP_GrandPrixSelectButtonContainer_Structs.h>
 
 
 
class UBP_GrandPrixSelectButtonContainer_C
{
public:
	UBP_GrandPrixSelectButtonContainer_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UBP_GrandPrixSelectButton_C GetBP_GrandPrixSelectButton() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 760);
		return struct UBP_GrandPrixSelectButton_C(ptr_addr);
	}
	struct UBP_GrandPrixSelectButton_C GetBP_GrandPrixSelectButton_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 768);
		return struct UBP_GrandPrixSelectButton_C(ptr_addr);
	}
	struct UBP_GrandPrixSelectButton_C GetBP_GrandPrixSelectButton_3() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 776);
		return struct UBP_GrandPrixSelectButton_C(ptr_addr);
	}
	struct UBP_GrandPrixSelectButton_C GetBP_GrandPrixSelectButton_4() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 784);
		return struct UBP_GrandPrixSelectButton_C(ptr_addr);
	}
	struct UBP_GrandPrixSelectButton_C GetBP_GrandPrixSelectButton_5() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 792);
		return struct UBP_GrandPrixSelectButton_C(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


