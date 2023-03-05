#pragma once 
#include <BP_DtMain_Structs.h>
 
 
 
class UBP_DtMain_C
{
public:
	UBP_DtMain_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWidgetAnimation GetOnEnter() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 608);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UBP_DtMain_ItemSelectBox_C GetBP_DtMain_ItemSelectBox() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UBP_DtMain_ItemSelectBox_C(ptr_addr);
	}
	struct UBP_DtMain_ItemSelectBox_C GetBP_DtMain_ItemSelectBox_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return struct UBP_DtMain_ItemSelectBox_C(ptr_addr);
	}
	struct UImage GetImage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 632);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_3() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 648);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_4() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 656);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_5() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 664);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_6() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 672);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_74() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 680);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_92() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 688);
		return struct UImage(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_3() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 696);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_4() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 704);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_90() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 712);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetV_CanReceiveRewardText() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 720);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetV_DTRewardTypeText() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 728);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UWidgetSwitcher GetV_EventTypeSwitcher() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 736);
		return struct UWidgetSwitcher(ptr_addr);
	}
	struct UBP_DTFocusHide_C GetV_HideFocus() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 744);
		return struct UBP_DTFocusHide_C(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


