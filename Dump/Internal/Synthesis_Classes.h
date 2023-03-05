#pragma once 
#include <Synthesis_Structs.h>
 
 
 
//Class Synthesis.ModularSynthPresetBank Size 56
// Inherited 40 bytes 
class UModularSynthPresetBank : public UObject
{

 public: 
	struct TArray<struct FModularSynthPresetBankEntry> Presets;  // Offset: 40 Size: 16



 // Functions 
 public:
}; 
 
 


//Class Synthesis.Synth2DSlider Size 1144
// Inherited 264 bytes 
class USynth2DSlider : public UWidget
{

 public: 
	float ValueX;  // Offset: 264 Size: 4
	float ValueY;  // Offset: 268 Size: 4
	struct FDelegate ValueXDelegate;  // Offset: 272 Size: 16
	struct FDelegate ValueYDelegate;  // Offset: 288 Size: 16
	struct FSynth2DSliderStyle WidgetStyle;  // Offset: 304 Size: 696
	struct FLinearColor SliderHandleColor;  // Offset: 1000 Size: 16
	char pad_1016_1 : 7;  // Offset: 1016 Size: 1
	bool IndentHandle : 1;  // Offset: 1016 Size: 1
	char pad_1017_1 : 7;  // Offset: 1017 Size: 1
	bool Locked : 1;  // Offset: 1017 Size: 1
	char pad_1018[2];  // Offset: 1018 Size: 2
	float StepSize;  // Offset: 1020 Size: 4
	char pad_1024_1 : 7;  // Offset: 1024 Size: 1
	bool IsFocusable : 1;  // Offset: 1024 Size: 1
	char pad_1025[7];  // Offset: 1025 Size: 7
	struct FMulticastInlineDelegate OnMouseCaptureBegin;  // Offset: 1032 Size: 16
	struct FMulticastInlineDelegate OnMouseCaptureEnd;  // Offset: 1048 Size: 16
	struct FMulticastInlineDelegate OnControllerCaptureBegin;  // Offset: 1064 Size: 16
	struct FMulticastInlineDelegate OnControllerCaptureEnd;  // Offset: 1080 Size: 16
	struct FMulticastInlineDelegate OnValueChangedX;  // Offset: 1096 Size: 16
	struct FMulticastInlineDelegate OnValueChangedY;  // Offset: 1112 Size: 16
	char pad_1128[16];  // Offset: 1128 Size: 16



 // Functions 
 public:
	void SetValue(struct FVector2D InValue); // Function Synthesis.Synth2DSlider.SetValue
	void SetStepSize(float InValue); // Function Synthesis.Synth2DSlider.SetStepSize
	void SetSliderHandleColor(struct FLinearColor InValue); // Function Synthesis.Synth2DSlider.SetSliderHandleColor
	void SetLocked(bool InValue); // Function Synthesis.Synth2DSlider.SetLocked
	void SetIndentHandle(bool InValue); // Function Synthesis.Synth2DSlider.SetIndentHandle
	struct FVector2D GetValue(); // Function Synthesis.Synth2DSlider.GetValue
}; 
 
 


//Class Synthesis.ModularSynthLibrary Size 40
// Inherited 40 bytes 
class UModularSynthLibrary : public UBlueprintFunctionLibrary
{

 public: 



 // Functions 
 public:
	void AddModularSynthPresetToBankAsset(struct UModularSynthPresetBank* InBank, struct FModularSynthPreset& Preset, struct FString PresetName); // Function Synthesis.ModularSynthLibrary.AddModularSynthPresetToBankAsset
}; 
 
 


//Class Synthesis.ModularSynthComponent Size 3472
// Inherited 1744 bytes 
class UModularSynthComponent : public USynthComponent
{

 public: 
	int32_t VoiceCount;  // Offset: 1744 Size: 4
	char pad_1748[1724];  // Offset: 1748 Size: 1724



 // Functions 
 public:
	void SetSynthPreset(struct FModularSynthPreset& SynthPreset); // Function Synthesis.ModularSynthComponent.SetSynthPreset
	void SetSustainGain(float SustainGain); // Function Synthesis.ModularSynthComponent.SetSustainGain
	void SetStereoDelayWetlevel(float DelayWetlevel); // Function Synthesis.ModularSynthComponent.SetStereoDelayWetlevel
	void SetStereoDelayTime(float DelayTimeMsec); // Function Synthesis.ModularSynthComponent.SetStereoDelayTime
	void SetStereoDelayRatio(float DelayRatio); // Function Synthesis.ModularSynthComponent.SetStereoDelayRatio
	void SetStereoDelayMode(enum class ESynthStereoDelayMode StereoDelayMode); // Function Synthesis.ModularSynthComponent.SetStereoDelayMode
	void SetStereoDelayIsEnabled(bool StereoDelayEnabled); // Function Synthesis.ModularSynthComponent.SetStereoDelayIsEnabled
	void SetStereoDelayFeedback(float DelayFeedback); // Function Synthesis.ModularSynthComponent.SetStereoDelayFeedback
	void SetSpread(float Spread); // Function Synthesis.ModularSynthComponent.SetSpread
	void SetReleaseTime(float ReleaseTimeMsec); // Function Synthesis.ModularSynthComponent.SetReleaseTime
	void SetPortamento(float Portamento); // Function Synthesis.ModularSynthComponent.SetPortamento
	void SetPitchBend(float PitchBend); // Function Synthesis.ModularSynthComponent.SetPitchBend
	void SetPan(float Pan); // Function Synthesis.ModularSynthComponent.SetPan
	void SetOscType(int32_t OscIndex, enum class ESynth1OscType OscType); // Function Synthesis.ModularSynthComponent.SetOscType
	void SetOscSync(bool bIsSynced); // Function Synthesis.ModularSynthComponent.SetOscSync
	void SetOscSemitones(int32_t OscIndex, float Semitones); // Function Synthesis.ModularSynthComponent.SetOscSemitones
	void SetOscPulsewidth(int32_t OscIndex, float Pulsewidth); // Function Synthesis.ModularSynthComponent.SetOscPulsewidth
	void SetOscOctave(int32_t OscIndex, float Octave); // Function Synthesis.ModularSynthComponent.SetOscOctave
	void SetOscGainMod(int32_t OscIndex, float OscGainMod); // Function Synthesis.ModularSynthComponent.SetOscGainMod
	void SetOscGain(int32_t OscIndex, float OscGain); // Function Synthesis.ModularSynthComponent.SetOscGain
	void SetOscFrequencyMod(int32_t OscIndex, float OscFreqMod); // Function Synthesis.ModularSynthComponent.SetOscFrequencyMod
	void SetOscCents(int32_t OscIndex, float Cents); // Function Synthesis.ModularSynthComponent.SetOscCents
	void SetModEnvSustainGain(float SustainGain); // Function Synthesis.ModularSynthComponent.SetModEnvSustainGain
	void SetModEnvReleaseTime(float Release); // Function Synthesis.ModularSynthComponent.SetModEnvReleaseTime
	void SetModEnvPatch(enum class ESynthModEnvPatch InPatchType); // Function Synthesis.ModularSynthComponent.SetModEnvPatch
	void SetModEnvInvert(bool bInvert); // Function Synthesis.ModularSynthComponent.SetModEnvInvert
	void SetModEnvDepth(float Depth); // Function Synthesis.ModularSynthComponent.SetModEnvDepth
	void SetModEnvDecayTime(float DecayTimeMsec); // Function Synthesis.ModularSynthComponent.SetModEnvDecayTime
	void SetModEnvBiasPatch(enum class ESynthModEnvBiasPatch InPatchType); // Function Synthesis.ModularSynthComponent.SetModEnvBiasPatch
	void SetModEnvBiasInvert(bool bInvert); // Function Synthesis.ModularSynthComponent.SetModEnvBiasInvert
	void SetModEnvAttackTime(float AttackTimeMsec); // Function Synthesis.ModularSynthComponent.SetModEnvAttackTime
	void SetLFOType(int32_t LFOIndex, enum class ESynthLFOType LFOType); // Function Synthesis.ModularSynthComponent.SetLFOType
	void SetLFOPatch(int32_t LFOIndex, enum class ESynthLFOPatchType LFOPatchType); // Function Synthesis.ModularSynthComponent.SetLFOPatch
	void SetLFOMode(int32_t LFOIndex, enum class ESynthLFOMode LFOMode); // Function Synthesis.ModularSynthComponent.SetLFOMode
	void SetLFOGainMod(int32_t LFOIndex, float GainMod); // Function Synthesis.ModularSynthComponent.SetLFOGainMod
	void SetLFOGain(int32_t LFOIndex, float Gain); // Function Synthesis.ModularSynthComponent.SetLFOGain
	void SetLFOFrequencyMod(int32_t LFOIndex, float FrequencyModHz); // Function Synthesis.ModularSynthComponent.SetLFOFrequencyMod
	void SetLFOFrequency(int32_t LFOIndex, float FrequencyHz); // Function Synthesis.ModularSynthComponent.SetLFOFrequency
	void SetGainDb(float GainDb); // Function Synthesis.ModularSynthComponent.SetGainDb
	void SetFilterType(enum class ESynthFilterType FilterType); // Function Synthesis.ModularSynthComponent.SetFilterType
	void SetFilterQMod(float FilterQ); // Function Synthesis.ModularSynthComponent.SetFilterQMod
	void SetFilterQ(float FilterQ); // Function Synthesis.ModularSynthComponent.SetFilterQ
	void SetFilterFrequencyMod(float FilterFrequencyHz); // Function Synthesis.ModularSynthComponent.SetFilterFrequencyMod
	void SetFilterFrequency(float FilterFrequencyHz); // Function Synthesis.ModularSynthComponent.SetFilterFrequency
	void SetFilterAlgorithm(enum class ESynthFilterAlgorithm FilterAlgorithm); // Function Synthesis.ModularSynthComponent.SetFilterAlgorithm
	void SetEnableUnison(bool EnableUnison); // Function Synthesis.ModularSynthComponent.SetEnableUnison
	void SetEnableRetrigger(bool RetriggerEnabled); // Function Synthesis.ModularSynthComponent.SetEnableRetrigger
	void SetEnablePolyphony(bool bEnablePolyphony); // Function Synthesis.ModularSynthComponent.SetEnablePolyphony
	bool SetEnablePatch(struct FPatchId PatchId, bool bIsEnabled); // Function Synthesis.ModularSynthComponent.SetEnablePatch
	void SetEnableLegato(bool LegatoEnabled); // Function Synthesis.ModularSynthComponent.SetEnableLegato
	void SetDecayTime(float DecayTimeMsec); // Function Synthesis.ModularSynthComponent.SetDecayTime
	void SetChorusFrequency(float Frequency); // Function Synthesis.ModularSynthComponent.SetChorusFrequency
	void SetChorusFeedback(float Feedback); // Function Synthesis.ModularSynthComponent.SetChorusFeedback
	void SetChorusEnabled(bool EnableChorus); // Function Synthesis.ModularSynthComponent.SetChorusEnabled
	void SetChorusDepth(float Depth); // Function Synthesis.ModularSynthComponent.SetChorusDepth
	void SetAttackTime(float AttackTimeMsec); // Function Synthesis.ModularSynthComponent.SetAttackTime
	void NoteOn(float Note, int32_t Velocity, float Duration); // Function Synthesis.ModularSynthComponent.NoteOn
	void NoteOff(float Note, bool bAllNotesOff, bool bKillAllNotes); // Function Synthesis.ModularSynthComponent.NoteOff
	struct FPatchId CreatePatch(enum class ESynth1PatchSource PatchSource, struct TArray<struct FSynth1PatchCable>& PatchCables, bool bEnableByDefault); // Function Synthesis.ModularSynthComponent.CreatePatch
}; 
 
 


//Class Synthesis.SubmixEffectFlexiverbPreset Size 176
// Inherited 104 bytes 
class USubmixEffectFlexiverbPreset : public USoundEffectSubmixPreset
{

 public: 
	char pad_104[56];  // Offset: 104 Size: 56
	struct FSubmixEffectFlexiverbSettings Settings;  // Offset: 160 Size: 16



 // Functions 
 public:
	void SetSettings(struct FSubmixEffectFlexiverbSettings& InSettings); // Function Synthesis.SubmixEffectFlexiverbPreset.SetSettings
}; 
 
 


//Class Synthesis.SourceEffectMidSideSpreaderPreset Size 160
// Inherited 104 bytes 
class USourceEffectMidSideSpreaderPreset : public USoundEffectSourcePreset
{

 public: 
	char pad_104[48];  // Offset: 104 Size: 48
	struct FSourceEffectMidSideSpreaderSettings Settings;  // Offset: 152 Size: 8



 // Functions 
 public:
	void SetSettings(struct FSourceEffectMidSideSpreaderSettings& InSettings); // Function Synthesis.SourceEffectMidSideSpreaderPreset.SetSettings
}; 
 
 


//Class Synthesis.SourceEffectBitCrusherPreset Size 240
// Inherited 104 bytes 
class USourceEffectBitCrusherPreset : public USoundEffectSourcePreset
{

 public: 
	char pad_104[88];  // Offset: 104 Size: 88
	struct FSourceEffectBitCrusherSettings Settings;  // Offset: 192 Size: 48



 // Functions 
 public:
	void SetSettings(struct FSourceEffectBitCrusherBaseSettings& Settings); // Function Synthesis.SourceEffectBitCrusherPreset.SetSettings
	void SetSampleRateModulator(struct USoundModulatorBase* Modulator); // Function Synthesis.SourceEffectBitCrusherPreset.SetSampleRateModulator
	void SetSampleRate(float SampleRate); // Function Synthesis.SourceEffectBitCrusherPreset.SetSampleRate
	void SetModulationSettings(struct FSourceEffectBitCrusherSettings& ModulationSettings); // Function Synthesis.SourceEffectBitCrusherPreset.SetModulationSettings
	void SetBits(float Bits); // Function Synthesis.SourceEffectBitCrusherPreset.SetBits
	void SetBitModulator(struct USoundModulatorBase* Modulator); // Function Synthesis.SourceEffectBitCrusherPreset.SetBitModulator
}; 
 
 


//Class Synthesis.SourceEffectEnvelopeFollowerPreset Size 168
// Inherited 104 bytes 
class USourceEffectEnvelopeFollowerPreset : public USoundEffectSourcePreset
{

 public: 
	char pad_104[52];  // Offset: 104 Size: 52
	struct FSourceEffectEnvelopeFollowerSettings Settings;  // Offset: 156 Size: 12



 // Functions 
 public:
	void UnregisterEnvelopeFollowerListener(struct UEnvelopeFollowerListener* EnvelopeFollowerListener); // Function Synthesis.SourceEffectEnvelopeFollowerPreset.UnregisterEnvelopeFollowerListener
	void SetSettings(struct FSourceEffectEnvelopeFollowerSettings& InSettings); // Function Synthesis.SourceEffectEnvelopeFollowerPreset.SetSettings
	void RegisterEnvelopeFollowerListener(struct UEnvelopeFollowerListener* EnvelopeFollowerListener); // Function Synthesis.SourceEffectEnvelopeFollowerPreset.RegisterEnvelopeFollowerListener
}; 
 
 


//Class Synthesis.SourceEffectDynamicsProcessorPreset Size 224
// Inherited 104 bytes 
class USourceEffectDynamicsProcessorPreset : public USoundEffectSourcePreset
{

 public: 
	char pad_104[80];  // Offset: 104 Size: 80
	struct FSourceEffectDynamicsProcessorSettings Settings;  // Offset: 184 Size: 40



 // Functions 
 public:
	void SetSettings(struct FSourceEffectDynamicsProcessorSettings& InSettings); // Function Synthesis.SourceEffectDynamicsProcessorPreset.SetSettings
}; 
 
 


//Class Synthesis.SourceEffectChorusPreset Size 384
// Inherited 104 bytes 
class USourceEffectChorusPreset : public USoundEffectSourcePreset
{

 public: 
	char pad_104[160];  // Offset: 104 Size: 160
	struct FSourceEffectChorusSettings Settings;  // Offset: 264 Size: 120



 // Functions 
 public:
	void SetWetModulator(struct USoundModulatorBase* Modulator); // Function Synthesis.SourceEffectChorusPreset.SetWetModulator
	void SetWet(float WetAmount); // Function Synthesis.SourceEffectChorusPreset.SetWet
	void SetSpreadModulator(struct USoundModulatorBase* Modulator); // Function Synthesis.SourceEffectChorusPreset.SetSpreadModulator
	void SetSpread(float Spread); // Function Synthesis.SourceEffectChorusPreset.SetSpread
	void SetSettings(struct FSourceEffectChorusBaseSettings& Settings); // Function Synthesis.SourceEffectChorusPreset.SetSettings
	void SetModulationSettings(struct FSourceEffectChorusSettings& ModulationSettings); // Function Synthesis.SourceEffectChorusPreset.SetModulationSettings
	void SetFrequencyModulator(struct USoundModulatorBase* Modulator); // Function Synthesis.SourceEffectChorusPreset.SetFrequencyModulator
	void SetFrequency(float Frequency); // Function Synthesis.SourceEffectChorusPreset.SetFrequency
	void SetFeedbackModulator(struct USoundModulatorBase* Modulator); // Function Synthesis.SourceEffectChorusPreset.SetFeedbackModulator
	void SetFeedback(float Feedback); // Function Synthesis.SourceEffectChorusPreset.SetFeedback
	void SetDryModulator(struct USoundModulatorBase* Modulator); // Function Synthesis.SourceEffectChorusPreset.SetDryModulator
	void SetDry(float DryAmount); // Function Synthesis.SourceEffectChorusPreset.SetDry
	void SetDepthModulator(struct USoundModulatorBase* Modulator); // Function Synthesis.SourceEffectChorusPreset.SetDepthModulator
	void SetDepth(float Depth); // Function Synthesis.SourceEffectChorusPreset.SetDepth
}; 
 
 


//Class Synthesis.SubmixEffectStereoDelayPreset Size 216
// Inherited 104 bytes 
class USubmixEffectStereoDelayPreset : public USoundEffectSubmixPreset
{

 public: 
	char pad_104[76];  // Offset: 104 Size: 76
	struct FSubmixEffectStereoDelaySettings Settings;  // Offset: 180 Size: 36



 // Functions 
 public:
	void SetSettings(struct FSubmixEffectStereoDelaySettings& InSettings); // Function Synthesis.SubmixEffectStereoDelayPreset.SetSettings
}; 
 
 


//Class Synthesis.EnvelopeFollowerListener Size 208
// Inherited 176 bytes 
class UEnvelopeFollowerListener : public UActorComponent
{

 public: 
	struct FMulticastInlineDelegate OnEnvelopeFollowerUpdate;  // Offset: 176 Size: 16
	char pad_192[16];  // Offset: 192 Size: 16



 // Functions 
 public:
}; 
 
 


//Class Synthesis.SourceEffectFilterPreset Size 208
// Inherited 104 bytes 
class USourceEffectFilterPreset : public USoundEffectSourcePreset
{

 public: 
	char pad_104[72];  // Offset: 104 Size: 72
	struct FSourceEffectFilterSettings Settings;  // Offset: 176 Size: 32



 // Functions 
 public:
	void SetSettings(struct FSourceEffectFilterSettings& InSettings); // Function Synthesis.SourceEffectFilterPreset.SetSettings
}; 
 
 


//Class Synthesis.SourceEffectEQPreset Size 176
// Inherited 104 bytes 
class USourceEffectEQPreset : public USoundEffectSourcePreset
{

 public: 
	char pad_104[56];  // Offset: 104 Size: 56
	struct FSourceEffectEQSettings Settings;  // Offset: 160 Size: 16



 // Functions 
 public:
	void SetSettings(struct FSourceEffectEQSettings& InSettings); // Function Synthesis.SourceEffectEQPreset.SetSettings
}; 
 
 


//Class Synthesis.SourceEffectFoldbackDistortionPreset Size 168
// Inherited 104 bytes 
class USourceEffectFoldbackDistortionPreset : public USoundEffectSourcePreset
{

 public: 
	char pad_104[52];  // Offset: 104 Size: 52
	struct FSourceEffectFoldbackDistortionSettings Settings;  // Offset: 156 Size: 12



 // Functions 
 public:
	void SetSettings(struct FSourceEffectFoldbackDistortionSettings& InSettings); // Function Synthesis.SourceEffectFoldbackDistortionPreset.SetSettings
}; 
 
 


//Class Synthesis.SourceEffectPannerPreset Size 160
// Inherited 104 bytes 
class USourceEffectPannerPreset : public USoundEffectSourcePreset
{

 public: 
	char pad_104[48];  // Offset: 104 Size: 48
	struct FSourceEffectPannerSettings Settings;  // Offset: 152 Size: 8



 // Functions 
 public:
	void SetSettings(struct FSourceEffectPannerSettings& InSettings); // Function Synthesis.SourceEffectPannerPreset.SetSettings
}; 
 
 


//Class Synthesis.SourceEffectPhaserPreset Size 176
// Inherited 104 bytes 
class USourceEffectPhaserPreset : public USoundEffectSourcePreset
{

 public: 
	char pad_104[56];  // Offset: 104 Size: 56
	struct FSourceEffectPhaserSettings Settings;  // Offset: 160 Size: 16



 // Functions 
 public:
	void SetSettings(struct FSourceEffectPhaserSettings& InSettings); // Function Synthesis.SourceEffectPhaserPreset.SetSettings
}; 
 
 


//Class Synthesis.SourceEffectRingModulationPreset Size 208
// Inherited 104 bytes 
class USourceEffectRingModulationPreset : public USoundEffectSourcePreset
{

 public: 
	char pad_104[72];  // Offset: 104 Size: 72
	struct FSourceEffectRingModulationSettings Settings;  // Offset: 176 Size: 32



 // Functions 
 public:
	void SetSettings(struct FSourceEffectRingModulationSettings& InSettings); // Function Synthesis.SourceEffectRingModulationPreset.SetSettings
}; 
 
 


//Class Synthesis.MonoWaveTableSynthPreset Size 368
// Inherited 40 bytes 
class UMonoWaveTableSynthPreset : public UObject
{

 public: 
	struct FString PresetName;  // Offset: 40 Size: 16
	char bLockKeyframesToGridBool : 1;  // Offset: 56 Size: 1
	char pad_56_1 : 7;  // Offset: 56 Size: 1
	char pad_57[4];  // Offset: 57 Size: 4
	int32_t LockKeyframesToGrid;  // Offset: 60 Size: 4
	int32_t WaveTableResolution;  // Offset: 64 Size: 4
	char pad_68[4];  // Offset: 68 Size: 4
	struct TArray<struct FRuntimeFloatCurve> WaveTable;  // Offset: 72 Size: 16
	char bNormalizeWaveTables : 1;  // Offset: 88 Size: 1
	char pad_88_1 : 7;  // Offset: 88 Size: 1
	char pad_89[280];  // Offset: 89 Size: 280



 // Functions 
 public:
}; 
 
 


//Class Synthesis.SourceEffectSimpleDelayPreset Size 192
// Inherited 104 bytes 
class USourceEffectSimpleDelayPreset : public USoundEffectSourcePreset
{

 public: 
	char pad_104[64];  // Offset: 104 Size: 64
	struct FSourceEffectSimpleDelaySettings Settings;  // Offset: 168 Size: 24



 // Functions 
 public:
	void SetSettings(struct FSourceEffectSimpleDelaySettings& InSettings); // Function Synthesis.SourceEffectSimpleDelayPreset.SetSettings
}; 
 
 


//Class Synthesis.SourceEffectStereoDelayPreset Size 216
// Inherited 104 bytes 
class USourceEffectStereoDelayPreset : public USoundEffectSourcePreset
{

 public: 
	char pad_104[76];  // Offset: 104 Size: 76
	struct FSourceEffectStereoDelaySettings Settings;  // Offset: 180 Size: 36



 // Functions 
 public:
	void SetSettings(struct FSourceEffectStereoDelaySettings& InSettings); // Function Synthesis.SourceEffectStereoDelayPreset.SetSettings
}; 
 
 


//Class Synthesis.SourceEffectWaveShaperPreset Size 160
// Inherited 104 bytes 
class USourceEffectWaveShaperPreset : public USoundEffectSourcePreset
{

 public: 
	char pad_104[48];  // Offset: 104 Size: 48
	struct FSourceEffectWaveShaperSettings Settings;  // Offset: 152 Size: 8



 // Functions 
 public:
	void SetSettings(struct FSourceEffectWaveShaperSettings& InSettings); // Function Synthesis.SourceEffectWaveShaperPreset.SetSettings
}; 
 
 


//Class Synthesis.AudioImpulseResponse Size 88
// Inherited 40 bytes 
class UAudioImpulseResponse : public UObject
{

 public: 
	struct TArray<float> ImpulseResponse;  // Offset: 40 Size: 16
	int32_t NumChannels;  // Offset: 56 Size: 4
	int32_t SampleRate;  // Offset: 60 Size: 4
	float NormalizationVolumeDb;  // Offset: 64 Size: 4
	char pad_68_1 : 7;  // Offset: 68 Size: 1
	bool bTrueStereo : 1;  // Offset: 68 Size: 1
	char pad_69[3];  // Offset: 69 Size: 3
	struct TArray<float> IRData;  // Offset: 72 Size: 16



 // Functions 
 public:
}; 
 
 


//Class Synthesis.SubmixEffectConvolutionReverbPreset Size 240
// Inherited 104 bytes 
class USubmixEffectConvolutionReverbPreset : public USoundEffectSubmixPreset
{

 public: 
	struct UAudioImpulseResponse* ImpulseResponse;  // Offset: 104 Size: 8
	struct FSubmixEffectConvolutionReverbSettings Settings;  // Offset: 112 Size: 40
	enum class ESubmixEffectConvolutionReverbBlockSize BlockSize;  // Offset: 152 Size: 1
	char pad_153_1 : 7;  // Offset: 153 Size: 1
	bool bEnableHardwareAcceleration : 1;  // Offset: 153 Size: 1
	char pad_154[86];  // Offset: 154 Size: 86



 // Functions 
 public:
	void SetSettings(struct FSubmixEffectConvolutionReverbSettings& InSettings); // Function Synthesis.SubmixEffectConvolutionReverbPreset.SetSettings
	void SetImpulseResponse(struct UAudioImpulseResponse* InImpulseResponse); // Function Synthesis.SubmixEffectConvolutionReverbPreset.SetImpulseResponse
}; 
 
 


//Class Synthesis.SubmixEffectDelayPreset Size 184
// Inherited 104 bytes 
class USubmixEffectDelayPreset : public USoundEffectSubmixPreset
{

 public: 
	char pad_104[52];  // Offset: 104 Size: 52
	struct FSubmixEffectDelaySettings Settings;  // Offset: 156 Size: 12
	struct FSubmixEffectDelaySettings DynamicSettings;  // Offset: 168 Size: 12
	char pad_180[4];  // Offset: 180 Size: 4



 // Functions 
 public:
	void SetSettings(struct FSubmixEffectDelaySettings& InSettings); // Function Synthesis.SubmixEffectDelayPreset.SetSettings
	void SetInterpolationTime(float Time); // Function Synthesis.SubmixEffectDelayPreset.SetInterpolationTime
	void SetDelay(float Length); // Function Synthesis.SubmixEffectDelayPreset.SetDelay
	float GetMaxDelayInMilliseconds(); // Function Synthesis.SubmixEffectDelayPreset.GetMaxDelayInMilliseconds
}; 
 
 


//Class Synthesis.SubmixEffectFilterPreset Size 168
// Inherited 104 bytes 
class USubmixEffectFilterPreset : public USoundEffectSubmixPreset
{

 public: 
	char pad_104[52];  // Offset: 104 Size: 52
	struct FSubmixEffectFilterSettings Settings;  // Offset: 156 Size: 12



 // Functions 
 public:
	void SetSettings(struct FSubmixEffectFilterSettings& InSettings); // Function Synthesis.SubmixEffectFilterPreset.SetSettings
	void SetFilterType(enum class ESubmixFilterType InType); // Function Synthesis.SubmixEffectFilterPreset.SetFilterType
	void SetFilterQMod(float InQ); // Function Synthesis.SubmixEffectFilterPreset.SetFilterQMod
	void SetFilterQ(float InQ); // Function Synthesis.SubmixEffectFilterPreset.SetFilterQ
	void SetFilterCutoffFrequencyMod(float InFrequency); // Function Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequencyMod
	void SetFilterCutoffFrequency(float InFrequency); // Function Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequency
	void SetFilterAlgorithm(enum class ESubmixFilterAlgorithm InAlgorithm); // Function Synthesis.SubmixEffectFilterPreset.SetFilterAlgorithm
}; 
 
 


//Class Synthesis.SubmixEffectMultibandCompressorPreset Size 208
// Inherited 104 bytes 
class USubmixEffectMultibandCompressorPreset : public USoundEffectSubmixPreset
{

 public: 
	char pad_104[72];  // Offset: 104 Size: 72
	struct FSubmixEffectMultibandCompressorSettings Settings;  // Offset: 176 Size: 32



 // Functions 
 public:
	void SetSettings(struct FSubmixEffectMultibandCompressorSettings& InSettings); // Function Synthesis.SubmixEffectMultibandCompressorPreset.SetSettings
}; 
 
 


//Class Synthesis.SubmixEffectTapDelayPreset Size 216
// Inherited 104 bytes 
class USubmixEffectTapDelayPreset : public USoundEffectSubmixPreset
{

 public: 
	char pad_104[64];  // Offset: 104 Size: 64
	struct FSubmixEffectTapDelaySettings Settings;  // Offset: 168 Size: 24
	char pad_192[24];  // Offset: 192 Size: 24



 // Functions 
 public:
	void SetTap(int32_t TapId, struct FTapDelayInfo& TapInfo); // Function Synthesis.SubmixEffectTapDelayPreset.SetTap
	void SetSettings(struct FSubmixEffectTapDelaySettings& InSettings); // Function Synthesis.SubmixEffectTapDelayPreset.SetSettings
	void SetInterpolationTime(float Time); // Function Synthesis.SubmixEffectTapDelayPreset.SetInterpolationTime
	void RemoveTap(int32_t TapId); // Function Synthesis.SubmixEffectTapDelayPreset.RemoveTap
	void GetTapIds(struct TArray<int32_t>& TapIds); // Function Synthesis.SubmixEffectTapDelayPreset.GetTapIds
	void GetTap(int32_t TapId, struct FTapDelayInfo& TapInfo); // Function Synthesis.SubmixEffectTapDelayPreset.GetTap
	float GetMaxDelayInMilliseconds(); // Function Synthesis.SubmixEffectTapDelayPreset.GetMaxDelayInMilliseconds
	void AddTap(int32_t& TapId); // Function Synthesis.SubmixEffectTapDelayPreset.AddTap
}; 
 
 


//Class Synthesis.GranularSynth Size 2704
// Inherited 1744 bytes 
class UGranularSynth : public USynthComponent
{

 public: 
	struct USoundWave* GranulatedSoundWave;  // Offset: 1744 Size: 8
	char pad_1752[952];  // Offset: 1752 Size: 952



 // Functions 
 public:
	void SetSustainGain(float SustainGain); // Function Synthesis.GranularSynth.SetSustainGain
	void SetSoundWave(struct USoundWave* InSoundWave); // Function Synthesis.GranularSynth.SetSoundWave
	void SetScrubMode(bool bScrubMode); // Function Synthesis.GranularSynth.SetScrubMode
	void SetReleaseTimeMsec(float ReleaseTimeMsec); // Function Synthesis.GranularSynth.SetReleaseTimeMsec
	void SetPlayheadTime(float InPositionSec, float LerpTimeSec, enum class EGranularSynthSeekType SeekType); // Function Synthesis.GranularSynth.SetPlayheadTime
	void SetPlaybackSpeed(float InPlayheadRate); // Function Synthesis.GranularSynth.SetPlaybackSpeed
	void SetGrainVolume(float BaseVolume, struct FVector2D VolumeRange); // Function Synthesis.GranularSynth.SetGrainVolume
	void SetGrainsPerSecond(float InGrainsPerSecond); // Function Synthesis.GranularSynth.SetGrainsPerSecond
	void SetGrainProbability(float InGrainProbability); // Function Synthesis.GranularSynth.SetGrainProbability
	void SetGrainPitch(float BasePitch, struct FVector2D PitchRange); // Function Synthesis.GranularSynth.SetGrainPitch
	void SetGrainPan(float BasePan, struct FVector2D PanRange); // Function Synthesis.GranularSynth.SetGrainPan
	void SetGrainEnvelopeType(enum class EGranularSynthEnvelopeType EnvelopeType); // Function Synthesis.GranularSynth.SetGrainEnvelopeType
	void SetGrainDuration(float BaseDurationMsec, struct FVector2D DurationRange); // Function Synthesis.GranularSynth.SetGrainDuration
	void SetDecayTime(float DecayTimeMsec); // Function Synthesis.GranularSynth.SetDecayTime
	void SetAttackTime(float AttackTimeMsec); // Function Synthesis.GranularSynth.SetAttackTime
	void NoteOn(float Note, int32_t Velocity, float Duration); // Function Synthesis.GranularSynth.NoteOn
	void NoteOff(float Note, bool bKill); // Function Synthesis.GranularSynth.NoteOff
	bool IsLoaded(); // Function Synthesis.GranularSynth.IsLoaded
	float GetSampleDuration(); // Function Synthesis.GranularSynth.GetSampleDuration
	float GetCurrentPlayheadTime(); // Function Synthesis.GranularSynth.GetCurrentPlayheadTime
}; 
 
 


//Class Synthesis.SynthComponentMonoWaveTable Size 3600
// Inherited 1744 bytes 
class USynthComponentMonoWaveTable : public USynthComponent
{

 public: 
	struct FMulticastInlineDelegate OnTableAltered;  // Offset: 1744 Size: 16
	struct FMulticastInlineDelegate OnNumTablesChanged;  // Offset: 1760 Size: 16
	struct UMonoWaveTableSynthPreset* CurrentPreset;  // Offset: 1776 Size: 8
	char pad_1784[1816];  // Offset: 1784 Size: 1816



 // Functions 
 public:
	void SetWaveTablePosition(float InPosition); // Function Synthesis.SynthComponentMonoWaveTable.SetWaveTablePosition
	void SetSustainPedalState(bool InSustainPedalState); // Function Synthesis.SynthComponentMonoWaveTable.SetSustainPedalState
	void SetPosLfoType(enum class ESynthLFOType InLfoType); // Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoType
	void SetPosLfoFrequency(float InLfoFrequency); // Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoFrequency
	void SetPosLfoDepth(float InLfoDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoDepth
	void SetPositionEnvelopeSustainGain(float InSustainGain); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeSustainGain
	void SetPositionEnvelopeReleaseTime(float InReleaseTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeReleaseTime
	void SetPositionEnvelopeInvert(bool bInInvert); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeInvert
	void SetPositionEnvelopeDepth(float InDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDepth
	void SetPositionEnvelopeDecayTime(float InDecayTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDecayTime
	void SetPositionEnvelopeBiasInvert(bool bInBiasInvert); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasInvert
	void SetPositionEnvelopeBiasDepth(float InDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasDepth
	void SetPositionEnvelopeAttackTime(float InAttackTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeAttackTime
	void SetLowPassFilterResonance(float InNewQ); // Function Synthesis.SynthComponentMonoWaveTable.SetLowPassFilterResonance
	void SetFrequencyWithMidiNote(float InMidiNote); // Function Synthesis.SynthComponentMonoWaveTable.SetFrequencyWithMidiNote
	void SetFrequencyPitchBend(float FrequencyOffsetCents); // Function Synthesis.SynthComponentMonoWaveTable.SetFrequencyPitchBend
	void SetFrequency(float FrequencyHz); // Function Synthesis.SynthComponentMonoWaveTable.SetFrequency
	void SetFilterEnvelopeSustainGain(float InSustainGain); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeSustainGain
	void SetFilterEnvelopeReleaseTime(float InReleaseTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeReleaseTime
	void SetFilterEnvelopenDecayTime(float InDecayTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopenDecayTime
	void SetFilterEnvelopeInvert(bool bInInvert); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeInvert
	void SetFilterEnvelopeDepth(float InDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeDepth
	void SetFilterEnvelopeBiasInvert(bool bInBiasInvert); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasInvert
	void SetFilterEnvelopeBiasDepth(float InDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasDepth
	void SetFilterEnvelopeAttackTime(float InAttackTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeAttackTime
	bool SetCurveValue(int32_t TableIndex, int32_t KeyframeIndex, float NewValue); // Function Synthesis.SynthComponentMonoWaveTable.SetCurveValue
	bool SetCurveTangent(int32_t TableIndex, float InNewTangent); // Function Synthesis.SynthComponentMonoWaveTable.SetCurveTangent
	bool SetCurveInterpolationType(enum class CurveInterpolationType InterpolationType, int32_t TableIndex); // Function Synthesis.SynthComponentMonoWaveTable.SetCurveInterpolationType
	void SetAmpEnvelopeSustainGain(float InSustainGain); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeSustainGain
	void SetAmpEnvelopeReleaseTime(float InReleaseTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeReleaseTime
	void SetAmpEnvelopeInvert(bool bInInvert); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeInvert
	void SetAmpEnvelopeDepth(float InDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDepth
	void SetAmpEnvelopeDecayTime(float InDecayTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDecayTime
	void SetAmpEnvelopeBiasInvert(bool bInBiasInvert); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasInvert
	void SetAmpEnvelopeBiasDepth(float InDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasDepth
	void SetAmpEnvelopeAttackTime(float InAttackTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeAttackTime
	void RefreshWaveTable(int32_t Index); // Function Synthesis.SynthComponentMonoWaveTable.RefreshWaveTable
	void RefreshAllWaveTables(); // Function Synthesis.SynthComponentMonoWaveTable.RefreshAllWaveTables
	void NoteOn(float InMidiNote, float InVelocity); // Function Synthesis.SynthComponentMonoWaveTable.NoteOn
	void NoteOff(float InMidiNote); // Function Synthesis.SynthComponentMonoWaveTable.NoteOff
	int32_t GetNumTableEntries(); // Function Synthesis.SynthComponentMonoWaveTable.GetNumTableEntries
	int32_t GetMaxTableIndex(); // Function Synthesis.SynthComponentMonoWaveTable.GetMaxTableIndex
	struct TArray<float> GetKeyFrameValuesForTable(float TableIndex); // Function Synthesis.SynthComponentMonoWaveTable.GetKeyFrameValuesForTable
	float GetCurveTangent(int32_t TableIndex); // Function Synthesis.SynthComponentMonoWaveTable.GetCurveTangent
}; 
 
 


//Class Synthesis.SynthComponentToneGenerator Size 1776
// Inherited 1744 bytes 
class USynthComponentToneGenerator : public USynthComponent
{

 public: 
	float Frequency;  // Offset: 1744 Size: 4
	float Volume;  // Offset: 1748 Size: 4
	char pad_1752[24];  // Offset: 1752 Size: 24



 // Functions 
 public:
	void SetVolume(float InVolume); // Function Synthesis.SynthComponentToneGenerator.SetVolume
	void SetFrequency(float InFrequency); // Function Synthesis.SynthComponentToneGenerator.SetFrequency
}; 
 
 


//Class Synthesis.SynthSamplePlayer Size 2048
// Inherited 1744 bytes 
class USynthSamplePlayer : public USynthComponent
{

 public: 
	struct USoundWave* SoundWave;  // Offset: 1744 Size: 8
	struct FMulticastInlineDelegate OnSampleLoaded;  // Offset: 1752 Size: 16
	struct FMulticastInlineDelegate OnSamplePlaybackProgress;  // Offset: 1768 Size: 16
	char pad_1784[264];  // Offset: 1784 Size: 264



 // Functions 
 public:
	void SetSoundWave(struct USoundWave* InSoundWave); // Function Synthesis.SynthSamplePlayer.SetSoundWave
	void SetScrubTimeWidth(float InScrubTimeWidthSec); // Function Synthesis.SynthSamplePlayer.SetScrubTimeWidth
	void SetScrubMode(bool bScrubMode); // Function Synthesis.SynthSamplePlayer.SetScrubMode
	void SetPitch(float InPitch, float TimeSec); // Function Synthesis.SynthSamplePlayer.SetPitch
	void SeekToTime(float TimeSec, enum class ESamplePlayerSeekType SeekType, bool bWrap); // Function Synthesis.SynthSamplePlayer.SeekToTime
	bool IsLoaded(); // Function Synthesis.SynthSamplePlayer.IsLoaded
	float GetSampleDuration(); // Function Synthesis.SynthSamplePlayer.GetSampleDuration
	float GetCurrentPlaybackProgressTime(); // Function Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressTime
	float GetCurrentPlaybackProgressPercent(); // Function Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressPercent
}; 
 
 


//Class Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary Size 40
// Inherited 40 bytes 
class USynthesisUtilitiesBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{

 public: 



 // Functions 
 public:
	float GetLogFrequency(float InLinearValue, float InDomainMin, float InDomainMax, float InRangeMin, float InRangeMax); // Function Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary.GetLogFrequency
	float GetLinearFrequency(float InLogFrequencyValue, float InDomainMin, float InDomainMax, float InRangeMin, float InRangeMax); // Function Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary.GetLinearFrequency
}; 
 
 


//Class Synthesis.SynthKnob Size 1024
// Inherited 264 bytes 
class USynthKnob : public UWidget
{

 public: 
	float Value;  // Offset: 264 Size: 4
	float StepSize;  // Offset: 268 Size: 4
	float MouseSpeed;  // Offset: 272 Size: 4
	float MouseFineTuneSpeed;  // Offset: 276 Size: 4
	char ShowTooltipInfo : 1;  // Offset: 280 Size: 1
	char pad_280_1 : 7;  // Offset: 280 Size: 1
	char pad_281[8];  // Offset: 281 Size: 8
	struct FText ParameterName;  // Offset: 288 Size: 24
	struct FText ParameterUnits;  // Offset: 312 Size: 24
	struct FDelegate ValueDelegate;  // Offset: 336 Size: 16
	struct FSynthKnobStyle WidgetStyle;  // Offset: 352 Size: 568
	char pad_920_1 : 7;  // Offset: 920 Size: 1
	bool Locked : 1;  // Offset: 920 Size: 1
	char pad_921_1 : 7;  // Offset: 921 Size: 1
	bool IsFocusable : 1;  // Offset: 921 Size: 1
	char pad_922[6];  // Offset: 922 Size: 6
	struct FMulticastInlineDelegate OnMouseCaptureBegin;  // Offset: 928 Size: 16
	struct FMulticastInlineDelegate OnMouseCaptureEnd;  // Offset: 944 Size: 16
	struct FMulticastInlineDelegate OnControllerCaptureBegin;  // Offset: 960 Size: 16
	struct FMulticastInlineDelegate OnControllerCaptureEnd;  // Offset: 976 Size: 16
	struct FMulticastInlineDelegate OnValueChanged;  // Offset: 992 Size: 16
	char pad_1008[16];  // Offset: 1008 Size: 16



 // Functions 
 public:
	void SetValue(float InValue); // Function Synthesis.SynthKnob.SetValue
	void SetStepSize(float InValue); // Function Synthesis.SynthKnob.SetStepSize
	void SetLocked(bool InValue); // Function Synthesis.SynthKnob.SetLocked
	float GetValue(); // Function Synthesis.SynthKnob.GetValue
}; 
 
 


