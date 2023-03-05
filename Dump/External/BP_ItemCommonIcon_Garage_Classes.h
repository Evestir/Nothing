#pragma once 
#include <BP_ItemCommonIcon_Garage_Structs.h>
 
 
 
class UBP_ItemCommonIcon_Garage_C
{
public:
	UBP_ItemCommonIcon_Garage_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 888);
	}
	struct UWidgetAnimation GetAnim_Equip() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 896);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UOverlay GetOV_Anim_Equip() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 904);
		return struct UOverlay(ptr_addr);
	}
	struct UOverlay GetOV_Text() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 912);
		return struct UOverlay(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


