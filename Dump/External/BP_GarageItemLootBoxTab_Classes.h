#pragma once 
#include <BP_GarageItemLootBoxTab_Structs.h>
 
 
 
class UBP_GarageItemLootBoxTab_C
{
public:
	UBP_GarageItemLootBoxTab_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 760);
	}
	struct UBP_UnderlineTabButton_new_C GetBP_UnderlineTabButton_new() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 768);
		return struct UBP_UnderlineTabButton_new_C(ptr_addr);
	}
	struct UHorizontalBox GetBtn_Container_outer() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 776);
		return struct UHorizontalBox(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


