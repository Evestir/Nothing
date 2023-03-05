#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FNetAnalyticsDataConfig
{
public:
	FNetAnalyticsDataConfig(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetDataName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	bool GetbEnabled() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};