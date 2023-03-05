#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FUdpMockMessage
{
public:
	FUdpMockMessage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<char> GetData() {
		return memory.read<struct TArray<char>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};