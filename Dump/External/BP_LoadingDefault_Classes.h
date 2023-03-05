#pragma once 
#include <BP_LoadingDefault_Structs.h>
 
 
 
class UBP_LoadingDefault_C
{
public:
	UBP_LoadingDefault_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UBP_PageKeySlotTemplate_new_C GetBP_PageKeySlotTemplate_new() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 672);
		return struct UBP_PageKeySlotTemplate_new_C(ptr_addr);
	}
	struct UNamedSlot GetDescSlot() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 680);
		return struct UNamedSlot(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 688);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_137() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 696);
		return struct UKdTextBlock(ptr_addr);
	}
	struct USpacer GetLeftIndentSpace() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 704);
		return struct USpacer(ptr_addr);
	}
	struct UProgressBar GetLoadingProgressBar() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 712);
		return struct UProgressBar(ptr_addr);
	}
	struct UBP_LoadingProgressBarIcon_C GetLoadingProgressBarIcon() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 720);
		return struct UBP_LoadingProgressBarIcon_C(ptr_addr);
	}
	struct UProgressBar GetLoadingProgressBarLeftDeco() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 728);
		return struct UProgressBar(ptr_addr);
	}
	struct UProgressBar GetLoadingProgressBarRightDeco() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 736);
		return struct UProgressBar(ptr_addr);
	}
	struct USpacer GetRightIndentSpace() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 744);
		return struct USpacer(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


