#pragma once 
#include <NetCore_Structs.h>
 
 
 
class UNetAnalyticsAggregatorConfig
{
public:
	UNetAnalyticsAggregatorConfig(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FNetAnalyticsDataConfig> GetNetAnalyticsData() {
		return memory.read<struct TArray<struct FNetAnalyticsDataConfig>>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};


