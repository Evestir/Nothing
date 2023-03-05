#pragma once 
#include <BP_ModeSelectSubPage_GrandPrix_Structs.h>
 
 
 
class UBP_ModeSelectSubPage_GrandPrix_C
{
public:
	UBP_ModeSelectSubPage_GrandPrix_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 608);
	}
	struct UWidgetAnimation GetOnEnter() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UBP_PageKeySlotTemplate_new_C GetBP_PageKeySlotTemplate_new() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return struct UBP_PageKeySlotTemplate_new_C(ptr_addr);
	}
	struct UImage GetImage_183() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 632);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_715() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct UImage(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 648);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_3() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 656);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_5() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 664);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_6() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 672);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_8() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 680);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_12() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 688);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_133() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 696);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_226() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 704);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UBP_CommonPopupGuide_C GetV_BP_CommonPopupGuide() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 712);
		return struct UBP_CommonPopupGuide_C(ptr_addr);
	}
	struct USizeBox GetV_SB_LicenseAlert() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 720);
		return struct USizeBox(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


