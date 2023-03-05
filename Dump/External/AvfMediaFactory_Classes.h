#pragma once 
#include <AvfMediaFactory_Structs.h>
 
 
 
class UAvfMediaSettings
{
public:
	UAvfMediaSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetNativeAudioOut() {
		return memory.read<bool>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};


