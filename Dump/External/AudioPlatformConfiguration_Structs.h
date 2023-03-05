#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FPlatformRuntimeAudioCompressionOverrides
{
public:
	FPlatformRuntimeAudioCompressionOverrides(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbOverrideCompressionTimes() {
		return memory.read<bool>(m_addr + 0);
	}
	float GetDurationThreshold() {
		return memory.read<float>(m_addr + 4);
	}
	int32_t GetMaxNumRandomBranches() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetSoundCueQualityIndex() {
		return memory.read<int32_t>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};