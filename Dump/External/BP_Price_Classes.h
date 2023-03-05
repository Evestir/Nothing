#pragma once 
#include <BP_Price_Structs.h>
 
 
 
class UBP_Price_C
{
public:
	UBP_Price_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 816);
	}
	struct UInvalidationBox GetInvalidationBox_1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 824);
		return struct UInvalidationBox(ptr_addr);
	}
	struct USpacer GetSpacer_91() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 832);
		return struct USpacer(ptr_addr);
	}
	struct FVector2D GetInst_SpacerSize() {
		return memory.read<struct FVector2D>(m_addr + 840);
	}

private:
	std::uint64_t m_addr = 0;
};


