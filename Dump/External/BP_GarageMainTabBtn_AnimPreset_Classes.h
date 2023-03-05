#pragma once 
#include <BP_GarageMainTabBtn_AnimPreset_Structs.h>
 
 
 
class UBP_GarageMainTabBtn_AnimPreset_C
{
public:
	UBP_GarageMainTabBtn_AnimPreset_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 776);
	}
	struct UWidgetAnimation GetUnFocus() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 784);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UWidgetAnimation GetFocus() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 792);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UImage Getimg_mainbtn() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 800);
		return struct UImage(ptr_addr);
	}
	struct UOverlay GetOverlay_focus() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 808);
		return struct UOverlay(ptr_addr);
	}
	struct UTextBlock Gettxt_ratio_test() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 816);
		return struct UTextBlock(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


