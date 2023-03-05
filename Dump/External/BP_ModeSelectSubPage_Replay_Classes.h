#pragma once 
#include <BP_ModeSelectSubPage_Replay_Structs.h>
 
 
 
class UBP_ModeSelectSubPage_Replay_C
{
public:
	UBP_ModeSelectSubPage_Replay_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

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
	struct UKdTextBlock GetKdTextBlock_5() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 632);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_6() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_8() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 648);
		return struct UKdTextBlock(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


