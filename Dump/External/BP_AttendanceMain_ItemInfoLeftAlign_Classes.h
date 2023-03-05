#pragma once 
#include <BP_AttendanceMain_ItemInfoLeftAlign_Structs.h>
 
 
 
class UBP_AttendanceMain_ItemInfoLeftAlign_C
{
public:
	UBP_AttendanceMain_ItemInfoLeftAlign_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UImage GetImage_682() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 608);
		return struct UImage(ptr_addr);
	}
	struct UImage GetImage_935() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UImage(ptr_addr);
	}
	struct UKdTextBlock GetV_EventDescription() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return struct UKdTextBlock(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


