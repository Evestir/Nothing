#pragma once 
#include <FocusAnimSet_Small_Structs.h>
 
 
 
class UFocusAnimSet_Small_C
{
public:
	UFocusAnimSet_Small_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

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
	struct UImage Getimg_stroke() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 800);
		return struct UImage(ptr_addr);
	}
	struct FMulticastInlineDelegate GetEvent_Show() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 808);
	}
	struct FMulticastInlineDelegate GetEvent_Hide() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 824);
	}
	struct FSlateBrush GetMaterial() {
		return memory.read<struct FSlateBrush>(m_addr + 840);
	}

private:
	std::uint64_t m_addr = 0;
};


