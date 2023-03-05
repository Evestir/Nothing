#pragma once 
#include <BP_AttendanceMain_Structs.h>
 
 
 
class UBP_AttendanceMain_C
{
public:
	UBP_AttendanceMain_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWidgetAnimation GetOnEnter() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 608);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct UBP_ItemViewBack_C GetBP_ItemViewBack() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UBP_ItemViewBack_C(ptr_addr);
	}
	struct UBP_AttendanceMain_ItemInfoLeftAlign_C GetV_BP_AttendanceMain_ItemInfoLeftAlign() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return struct UBP_AttendanceMain_ItemInfoLeftAlign_C(ptr_addr);
	}
	struct UBP_AttendanceMain_ItemInfoRightAlign_C GetV_BP_AttendanceMain_ItemInfoRightAlign() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 632);
		return struct UBP_AttendanceMain_ItemInfoRightAlign_C(ptr_addr);
	}
	struct UImage GetV_SceneCaptureItemImage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct UImage(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


