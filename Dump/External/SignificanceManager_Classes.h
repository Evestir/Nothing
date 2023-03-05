#pragma once 
#include <SignificanceManager_Structs.h>
 
 
 
class USignificanceManager
{
public:
	USignificanceManager(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSoftClassPath GetSignificanceManagerClassName() {
		return memory.read<struct FSoftClassPath>(m_addr + 264);
	}

private:
	std::uint64_t m_addr = 0;
};


