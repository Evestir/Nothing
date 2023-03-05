#pragma once 
#include <BP_InfoMain_Basic_Structs.h>
 
 
 
class UBP_InfoMain_Basic_C
{
public:
	UBP_InfoMain_Basic_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UBP_InfoMain_Basic_Luzzi_C GetV_BP_InfoMain_Basic_Luzzi() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 608);
		return struct UBP_InfoMain_Basic_Luzzi_C(ptr_addr);
	}
	struct UBP_InfoMain_Basic_Tag_C GetV_BP_InfoMain_Basic_Tag() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UBP_InfoMain_Basic_Tag_C(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


