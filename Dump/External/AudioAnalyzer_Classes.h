#pragma once 
#include <AudioAnalyzer_Structs.h>
 
 
 
class UAudioAnalyzerAsset
{
public:
	UAudioAnalyzerAsset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAudioAnalyzerNRTSettings
{
public:
	UAudioAnalyzerNRTSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAudioAnalyzerNRT
{
public:
	UAudioAnalyzerNRT(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USoundWave GetSound() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct USoundWave(ptr_addr);
	}
	float GetDurationInSeconds() {
		return memory.read<float>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};


