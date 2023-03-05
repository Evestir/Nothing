#pragma once 
#include <BP_PageButtonList_Structs.h>
 
 
 
class UBP_PageButtonList_C
{
public:
	UBP_PageButtonList_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UBP_PageButton_C GetBP_PageButton() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 680);
		return struct UBP_PageButton_C(ptr_addr);
	}
	struct UBP_PageButton_C GetBP_PageButton_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 688);
		return struct UBP_PageButton_C(ptr_addr);
	}
	struct UBP_PageButton_C GetBP_PageButton_3() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 696);
		return struct UBP_PageButton_C(ptr_addr);
	}
	struct UBP_PageButton_C GetBP_PageButton_4() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 704);
		return struct UBP_PageButton_C(ptr_addr);
	}
	struct UBP_PageButton_C GetBP_PageButton_5() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 712);
		return struct UBP_PageButton_C(ptr_addr);
	}
	struct UBP_PageButton_C GetBP_PageButton_6() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 720);
		return struct UBP_PageButton_C(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 728);
		return struct UKdTextBlock(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


