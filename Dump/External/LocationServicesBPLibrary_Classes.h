#pragma once 
#include <LocationServicesBPLibrary_Structs.h>
 
 
 
class ULocationServices
{
public:
	ULocationServices(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class ULocationServicesImpl
{
public:
	ULocationServicesImpl(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate GetOnLocationChanged() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};


