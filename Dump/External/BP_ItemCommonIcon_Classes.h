#pragma once 
#include <BP_ItemCommonIcon_Structs.h>
 
 
 
class UBP_ItemCommonIcon_C
{
public:
	UBP_ItemCommonIcon_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWidgetAnimation GetHover() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 888);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UWidgetAnimation GetFocus() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 896);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UWidgetAnimation GetNormal() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 904);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UImage GetImage_682() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 912);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_BG() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 920);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_BG_4() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 928);
		return struct UImage(ptr_addr);
	}
	struct UOverlay GetOV_Bundle_Text() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 936);
		return struct UOverlay(ptr_addr);
	}
	struct UOverlay GetOV_Text() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 944);
		return struct UOverlay(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


