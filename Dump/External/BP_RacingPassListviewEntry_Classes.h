#pragma once 
#include <BP_RacingPassListviewEntry_Structs.h>
 
 
 
class UBP_RacingPassListviewEntry_C
{
public:
	UBP_RacingPassListviewEntry_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 608);
	}
	struct UWidgetAnimation GetAnim_UnFocus() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UWidgetAnimation GetAnim_Focus() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UBP_RacingPassItem_C GetV_PremiumRewardItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 632);
		return struct UBP_RacingPassItem_C(ptr_addr);
	}
	struct UVerticalBox GetVB_Focus() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct UVerticalBox(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


