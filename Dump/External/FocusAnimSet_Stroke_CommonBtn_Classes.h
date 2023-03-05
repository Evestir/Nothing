#pragma once 
#include <FocusAnimSet_Stroke_CommonBtn_Structs.h>
 
 
 
class UFocusAnimSet_Stroke_CommonBtn_C
{
public:
	UFocusAnimSet_Stroke_CommonBtn_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 776);
	}
	struct UWidgetAnimation GetOn_Unfocus() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 784);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UWidgetAnimation GetOn_Focus() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 792);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UBP_KdSoundWidget_C GetBP_KdSoundWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 800);
		return struct UBP_KdSoundWidget_C(ptr_addr);
	}
	struct UImage Getimg_stroke() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 808);
		return struct UImage(ptr_addr);
	}
	struct UOverlay GetOverlay_63() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 816);
		return struct UOverlay(ptr_addr);
	}
	struct FSlateBrush GetInst_ImgStroke() {
		return memory.read<struct FSlateBrush>(m_addr + 824);
	}

private:
	std::uint64_t m_addr = 0;
};


