#pragma once 
#include <BP_OutGameNameTag_Structs.h>
 
 
 
class UBP_OutGameNameTag_C
{
public:
	UBP_OutGameNameTag_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UKdTextBlock GetKdTextBlock() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 608);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_3() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_4() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 632);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_5() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_54() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 648);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UWidgetSwitcher GetV_PartyLeaderSwitcher() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 656);
		return struct UWidgetSwitcher(ptr_addr);
	}
	struct UWidgetSwitcher GetV_PartyReadySwitcher() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 664);
		return struct UWidgetSwitcher(ptr_addr);
	}
	struct UKdTextBlock GetV_RiderNameTextBlock() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 672);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UBP_UserEmblem_C GetV_UserEmblem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 680);
		return struct UBP_UserEmblem_C(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


