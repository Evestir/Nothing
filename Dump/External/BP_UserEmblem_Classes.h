#pragma once 
#include <BP_UserEmblem_Structs.h>
 
 
 
class UBP_UserEmblem_C
{
public:
	UBP_UserEmblem_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 608);
	}
	struct USizeBox GetSB_GrandPrix() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct USizeBox(ptr_addr);
	}
	struct UBP_UserGrandPrixTier_C GetV_BP_UserGrandPrixTier() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return struct UBP_UserGrandPrixTier_C(ptr_addr);
	}
	struct FVector2D GetInst_TierBoxSize() {
		return memory.read<struct FVector2D>(m_addr + 632);
	}
	struct FVector2D GetInst_TierBoxPosition() {
		return memory.read<struct FVector2D>(m_addr + 640);
	}
	bool GetInst_TierBoxVisible() {
		return memory.read<bool>(m_addr + 648);
	}

private:
	std::uint64_t m_addr = 0;
};


