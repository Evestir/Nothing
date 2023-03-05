#pragma once 
#include <BP_Info_GrandPrixRecord_Structs.h>
 
 
 
class UBP_Info_GrandPrixRecord_C
{
public:
	UBP_Info_GrandPrixRecord_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 608);
	}
	struct UWidgetAnimation GetOnEnter() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UInvalidationBox GetInvalidationBox_113() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return struct UInvalidationBox(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 632);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_10() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 648);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_141() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 656);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UBP_Info_GrandPrixRecordTotal_List_C GetV_BP_GrandPrixTotalInfo() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 664);
		return struct UBP_Info_GrandPrixRecordTotal_List_C(ptr_addr);
	}
	struct UBP_PageKeySlotTemplate_new_C GetV_BP_PageKeySlotTemplate_new() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 672);
		return struct UBP_PageKeySlotTemplate_new_C(ptr_addr);
	}
	struct UBP_KeyIcon_Bottom_C GetV_ChattingButton() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 680);
		return struct UBP_KeyIcon_Bottom_C(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


