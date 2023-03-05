#pragma once 
#include <BP_CommonButton_Cyan_Structs.h>
 
 
 
class UBP_CommonButton_Cyan_C
{
public:
	UBP_CommonButton_Cyan_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 1000);
	}
	struct UKdButtonImage GetBtn_BG() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1008);
		return struct UKdButtonImage(ptr_addr);
	}
	struct UFocusAnimSet_Stroke_CommonBtn_C GetFocusAnimSet_Stroke_CommonBtn() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1016);
		return struct UFocusAnimSet_Stroke_CommonBtn_C(ptr_addr);
	}
	struct USizeBox GetSB_BtnSize() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1024);
		return struct USizeBox(ptr_addr);
	}
	struct UKdTextBlock GetV_ButtonText() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1032);
		return struct UKdTextBlock(ptr_addr);
	}
	bool GetInst_SizeSet() {
		return memory.read<bool>(m_addr + 1040);
	}
	struct FVector2D GetBtnSize() {
		return memory.read<struct FVector2D>(m_addr + 1044);
	}
	struct FSlateBrush GetBtnBG_Brush() {
		return memory.read<struct FSlateBrush>(m_addr + 1056);
	}
	struct FText GetInst_ButtonName() {
		return memory.read<struct FText>(m_addr + 1192);
	}
	float GetBtnSize_MinWidth() {
		return memory.read<float>(m_addr + 1216);
	}

private:
	std::uint64_t m_addr = 0;
};


