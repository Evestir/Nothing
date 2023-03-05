#pragma once 
#include <BP_ModeSelectSubPage_MatchMode_Bottom_Structs.h>
 
 
 
class UBP_ModeSelectSubPage_MatchMode_Bottom_C
{
public:
	UBP_ModeSelectSubPage_MatchMode_Bottom_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 608);
	}
	struct UNamedSlot GetDescSlot() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UNamedSlot(ptr_addr);
	}
	struct UImage GetImage_55() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_Mat() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 632);
		return struct UImage(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


