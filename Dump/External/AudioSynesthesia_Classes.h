#pragma once 
#include <AudioSynesthesia_Structs.h>
 
 
 
class UAudioSynesthesiaNRTSettings
{
public:
	UAudioSynesthesiaNRTSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAudioSynesthesiaNRT
{
public:
	UAudioSynesthesiaNRT(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UOnsetNRTSettings
{
public:
	UOnsetNRTSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbDownmixToMono() {
		return memory.read<bool>(m_addr + 40);
	}
	float GetGranularityInSeconds() {
		return memory.read<float>(m_addr + 44);
	}
	float GetSensitivity() {
		return memory.read<float>(m_addr + 48);
	}
	float GetMinimumFrequency() {
		return memory.read<float>(m_addr + 52);
	}
	float GetMaximumFrequency() {
		return memory.read<float>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};


class ULoudnessNRT
{
public:
	ULoudnessNRT(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct ULoudnessNRTSettings GetSettings() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 120);
		return struct ULoudnessNRTSettings(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UConstantQNRTSettings
{
public:
	UConstantQNRTSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetStartingFrequency() {
		return memory.read<float>(m_addr + 40);
	}
	int32_t GetNumBands() {
		return memory.read<int32_t>(m_addr + 44);
	}
	float GetNumBandsPerOctave() {
		return memory.read<float>(m_addr + 48);
	}
	float GetAnalysisPeriod() {
		return memory.read<float>(m_addr + 52);
	}
	bool GetbDownmixToMono() {
		return memory.read<bool>(m_addr + 56);
	}
	enum class EConstantQFFTSizeEnum GetFFTSize() {
		return memory.read<enum class EConstantQFFTSizeEnum>(m_addr + 57);
	}
	enum class EFFTWindowType GetWindowType() {
		return memory.read<enum class EFFTWindowType>(m_addr + 58);
	}
	enum class EAudioSpectrumType GetSpectrumType() {
		return memory.read<enum class EAudioSpectrumType>(m_addr + 59);
	}
	float GetBandWidthStretch() {
		return memory.read<float>(m_addr + 60);
	}
	enum class EConstantQNormalizationEnum GetCQTNormalization() {
		return memory.read<enum class EConstantQNormalizationEnum>(m_addr + 64);
	}
	float GetNoiseFloorDb() {
		return memory.read<float>(m_addr + 68);
	}

private:
	std::uint64_t m_addr = 0;
};


class UOnsetNRT
{
public:
	UOnsetNRT(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UOnsetNRTSettings GetSettings() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 120);
		return struct UOnsetNRTSettings(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class ULoudnessNRTSettings
{
public:
	ULoudnessNRTSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetAnalysisPeriod() {
		return memory.read<float>(m_addr + 40);
	}
	float GetMinimumFrequency() {
		return memory.read<float>(m_addr + 44);
	}
	float GetMaximumFrequency() {
		return memory.read<float>(m_addr + 48);
	}
	enum class ELoudnessNRTCurveTypeEnum GetCurveType() {
		return memory.read<enum class ELoudnessNRTCurveTypeEnum>(m_addr + 52);
	}
	float GetNoiseFloorDb() {
		return memory.read<float>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};


class UConstantQNRT
{
public:
	UConstantQNRT(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UConstantQNRTSettings GetSettings() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 120);
		return struct UConstantQNRTSettings(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


