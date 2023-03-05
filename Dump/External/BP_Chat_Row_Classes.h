#pragma once 
#include <BP_Chat_Row_Structs.h>
 
 
 
class UBP_Chat_Row_C
{
public:
	UBP_Chat_Row_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 608);
	}
	struct UBP_Chat_Category_C GetV_BP_ChatCategory() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UBP_Chat_Category_C(ptr_addr);
	}
	struct UKdTextBlock GetV_ChatTxt() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return struct UKdTextBlock(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


