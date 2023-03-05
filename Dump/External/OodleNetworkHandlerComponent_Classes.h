#pragma once 
#include <OodleNetworkHandlerComponent_Structs.h>
 
 
 
class UOodleNetworkTrainerCommandlet
{
public:
	UOodleNetworkTrainerCommandlet(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbCompressionTest() {
		return memory.read<bool>(m_addr + 128);
	}
	int32_t GetHashTableSize() {
		return memory.read<int32_t>(m_addr + 132);
	}
	int32_t GetDictionarySize() {
		return memory.read<int32_t>(m_addr + 136);
	}
	int32_t GetDictionaryTrials() {
		return memory.read<int32_t>(m_addr + 140);
	}
	int32_t GetTrialRandomness() {
		return memory.read<int32_t>(m_addr + 144);
	}
	int32_t GetTrialGenerations() {
		return memory.read<int32_t>(m_addr + 148);
	}
	bool GetbNoTrials() {
		return memory.read<bool>(m_addr + 152);
	}

private:
	std::uint64_t m_addr = 0;
};


