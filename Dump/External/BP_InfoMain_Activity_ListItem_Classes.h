#pragma once 
#include <BP_InfoMain_Activity_ListItem_Structs.h>
 
 
 
class UBP_InfoMain_Activity_ListItem_C
{
public:
	UBP_InfoMain_Activity_ListItem_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 608);
	}
	struct UKdTextBlock GetV_ActivityTitleTextBlock() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UKdTextBlock(ptr_addr);
	}
	struct FText Gettxt_ActivityHistory() {
		return memory.read<struct FText>(m_addr + 624);
	}

private:
	std::uint64_t m_addr = 0;
};


