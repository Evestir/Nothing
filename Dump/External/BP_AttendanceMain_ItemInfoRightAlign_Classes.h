#pragma once 
#include <BP_AttendanceMain_ItemInfoRightAlign_Structs.h>
 
 
 
class UBP_AttendanceMain_ItemInfoRightAlign_C
{
public:
	UBP_AttendanceMain_ItemInfoRightAlign_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UKdTextBlock GetV_Item_Association() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 608);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetV_Item_Name() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UKdTextBlock(ptr_addr);
	}
	struct UKdTextBlock GetV_KdTextBlock_Desc() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return struct UKdTextBlock(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


