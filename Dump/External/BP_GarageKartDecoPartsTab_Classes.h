#pragma once 
#include <BP_GarageKartDecoPartsTab_Structs.h>
 
 
 
class UBP_GarageKartDecoPartsTab_C
{
public:
	UBP_GarageKartDecoPartsTab_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UBP_UnderlineTabButton_new_C GetBP_UnderlineTabButton_new() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 760);
		return struct UBP_UnderlineTabButton_new_C(ptr_addr);
	}
	struct UBP_UnderlineTabButton_new_C GetBP_UnderlineTabButton_new_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 768);
		return struct UBP_UnderlineTabButton_new_C(ptr_addr);
	}
	struct UBP_UnderlineTabButton_new_C GetBP_UnderlineTabButton_new_3() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 776);
		return struct UBP_UnderlineTabButton_new_C(ptr_addr);
	}
	struct UBP_UnderlineTabButton_new_C GetBP_UnderlineTabButton_new_4() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 784);
		return struct UBP_UnderlineTabButton_new_C(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


