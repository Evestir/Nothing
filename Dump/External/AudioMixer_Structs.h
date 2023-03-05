#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FSetBypassSourceEffectChainEntry
{
public:
	FSetBypassSourceEffectChainEntry(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct USoundEffectSourcePresetChain GetPresetChain() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct USoundEffectSourcePresetChain(ptr_addr);
	}
	int32_t GetEntryIndex() {
		return memory.read<int32_t>(m_addr + 16);
	}
	bool GetbBypassed() {
		return memory.read<bool>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FSubmixEffectDynamicProcessorFilterSettings
{
public:
	FSubmixEffectDynamicProcessorFilterSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetbEnabled() {
		return memory.read<char>(m_addr + 0);
	}
	float GetCutoff() {
		return memory.read<float>(m_addr + 4);
	}
	float GetGainDb() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnSynthEnvelopeValue__DelegateSignature
{
public:
	FOnSynthEnvelopeValue__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetEnvelopeValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FPauseClock
{
public:
	FPauseClock(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct UQuartzClockHandle GetClockHandle() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UQuartzClockHandle(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetMillisecondsPerTick
{
public:
	FGetMillisecondsPerTick(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetOutputToBusOnly
{
public:
	FSetOutputToBusOnly(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbInOutputToBusOnly() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsPlaying
{
public:
	FIsPlaying(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FTrimAudioCache
{
public:
	FTrimAudioCache(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInMegabytesToFree() {
		return memory.read<float>(m_addr + 0);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnSoundLoadComplete__DelegateSignature
{
public:
	FOnSoundLoadComplete__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USoundWave GetLoadedSoundWave() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct USoundWave(ptr_addr);
	}
	bool GetWasCancelled() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSubmixEffectDynamicsProcessorSettings
{
public:
	FSubmixEffectDynamicsProcessorSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ESubmixEffectDynamicsProcessorType GetDynamicsProcessorType() {
		return memory.read<enum class ESubmixEffectDynamicsProcessorType>(m_addr + 0);
	}
	enum class ESubmixEffectDynamicsPeakMode GetPeakMode() {
		return memory.read<enum class ESubmixEffectDynamicsPeakMode>(m_addr + 1);
	}
	enum class ESubmixEffectDynamicsChannelLinkMode GetLinkMode() {
		return memory.read<enum class ESubmixEffectDynamicsChannelLinkMode>(m_addr + 2);
	}
	float GetInputGainDb() {
		return memory.read<float>(m_addr + 4);
	}
	float GetThresholdDb() {
		return memory.read<float>(m_addr + 8);
	}
	float GetRatio() {
		return memory.read<float>(m_addr + 12);
	}
	float GetKneeBandwidthDb() {
		return memory.read<float>(m_addr + 16);
	}
	float GetLookAheadMsec() {
		return memory.read<float>(m_addr + 20);
	}
	float GetAttackTimeMsec() {
		return memory.read<float>(m_addr + 24);
	}
	float GetReleaseTimeMsec() {
		return memory.read<float>(m_addr + 28);
	}
	enum class ESubmixEffectDynamicsKeySource GetKeySource() {
		return memory.read<enum class ESubmixEffectDynamicsKeySource>(m_addr + 32);
	}
	struct UAudioBus GetExternalAudioBus() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct UAudioBus(ptr_addr);
	}
	struct USoundSubmix GetExternalSubmix() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct USoundSubmix(ptr_addr);
	}
	char GetbChannelLinked() {
		return memory.read<char>(m_addr + 56);
	}
	char GetbAnalogMode() {
		return memory.read<char>(m_addr + 56);
	}
	char GetbBypass() {
		return memory.read<char>(m_addr + 56);
	}
	char GetbKeyAudition() {
		return memory.read<char>(m_addr + 56);
	}
	float GetKeyGainDb() {
		return memory.read<float>(m_addr + 60);
	}
	float GetOutputGainDb() {
		return memory.read<float>(m_addr + 64);
	}
	struct FSubmixEffectDynamicProcessorFilterSettings GetKeyHighshelf() {
		return memory.read<struct FSubmixEffectDynamicProcessorFilterSettings>(m_addr + 68);
	}
	struct FSubmixEffectDynamicProcessorFilterSettings GetKeyLowshelf() {
		return memory.read<struct FSubmixEffectDynamicProcessorFilterSettings>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};class FSubmixEffectSubmixEQSettings
{
public:
	FSubmixEffectSubmixEQSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FSubmixEffectEQBand> GetEQBands() {
		return memory.read<struct TArray<struct FSubmixEffectEQBand>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetMillisecondsPerTick
{
public:
	FSetMillisecondsPerTick(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct FQuartzQuantizationBoundary GetQuantizationBoundary() {
		return memory.read<struct FQuartzQuantizationBoundary>(m_addr + 8);
	}
	struct FDelegate GetDelegate() {
		return memory.read<struct FDelegate>(m_addr + 20);
	}
	struct UQuartzClockHandle GetClockHandle() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct UQuartzClockHandle(ptr_addr);
	}
	float GetMillisecondsPerTick() {
		return memory.read<float>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetLowPassFilterEnabled
{
public:
	FSetLowPassFilterEnabled(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetInLowPassFilterEnabled() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSubmixEffectEQBand
{
public:
	FSubmixEffectEQBand(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetFrequency() {
		return memory.read<float>(m_addr + 0);
	}
	float GetBandwidth() {
		return memory.read<float>(m_addr + 4);
	}
	float GetGainDb() {
		return memory.read<float>(m_addr + 8);
	}
	char GetbEnabled() {
		return memory.read<char>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FSubmixEffectReverbSettings
{
public:
	FSubmixEffectReverbSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbBypassEarlyReflections() {
		return memory.read<bool>(m_addr + 0);
	}
	float GetReflectionsDelay() {
		return memory.read<float>(m_addr + 4);
	}
	float GetGainHF() {
		return memory.read<float>(m_addr + 8);
	}
	float GetReflectionsGain() {
		return memory.read<float>(m_addr + 12);
	}
	bool GetbBypassLateReflections() {
		return memory.read<bool>(m_addr + 16);
	}
	float GetLateDelay() {
		return memory.read<float>(m_addr + 20);
	}
	float GetDecayTime() {
		return memory.read<float>(m_addr + 24);
	}
	float GetDensity() {
		return memory.read<float>(m_addr + 28);
	}
	float GetDiffusion() {
		return memory.read<float>(m_addr + 32);
	}
	float GetAirAbsorptionGainHF() {
		return memory.read<float>(m_addr + 36);
	}
	float GetDecayHFRatio() {
		return memory.read<float>(m_addr + 40);
	}
	float GetLateGain() {
		return memory.read<float>(m_addr + 44);
	}
	float GetGain() {
		return memory.read<float>(m_addr + 48);
	}
	float GetWetLevel() {
		return memory.read<float>(m_addr + 52);
	}
	float GetDryLevel() {
		return memory.read<float>(m_addr + 56);
	}
	bool GetbBypass() {
		return memory.read<bool>(m_addr + 60);
	}

private:
	std::uint64_t m_addr = 0;
};class FResetTransportQuantized
{
public:
	FResetTransportQuantized(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct FQuartzQuantizationBoundary GetInQuantizationBoundary() {
		return memory.read<struct FQuartzQuantizationBoundary>(m_addr + 8);
	}
	struct FDelegate GetInDelegate() {
		return memory.read<struct FDelegate>(m_addr + 20);
	}
	struct UQuartzClockHandle GetClockHandle() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct UQuartzClockHandle(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetSecondsPerTick
{
public:
	FSetSecondsPerTick(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct FQuartzQuantizationBoundary GetQuantizationBoundary() {
		return memory.read<struct FQuartzQuantizationBoundary>(m_addr + 8);
	}
	struct FDelegate GetDelegate() {
		return memory.read<struct FDelegate>(m_addr + 20);
	}
	struct UQuartzClockHandle GetClockHandle() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct UQuartzClockHandle(ptr_addr);
	}
	float GetSecondsPerTick() {
		return memory.read<float>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetLowPassFilterFrequency
{
public:
	FSetLowPassFilterFrequency(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInLowPassFilterFrequency() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetSubmixSend
{
public:
	FSetSubmixSend(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USoundSubmixBase GetSubmix() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct USoundSubmixBase(ptr_addr);
	}
	float GetSendLevel() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetVolumeMultiplier
{
public:
	FSetVolumeMultiplier(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetVolumeMultiplier() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddMasterSubmixEffect
{
public:
	FAddMasterSubmixEffect(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct USoundEffectSubmixPreset GetSubmixEffectPreset() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct USoundEffectSubmixPreset(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetBeatsPerMinute
{
public:
	FSetBeatsPerMinute(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct FQuartzQuantizationBoundary GetQuantizationBoundary() {
		return memory.read<struct FQuartzQuantizationBoundary>(m_addr + 8);
	}
	struct FDelegate GetDelegate() {
		return memory.read<struct FDelegate>(m_addr + 20);
	}
	struct UQuartzClockHandle GetClockHandle() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct UQuartzClockHandle(ptr_addr);
	}
	float GetBeatsPerMinute() {
		return memory.read<float>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FStartAnalyzingOutput
{
public:
	FStartAnalyzingOutput(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct USoundSubmix GetSubmixToAnalyze() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct USoundSubmix(ptr_addr);
	}
	enum class EFFTSize GetFFTSize() {
		return memory.read<enum class EFFTSize>(m_addr + 16);
	}
	enum class EFFTPeakInterpolationMethod GetInterpolationMethod() {
		return memory.read<enum class EFFTPeakInterpolationMethod>(m_addr + 17);
	}
	enum class EFFTWindowType GetWindowType() {
		return memory.read<enum class EFFTWindowType>(m_addr + 18);
	}
	float GetHopSize() {
		return memory.read<float>(m_addr + 20);
	}
	enum class EAudioSpectrumType GetSpectrumType() {
		return memory.read<enum class EAudioSpectrumType>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FRemoveSubmixEffectAtIndex
{
public:
	FRemoveSubmixEffectAtIndex(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct USoundSubmix GetSoundSubmix() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct USoundSubmix(ptr_addr);
	}
	int32_t GetSubmixChainIndex() {
		return memory.read<int32_t>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddSourceEffectToPresetChain
{
public:
	FAddSourceEffectToPresetChain(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct USoundEffectSourcePresetChain GetPresetChain() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct USoundEffectSourcePresetChain(ptr_addr);
	}
	struct FSourceEffectChainEntry Getentry() {
		return memory.read<struct FSourceEffectChainEntry>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddSubmixEffect
{
public:
	FAddSubmixEffect(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct USoundSubmix GetSoundSubmix() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct USoundSubmix(ptr_addr);
	}
	struct USoundEffectSubmixPreset GetSubmixEffectPreset() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct USoundEffectSubmixPreset(ptr_addr);
	}
	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FClearMasterSubmixEffects
{
public:
	FClearMasterSubmixEffects(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FResumeRecordingOutput
{
public:
	FResumeRecordingOutput(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct USoundSubmix GetSubmixToPause() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct USoundSubmix(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FClearSubmixEffectChainOverride
{
public:
	FClearSubmixEffectChainOverride(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct USoundSubmix GetSoundSubmix() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct USoundSubmix(ptr_addr);
	}
	float GetFadeTimeSec() {
		return memory.read<float>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCurrentTimestamp
{
public:
	FGetCurrentTimestamp(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct FQuartzTransportTimeStamp GetReturnValue() {
		return memory.read<struct FQuartzTransportTimeStamp>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FRemoveSubmixEffect
{
public:
	FRemoveSubmixEffect(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct USoundSubmix GetSoundSubmix() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct USoundSubmix(ptr_addr);
	}
	struct USoundEffectSubmixPreset GetSubmixEffectPreset() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct USoundEffectSubmixPreset(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FClearSubmixEffects
{
public:
	FClearSubmixEffects(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct USoundSubmix GetSoundSubmix() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct USoundSubmix(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetExternalSubmix
{
public:
	FSetExternalSubmix(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USoundSubmix GetSubmix() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct USoundSubmix(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetMagnitudeForFrequencies
{
public:
	FGetMagnitudeForFrequencies(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct TArray<float> GetFrequencies() {
		return memory.read<struct TArray<float>>(m_addr + 8);
	}
	struct TArray<float> GetMagnitudes() {
		return memory.read<struct TArray<float>>(m_addr + 24);
	}
	struct USoundSubmix GetSubmixToAnalyze() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct USoundSubmix(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FStartRecordingOutput
{
public:
	FStartRecordingOutput(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	float GetExpectedDuration() {
		return memory.read<float>(m_addr + 8);
	}
	struct USoundSubmix GetSubmixToRecord() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct USoundSubmix(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsQuartzEnabled
{
public:
	FIsQuartzEnabled(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetNumberOfEntriesInSourceEffectChain
{
public:
	FGetNumberOfEntriesInSourceEffectChain(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct USoundEffectSourcePresetChain GetPresetChain() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct USoundEffectSourcePresetChain(ptr_addr);
	}
	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPhaseForFrequencies
{
public:
	FGetPhaseForFrequencies(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct TArray<float> GetFrequencies() {
		return memory.read<struct TArray<float>>(m_addr + 8);
	}
	struct TArray<float> GetPhases() {
		return memory.read<struct TArray<float>>(m_addr + 24);
	}
	struct USoundSubmix GetSubmixToAnalyze() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct USoundSubmix(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetBeatsPerMinute
{
public:
	FGetBeatsPerMinute(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsAudioBusActive
{
public:
	FIsAudioBusActive(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct UAudioBus GetAudioBus() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UAudioBus(ptr_addr);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FMakeFullSpectrumSpectralAnalysisBandSettings
{
public:
	FMakeFullSpectrumSpectralAnalysisBandSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInNumBands() {
		return memory.read<int32_t>(m_addr + 0);
	}
	float GetInMinimumFrequency() {
		return memory.read<float>(m_addr + 4);
	}
	float GetInMaximumFrequency() {
		return memory.read<float>(m_addr + 8);
	}
	int32_t GetInAttackTimeMsec() {
		return memory.read<int32_t>(m_addr + 12);
	}
	int32_t GetInReleaseTimeMsec() {
		return memory.read<int32_t>(m_addr + 16);
	}
	struct TArray<struct FSoundSubmixSpectralAnalysisBandSettings> GetReturnValue() {
		return memory.read<struct TArray<struct FSoundSubmixSpectralAnalysisBandSettings>>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetThirtySecondNotesPerMinute
{
public:
	FGetThirtySecondNotesPerMinute(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FMakeMusicalSpectralAnalysisBandSettings
{
public:
	FMakeMusicalSpectralAnalysisBandSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInNumSemitones() {
		return memory.read<int32_t>(m_addr + 0);
	}
	enum class EMusicalNoteName GetInStartingMusicalNote() {
		return memory.read<enum class EMusicalNoteName>(m_addr + 4);
	}
	int32_t GetInStartingOctave() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetInAttackTimeMsec() {
		return memory.read<int32_t>(m_addr + 12);
	}
	int32_t GetInReleaseTimeMsec() {
		return memory.read<int32_t>(m_addr + 16);
	}
	struct TArray<struct FSoundSubmixSpectralAnalysisBandSettings> GetReturnValue() {
		return memory.read<struct TArray<struct FSoundSubmixSpectralAnalysisBandSettings>>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FResumeClock
{
public:
	FResumeClock(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct UQuartzClockHandle GetClockHandle() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UQuartzClockHandle(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FMakePresetSpectralAnalysisBandSettings
{
public:
	FMakePresetSpectralAnalysisBandSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EAudioSpectrumBandPresetType GetInBandPresetType() {
		return memory.read<enum class EAudioSpectrumBandPresetType>(m_addr + 0);
	}
	int32_t GetInNumBands() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t GetInAttackTimeMsec() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetInReleaseTimeMsec() {
		return memory.read<int32_t>(m_addr + 12);
	}
	struct TArray<struct FSoundSubmixSpectralAnalysisBandSettings> GetReturnValue() {
		return memory.read<struct TArray<struct FSoundSubmixSpectralAnalysisBandSettings>>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FPauseRecordingOutput
{
public:
	FPauseRecordingOutput(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct USoundSubmix GetSubmixToPause() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct USoundSubmix(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FPrimeSoundCueForPlayback
{
public:
	FPrimeSoundCueForPlayback(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USoundCue GetSoundCue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct USoundCue(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FPrimeSoundForPlayback
{
public:
	FPrimeSoundForPlayback(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USoundWave GetSoundWave() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct USoundWave(ptr_addr);
	}
	struct FDelegate GetOnLoadCompletion() {
		return memory.read<struct FDelegate>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FRemoveSourceEffectFromPresetChain
{
public:
	FRemoveSourceEffectFromPresetChain(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct USoundEffectSourcePresetChain GetPresetChain() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct USoundEffectSourcePresetChain(ptr_addr);
	}
	int32_t GetEntryIndex() {
		return memory.read<int32_t>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSecondsPerTick
{
public:
	FGetSecondsPerTick(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FRemoveMasterSubmixEffect
{
public:
	FRemoveMasterSubmixEffect(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct USoundEffectSubmixPreset GetSubmixEffectPreset() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct USoundEffectSubmixPreset(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FRemoveSubmixEffectPreset
{
public:
	FRemoveSubmixEffectPreset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct USoundSubmix GetSoundSubmix() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct USoundSubmix(ptr_addr);
	}
	struct USoundEffectSubmixPreset GetSubmixEffectPreset() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct USoundEffectSubmixPreset(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FRemoveSubmixEffectPresetAtIndex
{
public:
	FRemoveSubmixEffectPresetAtIndex(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct USoundSubmix GetSoundSubmix() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct USoundSubmix(ptr_addr);
	}
	int32_t GetSubmixChainIndex() {
		return memory.read<int32_t>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FReplaceSoundEffectSubmix
{
public:
	FReplaceSoundEffectSubmix(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct USoundSubmix GetInSoundSubmix() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct USoundSubmix(ptr_addr);
	}
	int32_t GetSubmixChainIndex() {
		return memory.read<int32_t>(m_addr + 16);
	}
	struct USoundEffectSubmixPreset GetSubmixEffectPreset() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct USoundEffectSubmixPreset(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FReplaceSubmixEffect
{
public:
	FReplaceSubmixEffect(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct USoundSubmix GetInSoundSubmix() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct USoundSubmix(ptr_addr);
	}
	int32_t GetSubmixChainIndex() {
		return memory.read<int32_t>(m_addr + 16);
	}
	struct USoundEffectSubmixPreset GetSubmixEffectPreset() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct USoundEffectSubmixPreset(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetSubmixEffectChainOverride
{
public:
	FSetSubmixEffectChainOverride(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct USoundSubmix GetSoundSubmix() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct USoundSubmix(ptr_addr);
	}
	struct TArray<struct USoundEffectSubmixPreset> GetSubmixEffectPresetChain() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct TArray<struct USoundEffectSubmixPreset>(ptr_addr);
	}
	float GetFadeTimeSec() {
		return memory.read<float>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FStartAudioBus
{
public:
	FStartAudioBus(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct UAudioBus GetAudioBus() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UAudioBus(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FStopAnalyzingOutput
{
public:
	FStopAnalyzingOutput(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct USoundSubmix GetSubmixToStopAnalyzing() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct USoundSubmix(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FResetTransport
{
public:
	FResetTransport(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct FDelegate GetInDelegate() {
		return memory.read<struct FDelegate>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FStopAudioBus
{
public:
	FStopAudioBus(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct UAudioBus GetAudioBus() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UAudioBus(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetDurationOfQuantizationTypeInSeconds
{
public:
	FGetDurationOfQuantizationTypeInSeconds(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct FName GetClockName() {
		return memory.read<struct FName>(m_addr + 8);
	}
	enum class EQuartzCommandQuantization GetQuantizationType() {
		return memory.read<enum class EQuartzCommandQuantization>(m_addr + 16);
	}
	float GetMultiplier() {
		return memory.read<float>(m_addr + 20);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FStopRecordingOutput
{
public:
	FStopRecordingOutput(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	enum class EAudioRecordingExportType GetExportType() {
		return memory.read<enum class EAudioRecordingExportType>(m_addr + 8);
	}
	struct FString GetName() {
		return memory.read<struct FString>(m_addr + 16);
	}
	struct FString GetPath() {
		return memory.read<struct FString>(m_addr + 32);
	}
	struct USoundSubmix GetSubmixToRecord() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct USoundSubmix(ptr_addr);
	}
	struct USoundWave GetExistingSoundWaveToOverwrite() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct USoundWave(ptr_addr);
	}
	struct USoundWave GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 64);
		return struct USoundWave(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetGameThreadToAudioRenderThreadAverageLatency
{
public:
	FGetGameThreadToAudioRenderThreadAverageLatency(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetEstimatedRunTime
{
public:
	FGetEstimatedRunTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FDeleteClockByName
{
public:
	FDeleteClockByName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct FName GetClockName() {
		return memory.read<struct FName>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTicksPerSecond
{
public:
	FGetTicksPerSecond(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsClockRunning
{
public:
	FIsClockRunning(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct FName GetClockName() {
		return memory.read<struct FName>(m_addr + 8);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FStartClock
{
public:
	FStartClock(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct UQuartzClockHandle GetClockHandle() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UQuartzClockHandle(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetThirtySecondNotesPerMinute
{
public:
	FSetThirtySecondNotesPerMinute(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct FQuartzQuantizationBoundary GetQuantizationBoundary() {
		return memory.read<struct FQuartzQuantizationBoundary>(m_addr + 8);
	}
	struct FDelegate GetDelegate() {
		return memory.read<struct FDelegate>(m_addr + 20);
	}
	struct UQuartzClockHandle GetClockHandle() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct UQuartzClockHandle(ptr_addr);
	}
	float GetThirtySecondsNotesPerMinute() {
		return memory.read<float>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetTicksPerSecond
{
public:
	FSetTicksPerSecond(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct FQuartzQuantizationBoundary GetQuantizationBoundary() {
		return memory.read<struct FQuartzQuantizationBoundary>(m_addr + 8);
	}
	struct FDelegate GetDelegate() {
		return memory.read<struct FDelegate>(m_addr + 20);
	}
	struct UQuartzClockHandle GetClockHandle() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct UQuartzClockHandle(ptr_addr);
	}
	float GetTicksPerSecond() {
		return memory.read<float>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FStartOtherClock
{
public:
	FStartOtherClock(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct FName GetOtherClockName() {
		return memory.read<struct FName>(m_addr + 8);
	}
	struct FQuartzQuantizationBoundary GetInQuantizationBoundary() {
		return memory.read<struct FQuartzQuantizationBoundary>(m_addr + 16);
	}
	struct FDelegate GetInDelegate() {
		return memory.read<struct FDelegate>(m_addr + 28);
	}

private:
	std::uint64_t m_addr = 0;
};class FStopClock
{
public:
	FStopClock(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	bool GetCancelPendingEvents() {
		return memory.read<bool>(m_addr + 8);
	}
	struct UQuartzClockHandle GetClockHandle() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UQuartzClockHandle(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSubscribeToAllQuantizationEvents
{
public:
	FSubscribeToAllQuantizationEvents(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct FDelegate GetOnQuantizationEvent() {
		return memory.read<struct FDelegate>(m_addr + 8);
	}
	struct UQuartzClockHandle GetClockHandle() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct UQuartzClockHandle(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSubscribeToQuantizationEvent
{
public:
	FSubscribeToQuantizationEvent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	enum class EQuartzCommandQuantization GetInQuantizationBoundary() {
		return memory.read<enum class EQuartzCommandQuantization>(m_addr + 8);
	}
	struct FDelegate GetOnQuantizationEvent() {
		return memory.read<struct FDelegate>(m_addr + 12);
	}
	struct UQuartzClockHandle GetClockHandle() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 32);
		return struct UQuartzClockHandle(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FUnsubscribeFromAllTimeDivisions
{
public:
	FUnsubscribeFromAllTimeDivisions(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct UQuartzClockHandle GetClockHandle() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UQuartzClockHandle(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FUnsubscribeFromTimeDivision
{
public:
	FUnsubscribeFromTimeDivision(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	enum class EQuartzCommandQuantization GetInQuantizationBoundary() {
		return memory.read<enum class EQuartzCommandQuantization>(m_addr + 8);
	}
	struct UQuartzClockHandle GetClockHandle() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UQuartzClockHandle(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetAudioBus
{
public:
	FSetAudioBus(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAudioBus GetAudioBus() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UAudioBus(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetSettings
{
public:
	FSetSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSubmixEffectReverbSettings GetInSettings() {
		return memory.read<struct FSubmixEffectReverbSettings>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetSettingsWithReverbEffect
{
public:
	FSetSettingsWithReverbEffect(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UReverbEffect GetInReverbEffect() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UReverbEffect(ptr_addr);
	}
	float GetWetLevel() {
		return memory.read<float>(m_addr + 8);
	}
	float GetDryLevel() {
		return memory.read<float>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FCreateNewClock
{
public:
	FCreateNewClock(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct FName GetClockName() {
		return memory.read<struct FName>(m_addr + 8);
	}
	struct FQuartzClockSettings GetInSettings() {
		return memory.read<struct FQuartzClockSettings>(m_addr + 16);
	}
	bool GetbOverrideSettingsIfClockExists() {
		return memory.read<bool>(m_addr + 48);
	}
	bool GetbUseAudioEngineClockManager() {
		return memory.read<bool>(m_addr + 49);
	}
	struct UQuartzClockHandle GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct UQuartzClockHandle(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FDeleteClockByHandle
{
public:
	FDeleteClockByHandle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct UQuartzClockHandle GetInClockHandle() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UQuartzClockHandle(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetEstimatedClockRunTime
{
public:
	FGetEstimatedClockRunTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct FName GetInClockName() {
		return memory.read<struct FName>(m_addr + 8);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FDoesClockExist
{
public:
	FDoesClockExist(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct FName GetClockName() {
		return memory.read<struct FName>(m_addr + 8);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAudioRenderThreadToGameThreadAverageLatency
{
public:
	FGetAudioRenderThreadToGameThreadAverageLatency(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAudioRenderThreadToGameThreadMaxLatency
{
public:
	FGetAudioRenderThreadToGameThreadMaxLatency(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAudioRenderThreadToGameThreadMinLatency
{
public:
	FGetAudioRenderThreadToGameThreadMinLatency(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCurrentClockTimestamp
{
public:
	FGetCurrentClockTimestamp(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct FName GetInClockName() {
		return memory.read<struct FName>(m_addr + 8);
	}
	struct FQuartzTransportTimeStamp GetReturnValue() {
		return memory.read<struct FQuartzTransportTimeStamp>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetGameThreadToAudioRenderThreadMaxLatency
{
public:
	FGetGameThreadToAudioRenderThreadMaxLatency(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetGameThreadToAudioRenderThreadMinLatency
{
public:
	FGetGameThreadToAudioRenderThreadMinLatency(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetHandleForClock
{
public:
	FGetHandleForClock(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct FName GetClockName() {
		return memory.read<struct FName>(m_addr + 8);
	}
	struct UQuartzClockHandle GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UQuartzClockHandle(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetRoundTripAverageLatency
{
public:
	FGetRoundTripAverageLatency(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetRoundTripMaxLatency
{
public:
	FGetRoundTripMaxLatency(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetRoundTripMinLatency
{
public:
	FGetRoundTripMinLatency(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};