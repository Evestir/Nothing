#pragma once 
#include <Synthesis_Structs.h>
 
 
 
class UModularSynthPresetBank
{
public:
	UModularSynthPresetBank(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FModularSynthPresetBankEntry> GetPresets() {
		return memory.read<struct TArray<struct FModularSynthPresetBankEntry>>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};


class USynth2DSlider
{
public:
	USynth2DSlider(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetValueX() {
		return memory.read<float>(m_addr + 264);
	}
	float GetValueY() {
		return memory.read<float>(m_addr + 268);
	}
	struct FDelegate GetValueXDelegate() {
		return memory.read<struct FDelegate>(m_addr + 272);
	}
	struct FDelegate GetValueYDelegate() {
		return memory.read<struct FDelegate>(m_addr + 288);
	}
	struct FSynth2DSliderStyle GetWidgetStyle() {
		return memory.read<struct FSynth2DSliderStyle>(m_addr + 304);
	}
	struct FLinearColor GetSliderHandleColor() {
		return memory.read<struct FLinearColor>(m_addr + 1000);
	}
	bool GetIndentHandle() {
		return memory.read<bool>(m_addr + 1016);
	}
	bool GetLocked() {
		return memory.read<bool>(m_addr + 1017);
	}
	float GetStepSize() {
		return memory.read<float>(m_addr + 1020);
	}
	bool GetIsFocusable() {
		return memory.read<bool>(m_addr + 1024);
	}
	struct FMulticastInlineDelegate GetOnMouseCaptureBegin() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 1032);
	}
	struct FMulticastInlineDelegate GetOnMouseCaptureEnd() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 1048);
	}
	struct FMulticastInlineDelegate GetOnControllerCaptureBegin() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 1064);
	}
	struct FMulticastInlineDelegate GetOnControllerCaptureEnd() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 1080);
	}
	struct FMulticastInlineDelegate GetOnValueChangedX() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 1096);
	}
	struct FMulticastInlineDelegate GetOnValueChangedY() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 1112);
	}

private:
	std::uint64_t m_addr = 0;
};


class UModularSynthLibrary
{
public:
	UModularSynthLibrary(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UModularSynthComponent
{
public:
	UModularSynthComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetVoiceCount() {
		return memory.read<int32_t>(m_addr + 1744);
	}

private:
	std::uint64_t m_addr = 0;
};


class USubmixEffectFlexiverbPreset
{
public:
	USubmixEffectFlexiverbPreset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSubmixEffectFlexiverbSettings GetSettings() {
		return memory.read<struct FSubmixEffectFlexiverbSettings>(m_addr + 160);
	}

private:
	std::uint64_t m_addr = 0;
};


class USourceEffectMidSideSpreaderPreset
{
public:
	USourceEffectMidSideSpreaderPreset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSourceEffectMidSideSpreaderSettings GetSettings() {
		return memory.read<struct FSourceEffectMidSideSpreaderSettings>(m_addr + 152);
	}

private:
	std::uint64_t m_addr = 0;
};


class USourceEffectBitCrusherPreset
{
public:
	USourceEffectBitCrusherPreset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSourceEffectBitCrusherSettings GetSettings() {
		return memory.read<struct FSourceEffectBitCrusherSettings>(m_addr + 192);
	}

private:
	std::uint64_t m_addr = 0;
};


class USourceEffectEnvelopeFollowerPreset
{
public:
	USourceEffectEnvelopeFollowerPreset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSourceEffectEnvelopeFollowerSettings GetSettings() {
		return memory.read<struct FSourceEffectEnvelopeFollowerSettings>(m_addr + 156);
	}

private:
	std::uint64_t m_addr = 0;
};


class USourceEffectDynamicsProcessorPreset
{
public:
	USourceEffectDynamicsProcessorPreset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSourceEffectDynamicsProcessorSettings GetSettings() {
		return memory.read<struct FSourceEffectDynamicsProcessorSettings>(m_addr + 184);
	}

private:
	std::uint64_t m_addr = 0;
};


class USourceEffectChorusPreset
{
public:
	USourceEffectChorusPreset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSourceEffectChorusSettings GetSettings() {
		return memory.read<struct FSourceEffectChorusSettings>(m_addr + 264);
	}

private:
	std::uint64_t m_addr = 0;
};


class USubmixEffectStereoDelayPreset
{
public:
	USubmixEffectStereoDelayPreset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSubmixEffectStereoDelaySettings GetSettings() {
		return memory.read<struct FSubmixEffectStereoDelaySettings>(m_addr + 180);
	}

private:
	std::uint64_t m_addr = 0;
};


class UEnvelopeFollowerListener
{
public:
	UEnvelopeFollowerListener(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate GetOnEnvelopeFollowerUpdate() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 176);
	}

private:
	std::uint64_t m_addr = 0;
};


class USourceEffectFilterPreset
{
public:
	USourceEffectFilterPreset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSourceEffectFilterSettings GetSettings() {
		return memory.read<struct FSourceEffectFilterSettings>(m_addr + 176);
	}

private:
	std::uint64_t m_addr = 0;
};


class USourceEffectEQPreset
{
public:
	USourceEffectEQPreset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSourceEffectEQSettings GetSettings() {
		return memory.read<struct FSourceEffectEQSettings>(m_addr + 160);
	}

private:
	std::uint64_t m_addr = 0;
};


class USourceEffectFoldbackDistortionPreset
{
public:
	USourceEffectFoldbackDistortionPreset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSourceEffectFoldbackDistortionSettings GetSettings() {
		return memory.read<struct FSourceEffectFoldbackDistortionSettings>(m_addr + 156);
	}

private:
	std::uint64_t m_addr = 0;
};


class USourceEffectPannerPreset
{
public:
	USourceEffectPannerPreset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSourceEffectPannerSettings GetSettings() {
		return memory.read<struct FSourceEffectPannerSettings>(m_addr + 152);
	}

private:
	std::uint64_t m_addr = 0;
};


class USourceEffectPhaserPreset
{
public:
	USourceEffectPhaserPreset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSourceEffectPhaserSettings GetSettings() {
		return memory.read<struct FSourceEffectPhaserSettings>(m_addr + 160);
	}

private:
	std::uint64_t m_addr = 0;
};


class USourceEffectRingModulationPreset
{
public:
	USourceEffectRingModulationPreset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSourceEffectRingModulationSettings GetSettings() {
		return memory.read<struct FSourceEffectRingModulationSettings>(m_addr + 176);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMonoWaveTableSynthPreset
{
public:
	UMonoWaveTableSynthPreset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetPresetName() {
		return memory.read<struct FString>(m_addr + 40);
	}
	char GetbLockKeyframesToGridBool() {
		return memory.read<char>(m_addr + 56);
	}
	int32_t GetLockKeyframesToGrid() {
		return memory.read<int32_t>(m_addr + 60);
	}
	int32_t GetWaveTableResolution() {
		return memory.read<int32_t>(m_addr + 64);
	}
	struct TArray<struct FRuntimeFloatCurve> GetWaveTable() {
		return memory.read<struct TArray<struct FRuntimeFloatCurve>>(m_addr + 72);
	}
	char GetbNormalizeWaveTables() {
		return memory.read<char>(m_addr + 88);
	}

private:
	std::uint64_t m_addr = 0;
};


class USourceEffectSimpleDelayPreset
{
public:
	USourceEffectSimpleDelayPreset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSourceEffectSimpleDelaySettings GetSettings() {
		return memory.read<struct FSourceEffectSimpleDelaySettings>(m_addr + 168);
	}

private:
	std::uint64_t m_addr = 0;
};


class USourceEffectStereoDelayPreset
{
public:
	USourceEffectStereoDelayPreset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSourceEffectStereoDelaySettings GetSettings() {
		return memory.read<struct FSourceEffectStereoDelaySettings>(m_addr + 180);
	}

private:
	std::uint64_t m_addr = 0;
};


class USourceEffectWaveShaperPreset
{
public:
	USourceEffectWaveShaperPreset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSourceEffectWaveShaperSettings GetSettings() {
		return memory.read<struct FSourceEffectWaveShaperSettings>(m_addr + 152);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAudioImpulseResponse
{
public:
	UAudioImpulseResponse(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<float> GetImpulseResponse() {
		return memory.read<struct TArray<float>>(m_addr + 40);
	}
	int32_t GetNumChannels() {
		return memory.read<int32_t>(m_addr + 56);
	}
	int32_t GetSampleRate() {
		return memory.read<int32_t>(m_addr + 60);
	}
	float GetNormalizationVolumeDb() {
		return memory.read<float>(m_addr + 64);
	}
	bool GetbTrueStereo() {
		return memory.read<bool>(m_addr + 68);
	}
	struct TArray<float> GetIRData() {
		return memory.read<struct TArray<float>>(m_addr + 72);
	}

private:
	std::uint64_t m_addr = 0;
};


class USubmixEffectConvolutionReverbPreset
{
public:
	USubmixEffectConvolutionReverbPreset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAudioImpulseResponse GetImpulseResponse() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 104);
		return struct UAudioImpulseResponse(ptr_addr);
	}
	struct FSubmixEffectConvolutionReverbSettings GetSettings() {
		return memory.read<struct FSubmixEffectConvolutionReverbSettings>(m_addr + 112);
	}
	enum class ESubmixEffectConvolutionReverbBlockSize GetBlockSize() {
		return memory.read<enum class ESubmixEffectConvolutionReverbBlockSize>(m_addr + 152);
	}
	bool GetbEnableHardwareAcceleration() {
		return memory.read<bool>(m_addr + 153);
	}

private:
	std::uint64_t m_addr = 0;
};


class USubmixEffectDelayPreset
{
public:
	USubmixEffectDelayPreset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSubmixEffectDelaySettings GetSettings() {
		return memory.read<struct FSubmixEffectDelaySettings>(m_addr + 156);
	}
	struct FSubmixEffectDelaySettings GetDynamicSettings() {
		return memory.read<struct FSubmixEffectDelaySettings>(m_addr + 168);
	}

private:
	std::uint64_t m_addr = 0;
};


class USubmixEffectFilterPreset
{
public:
	USubmixEffectFilterPreset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSubmixEffectFilterSettings GetSettings() {
		return memory.read<struct FSubmixEffectFilterSettings>(m_addr + 156);
	}

private:
	std::uint64_t m_addr = 0;
};


class USubmixEffectMultibandCompressorPreset
{
public:
	USubmixEffectMultibandCompressorPreset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSubmixEffectMultibandCompressorSettings GetSettings() {
		return memory.read<struct FSubmixEffectMultibandCompressorSettings>(m_addr + 176);
	}

private:
	std::uint64_t m_addr = 0;
};


class USubmixEffectTapDelayPreset
{
public:
	USubmixEffectTapDelayPreset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSubmixEffectTapDelaySettings GetSettings() {
		return memory.read<struct FSubmixEffectTapDelaySettings>(m_addr + 168);
	}

private:
	std::uint64_t m_addr = 0;
};


class UGranularSynth
{
public:
	UGranularSynth(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USoundWave GetGranulatedSoundWave() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1744);
		return struct USoundWave(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class USynthComponentMonoWaveTable
{
public:
	USynthComponentMonoWaveTable(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate GetOnTableAltered() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 1744);
	}
	struct FMulticastInlineDelegate GetOnNumTablesChanged() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 1760);
	}
	struct UMonoWaveTableSynthPreset GetCurrentPreset() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1776);
		return struct UMonoWaveTableSynthPreset(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class USynthComponentToneGenerator
{
public:
	USynthComponentToneGenerator(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetFrequency() {
		return memory.read<float>(m_addr + 1744);
	}
	float GetVolume() {
		return memory.read<float>(m_addr + 1748);
	}

private:
	std::uint64_t m_addr = 0;
};


class USynthSamplePlayer
{
public:
	USynthSamplePlayer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USoundWave GetSoundWave() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1744);
		return struct USoundWave(ptr_addr);
	}
	struct FMulticastInlineDelegate GetOnSampleLoaded() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 1752);
	}
	struct FMulticastInlineDelegate GetOnSamplePlaybackProgress() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 1768);
	}

private:
	std::uint64_t m_addr = 0;
};


class USynthesisUtilitiesBlueprintFunctionLibrary
{
public:
	USynthesisUtilitiesBlueprintFunctionLibrary(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class USynthKnob
{
public:
	USynthKnob(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetValue() {
		return memory.read<float>(m_addr + 264);
	}
	float GetStepSize() {
		return memory.read<float>(m_addr + 268);
	}
	float GetMouseSpeed() {
		return memory.read<float>(m_addr + 272);
	}
	float GetMouseFineTuneSpeed() {
		return memory.read<float>(m_addr + 276);
	}
	char GetShowTooltipInfo() {
		return memory.read<char>(m_addr + 280);
	}
	struct FText GetParameterName() {
		return memory.read<struct FText>(m_addr + 288);
	}
	struct FText GetParameterUnits() {
		return memory.read<struct FText>(m_addr + 312);
	}
	struct FDelegate GetValueDelegate() {
		return memory.read<struct FDelegate>(m_addr + 336);
	}
	struct FSynthKnobStyle GetWidgetStyle() {
		return memory.read<struct FSynthKnobStyle>(m_addr + 352);
	}
	bool GetLocked() {
		return memory.read<bool>(m_addr + 920);
	}
	bool GetIsFocusable() {
		return memory.read<bool>(m_addr + 921);
	}
	struct FMulticastInlineDelegate GetOnMouseCaptureBegin() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 928);
	}
	struct FMulticastInlineDelegate GetOnMouseCaptureEnd() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 944);
	}
	struct FMulticastInlineDelegate GetOnControllerCaptureBegin() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 960);
	}
	struct FMulticastInlineDelegate GetOnControllerCaptureEnd() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 976);
	}
	struct FMulticastInlineDelegate GetOnValueChanged() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 992);
	}

private:
	std::uint64_t m_addr = 0;
};


