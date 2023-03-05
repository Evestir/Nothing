#pragma once 
#include <BP_LobbyMain_Challenge_ListItem_Event_Structs.h>
 
 
 
class UBP_LobbyMain_Challenge_ListItem_Event_C
{
public:
	UBP_LobbyMain_Challenge_ListItem_Event_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 608);
	}
	struct UWidgetAnimation GetAnim_Init() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UWidgetAnimation GetAnim_Complete() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UImage GetImage_3() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 632);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_481() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct UImage(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_312() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 648);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UBP_ButtonTemplate_C GetV_ButtonTemplate() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 656);
		return struct UBP_ButtonTemplate_C(ptr_addr);
	}
	struct UKdTextBlock GetV_QuestCategoryTextBlock() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 664);
		return struct UKdTextBlock(ptr_addr);
	}
	struct FMulticastInlineDelegate GetEvent_SendChalPremiumComplete() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 672);
	}

private:
	std::uint64_t m_addr = 0;
};


