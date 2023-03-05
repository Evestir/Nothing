#pragma once 
#include <MotoSynth_Structs.h>
 
 
 
class UMotoSynthPreset
{
public:
	UMotoSynthPreset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMotoSynthRuntimeSettings GetSettings() {
		return memory.read<struct FMotoSynthRuntimeSettings>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMotoSynthSource
{
public:
	UMotoSynthSource(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbConvertTo8Bit() {
		return memory.read<bool>(m_addr + 40);
	}
	float GetDownSampleFactor() {
		return memory.read<float>(m_addr + 44);
	}
	struct FRuntimeFloatCurve GetRPMCurve() {
		return memory.read<struct FRuntimeFloatCurve>(m_addr + 48);
	}
	struct TArray<float> GetSourceData() {
		return memory.read<struct TArray<float>>(m_addr + 184);
	}
	struct TArray<int16_t> GetSourceDataPCM() {
		return memory.read<struct TArray<int16_t>>(m_addr + 200);
	}
	int32_t GetSourceSampleRate() {
		return memory.read<int32_t>(m_addr + 216);
	}
	struct TArray<struct FGrainTableEntry> GetGrainTable() {
		return memory.read<struct TArray<struct FGrainTableEntry>>(m_addr + 224);
	}

private:
	std::uint64_t m_addr = 0;
};


class USynthComponentMoto
{
public:
	USynthComponentMoto(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMotoSynthPreset GetMotoSynthPreset() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1744);
		return struct UMotoSynthPreset(ptr_addr);
	}
	float GetRPM() {
		return memory.read<float>(m_addr + 1752);
	}

private:
	std::uint64_t m_addr = 0;
};


