#pragma once 
#include <BP_PlatformIcon_Structs.h>
 
 
 
class UBP_PlatformIcon_C
{
public:
	UBP_PlatformIcon_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UImage Getbg() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 648);
		return struct UImage(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


