#pragma once 
#include <UObjectPlugin_Structs.h>
 
 
 
class UMyPluginObject
{
public:
	UMyPluginObject(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMyPluginStruct GetMyStruct() {
		return memory.read<struct FMyPluginStruct>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};


