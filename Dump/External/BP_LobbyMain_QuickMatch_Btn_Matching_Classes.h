#pragma once 
#include <BP_LobbyMain_QuickMatch_Btn_Matching_Structs.h>
 
 
 
class UBP_LobbyMain_QuickMatch_Btn_Matching_C
{
public:
	UBP_LobbyMain_QuickMatch_Btn_Matching_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 608);
	}
	struct UWidgetAnimation GetAnim_MatchingComplete() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UBP_KdSoundWidget_C GetBP_KdSoundWidget_78() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return struct UBP_KdSoundWidget_C(ptr_addr);
	}
	struct UBP_KeyIcon_C GetBP_KeyIcon_3() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 632);
		return struct UBP_KeyIcon_C(ptr_addr);
	}
	struct UImage GetImage() {
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
	struct UImage GetImage_243() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 672);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_282() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 680);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_465() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 688);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_702() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 696);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_835() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 704);
		return struct UImage(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 712);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 720);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_3() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 728);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_6() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 736);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_7() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 744);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_8() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 752);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_10() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 760);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_11() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 768);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_12() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 776);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_169() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 784);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_332() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 792);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_479() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 800);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UWidgetSwitcher GetV_ItemWheelSwitcher() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 808);
		return struct UWidgetSwitcher(ptr_addr);
	}
	struct UBP_LobbyMain_QuickMatch_PersonIcon_Item_C GetV_PersonIcon_Item() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 816);
		return struct UBP_LobbyMain_QuickMatch_PersonIcon_Item_C(ptr_addr);
	}
	struct UBP_LobbyMain_QuickMatch_PersonIcon_Speed_C GetV_PersonIcon_Speed() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 824);
		return struct UBP_LobbyMain_QuickMatch_PersonIcon_Speed_C(ptr_addr);
	}
	struct UWidgetSwitcher GetV_SpeedWheelSwitcher() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 832);
		return struct UWidgetSwitcher(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


