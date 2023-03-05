#pragma once 
#include <BP_CommonPopupGuide_Structs.h>
 
 
 
class UBP_CommonPopupGuide_C
{
public:
	UBP_CommonPopupGuide_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 632);
	}
	struct UImage GetImage_131() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_325() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 648);
		return struct UImage(ptr_addr);
	}
	struct USizeBox GetSB_TextSize() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 656);
		return struct USizeBox(ptr_addr);
	}
	struct FText GetInst_DescText() {
		return memory.read<struct FText>(m_addr + 664);
	}
	float GetInst_TextBoxWidth() {
		return memory.read<float>(m_addr + 688);
	}

private:
	std::uint64_t m_addr = 0;
};


