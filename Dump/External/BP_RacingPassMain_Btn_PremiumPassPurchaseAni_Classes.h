#pragma once 
#include <BP_RacingPassMain_Btn_PremiumPassPurchaseAni_Structs.h>
 
 
 
class UBP_RacingPassMain_Btn_PremiumPassPurchaseAni_C
{
public:
	UBP_RacingPassMain_Btn_PremiumPassPurchaseAni_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 1280);
	}
	struct UWidgetAnimation GetAnim_Show() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1288);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UImage Getani_box_cyan() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1296);
		return struct UImage(ptr_addr);
	}
	struct UImage Getani_line_Bottom() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1304);
		return struct UImage(ptr_addr);
	}
	struct UImage Getani_line_Top() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1312);
		return struct UImage(ptr_addr);
	}
	struct UImage Getani_moveline() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1320);
		return struct UImage(ptr_addr);
	}
	struct UImage Getimg_diagonalLine() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1328);
		return struct UImage(ptr_addr);
	}
	struct UOverlay GetString_PC_KEY() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1336);
		return struct UOverlay(ptr_addr);
	}
	struct UKdTextBlock Gettxt_BtnName() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1344);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UBP_KdSoundWidget_C GetV_BP_KdSoundWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1352);
		return struct UBP_KdSoundWidget_C(ptr_addr);
	}
	struct UKdButtonImage GetV_KeyDualShock() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1360);
		return struct UKdButtonImage(ptr_addr);
	}
	struct UKdButtonImage GetV_KeyPC() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1368);
		return struct UKdButtonImage(ptr_addr);
	}
	struct UKdButtonImage GetV_KeyXBox() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1376);
		return struct UKdButtonImage(ptr_addr);
	}
	struct UOverlay GetV_Overlay_All() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1384);
		return struct UOverlay(ptr_addr);
	}
	struct FText GetInst_BtnName() {
		return memory.read<struct FText>(m_addr + 1392);
	}

private:
	std::uint64_t m_addr = 0;
};


