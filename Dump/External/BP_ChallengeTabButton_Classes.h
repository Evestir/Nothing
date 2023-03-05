#pragma once 
#include <BP_ChallengeTabButton_Structs.h>
 
 
 
class UBP_ChallengeTabButton_C
{
public:
	UBP_ChallengeTabButton_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 1000);
	}
	struct UWidgetAnimation GetEnable() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1008);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UWidgetAnimation Getdisable() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1016);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UWidgetAnimation GetUnFocus() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1024);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UWidgetAnimation GetFocus() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1032);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UFocusAnimSet_Stroke_C GetFocusAnimSet_Stroke() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1040);
		return struct UFocusAnimSet_Stroke_C(ptr_addr);
	}
	struct UImage GetImage_309() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1048);
		return struct UImage(ptr_addr);
	}
	struct UImage Getimg_bg() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1056);
		return struct UImage(ptr_addr);
	}
	struct UImage Getimg_BtnImage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1064);
		return struct UImage(ptr_addr);
	}
	struct UImage Getimg_chal_Picto() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1072);
		return struct UImage(ptr_addr);
	}
	struct UKdTextBlock GetKdTextBlock_SeasonOff() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1080);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UNamedSlot GetSubButtonSlot() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1088);
		return struct UNamedSlot(ptr_addr);
	}
	struct UKdTextBlock Gettxt_BtnName() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1096);
		return struct UKdTextBlock(ptr_addr);
	}
	bool GetInst_IsPremium() {
		return memory.read<bool>(m_addr + 1104);
	}
	struct FSlateBrush GetInst_ImageBG() {
		return memory.read<struct FSlateBrush>(m_addr + 1112);
	}
	struct FSlateBrush GetInst_ImageBtn() {
		return memory.read<struct FSlateBrush>(m_addr + 1248);
	}
	struct FText GetInst_Text_BtnName() {
		return memory.read<struct FText>(m_addr + 1384);
	}
	struct FSlateBrush GetInst_ImageChalPicto() {
		return memory.read<struct FSlateBrush>(m_addr + 1408);
	}
	struct FText GetInst_Text_SeasonOff() {
		return memory.read<struct FText>(m_addr + 1544);
	}

private:
	std::uint64_t m_addr = 0;
};


