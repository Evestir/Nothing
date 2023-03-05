#pragma once 
#include <WmfMediaFactory_Structs.h>
 
 
 
class UWmfMediaSettings
{
public:
	UWmfMediaSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetAllowNonStandardCodecs() {
		return memory.read<bool>(m_addr + 40);
	}
	bool GetLowLatency() {
		return memory.read<bool>(m_addr + 41);
	}
	bool GetNativeAudioOut() {
		return memory.read<bool>(m_addr + 42);
	}
	bool GetHardwareAcceleratedVideoDecoding() {
		return memory.read<bool>(m_addr + 43);
	}

private:
	std::uint64_t m_addr = 0;
};


