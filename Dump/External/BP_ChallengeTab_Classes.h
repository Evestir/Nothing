#pragma once 
#include <BP_ChallengeTab_Structs.h>
 
 
 
class UBP_ChallengeTab_C
{
public:
	UBP_ChallengeTab_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWidgetAnimation GetOnEnter() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 760);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UBP_KeyIcon_Bottom_C GetBP_KeyIcon_Select_3() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 768);
		return struct UBP_KeyIcon_Bottom_C(ptr_addr);
	}
	struct UBP_PageKeySlotTemplate_new_C GetBP_PageKeySlotTemplate_new() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 776);
		return struct UBP_PageKeySlotTemplate_new_C(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_5() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 784);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_8() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 792);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_10() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 800);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_220() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 808);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UWidgetSwitcher GetV_ChallengeTabSwitcher() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 816);
		return struct UWidgetSwitcher(ptr_addr);
	}
	struct UBP_KeyIcon_Bottom_C GetV_ChattingButton() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 824);
		return struct UBP_KeyIcon_Bottom_C(ptr_addr);
	}
	struct UBP_ChallengeTabButton_C GetV_EventChallengeButton() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 832);
		return struct UBP_ChallengeTabButton_C(ptr_addr);
	}
	struct UBP_KeyIcon_Bottom_C GetV_KeyIcon_Back() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 840);
		return struct UBP_KeyIcon_Bottom_C(ptr_addr);
	}
	struct UBP_KeyIcon_Bottom_C GetV_KeyIcon_Select() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 848);
		return struct UBP_KeyIcon_Bottom_C(ptr_addr);
	}
	struct UBP_ChallengeTabButton_C GetV_NormalChallengeButton() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 856);
		return struct UBP_ChallengeTabButton_C(ptr_addr);
	}
	struct UBP_ChallengeTabButton_C GetV_PremiumChallengeButton() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 864);
		return struct UBP_ChallengeTabButton_C(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


