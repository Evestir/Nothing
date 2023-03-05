#pragma once 
#include <BP_LobbyMain_QuickMatch_Persons_Template_Structs.h>
 
 
 
class UBP_LobbyMain_QuickMatch_Persons_Template_C
{
public:
	UBP_LobbyMain_QuickMatch_Persons_Template_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 608);
	}
	struct UImage GetImage_Back() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UImage(ptr_addr);
	}
	struct UImage Getimage_disable() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return struct UImage(ptr_addr);
	}
	struct UImage Getimage_enable() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 632);
		return struct UImage(ptr_addr);
	}
	struct FSlateBrush Getdisable_brush() {
		return memory.read<struct FSlateBrush>(m_addr + 640);
	}
	struct FSlateBrush Getenable_brush() {
		return memory.read<struct FSlateBrush>(m_addr + 776);
	}
	struct FSlateBrush Getback_brush() {
		return memory.read<struct FSlateBrush>(m_addr + 912);
	}

private:
	std::uint64_t m_addr = 0;
};


