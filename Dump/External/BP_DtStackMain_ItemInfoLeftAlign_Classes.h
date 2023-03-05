#pragma once 
#include <BP_DtStackMain_ItemInfoLeftAlign_Structs.h>
 
 
 
class UBP_DtStackMain_ItemInfoLeftAlign_C
{
public:
	UBP_DtStackMain_ItemInfoLeftAlign_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UImage GetImage_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 608);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_682() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UImage(ptr_addr);
	}
	struct UImage Getimg_check() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return struct UImage(ptr_addr);
	}
	struct UImage Getimg_Clock() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 632);
		return struct UImage(ptr_addr);
	}
	struct UImage GetIMG_Complete_Bg() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct UImage(ptr_addr);
	}
	struct UKdTextBlock GetV_Event_Desc() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 648);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetV_Event_Name() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 656);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetV_Event_Period() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 664);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetV_ItemRestTime() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 672);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UProgressBar GetV_ProgressBar() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 680);
		return struct UProgressBar(ptr_addr);
	}
	struct UWidgetSwitcher GetV_TimeSwitcher() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 688);
		return struct UWidgetSwitcher(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


