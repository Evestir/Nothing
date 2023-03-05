#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FSetFilterQ
{
public:
	FSetFilterQ(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInQ() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FModularSynthPresetBankEntry
{
public:
	FModularSynthPresetBankEntry(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetPresetName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FModularSynthPreset GetPreset() {
		return memory.read<struct FModularSynthPreset>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnFloatValueChangedEvent__DelegateSignature
{
public:
	FOnFloatValueChangedEvent__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSourceEffectFilterAudioBusModulationSettings
{
public:
	FSourceEffectFilterAudioBusModulationSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAudioBus GetAudioBus() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UAudioBus(ptr_addr);
	}
	int32_t GetEnvelopeFollowerAttackTimeMsec() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetEnvelopeFollowerReleaseTimeMsec() {
		return memory.read<int32_t>(m_addr + 12);
	}
	float GetEnvelopeGainMultiplier() {
		return memory.read<float>(m_addr + 16);
	}
	enum class ESourceEffectFilterParam GetFilterParam() {
		return memory.read<enum class ESourceEffectFilterParam>(m_addr + 20);
	}
	float GetMinFrequencyModulation() {
		return memory.read<float>(m_addr + 24);
	}
	float GetMaxFrequencyModulation() {
		return memory.read<float>(m_addr + 28);
	}
	float GetMinResonanceModulation() {
		return memory.read<float>(m_addr + 32);
	}
	float GetMaxResonanceModulation() {
		return memory.read<float>(m_addr + 36);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnEnvelopeFollowerUpdate__DelegateSignature
{
public:
	FOnEnvelopeFollowerUpdate__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetEnvelopeValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetEnablePolyphony
{
public:
	FSetEnablePolyphony(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbEnablePolyphony() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetEnableLegato
{
public:
	FSetEnableLegato(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetLegatoEnabled() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetGrainsPerSecond
{
public:
	FSetGrainsPerSecond(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInGrainsPerSecond() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnFloatValueChangedEventSynth2D__DelegateSignature
{
public:
	FOnFloatValueChangedEventSynth2D__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnTableAltered__DelegateSignature
{
public:
	FOnTableAltered__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetTableIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetSpreadModulator
{
public:
	FSetSpreadModulator(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USoundModulatorBase GetModulator() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct USoundModulatorBase(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FEpicSynth1Patch
{
public:
	FEpicSynth1Patch(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ESynth1PatchSource GetPatchSource() {
		return memory.read<enum class ESynth1PatchSource>(m_addr + 0);
	}
	struct TArray<struct FSynth1PatchCable> GetPatchCables() {
		return memory.read<struct TArray<struct FSynth1PatchCable>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnSamplePlaybackProgress__DelegateSignature
{
public:
	FOnSamplePlaybackProgress__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetProgressPercent() {
		return memory.read<float>(m_addr + 0);
	}
	float GetProgressTimeSeconds() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetAttackTime
{
public:
	FSetAttackTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetAttackTimeMsec() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FNoteOff
{
public:
	FNoteOff(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInMidiNote() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetInterpolationTime
{
public:
	FSetInterpolationTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetTime() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FModularSynthPreset
{
public:
	FModularSynthPreset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetbEnablePolyphony() {
		return memory.read<char>(m_addr + 8);
	}
	enum class ESynth1OscType GetOsc1Type() {
		return memory.read<enum class ESynth1OscType>(m_addr + 12);
	}
	float GetOsc1Gain() {
		return memory.read<float>(m_addr + 16);
	}
	float GetOsc1Octave() {
		return memory.read<float>(m_addr + 20);
	}
	float GetOsc1Semitones() {
		return memory.read<float>(m_addr + 24);
	}
	float GetOsc1Cents() {
		return memory.read<float>(m_addr + 28);
	}
	float GetOsc1PulseWidth() {
		return memory.read<float>(m_addr + 32);
	}
	enum class ESynth1OscType GetOsc2Type() {
		return memory.read<enum class ESynth1OscType>(m_addr + 36);
	}
	float GetOsc2Gain() {
		return memory.read<float>(m_addr + 40);
	}
	float GetOsc2Octave() {
		return memory.read<float>(m_addr + 44);
	}
	float GetOsc2Semitones() {
		return memory.read<float>(m_addr + 48);
	}
	float GetOsc2Cents() {
		return memory.read<float>(m_addr + 52);
	}
	float GetOsc2PulseWidth() {
		return memory.read<float>(m_addr + 56);
	}
	float GetPortamento() {
		return memory.read<float>(m_addr + 60);
	}
	char GetbEnableUnison() {
		return memory.read<char>(m_addr + 64);
	}
	char GetbEnableOscillatorSync() {
		return memory.read<char>(m_addr + 64);
	}
	float GetSpread() {
		return memory.read<float>(m_addr + 68);
	}
	float GetPan() {
		return memory.read<float>(m_addr + 72);
	}
	float GetLFO1Frequency() {
		return memory.read<float>(m_addr + 76);
	}
	float GetLFO1Gain() {
		return memory.read<float>(m_addr + 80);
	}
	enum class ESynthLFOType GetLFO1Type() {
		return memory.read<enum class ESynthLFOType>(m_addr + 84);
	}
	enum class ESynthLFOMode GetLFO1Mode() {
		return memory.read<enum class ESynthLFOMode>(m_addr + 85);
	}
	enum class ESynthLFOPatchType GetLFO1PatchType() {
		return memory.read<enum class ESynthLFOPatchType>(m_addr + 86);
	}
	float GetLFO2Frequency() {
		return memory.read<float>(m_addr + 88);
	}
	float GetLFO2Gain() {
		return memory.read<float>(m_addr + 92);
	}
	enum class ESynthLFOType GetLFO2Type() {
		return memory.read<enum class ESynthLFOType>(m_addr + 96);
	}
	enum class ESynthLFOMode GetLFO2Mode() {
		return memory.read<enum class ESynthLFOMode>(m_addr + 97);
	}
	enum class ESynthLFOPatchType GetLFO2PatchType() {
		return memory.read<enum class ESynthLFOPatchType>(m_addr + 98);
	}
	float GetGainDb() {
		return memory.read<float>(m_addr + 100);
	}
	float GetAttackTime() {
		return memory.read<float>(m_addr + 104);
	}
	float GetDecayTime() {
		return memory.read<float>(m_addr + 108);
	}
	float GetSustainGain() {
		return memory.read<float>(m_addr + 112);
	}
	float GetReleaseTime() {
		return memory.read<float>(m_addr + 116);
	}
	enum class ESynthModEnvPatch GetModEnvPatchType() {
		return memory.read<enum class ESynthModEnvPatch>(m_addr + 120);
	}
	enum class ESynthModEnvBiasPatch GetModEnvBiasPatchType() {
		return memory.read<enum class ESynthModEnvBiasPatch>(m_addr + 121);
	}
	char GetbInvertModulationEnvelope() {
		return memory.read<char>(m_addr + 124);
	}
	char GetbInvertModulationEnvelopeBias() {
		return memory.read<char>(m_addr + 124);
	}
	float GetModulationEnvelopeDepth() {
		return memory.read<float>(m_addr + 128);
	}
	float GetModulationEnvelopeAttackTime() {
		return memory.read<float>(m_addr + 132);
	}
	float GetModulationEnvelopeDecayTime() {
		return memory.read<float>(m_addr + 136);
	}
	float GetModulationEnvelopeSustainGain() {
		return memory.read<float>(m_addr + 140);
	}
	float GetModulationEnvelopeReleaseTime() {
		return memory.read<float>(m_addr + 144);
	}
	char GetbLegato() {
		return memory.read<char>(m_addr + 148);
	}
	char GetbRetrigger() {
		return memory.read<char>(m_addr + 148);
	}
	float GetFilterFrequency() {
		return memory.read<float>(m_addr + 152);
	}
	float GetFilterQ() {
		return memory.read<float>(m_addr + 156);
	}
	enum class ESynthFilterType GetFilterType() {
		return memory.read<enum class ESynthFilterType>(m_addr + 160);
	}
	enum class ESynthFilterAlgorithm GetFilterAlgorithm() {
		return memory.read<enum class ESynthFilterAlgorithm>(m_addr + 161);
	}
	char GetbStereoDelayEnabled() {
		return memory.read<char>(m_addr + 164);
	}
	enum class ESynthStereoDelayMode GetStereoDelayMode() {
		return memory.read<enum class ESynthStereoDelayMode>(m_addr + 168);
	}
	float GetStereoDelayTime() {
		return memory.read<float>(m_addr + 172);
	}
	float GetStereoDelayFeedback() {
		return memory.read<float>(m_addr + 176);
	}
	float GetStereoDelayWetlevel() {
		return memory.read<float>(m_addr + 180);
	}
	float GetStereoDelayRatio() {
		return memory.read<float>(m_addr + 184);
	}
	char GetbChorusEnabled() {
		return memory.read<char>(m_addr + 188);
	}
	float GetChorusDepth() {
		return memory.read<float>(m_addr + 192);
	}
	float GetChorusFeedback() {
		return memory.read<float>(m_addr + 196);
	}
	float GetChorusFrequency() {
		return memory.read<float>(m_addr + 200);
	}
	struct TArray<struct FEpicSynth1Patch> GetPatches() {
		return memory.read<struct TArray<struct FEpicSynth1Patch>>(m_addr + 208);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCurrentPlaybackProgressPercent
{
public:
	FGetCurrentPlaybackProgressPercent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSynth1PatchCable
{
public:
	FSynth1PatchCable(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetDepth() {
		return memory.read<float>(m_addr + 0);
	}
	enum class ESynth1PatchDestination GetDestination() {
		return memory.read<enum class ESynth1PatchDestination>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetLFOFrequency
{
public:
	FSetLFOFrequency(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetLFOIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	float GetFrequencyHz() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetDepth
{
public:
	FSetDepth(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetDepth() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddModularSynthPresetToBankAsset
{
public:
	FAddModularSynthPresetToBankAsset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UModularSynthPresetBank GetInBank() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UModularSynthPresetBank(ptr_addr);
	}
	struct FModularSynthPreset GetPreset() {
		return memory.read<struct FModularSynthPreset>(m_addr + 8);
	}
	struct FString GetPresetName() {
		return memory.read<struct FString>(m_addr + 232);
	}

private:
	std::uint64_t m_addr = 0;
};class FPatchId
{
public:
	FPatchId(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetID() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSourceEffectBitCrusherSettings
{
public:
	FSourceEffectBitCrusherSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetCrushedSampleRate() {
		return memory.read<float>(m_addr + 0);
	}
	struct FSoundModulationDestinationSettings GetSampleRateModulation() {
		return memory.read<struct FSoundModulationDestinationSettings>(m_addr + 8);
	}
	float GetCrushedBits() {
		return memory.read<float>(m_addr + 24);
	}
	struct FSoundModulationDestinationSettings GetBitModulation() {
		return memory.read<struct FSoundModulationDestinationSettings>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FSourceEffectBitCrusherBaseSettings
{
public:
	FSourceEffectBitCrusherBaseSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetSampleRate() {
		return memory.read<float>(m_addr + 0);
	}
	float GetBitDepth() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FSourceEffectChorusSettings
{
public:
	FSourceEffectChorusSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetDepth() {
		return memory.read<float>(m_addr + 0);
	}
	float GetFrequency() {
		return memory.read<float>(m_addr + 4);
	}
	float GetFeedback() {
		return memory.read<float>(m_addr + 8);
	}
	float GetWetLevel() {
		return memory.read<float>(m_addr + 12);
	}
	float GetDryLevel() {
		return memory.read<float>(m_addr + 16);
	}
	float GetSpread() {
		return memory.read<float>(m_addr + 20);
	}
	struct FSoundModulationDestinationSettings GetDepthModulation() {
		return memory.read<struct FSoundModulationDestinationSettings>(m_addr + 24);
	}
	struct FSoundModulationDestinationSettings GetFrequencyModulation() {
		return memory.read<struct FSoundModulationDestinationSettings>(m_addr + 40);
	}
	struct FSoundModulationDestinationSettings GetFeedbackModulation() {
		return memory.read<struct FSoundModulationDestinationSettings>(m_addr + 56);
	}
	struct FSoundModulationDestinationSettings GetWetModulation() {
		return memory.read<struct FSoundModulationDestinationSettings>(m_addr + 72);
	}
	struct FSoundModulationDestinationSettings GetDryModulation() {
		return memory.read<struct FSoundModulationDestinationSettings>(m_addr + 88);
	}
	struct FSoundModulationDestinationSettings GetSpreadModulation() {
		return memory.read<struct FSoundModulationDestinationSettings>(m_addr + 104);
	}

private:
	std::uint64_t m_addr = 0;
};class FSourceEffectChorusBaseSettings
{
public:
	FSourceEffectChorusBaseSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetDepth() {
		return memory.read<float>(m_addr + 0);
	}
	float GetFrequency() {
		return memory.read<float>(m_addr + 4);
	}
	float GetFeedback() {
		return memory.read<float>(m_addr + 8);
	}
	float GetWetLevel() {
		return memory.read<float>(m_addr + 12);
	}
	float GetDryLevel() {
		return memory.read<float>(m_addr + 16);
	}
	float GetSpread() {
		return memory.read<float>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetPositionEnvelopeReleaseTime
{
public:
	FSetPositionEnvelopeReleaseTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInReleaseTimeMsec() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSourceEffectDynamicsProcessorSettings
{
public:
	FSourceEffectDynamicsProcessorSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ESourceEffectDynamicsProcessorType GetDynamicsProcessorType() {
		return memory.read<enum class ESourceEffectDynamicsProcessorType>(m_addr + 0);
	}
	enum class ESourceEffectDynamicsPeakMode GetPeakMode() {
		return memory.read<enum class ESourceEffectDynamicsPeakMode>(m_addr + 1);
	}
	float GetLookAheadMsec() {
		return memory.read<float>(m_addr + 4);
	}
	float GetAttackTimeMsec() {
		return memory.read<float>(m_addr + 8);
	}
	float GetReleaseTimeMsec() {
		return memory.read<float>(m_addr + 12);
	}
	float GetThresholdDb() {
		return memory.read<float>(m_addr + 16);
	}
	float GetRatio() {
		return memory.read<float>(m_addr + 20);
	}
	float GetKneeBandwidthDb() {
		return memory.read<float>(m_addr + 24);
	}
	float GetInputGainDb() {
		return memory.read<float>(m_addr + 28);
	}
	float GetOutputGainDb() {
		return memory.read<float>(m_addr + 32);
	}
	char GetbStereoLinked() {
		return memory.read<char>(m_addr + 36);
	}
	char GetbAnalogMode() {
		return memory.read<char>(m_addr + 36);
	}

private:
	std::uint64_t m_addr = 0;
};class FSourceEffectEnvelopeFollowerSettings
{
public:
	FSourceEffectEnvelopeFollowerSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetAttackTime() {
		return memory.read<float>(m_addr + 0);
	}
	float GetReleaseTime() {
		return memory.read<float>(m_addr + 4);
	}
	enum class EEnvelopeFollowerPeakMode GetPeakMode() {
		return memory.read<enum class EEnvelopeFollowerPeakMode>(m_addr + 8);
	}
	bool GetbIsAnalogMode() {
		return memory.read<bool>(m_addr + 9);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetDecayTime
{
public:
	FSetDecayTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetDecayTimeMsec() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetEnablePatch
{
public:
	FSetEnablePatch(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPatchId GetPatchId() {
		return memory.read<struct FPatchId>(m_addr + 0);
	}
	bool GetbIsEnabled() {
		return memory.read<bool>(m_addr + 4);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 5);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTapIds
{
public:
	FGetTapIds(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<int32_t> GetTapIds() {
		return memory.read<struct TArray<int32_t>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSourceEffectEQSettings
{
public:
	FSourceEffectEQSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FSourceEffectEQBand> GetEQBands() {
		return memory.read<struct TArray<struct FSourceEffectEQBand>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetLFOFrequencyMod
{
public:
	FSetLFOFrequencyMod(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetLFOIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	float GetFrequencyModHz() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetAmpEnvelopeDepth
{
public:
	FSetAmpEnvelopeDepth(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInDepth() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSourceEffectEQBand
{
public:
	FSourceEffectEQBand(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

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
};class FSynthSlateStyle
{
public:
	FSynthSlateStyle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ESynthSlateSizeType GetSizeType() {
		return memory.read<enum class ESynthSlateSizeType>(m_addr + 8);
	}
	enum class ESynthSlateColorStyle GetColorStyle() {
		return memory.read<enum class ESynthSlateColorStyle>(m_addr + 9);
	}

private:
	std::uint64_t m_addr = 0;
};class FSubmixEffectFlexiverbSettings
{
public:
	FSubmixEffectFlexiverbSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetPreDelay() {
		return memory.read<float>(m_addr + 0);
	}
	float GetDecayTime() {
		return memory.read<float>(m_addr + 4);
	}
	float GetRoomDampening() {
		return memory.read<float>(m_addr + 8);
	}
	int32_t GetComplexity() {
		return memory.read<int32_t>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FSubmixEffectStereoDelaySettings
{
public:
	FSubmixEffectStereoDelaySettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EStereoDelaySourceEffect GetDelayMode() {
		return memory.read<enum class EStereoDelaySourceEffect>(m_addr + 0);
	}
	float GetDelayTimeMsec() {
		return memory.read<float>(m_addr + 4);
	}
	float GetFeedback() {
		return memory.read<float>(m_addr + 8);
	}
	float GetDelayRatio() {
		return memory.read<float>(m_addr + 12);
	}
	float GetWetLevel() {
		return memory.read<float>(m_addr + 16);
	}
	float GetDryLevel() {
		return memory.read<float>(m_addr + 20);
	}
	bool GetbFilterEnabled() {
		return memory.read<bool>(m_addr + 24);
	}
	enum class EStereoDelayFiltertype GetFilterType() {
		return memory.read<enum class EStereoDelayFiltertype>(m_addr + 25);
	}
	float GetFilterFrequency() {
		return memory.read<float>(m_addr + 28);
	}
	float GetFilterQ() {
		return memory.read<float>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FSourceEffectFilterSettings
{
public:
	FSourceEffectFilterSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ESourceEffectFilterCircuit GetFilterCircuit() {
		return memory.read<enum class ESourceEffectFilterCircuit>(m_addr + 0);
	}
	enum class ESourceEffectFilterType GetFilterType() {
		return memory.read<enum class ESourceEffectFilterType>(m_addr + 1);
	}
	float GetCutoffFrequency() {
		return memory.read<float>(m_addr + 4);
	}
	float GetFilterQ() {
		return memory.read<float>(m_addr + 8);
	}
	struct TArray<struct FSourceEffectFilterAudioBusModulationSettings> GetAudioBusModulation() {
		return memory.read<struct TArray<struct FSourceEffectFilterAudioBusModulationSettings>>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetFilterFrequencyMod
{
public:
	FSetFilterFrequencyMod(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetFilterFrequencyHz() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSourceEffectFoldbackDistortionSettings
{
public:
	FSourceEffectFoldbackDistortionSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInputGainDb() {
		return memory.read<float>(m_addr + 0);
	}
	float GetThresholdDb() {
		return memory.read<float>(m_addr + 4);
	}
	float GetOutputGainDb() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSourceEffectMidSideSpreaderSettings
{
public:
	FSourceEffectMidSideSpreaderSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetSpreadAmount() {
		return memory.read<float>(m_addr + 0);
	}
	enum class EStereoChannelMode GetInputMode() {
		return memory.read<enum class EStereoChannelMode>(m_addr + 4);
	}
	enum class EStereoChannelMode GetOutputMode() {
		return memory.read<enum class EStereoChannelMode>(m_addr + 5);
	}
	bool GetbEqualPower() {
		return memory.read<bool>(m_addr + 6);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetPositionEnvelopeInvert
{
public:
	FSetPositionEnvelopeInvert(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbInInvert() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSourceEffectWaveShaperSettings
{
public:
	FSourceEffectWaveShaperSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetAmount() {
		return memory.read<float>(m_addr + 0);
	}
	float GetOutputGainDb() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FSourceEffectPannerSettings
{
public:
	FSourceEffectPannerSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetSpread() {
		return memory.read<float>(m_addr + 0);
	}
	float GetPan() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FSubmixEffectFilterSettings
{
public:
	FSubmixEffectFilterSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ESubmixFilterType GetFilterType() {
		return memory.read<enum class ESubmixFilterType>(m_addr + 0);
	}
	enum class ESubmixFilterAlgorithm GetFilterAlgorithm() {
		return memory.read<enum class ESubmixFilterAlgorithm>(m_addr + 1);
	}
	float GetFilterFrequency() {
		return memory.read<float>(m_addr + 4);
	}
	float GetFilterQ() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSourceEffectPhaserSettings
{
public:
	FSourceEffectPhaserSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetWetLevel() {
		return memory.read<float>(m_addr + 0);
	}
	float GetFrequency() {
		return memory.read<float>(m_addr + 4);
	}
	float GetFeedback() {
		return memory.read<float>(m_addr + 8);
	}
	enum class EPhaserLFOType GetLFOType() {
		return memory.read<enum class EPhaserLFOType>(m_addr + 12);
	}
	bool GetUseQuadraturePhase() {
		return memory.read<bool>(m_addr + 13);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetKeyFrameValuesForTable
{
public:
	FGetKeyFrameValuesForTable(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetTableIndex() {
		return memory.read<float>(m_addr + 0);
	}
	struct TArray<float> GetReturnValue() {
		return memory.read<struct TArray<float>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSourceEffectRingModulationSettings
{
public:
	FSourceEffectRingModulationSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ERingModulatorTypeSourceEffect GetModulatorType() {
		return memory.read<enum class ERingModulatorTypeSourceEffect>(m_addr + 0);
	}
	float GetFrequency() {
		return memory.read<float>(m_addr + 4);
	}
	float GetDepth() {
		return memory.read<float>(m_addr + 8);
	}
	float GetDryLevel() {
		return memory.read<float>(m_addr + 12);
	}
	float GetWetLevel() {
		return memory.read<float>(m_addr + 16);
	}
	struct UAudioBus GetAudioBusModulator() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct UAudioBus(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSourceEffectSimpleDelaySettings
{
public:
	FSourceEffectSimpleDelaySettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetSpeedOfSound() {
		return memory.read<float>(m_addr + 0);
	}
	float GetDelayAmount() {
		return memory.read<float>(m_addr + 4);
	}
	float GetDryAmount() {
		return memory.read<float>(m_addr + 8);
	}
	float GetWetAmount() {
		return memory.read<float>(m_addr + 12);
	}
	float GetFeedback() {
		return memory.read<float>(m_addr + 16);
	}
	char GetbDelayBasedOnDistance() {
		return memory.read<char>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetFilterFrequency
{
public:
	FSetFilterFrequency(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetFilterFrequencyHz() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSourceEffectStereoDelaySettings
{
public:
	FSourceEffectStereoDelaySettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EStereoDelaySourceEffect GetDelayMode() {
		return memory.read<enum class EStereoDelaySourceEffect>(m_addr + 0);
	}
	float GetDelayTimeMsec() {
		return memory.read<float>(m_addr + 4);
	}
	float GetFeedback() {
		return memory.read<float>(m_addr + 8);
	}
	float GetDelayRatio() {
		return memory.read<float>(m_addr + 12);
	}
	float GetWetLevel() {
		return memory.read<float>(m_addr + 16);
	}
	float GetDryLevel() {
		return memory.read<float>(m_addr + 20);
	}
	bool GetbFilterEnabled() {
		return memory.read<bool>(m_addr + 24);
	}
	enum class EStereoDelayFiltertype GetFilterType() {
		return memory.read<enum class EStereoDelayFiltertype>(m_addr + 25);
	}
	float GetFilterFrequency() {
		return memory.read<float>(m_addr + 28);
	}
	float GetFilterQ() {
		return memory.read<float>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetEnableRetrigger
{
public:
	FSetEnableRetrigger(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetRetriggerEnabled() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSubmixEffectConvolutionReverbSettings
{
public:
	FSubmixEffectConvolutionReverbSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetNormalizationVolumeDb() {
		return memory.read<float>(m_addr + 0);
	}
	bool GetbBypass() {
		return memory.read<bool>(m_addr + 4);
	}
	bool GetbMixInputChannelFormatToImpulseResponseFormat() {
		return memory.read<bool>(m_addr + 5);
	}
	bool GetbMixReverbOutputToOutputChannelFormat() {
		return memory.read<bool>(m_addr + 6);
	}
	float GetSurroundRearChannelBleedDb() {
		return memory.read<float>(m_addr + 8);
	}
	bool GetbInvertRearChannelBleedPhase() {
		return memory.read<bool>(m_addr + 12);
	}
	bool GetbSurroundRearChannelFlip() {
		return memory.read<bool>(m_addr + 13);
	}
	float GetSurroundRearChannelBleedAmount() {
		return memory.read<float>(m_addr + 16);
	}
	struct UAudioImpulseResponse GetImpulseResponse() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct UAudioImpulseResponse(ptr_addr);
	}
	bool GetAllowHArdwareAcceleration() {
		return memory.read<bool>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetModEnvSustainGain
{
public:
	FSetModEnvSustainGain(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetSustainGain() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetFilterAlgorithm
{
public:
	FSetFilterAlgorithm(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ESubmixFilterAlgorithm GetInAlgorithm() {
		return memory.read<enum class ESubmixFilterAlgorithm>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSubmixEffectDelaySettings
{
public:
	FSubmixEffectDelaySettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetMaximumDelayLength() {
		return memory.read<float>(m_addr + 0);
	}
	float GetInterpolationTime() {
		return memory.read<float>(m_addr + 4);
	}
	float GetDelayLength() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetGainDb
{
public:
	FSetGainDb(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetGainDb() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetChorusFeedback
{
public:
	FSetChorusFeedback(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetFeedback() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSubmixEffectMultibandCompressorSettings
{
public:
	FSubmixEffectMultibandCompressorSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ESubmixEffectDynamicsProcessorType GetDynamicsProcessorType() {
		return memory.read<enum class ESubmixEffectDynamicsProcessorType>(m_addr + 0);
	}
	enum class ESubmixEffectDynamicsPeakMode GetPeakMode() {
		return memory.read<enum class ESubmixEffectDynamicsPeakMode>(m_addr + 1);
	}
	float GetLookAheadMsec() {
		return memory.read<float>(m_addr + 4);
	}
	bool GetbLinkChannels() {
		return memory.read<bool>(m_addr + 8);
	}
	bool GetbAnalogMode() {
		return memory.read<bool>(m_addr + 9);
	}
	bool GetbFourPole() {
		return memory.read<bool>(m_addr + 10);
	}
	struct TArray<struct FDynamicsBandSettings> GetBands() {
		return memory.read<struct TArray<struct FDynamicsBandSettings>>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FDynamicsBandSettings
{
public:
	FDynamicsBandSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetCrossoverTopFrequency() {
		return memory.read<float>(m_addr + 0);
	}
	float GetAttackTimeMsec() {
		return memory.read<float>(m_addr + 4);
	}
	float GetReleaseTimeMsec() {
		return memory.read<float>(m_addr + 8);
	}
	float GetThresholdDb() {
		return memory.read<float>(m_addr + 12);
	}
	float GetRatio() {
		return memory.read<float>(m_addr + 16);
	}
	float GetKneeBandwidthDb() {
		return memory.read<float>(m_addr + 20);
	}
	float GetInputGainDb() {
		return memory.read<float>(m_addr + 24);
	}
	float GetOutputGainDb() {
		return memory.read<float>(m_addr + 28);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetFilterType
{
public:
	FSetFilterType(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ESubmixFilterType GetInType() {
		return memory.read<enum class ESubmixFilterType>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetModEnvAttackTime
{
public:
	FSetModEnvAttackTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetAttackTimeMsec() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSubmixEffectTapDelaySettings
{
public:
	FSubmixEffectTapDelaySettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetMaximumDelayLength() {
		return memory.read<float>(m_addr + 0);
	}
	float GetInterpolationTime() {
		return memory.read<float>(m_addr + 4);
	}
	struct TArray<struct FTapDelayInfo> GetTaps() {
		return memory.read<struct TArray<struct FTapDelayInfo>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FTapDelayInfo
{
public:
	FTapDelayInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ETapLineMode GetTapLineMode() {
		return memory.read<enum class ETapLineMode>(m_addr + 0);
	}
	float GetDelayLength() {
		return memory.read<float>(m_addr + 4);
	}
	float GetGain() {
		return memory.read<float>(m_addr + 8);
	}
	int32_t GetOutputChannel() {
		return memory.read<int32_t>(m_addr + 12);
	}
	float GetPanInDegrees() {
		return memory.read<float>(m_addr + 16);
	}
	int32_t GetTapId() {
		return memory.read<int32_t>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetPan
{
public:
	FSetPan(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetPan() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSynth2DSliderStyle
{
public:
	FSynth2DSliderStyle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSlateBrush GetNormalThumbImage() {
		return memory.read<struct FSlateBrush>(m_addr + 8);
	}
	struct FSlateBrush GetDisabledThumbImage() {
		return memory.read<struct FSlateBrush>(m_addr + 144);
	}
	struct FSlateBrush GetNormalBarImage() {
		return memory.read<struct FSlateBrush>(m_addr + 280);
	}
	struct FSlateBrush GetDisabledBarImage() {
		return memory.read<struct FSlateBrush>(m_addr + 416);
	}
	struct FSlateBrush GetBackgroundImage() {
		return memory.read<struct FSlateBrush>(m_addr + 552);
	}
	float GetBarThickness() {
		return memory.read<float>(m_addr + 688);
	}

private:
	std::uint64_t m_addr = 0;
};class FSynthKnobStyle
{
public:
	FSynthKnobStyle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSlateBrush GetLargeKnob() {
		return memory.read<struct FSlateBrush>(m_addr + 8);
	}
	struct FSlateBrush GetLargeKnobOverlay() {
		return memory.read<struct FSlateBrush>(m_addr + 144);
	}
	struct FSlateBrush GetMediumKnob() {
		return memory.read<struct FSlateBrush>(m_addr + 280);
	}
	struct FSlateBrush GetMediumKnobOverlay() {
		return memory.read<struct FSlateBrush>(m_addr + 416);
	}
	float GetMinValueAngle() {
		return memory.read<float>(m_addr + 552);
	}
	float GetMaxValueAngle() {
		return memory.read<float>(m_addr + 556);
	}
	enum class ESynthKnobSize GetKnobSize() {
		return memory.read<enum class ESynthKnobSize>(m_addr + 560);
	}

private:
	std::uint64_t m_addr = 0;
};class FCreatePatch
{
public:
	FCreatePatch(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ESynth1PatchSource GetPatchSource() {
		return memory.read<enum class ESynth1PatchSource>(m_addr + 0);
	}
	struct TArray<struct FSynth1PatchCable> GetPatchCables() {
		return memory.read<struct TArray<struct FSynth1PatchCable>>(m_addr + 8);
	}
	bool GetbEnableByDefault() {
		return memory.read<bool>(m_addr + 24);
	}
	struct FPatchId GetReturnValue() {
		return memory.read<struct FPatchId>(m_addr + 28);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetFilterQMod
{
public:
	FSetFilterQMod(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInQ() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FNoteOn
{
public:
	FNoteOn(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInMidiNote() {
		return memory.read<float>(m_addr + 0);
	}
	float GetInVelocity() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetEnableUnison
{
public:
	FSetEnableUnison(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetEnableUnison() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetChorusDepth
{
public:
	FSetChorusDepth(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetDepth() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetChorusEnabled
{
public:
	FSetChorusEnabled(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetEnableChorus() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetChorusFrequency
{
public:
	FSetChorusFrequency(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetFrequency() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetLFOGain
{
public:
	FSetLFOGain(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetLFOIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	float GetGain() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetLFOGainMod
{
public:
	FSetLFOGainMod(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetLFOIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	float GetGainMod() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetLFOMode
{
public:
	FSetLFOMode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetLFOIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	enum class ESynthLFOMode GetLFOMode() {
		return memory.read<enum class ESynthLFOMode>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetLFOPatch
{
public:
	FSetLFOPatch(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetLFOIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	enum class ESynthLFOPatchType GetLFOPatchType() {
		return memory.read<enum class ESynthLFOPatchType>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetLFOType
{
public:
	FSetLFOType(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetLFOIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	enum class ESynthLFOType GetLFOType() {
		return memory.read<enum class ESynthLFOType>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetModEnvBiasInvert
{
public:
	FSetModEnvBiasInvert(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbInvert() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetModEnvBiasPatch
{
public:
	FSetModEnvBiasPatch(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ESynthModEnvBiasPatch GetInPatchType() {
		return memory.read<enum class ESynthModEnvBiasPatch>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetModEnvDecayTime
{
public:
	FSetModEnvDecayTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetDecayTimeMsec() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetNumTableEntries
{
public:
	FGetNumTableEntries(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetModEnvDepth
{
public:
	FSetModEnvDepth(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetDepth() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetModEnvInvert
{
public:
	FSetModEnvInvert(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbInvert() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetModEnvPatch
{
public:
	FSetModEnvPatch(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ESynthModEnvPatch GetInPatchType() {
		return memory.read<enum class ESynthModEnvPatch>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetModEnvReleaseTime
{
public:
	FSetModEnvReleaseTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetRelease() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetDepthModulator
{
public:
	FSetDepthModulator(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USoundModulatorBase GetModulator() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct USoundModulatorBase(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetOscCents
{
public:
	FSetOscCents(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetOscIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	float GetCents() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetStereoDelayWetlevel
{
public:
	FSetStereoDelayWetlevel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetDelayWetlevel() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetOscFrequencyMod
{
public:
	FSetOscFrequencyMod(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetOscIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	float GetOscFreqMod() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetPositionEnvelopeBiasInvert
{
public:
	FSetPositionEnvelopeBiasInvert(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbInBiasInvert() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetOscGain
{
public:
	FSetOscGain(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetOscIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	float GetOscGain() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetOscGainMod
{
public:
	FSetOscGainMod(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetOscIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	float GetOscGainMod() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetOscOctave
{
public:
	FSetOscOctave(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetOscIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	float GetOctave() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetOscPulsewidth
{
public:
	FSetOscPulsewidth(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetOscIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	float GetPulsewidth() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetOscSemitones
{
public:
	FSetOscSemitones(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetOscIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	float GetSemitones() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetOscSync
{
public:
	FSetOscSync(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbIsSynced() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetOscType
{
public:
	FSetOscType(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetOscIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	enum class ESynth1OscType GetOscType() {
		return memory.read<enum class ESynth1OscType>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetPosLfoFrequency
{
public:
	FSetPosLfoFrequency(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInLfoFrequency() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetPitchBend
{
public:
	FSetPitchBend(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetPitchBend() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetPortamento
{
public:
	FSetPortamento(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetPortamento() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetReleaseTime
{
public:
	FSetReleaseTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReleaseTimeMsec() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetSpread
{
public:
	FSetSpread(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetSpread() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCurrentPlayheadTime
{
public:
	FGetCurrentPlayheadTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetStereoDelayFeedback
{
public:
	FSetStereoDelayFeedback(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetDelayFeedback() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetStereoDelayIsEnabled
{
public:
	FSetStereoDelayIsEnabled(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetStereoDelayEnabled() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetScrubTimeWidth
{
public:
	FSetScrubTimeWidth(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInScrubTimeWidthSec() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetStereoDelayMode
{
public:
	FSetStereoDelayMode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ESynthStereoDelayMode GetStereoDelayMode() {
		return memory.read<enum class ESynthStereoDelayMode>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetVolume
{
public:
	FSetVolume(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInVolume() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetStereoDelayRatio
{
public:
	FSetStereoDelayRatio(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetDelayRatio() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetStereoDelayTime
{
public:
	FSetStereoDelayTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetDelayTimeMsec() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetSustainGain
{
public:
	FSetSustainGain(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetSustainGain() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetFrequencyModulator
{
public:
	FSetFrequencyModulator(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USoundModulatorBase GetModulator() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct USoundModulatorBase(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetSynthPreset
{
public:
	FSetSynthPreset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FModularSynthPreset GetSynthPreset() {
		return memory.read<struct FModularSynthPreset>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetSampleRate
{
public:
	FSetSampleRate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetSampleRate() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetBitModulator
{
public:
	FSetBitModulator(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USoundModulatorBase GetModulator() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct USoundModulatorBase(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetBits
{
public:
	FSetBits(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetBits() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetModulationSettings
{
public:
	FSetModulationSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSourceEffectChorusSettings GetModulationSettings() {
		return memory.read<struct FSourceEffectChorusSettings>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetSampleRateModulator
{
public:
	FSetSampleRateModulator(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USoundModulatorBase GetModulator() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct USoundModulatorBase(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetSettings
{
public:
	FSetSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSubmixEffectTapDelaySettings GetInSettings() {
		return memory.read<struct FSubmixEffectTapDelaySettings>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetDry
{
public:
	FSetDry(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetDryAmount() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetDryModulator
{
public:
	FSetDryModulator(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USoundModulatorBase GetModulator() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct USoundModulatorBase(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetFeedback
{
public:
	FSetFeedback(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetFeedback() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetFeedbackModulator
{
public:
	FSetFeedbackModulator(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USoundModulatorBase GetModulator() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct USoundModulatorBase(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetFrequency
{
public:
	FSetFrequency(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInFrequency() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetAmpEnvelopeReleaseTime
{
public:
	FSetAmpEnvelopeReleaseTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInReleaseTimeMsec() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetWet
{
public:
	FSetWet(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetWetAmount() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetWetModulator
{
public:
	FSetWetModulator(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USoundModulatorBase GetModulator() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct USoundModulatorBase(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FRegisterEnvelopeFollowerListener
{
public:
	FRegisterEnvelopeFollowerListener(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UEnvelopeFollowerListener GetEnvelopeFollowerListener() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UEnvelopeFollowerListener(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FUnregisterEnvelopeFollowerListener
{
public:
	FUnregisterEnvelopeFollowerListener(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UEnvelopeFollowerListener GetEnvelopeFollowerListener() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UEnvelopeFollowerListener(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetImpulseResponse
{
public:
	FSetImpulseResponse(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAudioImpulseResponse GetInImpulseResponse() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UAudioImpulseResponse(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetMaxDelayInMilliseconds
{
public:
	FGetMaxDelayInMilliseconds(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetDelay
{
public:
	FSetDelay(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetLength() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetFilterCutoffFrequency
{
public:
	FSetFilterCutoffFrequency(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInFrequency() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetFilterCutoffFrequencyMod
{
public:
	FSetFilterCutoffFrequencyMod(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInFrequency() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddTap
{
public:
	FAddTap(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetTapId() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTap
{
public:
	FGetTap(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetTapId() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FTapDelayInfo GetTapInfo() {
		return memory.read<struct FTapDelayInfo>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FRemoveTap
{
public:
	FRemoveTap(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetTapId() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetFrequencyPitchBend
{
public:
	FSetFrequencyPitchBend(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetFrequencyOffsetCents() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetTap
{
public:
	FSetTap(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetTapId() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FTapDelayInfo GetTapInfo() {
		return memory.read<struct FTapDelayInfo>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetValue
{
public:
	FGetValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetIndentHandle
{
public:
	FSetIndentHandle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetInValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetLocked
{
public:
	FSetLocked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetInValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetSliderHandleColor
{
public:
	FSetSliderHandleColor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLinearColor GetInValue() {
		return memory.read<struct FLinearColor>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetStepSize
{
public:
	FSetStepSize(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetValue
{
public:
	FSetValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSampleDuration
{
public:
	FGetSampleDuration(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsLoaded
{
public:
	FIsLoaded(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetGrainDuration
{
public:
	FSetGrainDuration(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetBaseDurationMsec() {
		return memory.read<float>(m_addr + 0);
	}
	struct FVector2D GetDurationRange() {
		return memory.read<struct FVector2D>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetGrainEnvelopeType
{
public:
	FSetGrainEnvelopeType(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EGranularSynthEnvelopeType GetEnvelopeType() {
		return memory.read<enum class EGranularSynthEnvelopeType>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetGrainPan
{
public:
	FSetGrainPan(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetBasePan() {
		return memory.read<float>(m_addr + 0);
	}
	struct FVector2D GetPanRange() {
		return memory.read<struct FVector2D>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetGrainPitch
{
public:
	FSetGrainPitch(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetBasePitch() {
		return memory.read<float>(m_addr + 0);
	}
	struct FVector2D GetPitchRange() {
		return memory.read<struct FVector2D>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetGrainProbability
{
public:
	FSetGrainProbability(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInGrainProbability() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetGrainVolume
{
public:
	FSetGrainVolume(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetBaseVolume() {
		return memory.read<float>(m_addr + 0);
	}
	struct FVector2D GetVolumeRange() {
		return memory.read<struct FVector2D>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetPlaybackSpeed
{
public:
	FSetPlaybackSpeed(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInPlayheadRate() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetPlayheadTime
{
public:
	FSetPlayheadTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInPositionSec() {
		return memory.read<float>(m_addr + 0);
	}
	float GetLerpTimeSec() {
		return memory.read<float>(m_addr + 4);
	}
	enum class EGranularSynthSeekType GetSeekType() {
		return memory.read<enum class EGranularSynthSeekType>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetReleaseTimeMsec
{
public:
	FSetReleaseTimeMsec(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReleaseTimeMsec() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetScrubMode
{
public:
	FSetScrubMode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbScrubMode() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetSoundWave
{
public:
	FSetSoundWave(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USoundWave GetInSoundWave() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct USoundWave(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCurveTangent
{
public:
	FGetCurveTangent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetTableIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetMaxTableIndex
{
public:
	FGetMaxTableIndex(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FRefreshWaveTable
{
public:
	FRefreshWaveTable(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetAmpEnvelopeAttackTime
{
public:
	FSetAmpEnvelopeAttackTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInAttackTimeMsec() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetAmpEnvelopeBiasDepth
{
public:
	FSetAmpEnvelopeBiasDepth(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInDepth() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetAmpEnvelopeBiasInvert
{
public:
	FSetAmpEnvelopeBiasInvert(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbInBiasInvert() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetAmpEnvelopeDecayTime
{
public:
	FSetAmpEnvelopeDecayTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInDecayTimeMsec() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetAmpEnvelopeInvert
{
public:
	FSetAmpEnvelopeInvert(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbInInvert() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetAmpEnvelopeSustainGain
{
public:
	FSetAmpEnvelopeSustainGain(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInSustainGain() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetCurveInterpolationType
{
public:
	FSetCurveInterpolationType(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class CurveInterpolationType GetInterpolationType() {
		return memory.read<enum class CurveInterpolationType>(m_addr + 0);
	}
	int32_t GetTableIndex() {
		return memory.read<int32_t>(m_addr + 4);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetCurveTangent
{
public:
	FSetCurveTangent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetTableIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	float GetInNewTangent() {
		return memory.read<float>(m_addr + 4);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetCurveValue
{
public:
	FSetCurveValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetTableIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetKeyframeIndex() {
		return memory.read<int32_t>(m_addr + 4);
	}
	float GetNewValue() {
		return memory.read<float>(m_addr + 8);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetFilterEnvelopeAttackTime
{
public:
	FSetFilterEnvelopeAttackTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInAttackTimeMsec() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetFilterEnvelopeBiasDepth
{
public:
	FSetFilterEnvelopeBiasDepth(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInDepth() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetFilterEnvelopeBiasInvert
{
public:
	FSetFilterEnvelopeBiasInvert(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbInBiasInvert() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetFilterEnvelopeDepth
{
public:
	FSetFilterEnvelopeDepth(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInDepth() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetFilterEnvelopeInvert
{
public:
	FSetFilterEnvelopeInvert(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbInInvert() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetFilterEnvelopenDecayTime
{
public:
	FSetFilterEnvelopenDecayTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInDecayTimeMsec() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetFilterEnvelopeReleaseTime
{
public:
	FSetFilterEnvelopeReleaseTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInReleaseTimeMsec() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetFilterEnvelopeSustainGain
{
public:
	FSetFilterEnvelopeSustainGain(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInSustainGain() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetFrequencyWithMidiNote
{
public:
	FSetFrequencyWithMidiNote(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInMidiNote() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetLowPassFilterResonance
{
public:
	FSetLowPassFilterResonance(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInNewQ() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetPositionEnvelopeAttackTime
{
public:
	FSetPositionEnvelopeAttackTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInAttackTimeMsec() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetPositionEnvelopeBiasDepth
{
public:
	FSetPositionEnvelopeBiasDepth(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInDepth() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetPositionEnvelopeDecayTime
{
public:
	FSetPositionEnvelopeDecayTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInDecayTimeMsec() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetPositionEnvelopeDepth
{
public:
	FSetPositionEnvelopeDepth(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInDepth() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetPositionEnvelopeSustainGain
{
public:
	FSetPositionEnvelopeSustainGain(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInSustainGain() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetPosLfoDepth
{
public:
	FSetPosLfoDepth(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInLfoDepth() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetPosLfoType
{
public:
	FSetPosLfoType(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ESynthLFOType GetInLfoType() {
		return memory.read<enum class ESynthLFOType>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetSustainPedalState
{
public:
	FSetSustainPedalState(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetInSustainPedalState() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetWaveTablePosition
{
public:
	FSetWaveTablePosition(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInPosition() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCurrentPlaybackProgressTime
{
public:
	FGetCurrentPlaybackProgressTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSeekToTime
{
public:
	FSeekToTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetTimeSec() {
		return memory.read<float>(m_addr + 0);
	}
	enum class ESamplePlayerSeekType GetSeekType() {
		return memory.read<enum class ESamplePlayerSeekType>(m_addr + 4);
	}
	bool GetbWrap() {
		return memory.read<bool>(m_addr + 5);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetPitch
{
public:
	FSetPitch(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInPitch() {
		return memory.read<float>(m_addr + 0);
	}
	float GetTimeSec() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetLinearFrequency
{
public:
	FGetLinearFrequency(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInLogFrequencyValue() {
		return memory.read<float>(m_addr + 0);
	}
	float GetInDomainMin() {
		return memory.read<float>(m_addr + 4);
	}
	float GetInDomainMax() {
		return memory.read<float>(m_addr + 8);
	}
	float GetInRangeMin() {
		return memory.read<float>(m_addr + 12);
	}
	float GetInRangeMax() {
		return memory.read<float>(m_addr + 16);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetLogFrequency
{
public:
	FGetLogFrequency(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInLinearValue() {
		return memory.read<float>(m_addr + 0);
	}
	float GetInDomainMin() {
		return memory.read<float>(m_addr + 4);
	}
	float GetInDomainMax() {
		return memory.read<float>(m_addr + 8);
	}
	float GetInRangeMin() {
		return memory.read<float>(m_addr + 12);
	}
	float GetInRangeMax() {
		return memory.read<float>(m_addr + 16);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};