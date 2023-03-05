#pragma once 
#include <BP_LobbyMain_Challenge_EventBox_Structs.h>
 
 
 
class UBP_LobbyMain_Challenge_EventBox_C
{
public:
	UBP_LobbyMain_Challenge_EventBox_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 608);
	}
	struct UWidgetAnimation GetAnim_GetComplete() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UImage GetImage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 632);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_135() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct UImage(ptr_addr);
	}
	struct UOverlay GetOV_Eff() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 648);
		return struct UOverlay(ptr_addr);
	}
	struct UBP_ButtonTemplate_C GetV_ButtonTemplate() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 656);
		return struct UBP_ButtonTemplate_C(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


