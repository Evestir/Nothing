#pragma once 
#include <BP_GarageCharacterMainTab_Structs.h>
 
 
 
class UBP_GarageCharacterMainTab_C
{
public:
	UBP_GarageCharacterMainTab_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UBP_GarageMainTabBtn_C GetBP_GarageMainTabBtn() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 760);
		return struct UBP_GarageMainTabBtn_C(ptr_addr);
	}
	struct UBP_GarageMainTabBtn_C GetBP_GarageMainTabBtn_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 768);
		return struct UBP_GarageMainTabBtn_C(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


