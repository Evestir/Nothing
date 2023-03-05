#pragma once 
#include <BP_RacingPassMain_PremiumSymbolBGAnim_Structs.h>
 
 
 
class UBP_RacingPassMain_PremiumSymbolBGAnim_C
{
public:
	UBP_RacingPassMain_PremiumSymbolBGAnim_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 608);
	}
	struct UWidgetAnimation Getanim_PremiumPurchase_Idle() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UWidgetAnimation(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


