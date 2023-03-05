#pragma once 
#include <BP_RacingPassItem_Structs.h>
 
 
 
class UBP_RacingPassItem_C
{
public:
	UBP_RacingPassItem_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 1008);
	}
	struct UWidgetAnimation GetAnim_OpenReward() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1016);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UWidgetAnimation GetAnim_Purchase() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1024);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UWidgetAnimation GetAnim_UnFocus() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1032);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UWidgetAnimation GetAnim_Focus() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1040);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UBP_KdSoundWidget_C GetBP_KdSoundWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1048);
		return struct UBP_KdSoundWidget_C(ptr_addr);
	}
	struct UFocusAnimSet_Stroke_C GetFocusAnimSet_Stroke() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1056);
		return struct UFocusAnimSet_Stroke_C(ptr_addr);
	}
	struct UOverlay GetOV_Anim_OpenReward() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1064);
		return struct UOverlay(ptr_addr);
	}
	struct UOverlay GetOV_Anim_Purchase() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1072);
		return struct UOverlay(ptr_addr);
	}
	struct UImage GetRight() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1080);
		return struct UImage(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


