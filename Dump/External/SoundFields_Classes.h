#pragma once 
#include <SoundFields_Structs.h>
 
 
 
class UAmbisonicsEncodingSettings
{
public:
	UAmbisonicsEncodingSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetAmbisonicsOrder() {
		return memory.read<int32_t>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};


