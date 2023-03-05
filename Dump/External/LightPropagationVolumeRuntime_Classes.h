#pragma once 
#include <LightPropagationVolumeRuntime_Structs.h>
 
 
 
class ULightPropagationVolumeBlendable
{
public:
	ULightPropagationVolumeBlendable(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLightPropagationVolumeSettings GetSettings() {
		return memory.read<struct FLightPropagationVolumeSettings>(m_addr + 48);
	}
	float GetBlendWeight() {
		return memory.read<float>(m_addr + 112);
	}

private:
	std::uint64_t m_addr = 0;
};


