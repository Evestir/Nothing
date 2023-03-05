#pragma once 
#include <BP_ModeSelectSubPage_Common_Title_Structs.h>
 
 
 
class UBP_ModeSelectSubPage_Common_Title_C
{
public:
	UBP_ModeSelectSubPage_Common_Title_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 608);
	}
	struct UKdTextBlock GetDescText() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetTitleText() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UBP_CommonPopupGuide_C GetV_BP_CommonPopupGuide() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 632);
		return struct UBP_CommonPopupGuide_C(ptr_addr);
	}
	struct USizeBox GetV_SB_LicenseAlert() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct USizeBox(ptr_addr);
	}
	struct FText GetText_Title() {
		return memory.read<struct FText>(m_addr + 648);
	}
	struct FText GetText_description() {
		return memory.read<struct FText>(m_addr + 672);
	}

private:
	std::uint64_t m_addr = 0;
};


