#pragma once 
#include <BP_LicenseMain_Card_Structs.h>
 
 
 
class UBP_LicenseMain_Card_C
{
public:
	UBP_LicenseMain_Card_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 1768);
	}
	struct UWidgetAnimation GetAnim_OnUnHover() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1776);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UWidgetAnimation GetAnim_OnHover() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1784);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UWidgetAnimation GetAnim_UnFocus() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1792);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UWidgetAnimation GetAnim_OnFocus() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1800);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UImage Getimg_GetBG_Checker_bronze() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1808);
		return struct UImage(ptr_addr);
	}
	struct UImage Getimg_GetBG_Checker_bronze_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1816);
		return struct UImage(ptr_addr);
	}
	struct UImage Getimg_GetBG_Checker_Gold() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1824);
		return struct UImage(ptr_addr);
	}
	struct UImage Getimg_GetBG_Checker_Silver() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1832);
		return struct UImage(ptr_addr);
	}
	struct UImage Getimg_GetBG_Solid_bronze() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1840);
		return struct UImage(ptr_addr);
	}
	struct UImage Getimg_GetBG_Solid_bronze_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1848);
		return struct UImage(ptr_addr);
	}
	struct UImage Getimg_GetBG_Solid_Gold() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1856);
		return struct UImage(ptr_addr);
	}
	struct UImage Getimg_GetBG_Solid_Silver() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1864);
		return struct UImage(ptr_addr);
	}
	struct UImage Getimg_Line_Main_Pro() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1872);
		return struct UImage(ptr_addr);
	}
	struct UInvalidationBox GetInvalidationBox_1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1880);
		return struct UInvalidationBox(ptr_addr);
	}
	struct UOverlay GetOV_Emblem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1888);
		return struct UOverlay(ptr_addr);
	}
	struct UKdTextBlock Gettxt_NotGain() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1896);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetV_DateText() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1904);
		return struct UKdTextBlock(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


