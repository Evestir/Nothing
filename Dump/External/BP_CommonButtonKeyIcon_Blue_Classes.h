#pragma once 
#include <BP_CommonButtonKeyIcon_Blue_Structs.h>
 
 
 
class UBP_CommonButtonKeyIcon_Blue_C
{
public:
	UBP_CommonButtonKeyIcon_Blue_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 1280);
	}
	struct UKdButtonImage GetBtn_BG() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1288);
		return struct UKdButtonImage(ptr_addr);
	}
	struct UNamedSlot GetNamedSlot_1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1296);
		return struct UNamedSlot(ptr_addr);
	}
	struct USizeBox GetSB_BtnSize() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1304);
		return struct USizeBox(ptr_addr);
	}
	struct UOverlay GetString_PC_KEY() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1312);
		return struct UOverlay(ptr_addr);
	}
	struct UKdTextBlock GetV_ButtonText() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1320);
		return struct UKdTextBlock(ptr_addr);
	}
	bool GetInst_SizeSet() {
		return memory.read<bool>(m_addr + 1328);
	}
	struct FVector2D GetBtnSize() {
		return memory.read<struct FVector2D>(m_addr + 1332);
	}
	struct FSlateBrush GetBtnBG_Brush() {
		return memory.read<struct FSlateBrush>(m_addr + 1344);
	}
	struct FText GetInst_ButtonName() {
		return memory.read<struct FText>(m_addr + 1480);
	}
	float GetBtnSize_MinWidth() {
		return memory.read<float>(m_addr + 1504);
	}

private:
	std::uint64_t m_addr = 0;
};


