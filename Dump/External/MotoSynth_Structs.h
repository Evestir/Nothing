#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FMotoSynthRuntimeSettings
{
public:
	FMotoSynthRuntimeSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbSynthToneEnabled() {
		return memory.read<bool>(m_addr + 0);
	}
	float GetSynthToneVolume() {
		return memory.read<float>(m_addr + 4);
	}
	float GetSynthToneFilterFrequency() {
		return memory.read<float>(m_addr + 8);
	}
	int32_t GetSynthOctaveShift() {
		return memory.read<int32_t>(m_addr + 12);
	}
	bool GetbGranularEngineEnabled() {
		return memory.read<bool>(m_addr + 16);
	}
	float GetGranularEngineVolume() {
		return memory.read<float>(m_addr + 20);
	}
	float GetGranularEnginePitchScale() {
		return memory.read<float>(m_addr + 24);
	}
	int32_t GetNumSamplesToCrossfadeBetweenGrains() {
		return memory.read<int32_t>(m_addr + 28);
	}
	int32_t GetNumGrainTableEntriesPerGrain() {
		return memory.read<int32_t>(m_addr + 32);
	}
	int32_t GetGrainTableRandomOffsetForConstantRPMs() {
		return memory.read<int32_t>(m_addr + 36);
	}
	int32_t GetGrainCrossfadeSamplesForConstantRPMs() {
		return memory.read<int32_t>(m_addr + 40);
	}
	struct UMotoSynthSource GetAccelerationSource() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UMotoSynthSource(ptr_addr);
	}
	struct UMotoSynthSource GetDecelerationSource() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct UMotoSynthSource(ptr_addr);
	}
	bool GetbStereoWidenerEnabled() {
		return memory.read<bool>(m_addr + 64);
	}
	float GetStereoDelayMsec() {
		return memory.read<float>(m_addr + 68);
	}
	float GetStereoFeedback() {
		return memory.read<float>(m_addr + 72);
	}
	float GetStereoWidenerWetlevel() {
		return memory.read<float>(m_addr + 76);
	}
	float GetStereoWidenerDryLevel() {
		return memory.read<float>(m_addr + 80);
	}
	float GetStereoWidenerDelayRatio() {
		return memory.read<float>(m_addr + 84);
	}
	bool GetbStereoWidenerFilterEnabled() {
		return memory.read<bool>(m_addr + 88);
	}
	float GetStereoWidenerFilterFrequency() {
		return memory.read<float>(m_addr + 92);
	}
	float GetStereoWidenerFilterQ() {
		return memory.read<float>(m_addr + 96);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetRPM
{
public:
	FSetRPM(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInRPM() {
		return memory.read<float>(m_addr + 0);
	}
	float GetInTimeSec() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FGrainTableEntry
{
public:
	FGrainTableEntry(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetSampleIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	float GetRPM() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetRPMRange
{
public:
	FGetRPMRange(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetOutMinRPM() {
		return memory.read<float>(m_addr + 0);
	}
	float GetOutMaxRPM() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetSettings
{
public:
	FSetSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMotoSynthRuntimeSettings GetInSettings() {
		return memory.read<struct FMotoSynthRuntimeSettings>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsEnabled
{
public:
	FIsEnabled(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};