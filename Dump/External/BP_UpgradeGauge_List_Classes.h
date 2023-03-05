#pragma once 
#include <BP_UpgradeGauge_List_Structs.h>
 
 
 
class UBP_UpgradeGauge_List_C
{
public:
	UBP_UpgradeGauge_List_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 608);
	}
	struct UWidgetAnimation GetAnim_Reset() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UWidgetAnimation GetAnim_Apply() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UImage GetGauge_Empty_W() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 632);
		return struct UImage(ptr_addr);
	}
	struct UWidgetSwitcher GetV_GaugeSwitcher() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct UWidgetSwitcher(ptr_addr);
	}
	struct FLinearColor GetEmpty() {
		return memory.read<struct FLinearColor>(m_addr + 648);
	}

private:
	std::uint64_t m_addr = 0;
};


