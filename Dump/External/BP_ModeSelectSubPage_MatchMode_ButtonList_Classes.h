#pragma once 
#include <BP_ModeSelectSubPage_MatchMode_ButtonList_Structs.h>
 
 
 
class UBP_ModeSelectSubPage_MatchMode_ButtonList_C
{
public:
	UBP_ModeSelectSubPage_MatchMode_ButtonList_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 760);
	}
	struct UNamedSlot GetNamedSlot_1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 768);
		return struct UNamedSlot(ptr_addr);
	}
	struct UNamedSlot GetNamedSlot_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 776);
		return struct UNamedSlot(ptr_addr);
	}
	struct UNamedSlot GetNamedSlot_3() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 784);
		return struct UNamedSlot(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


