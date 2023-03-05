#pragma once 
#include <BP_CommonPopupGuide2_Structs.h>
 
 
 
class UBP_CommonPopupGuide2_C
{
public:
	UBP_CommonPopupGuide2_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 632);
	}
	struct UImage GetImage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct UImage(ptr_addr);
	}
	struct USizeBox GetSB_TextSize() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 648);
		return struct USizeBox(ptr_addr);
	}
	struct FText GetInst_DescText() {
		return memory.read<struct FText>(m_addr + 656);
	}
	float GetInst_TextBoxWidth() {
		return memory.read<float>(m_addr + 680);
	}

private:
	std::uint64_t m_addr = 0;
};


