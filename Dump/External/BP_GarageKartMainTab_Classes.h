#pragma once 
#include <BP_GarageKartMainTab_Structs.h>
 
 
 
class UBP_GarageKartMainTab_C
{
public:
	UBP_GarageKartMainTab_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

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
	struct UBP_GarageMainTabBtn_C GetBP_GarageMainTabBtn_3() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 776);
		return struct UBP_GarageMainTabBtn_C(ptr_addr);
	}
	struct UBP_GarageMainTabBtn_C GetBP_GarageMainTabBtn_4() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 784);
		return struct UBP_GarageMainTabBtn_C(ptr_addr);
	}
	struct UBP_GarageMainTabBtn_C GetBP_GarageMainTabBtn_5() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 792);
		return struct UBP_GarageMainTabBtn_C(ptr_addr);
	}
	struct UBP_GarageMainTabBtn_C GetV_BP_GarageMainTabBtn_Body() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 800);
		return struct UBP_GarageMainTabBtn_C(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


