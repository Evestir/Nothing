#pragma once 
#include <BP_LobbyMain_QuickMatch_Btn_GameSelect_Structs.h>
 
 
 
class UBP_LobbyMain_QuickMatch_Btn_GameSelect_C
{
public:
	UBP_LobbyMain_QuickMatch_Btn_GameSelect_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWidgetAnimation GetAnim_Disable() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 608);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UWidgetAnimation GetAnim_Enable() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UImage GetImage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_5() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 632);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_145() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_314() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 648);
		return struct UImage(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


