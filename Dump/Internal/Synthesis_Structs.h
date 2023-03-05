#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//Function Synthesis.SubmixEffectFilterPreset.SetFilterQ Size 4
class FSetFilterQ
{

 public: 
	float InQ;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct Synthesis.ModularSynthPresetBankEntry Size 240
class FModularSynthPresetBankEntry
{

 public: 
	struct FString PresetName;  // Offset: 0 Size: 16
	struct FModularSynthPreset Preset;  // Offset: 16 Size: 224



 // Functions 
 public:
}; 
 
 //DelegateFunction Synthesis.OnFloatValueChangedEvent__DelegateSignature Size 4
class FOnFloatValueChangedEvent__DelegateSignature
{

 public: 
	float Value;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct Synthesis.SourceEffectFilterAudioBusModulationSettings Size 40
class FSourceEffectFilterAudioBusModulationSettings
{

 public: 
	struct UAudioBus* AudioBus;  // Offset: 0 Size: 8
	int32_t EnvelopeFollowerAttackTimeMsec;  // Offset: 8 Size: 4
	int32_t EnvelopeFollowerReleaseTimeMsec;  // Offset: 12 Size: 4
	float EnvelopeGainMultiplier;  // Offset: 16 Size: 4
	enum class ESourceEffectFilterParam FilterParam;  // Offset: 20 Size: 1
	char pad_21[3];  // Offset: 21 Size: 3
	float MinFrequencyModulation;  // Offset: 24 Size: 4
	float MaxFrequencyModulation;  // Offset: 28 Size: 4
	float MinResonanceModulation;  // Offset: 32 Size: 4
	float MaxResonanceModulation;  // Offset: 36 Size: 4



 // Functions 
 public:
}; 
 
 //DelegateFunction Synthesis.OnEnvelopeFollowerUpdate__DelegateSignature Size 4
class FOnEnvelopeFollowerUpdate__DelegateSignature
{

 public: 
	float EnvelopeValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.ModularSynthComponent.SetEnablePolyphony Size 1
class FSetEnablePolyphony
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bEnablePolyphony : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function Synthesis.ModularSynthComponent.SetEnableLegato Size 1
class FSetEnableLegato
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool LegatoEnabled : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function Synthesis.GranularSynth.SetGrainsPerSecond Size 4
class FSetGrainsPerSecond
{

 public: 
	float InGrainsPerSecond;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //DelegateFunction Synthesis.OnFloatValueChangedEventSynth2D__DelegateSignature Size 4
class FOnFloatValueChangedEventSynth2D__DelegateSignature
{

 public: 
	float Value;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //DelegateFunction Synthesis.OnTableAltered__DelegateSignature Size 4
class FOnTableAltered__DelegateSignature
{

 public: 
	int32_t TableIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.SourceEffectChorusPreset.SetSpreadModulator Size 8
class FSetSpreadModulator
{

 public: 
	struct USoundModulatorBase* Modulator;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct Synthesis.EpicSynth1Patch Size 24
class FEpicSynth1Patch
{

 public: 
	enum class ESynth1PatchSource PatchSource;  // Offset: 0 Size: 1
	char pad_1[7];  // Offset: 1 Size: 7
	struct TArray<struct FSynth1PatchCable> PatchCables;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //DelegateFunction Synthesis.OnSamplePlaybackProgress__DelegateSignature Size 8
class FOnSamplePlaybackProgress__DelegateSignature
{

 public: 
	float ProgressPercent;  // Offset: 0 Size: 4
	float ProgressTimeSeconds;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.GranularSynth.SetAttackTime Size 4
class FSetAttackTime
{

 public: 
	float AttackTimeMsec;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.SynthComponentMonoWaveTable.NoteOff Size 4
class FNoteOff
{

 public: 
	float InMidiNote;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.SubmixEffectTapDelayPreset.SetInterpolationTime Size 4
class FSetInterpolationTime
{

 public: 
	float Time;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct Synthesis.ModularSynthPreset Size 224
// Inherited 8 bytes 
class FModularSynthPreset : public FTableRowBase
{

 public: 
	char bEnablePolyphony : 1;  // Offset: 8 Size: 1
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	char pad_9[4];  // Offset: 9 Size: 4
	enum class ESynth1OscType Osc1Type;  // Offset: 12 Size: 1
	char pad_13[3];  // Offset: 13 Size: 3
	float Osc1Gain;  // Offset: 16 Size: 4
	float Osc1Octave;  // Offset: 20 Size: 4
	float Osc1Semitones;  // Offset: 24 Size: 4
	float Osc1Cents;  // Offset: 28 Size: 4
	float Osc1PulseWidth;  // Offset: 32 Size: 4
	enum class ESynth1OscType Osc2Type;  // Offset: 36 Size: 1
	char pad_37[3];  // Offset: 37 Size: 3
	float Osc2Gain;  // Offset: 40 Size: 4
	float Osc2Octave;  // Offset: 44 Size: 4
	float Osc2Semitones;  // Offset: 48 Size: 4
	float Osc2Cents;  // Offset: 52 Size: 4
	float Osc2PulseWidth;  // Offset: 56 Size: 4
	float Portamento;  // Offset: 60 Size: 4
	char bEnableUnison : 1;  // Offset: 64 Size: 1
	char bEnableOscillatorSync : 1;  // Offset: 64 Size: 1
	char pad_64_1 : 6;  // Offset: 64 Size: 1
	char pad_65[4];  // Offset: 65 Size: 4
	float Spread;  // Offset: 68 Size: 4
	float Pan;  // Offset: 72 Size: 4
	float LFO1Frequency;  // Offset: 76 Size: 4
	float LFO1Gain;  // Offset: 80 Size: 4
	enum class ESynthLFOType LFO1Type;  // Offset: 84 Size: 1
	enum class ESynthLFOMode LFO1Mode;  // Offset: 85 Size: 1
	enum class ESynthLFOPatchType LFO1PatchType;  // Offset: 86 Size: 1
	char pad_87[1];  // Offset: 87 Size: 1
	float LFO2Frequency;  // Offset: 88 Size: 4
	float LFO2Gain;  // Offset: 92 Size: 4
	enum class ESynthLFOType LFO2Type;  // Offset: 96 Size: 1
	enum class ESynthLFOMode LFO2Mode;  // Offset: 97 Size: 1
	enum class ESynthLFOPatchType LFO2PatchType;  // Offset: 98 Size: 1
	char pad_99[1];  // Offset: 99 Size: 1
	float GainDb;  // Offset: 100 Size: 4
	float AttackTime;  // Offset: 104 Size: 4
	float DecayTime;  // Offset: 108 Size: 4
	float SustainGain;  // Offset: 112 Size: 4
	float ReleaseTime;  // Offset: 116 Size: 4
	enum class ESynthModEnvPatch ModEnvPatchType;  // Offset: 120 Size: 1
	enum class ESynthModEnvBiasPatch ModEnvBiasPatchType;  // Offset: 121 Size: 1
	char pad_122[2];  // Offset: 122 Size: 2
	char bInvertModulationEnvelope : 1;  // Offset: 124 Size: 1
	char bInvertModulationEnvelopeBias : 1;  // Offset: 124 Size: 1
	char pad_124_1 : 6;  // Offset: 124 Size: 1
	char pad_125[4];  // Offset: 125 Size: 4
	float ModulationEnvelopeDepth;  // Offset: 128 Size: 4
	float ModulationEnvelopeAttackTime;  // Offset: 132 Size: 4
	float ModulationEnvelopeDecayTime;  // Offset: 136 Size: 4
	float ModulationEnvelopeSustainGain;  // Offset: 140 Size: 4
	float ModulationEnvelopeReleaseTime;  // Offset: 144 Size: 4
	char bLegato : 1;  // Offset: 148 Size: 1
	char bRetrigger : 1;  // Offset: 148 Size: 1
	char pad_148_1 : 6;  // Offset: 148 Size: 1
	char pad_149[4];  // Offset: 149 Size: 4
	float FilterFrequency;  // Offset: 152 Size: 4
	float FilterQ;  // Offset: 156 Size: 4
	enum class ESynthFilterType FilterType;  // Offset: 160 Size: 1
	enum class ESynthFilterAlgorithm FilterAlgorithm;  // Offset: 161 Size: 1
	char pad_162[2];  // Offset: 162 Size: 2
	char bStereoDelayEnabled : 1;  // Offset: 164 Size: 1
	char pad_164_1 : 7;  // Offset: 164 Size: 1
	char pad_165[4];  // Offset: 165 Size: 4
	enum class ESynthStereoDelayMode StereoDelayMode;  // Offset: 168 Size: 1
	char pad_169[3];  // Offset: 169 Size: 3
	float StereoDelayTime;  // Offset: 172 Size: 4
	float StereoDelayFeedback;  // Offset: 176 Size: 4
	float StereoDelayWetlevel;  // Offset: 180 Size: 4
	float StereoDelayRatio;  // Offset: 184 Size: 4
	char bChorusEnabled : 1;  // Offset: 188 Size: 1
	char pad_188_1 : 7;  // Offset: 188 Size: 1
	char pad_189[4];  // Offset: 189 Size: 4
	float ChorusDepth;  // Offset: 192 Size: 4
	float ChorusFeedback;  // Offset: 196 Size: 4
	float ChorusFrequency;  // Offset: 200 Size: 4
	char pad_204[4];  // Offset: 204 Size: 4
	struct TArray<struct FEpicSynth1Patch> Patches;  // Offset: 208 Size: 16



 // Functions 
 public:
}; 
 
 //Function Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressPercent Size 4
class FGetCurrentPlaybackProgressPercent
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct Synthesis.Synth1PatchCable Size 8
class FSynth1PatchCable
{

 public: 
	float Depth;  // Offset: 0 Size: 4
	enum class ESynth1PatchDestination Destination;  // Offset: 4 Size: 1
	char pad_5[3];  // Offset: 5 Size: 3



 // Functions 
 public:
}; 
 
 //Function Synthesis.ModularSynthComponent.SetLFOFrequency Size 8
class FSetLFOFrequency
{

 public: 
	int32_t LFOIndex;  // Offset: 0 Size: 4
	float FrequencyHz;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.SourceEffectChorusPreset.SetDepth Size 4
class FSetDepth
{

 public: 
	float Depth;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.ModularSynthLibrary.AddModularSynthPresetToBankAsset Size 248
class FAddModularSynthPresetToBankAsset
{

 public: 
	struct UModularSynthPresetBank* InBank;  // Offset: 0 Size: 8
	struct FModularSynthPreset Preset;  // Offset: 8 Size: 224
	struct FString PresetName;  // Offset: 232 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct Synthesis.PatchId Size 4
class FPatchId
{

 public: 
	int32_t ID;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct Synthesis.SourceEffectBitCrusherSettings Size 48
class FSourceEffectBitCrusherSettings
{

 public: 
	float CrushedSampleRate;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct FSoundModulationDestinationSettings SampleRateModulation;  // Offset: 8 Size: 16
	float CrushedBits;  // Offset: 24 Size: 4
	char pad_28[4];  // Offset: 28 Size: 4
	struct FSoundModulationDestinationSettings BitModulation;  // Offset: 32 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct Synthesis.SourceEffectBitCrusherBaseSettings Size 8
class FSourceEffectBitCrusherBaseSettings
{

 public: 
	float SampleRate;  // Offset: 0 Size: 4
	float BitDepth;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct Synthesis.SourceEffectChorusSettings Size 120
class FSourceEffectChorusSettings
{

 public: 
	float Depth;  // Offset: 0 Size: 4
	float Frequency;  // Offset: 4 Size: 4
	float Feedback;  // Offset: 8 Size: 4
	float WetLevel;  // Offset: 12 Size: 4
	float DryLevel;  // Offset: 16 Size: 4
	float Spread;  // Offset: 20 Size: 4
	struct FSoundModulationDestinationSettings DepthModulation;  // Offset: 24 Size: 16
	struct FSoundModulationDestinationSettings FrequencyModulation;  // Offset: 40 Size: 16
	struct FSoundModulationDestinationSettings FeedbackModulation;  // Offset: 56 Size: 16
	struct FSoundModulationDestinationSettings WetModulation;  // Offset: 72 Size: 16
	struct FSoundModulationDestinationSettings DryModulation;  // Offset: 88 Size: 16
	struct FSoundModulationDestinationSettings SpreadModulation;  // Offset: 104 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct Synthesis.SourceEffectChorusBaseSettings Size 24
class FSourceEffectChorusBaseSettings
{

 public: 
	float Depth;  // Offset: 0 Size: 4
	float Frequency;  // Offset: 4 Size: 4
	float Feedback;  // Offset: 8 Size: 4
	float WetLevel;  // Offset: 12 Size: 4
	float DryLevel;  // Offset: 16 Size: 4
	float Spread;  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeReleaseTime Size 4
class FSetPositionEnvelopeReleaseTime
{

 public: 
	float InReleaseTimeMsec;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct Synthesis.SourceEffectDynamicsProcessorSettings Size 40
class FSourceEffectDynamicsProcessorSettings
{

 public: 
	enum class ESourceEffectDynamicsProcessorType DynamicsProcessorType;  // Offset: 0 Size: 1
	enum class ESourceEffectDynamicsPeakMode PeakMode;  // Offset: 1 Size: 1
	char pad_2[2];  // Offset: 2 Size: 2
	float LookAheadMsec;  // Offset: 4 Size: 4
	float AttackTimeMsec;  // Offset: 8 Size: 4
	float ReleaseTimeMsec;  // Offset: 12 Size: 4
	float ThresholdDb;  // Offset: 16 Size: 4
	float Ratio;  // Offset: 20 Size: 4
	float KneeBandwidthDb;  // Offset: 24 Size: 4
	float InputGainDb;  // Offset: 28 Size: 4
	float OutputGainDb;  // Offset: 32 Size: 4
	char bStereoLinked : 1;  // Offset: 36 Size: 1
	char bAnalogMode : 1;  // Offset: 36 Size: 1
	char pad_36_1 : 6;  // Offset: 36 Size: 1
	char pad_37[4];  // Offset: 37 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct Synthesis.SourceEffectEnvelopeFollowerSettings Size 12
class FSourceEffectEnvelopeFollowerSettings
{

 public: 
	float AttackTime;  // Offset: 0 Size: 4
	float ReleaseTime;  // Offset: 4 Size: 4
	enum class EEnvelopeFollowerPeakMode PeakMode;  // Offset: 8 Size: 1
	char pad_9_1 : 7;  // Offset: 9 Size: 1
	bool bIsAnalogMode : 1;  // Offset: 9 Size: 1
	char pad_10[2];  // Offset: 10 Size: 2



 // Functions 
 public:
}; 
 
 //Function Synthesis.GranularSynth.SetDecayTime Size 4
class FSetDecayTime
{

 public: 
	float DecayTimeMsec;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.ModularSynthComponent.SetEnablePatch Size 8
class FSetEnablePatch
{

 public: 
	struct FPatchId PatchId;  // Offset: 0 Size: 4
	char pad_4_1 : 7;  // Offset: 4 Size: 1
	bool bIsEnabled : 1;  // Offset: 4 Size: 1
	char pad_5_1 : 7;  // Offset: 5 Size: 1
	bool ReturnValue : 1;  // Offset: 5 Size: 1
	char pad_6[2];  // Offset: 6 Size: 2



 // Functions 
 public:
}; 
 
 //Function Synthesis.SubmixEffectTapDelayPreset.GetTapIds Size 16
class FGetTapIds
{

 public: 
	struct TArray<int32_t> TapIds;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct Synthesis.SourceEffectEQSettings Size 16
class FSourceEffectEQSettings
{

 public: 
	struct TArray<struct FSourceEffectEQBand> EQBands;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function Synthesis.ModularSynthComponent.SetLFOFrequencyMod Size 8
class FSetLFOFrequencyMod
{

 public: 
	int32_t LFOIndex;  // Offset: 0 Size: 4
	float FrequencyModHz;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDepth Size 4
class FSetAmpEnvelopeDepth
{

 public: 
	float InDepth;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct Synthesis.SourceEffectEQBand Size 16
class FSourceEffectEQBand
{

 public: 
	float Frequency;  // Offset: 0 Size: 4
	float Bandwidth;  // Offset: 4 Size: 4
	float GainDb;  // Offset: 8 Size: 4
	char bEnabled : 1;  // Offset: 12 Size: 1
	char pad_12_1 : 7;  // Offset: 12 Size: 1
	char pad_13[4];  // Offset: 13 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct Synthesis.SynthSlateStyle Size 16
// Inherited 8 bytes 
class FSynthSlateStyle : public FSlateWidgetStyle
{

 public: 
	enum class ESynthSlateSizeType SizeType;  // Offset: 8 Size: 1
	enum class ESynthSlateColorStyle ColorStyle;  // Offset: 9 Size: 1
	char pad_10[6];  // Offset: 10 Size: 6



 // Functions 
 public:
}; 
 
 //ScriptStruct Synthesis.SubmixEffectFlexiverbSettings Size 16
class FSubmixEffectFlexiverbSettings
{

 public: 
	float PreDelay;  // Offset: 0 Size: 4
	float DecayTime;  // Offset: 4 Size: 4
	float RoomDampening;  // Offset: 8 Size: 4
	int32_t Complexity;  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct Synthesis.SubmixEffectStereoDelaySettings Size 36
class FSubmixEffectStereoDelaySettings
{

 public: 
	enum class EStereoDelaySourceEffect DelayMode;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	float DelayTimeMsec;  // Offset: 4 Size: 4
	float Feedback;  // Offset: 8 Size: 4
	float DelayRatio;  // Offset: 12 Size: 4
	float WetLevel;  // Offset: 16 Size: 4
	float DryLevel;  // Offset: 20 Size: 4
	char pad_24_1 : 7;  // Offset: 24 Size: 1
	bool bFilterEnabled : 1;  // Offset: 24 Size: 1
	enum class EStereoDelayFiltertype FilterType;  // Offset: 25 Size: 1
	char pad_26[2];  // Offset: 26 Size: 2
	float FilterFrequency;  // Offset: 28 Size: 4
	float FilterQ;  // Offset: 32 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct Synthesis.SourceEffectFilterSettings Size 32
class FSourceEffectFilterSettings
{

 public: 
	enum class ESourceEffectFilterCircuit FilterCircuit;  // Offset: 0 Size: 1
	enum class ESourceEffectFilterType FilterType;  // Offset: 1 Size: 1
	char pad_2[2];  // Offset: 2 Size: 2
	float CutoffFrequency;  // Offset: 4 Size: 4
	float FilterQ;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4
	struct TArray<struct FSourceEffectFilterAudioBusModulationSettings> AudioBusModulation;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function Synthesis.ModularSynthComponent.SetFilterFrequencyMod Size 4
class FSetFilterFrequencyMod
{

 public: 
	float FilterFrequencyHz;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct Synthesis.SourceEffectFoldbackDistortionSettings Size 12
class FSourceEffectFoldbackDistortionSettings
{

 public: 
	float InputGainDb;  // Offset: 0 Size: 4
	float ThresholdDb;  // Offset: 4 Size: 4
	float OutputGainDb;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct Synthesis.SourceEffectMidSideSpreaderSettings Size 8
class FSourceEffectMidSideSpreaderSettings
{

 public: 
	float SpreadAmount;  // Offset: 0 Size: 4
	enum class EStereoChannelMode InputMode;  // Offset: 4 Size: 1
	enum class EStereoChannelMode OutputMode;  // Offset: 5 Size: 1
	char pad_6_1 : 7;  // Offset: 6 Size: 1
	bool bEqualPower : 1;  // Offset: 6 Size: 1
	char pad_7[1];  // Offset: 7 Size: 1



 // Functions 
 public:
}; 
 
 //Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeInvert Size 1
class FSetPositionEnvelopeInvert
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bInInvert : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct Synthesis.SourceEffectWaveShaperSettings Size 8
class FSourceEffectWaveShaperSettings
{

 public: 
	float Amount;  // Offset: 0 Size: 4
	float OutputGainDb;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct Synthesis.SourceEffectPannerSettings Size 8
class FSourceEffectPannerSettings
{

 public: 
	float Spread;  // Offset: 0 Size: 4
	float Pan;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct Synthesis.SubmixEffectFilterSettings Size 12
class FSubmixEffectFilterSettings
{

 public: 
	enum class ESubmixFilterType FilterType;  // Offset: 0 Size: 1
	enum class ESubmixFilterAlgorithm FilterAlgorithm;  // Offset: 1 Size: 1
	char pad_2[2];  // Offset: 2 Size: 2
	float FilterFrequency;  // Offset: 4 Size: 4
	float FilterQ;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct Synthesis.SourceEffectPhaserSettings Size 16
class FSourceEffectPhaserSettings
{

 public: 
	float WetLevel;  // Offset: 0 Size: 4
	float Frequency;  // Offset: 4 Size: 4
	float Feedback;  // Offset: 8 Size: 4
	enum class EPhaserLFOType LFOType;  // Offset: 12 Size: 1
	char pad_13_1 : 7;  // Offset: 13 Size: 1
	bool UseQuadraturePhase : 1;  // Offset: 13 Size: 1
	char pad_14[2];  // Offset: 14 Size: 2



 // Functions 
 public:
}; 
 
 //Function Synthesis.SynthComponentMonoWaveTable.GetKeyFrameValuesForTable Size 24
class FGetKeyFrameValuesForTable
{

 public: 
	float TableIndex;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct TArray<float> ReturnValue;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct Synthesis.SourceEffectRingModulationSettings Size 32
class FSourceEffectRingModulationSettings
{

 public: 
	enum class ERingModulatorTypeSourceEffect ModulatorType;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	float Frequency;  // Offset: 4 Size: 4
	float Depth;  // Offset: 8 Size: 4
	float DryLevel;  // Offset: 12 Size: 4
	float WetLevel;  // Offset: 16 Size: 4
	char pad_20[4];  // Offset: 20 Size: 4
	struct UAudioBus* AudioBusModulator;  // Offset: 24 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct Synthesis.SourceEffectSimpleDelaySettings Size 24
class FSourceEffectSimpleDelaySettings
{

 public: 
	float SpeedOfSound;  // Offset: 0 Size: 4
	float DelayAmount;  // Offset: 4 Size: 4
	float DryAmount;  // Offset: 8 Size: 4
	float WetAmount;  // Offset: 12 Size: 4
	float Feedback;  // Offset: 16 Size: 4
	char bDelayBasedOnDistance : 1;  // Offset: 20 Size: 1
	char pad_20_1 : 7;  // Offset: 20 Size: 1
	char pad_21[4];  // Offset: 21 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.ModularSynthComponent.SetFilterFrequency Size 4
class FSetFilterFrequency
{

 public: 
	float FilterFrequencyHz;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct Synthesis.SourceEffectStereoDelaySettings Size 36
class FSourceEffectStereoDelaySettings
{

 public: 
	enum class EStereoDelaySourceEffect DelayMode;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	float DelayTimeMsec;  // Offset: 4 Size: 4
	float Feedback;  // Offset: 8 Size: 4
	float DelayRatio;  // Offset: 12 Size: 4
	float WetLevel;  // Offset: 16 Size: 4
	float DryLevel;  // Offset: 20 Size: 4
	char pad_24_1 : 7;  // Offset: 24 Size: 1
	bool bFilterEnabled : 1;  // Offset: 24 Size: 1
	enum class EStereoDelayFiltertype FilterType;  // Offset: 25 Size: 1
	char pad_26[2];  // Offset: 26 Size: 2
	float FilterFrequency;  // Offset: 28 Size: 4
	float FilterQ;  // Offset: 32 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.ModularSynthComponent.SetEnableRetrigger Size 1
class FSetEnableRetrigger
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool RetriggerEnabled : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct Synthesis.SubmixEffectConvolutionReverbSettings Size 40
class FSubmixEffectConvolutionReverbSettings
{

 public: 
	float NormalizationVolumeDb;  // Offset: 0 Size: 4
	char pad_4_1 : 7;  // Offset: 4 Size: 1
	bool bBypass : 1;  // Offset: 4 Size: 1
	char pad_5_1 : 7;  // Offset: 5 Size: 1
	bool bMixInputChannelFormatToImpulseResponseFormat : 1;  // Offset: 5 Size: 1
	char pad_6_1 : 7;  // Offset: 6 Size: 1
	bool bMixReverbOutputToOutputChannelFormat : 1;  // Offset: 6 Size: 1
	char pad_7[1];  // Offset: 7 Size: 1
	float SurroundRearChannelBleedDb;  // Offset: 8 Size: 4
	char pad_12_1 : 7;  // Offset: 12 Size: 1
	bool bInvertRearChannelBleedPhase : 1;  // Offset: 12 Size: 1
	char pad_13_1 : 7;  // Offset: 13 Size: 1
	bool bSurroundRearChannelFlip : 1;  // Offset: 13 Size: 1
	char pad_14[2];  // Offset: 14 Size: 2
	float SurroundRearChannelBleedAmount;  // Offset: 16 Size: 4
	char pad_20[4];  // Offset: 20 Size: 4
	struct UAudioImpulseResponse* ImpulseResponse;  // Offset: 24 Size: 8
	char pad_32_1 : 7;  // Offset: 32 Size: 1
	bool AllowHArdwareAcceleration : 1;  // Offset: 32 Size: 1
	char pad_33[7];  // Offset: 33 Size: 7



 // Functions 
 public:
}; 
 
 //Function Synthesis.ModularSynthComponent.SetModEnvSustainGain Size 4
class FSetModEnvSustainGain
{

 public: 
	float SustainGain;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.SubmixEffectFilterPreset.SetFilterAlgorithm Size 1
class FSetFilterAlgorithm
{

 public: 
	enum class ESubmixFilterAlgorithm InAlgorithm;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct Synthesis.SubmixEffectDelaySettings Size 12
class FSubmixEffectDelaySettings
{

 public: 
	float MaximumDelayLength;  // Offset: 0 Size: 4
	float InterpolationTime;  // Offset: 4 Size: 4
	float DelayLength;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.ModularSynthComponent.SetGainDb Size 4
class FSetGainDb
{

 public: 
	float GainDb;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.ModularSynthComponent.SetChorusFeedback Size 4
class FSetChorusFeedback
{

 public: 
	float Feedback;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct Synthesis.SubmixEffectMultibandCompressorSettings Size 32
class FSubmixEffectMultibandCompressorSettings
{

 public: 
	enum class ESubmixEffectDynamicsProcessorType DynamicsProcessorType;  // Offset: 0 Size: 1
	enum class ESubmixEffectDynamicsPeakMode PeakMode;  // Offset: 1 Size: 1
	char pad_2[2];  // Offset: 2 Size: 2
	float LookAheadMsec;  // Offset: 4 Size: 4
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool bLinkChannels : 1;  // Offset: 8 Size: 1
	char pad_9_1 : 7;  // Offset: 9 Size: 1
	bool bAnalogMode : 1;  // Offset: 9 Size: 1
	char pad_10_1 : 7;  // Offset: 10 Size: 1
	bool bFourPole : 1;  // Offset: 10 Size: 1
	char pad_11[5];  // Offset: 11 Size: 5
	struct TArray<struct FDynamicsBandSettings> Bands;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct Synthesis.DynamicsBandSettings Size 32
class FDynamicsBandSettings
{

 public: 
	float CrossoverTopFrequency;  // Offset: 0 Size: 4
	float AttackTimeMsec;  // Offset: 4 Size: 4
	float ReleaseTimeMsec;  // Offset: 8 Size: 4
	float ThresholdDb;  // Offset: 12 Size: 4
	float Ratio;  // Offset: 16 Size: 4
	float KneeBandwidthDb;  // Offset: 20 Size: 4
	float InputGainDb;  // Offset: 24 Size: 4
	float OutputGainDb;  // Offset: 28 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.SubmixEffectFilterPreset.SetFilterType Size 1
class FSetFilterType
{

 public: 
	enum class ESubmixFilterType InType;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function Synthesis.ModularSynthComponent.SetModEnvAttackTime Size 4
class FSetModEnvAttackTime
{

 public: 
	float AttackTimeMsec;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct Synthesis.SubmixEffectTapDelaySettings Size 24
class FSubmixEffectTapDelaySettings
{

 public: 
	float MaximumDelayLength;  // Offset: 0 Size: 4
	float InterpolationTime;  // Offset: 4 Size: 4
	struct TArray<struct FTapDelayInfo> Taps;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct Synthesis.TapDelayInfo Size 24
class FTapDelayInfo
{

 public: 
	enum class ETapLineMode TapLineMode;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	float DelayLength;  // Offset: 4 Size: 4
	float Gain;  // Offset: 8 Size: 4
	int32_t OutputChannel;  // Offset: 12 Size: 4
	float PanInDegrees;  // Offset: 16 Size: 4
	int32_t TapId;  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.ModularSynthComponent.SetPan Size 4
class FSetPan
{

 public: 
	float Pan;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct Synthesis.Synth2DSliderStyle Size 696
// Inherited 8 bytes 
class FSynth2DSliderStyle : public FSlateWidgetStyle
{

 public: 
	struct FSlateBrush NormalThumbImage;  // Offset: 8 Size: 136
	struct FSlateBrush DisabledThumbImage;  // Offset: 144 Size: 136
	struct FSlateBrush NormalBarImage;  // Offset: 280 Size: 136
	struct FSlateBrush DisabledBarImage;  // Offset: 416 Size: 136
	struct FSlateBrush BackgroundImage;  // Offset: 552 Size: 136
	float BarThickness;  // Offset: 688 Size: 4
	char pad_692[4];  // Offset: 692 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct Synthesis.SynthKnobStyle Size 568
// Inherited 8 bytes 
class FSynthKnobStyle : public FSlateWidgetStyle
{

 public: 
	struct FSlateBrush LargeKnob;  // Offset: 8 Size: 136
	struct FSlateBrush LargeKnobOverlay;  // Offset: 144 Size: 136
	struct FSlateBrush MediumKnob;  // Offset: 280 Size: 136
	struct FSlateBrush MediumKnobOverlay;  // Offset: 416 Size: 136
	float MinValueAngle;  // Offset: 552 Size: 4
	float MaxValueAngle;  // Offset: 556 Size: 4
	enum class ESynthKnobSize KnobSize;  // Offset: 560 Size: 1
	char pad_561[7];  // Offset: 561 Size: 7



 // Functions 
 public:
}; 
 
 //Function Synthesis.ModularSynthComponent.CreatePatch Size 32
class FCreatePatch
{

 public: 
	enum class ESynth1PatchSource PatchSource;  // Offset: 0 Size: 1
	char pad_1[7];  // Offset: 1 Size: 7
	struct TArray<struct FSynth1PatchCable> PatchCables;  // Offset: 8 Size: 16
	char pad_24_1 : 7;  // Offset: 24 Size: 1
	bool bEnableByDefault : 1;  // Offset: 24 Size: 1
	char pad_25[3];  // Offset: 25 Size: 3
	struct FPatchId ReturnValue;  // Offset: 28 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.SubmixEffectFilterPreset.SetFilterQMod Size 4
class FSetFilterQMod
{

 public: 
	float InQ;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.SynthComponentMonoWaveTable.NoteOn Size 8
class FNoteOn
{

 public: 
	float InMidiNote;  // Offset: 0 Size: 4
	float InVelocity;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.ModularSynthComponent.SetEnableUnison Size 1
class FSetEnableUnison
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool EnableUnison : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function Synthesis.ModularSynthComponent.SetChorusDepth Size 4
class FSetChorusDepth
{

 public: 
	float Depth;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.ModularSynthComponent.SetChorusEnabled Size 1
class FSetChorusEnabled
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool EnableChorus : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function Synthesis.ModularSynthComponent.SetChorusFrequency Size 4
class FSetChorusFrequency
{

 public: 
	float Frequency;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.ModularSynthComponent.SetLFOGain Size 8
class FSetLFOGain
{

 public: 
	int32_t LFOIndex;  // Offset: 0 Size: 4
	float Gain;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.ModularSynthComponent.SetLFOGainMod Size 8
class FSetLFOGainMod
{

 public: 
	int32_t LFOIndex;  // Offset: 0 Size: 4
	float GainMod;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.ModularSynthComponent.SetLFOMode Size 8
class FSetLFOMode
{

 public: 
	int32_t LFOIndex;  // Offset: 0 Size: 4
	enum class ESynthLFOMode LFOMode;  // Offset: 4 Size: 1
	char pad_5[3];  // Offset: 5 Size: 3



 // Functions 
 public:
}; 
 
 //Function Synthesis.ModularSynthComponent.SetLFOPatch Size 8
class FSetLFOPatch
{

 public: 
	int32_t LFOIndex;  // Offset: 0 Size: 4
	enum class ESynthLFOPatchType LFOPatchType;  // Offset: 4 Size: 1
	char pad_5[3];  // Offset: 5 Size: 3



 // Functions 
 public:
}; 
 
 //Function Synthesis.ModularSynthComponent.SetLFOType Size 8
class FSetLFOType
{

 public: 
	int32_t LFOIndex;  // Offset: 0 Size: 4
	enum class ESynthLFOType LFOType;  // Offset: 4 Size: 1
	char pad_5[3];  // Offset: 5 Size: 3



 // Functions 
 public:
}; 
 
 //Function Synthesis.ModularSynthComponent.SetModEnvBiasInvert Size 1
class FSetModEnvBiasInvert
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bInvert : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function Synthesis.ModularSynthComponent.SetModEnvBiasPatch Size 1
class FSetModEnvBiasPatch
{

 public: 
	enum class ESynthModEnvBiasPatch InPatchType;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function Synthesis.ModularSynthComponent.SetModEnvDecayTime Size 4
class FSetModEnvDecayTime
{

 public: 
	float DecayTimeMsec;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.SynthComponentMonoWaveTable.GetNumTableEntries Size 4
class FGetNumTableEntries
{

 public: 
	int32_t ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.ModularSynthComponent.SetModEnvDepth Size 4
class FSetModEnvDepth
{

 public: 
	float Depth;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.ModularSynthComponent.SetModEnvInvert Size 1
class FSetModEnvInvert
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bInvert : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function Synthesis.ModularSynthComponent.SetModEnvPatch Size 1
class FSetModEnvPatch
{

 public: 
	enum class ESynthModEnvPatch InPatchType;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function Synthesis.ModularSynthComponent.SetModEnvReleaseTime Size 4
class FSetModEnvReleaseTime
{

 public: 
	float Release;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.SourceEffectChorusPreset.SetDepthModulator Size 8
class FSetDepthModulator
{

 public: 
	struct USoundModulatorBase* Modulator;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function Synthesis.ModularSynthComponent.SetOscCents Size 8
class FSetOscCents
{

 public: 
	int32_t OscIndex;  // Offset: 0 Size: 4
	float Cents;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.ModularSynthComponent.SetStereoDelayWetlevel Size 4
class FSetStereoDelayWetlevel
{

 public: 
	float DelayWetlevel;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.ModularSynthComponent.SetOscFrequencyMod Size 8
class FSetOscFrequencyMod
{

 public: 
	int32_t OscIndex;  // Offset: 0 Size: 4
	float OscFreqMod;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasInvert Size 1
class FSetPositionEnvelopeBiasInvert
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bInBiasInvert : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function Synthesis.ModularSynthComponent.SetOscGain Size 8
class FSetOscGain
{

 public: 
	int32_t OscIndex;  // Offset: 0 Size: 4
	float OscGain;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.ModularSynthComponent.SetOscGainMod Size 8
class FSetOscGainMod
{

 public: 
	int32_t OscIndex;  // Offset: 0 Size: 4
	float OscGainMod;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.ModularSynthComponent.SetOscOctave Size 8
class FSetOscOctave
{

 public: 
	int32_t OscIndex;  // Offset: 0 Size: 4
	float Octave;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.ModularSynthComponent.SetOscPulsewidth Size 8
class FSetOscPulsewidth
{

 public: 
	int32_t OscIndex;  // Offset: 0 Size: 4
	float Pulsewidth;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.ModularSynthComponent.SetOscSemitones Size 8
class FSetOscSemitones
{

 public: 
	int32_t OscIndex;  // Offset: 0 Size: 4
	float Semitones;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.ModularSynthComponent.SetOscSync Size 1
class FSetOscSync
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bIsSynced : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function Synthesis.ModularSynthComponent.SetOscType Size 8
class FSetOscType
{

 public: 
	int32_t OscIndex;  // Offset: 0 Size: 4
	enum class ESynth1OscType OscType;  // Offset: 4 Size: 1
	char pad_5[3];  // Offset: 5 Size: 3



 // Functions 
 public:
}; 
 
 //Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoFrequency Size 4
class FSetPosLfoFrequency
{

 public: 
	float InLfoFrequency;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.ModularSynthComponent.SetPitchBend Size 4
class FSetPitchBend
{

 public: 
	float PitchBend;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.ModularSynthComponent.SetPortamento Size 4
class FSetPortamento
{

 public: 
	float Portamento;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.ModularSynthComponent.SetReleaseTime Size 4
class FSetReleaseTime
{

 public: 
	float ReleaseTimeMsec;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.SourceEffectChorusPreset.SetSpread Size 4
class FSetSpread
{

 public: 
	float Spread;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.GranularSynth.GetCurrentPlayheadTime Size 4
class FGetCurrentPlayheadTime
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.ModularSynthComponent.SetStereoDelayFeedback Size 4
class FSetStereoDelayFeedback
{

 public: 
	float DelayFeedback;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.ModularSynthComponent.SetStereoDelayIsEnabled Size 1
class FSetStereoDelayIsEnabled
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool StereoDelayEnabled : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function Synthesis.SynthSamplePlayer.SetScrubTimeWidth Size 4
class FSetScrubTimeWidth
{

 public: 
	float InScrubTimeWidthSec;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.ModularSynthComponent.SetStereoDelayMode Size 1
class FSetStereoDelayMode
{

 public: 
	enum class ESynthStereoDelayMode StereoDelayMode;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function Synthesis.SynthComponentToneGenerator.SetVolume Size 4
class FSetVolume
{

 public: 
	float InVolume;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.ModularSynthComponent.SetStereoDelayRatio Size 4
class FSetStereoDelayRatio
{

 public: 
	float DelayRatio;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.ModularSynthComponent.SetStereoDelayTime Size 4
class FSetStereoDelayTime
{

 public: 
	float DelayTimeMsec;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.GranularSynth.SetSustainGain Size 4
class FSetSustainGain
{

 public: 
	float SustainGain;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.SourceEffectChorusPreset.SetFrequencyModulator Size 8
class FSetFrequencyModulator
{

 public: 
	struct USoundModulatorBase* Modulator;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function Synthesis.ModularSynthComponent.SetSynthPreset Size 224
class FSetSynthPreset
{

 public: 
	struct FModularSynthPreset SynthPreset;  // Offset: 0 Size: 224



 // Functions 
 public:
}; 
 
 //Function Synthesis.SourceEffectBitCrusherPreset.SetSampleRate Size 4
class FSetSampleRate
{

 public: 
	float SampleRate;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.SourceEffectBitCrusherPreset.SetBitModulator Size 8
class FSetBitModulator
{

 public: 
	struct USoundModulatorBase* Modulator;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function Synthesis.SourceEffectBitCrusherPreset.SetBits Size 4
class FSetBits
{

 public: 
	float Bits;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.SourceEffectChorusPreset.SetModulationSettings Size 120
class FSetModulationSettings
{

 public: 
	struct FSourceEffectChorusSettings ModulationSettings;  // Offset: 0 Size: 120



 // Functions 
 public:
}; 
 
 //Function Synthesis.SourceEffectBitCrusherPreset.SetSampleRateModulator Size 8
class FSetSampleRateModulator
{

 public: 
	struct USoundModulatorBase* Modulator;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function Synthesis.SubmixEffectTapDelayPreset.SetSettings Size 24
class FSetSettings
{

 public: 
	struct FSubmixEffectTapDelaySettings InSettings;  // Offset: 0 Size: 24



 // Functions 
 public:
}; 
 
 //Function Synthesis.SourceEffectChorusPreset.SetDry Size 4
class FSetDry
{

 public: 
	float DryAmount;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.SourceEffectChorusPreset.SetDryModulator Size 8
class FSetDryModulator
{

 public: 
	struct USoundModulatorBase* Modulator;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function Synthesis.SourceEffectChorusPreset.SetFeedback Size 4
class FSetFeedback
{

 public: 
	float Feedback;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.SourceEffectChorusPreset.SetFeedbackModulator Size 8
class FSetFeedbackModulator
{

 public: 
	struct USoundModulatorBase* Modulator;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function Synthesis.SynthComponentToneGenerator.SetFrequency Size 4
class FSetFrequency
{

 public: 
	float InFrequency;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeReleaseTime Size 4
class FSetAmpEnvelopeReleaseTime
{

 public: 
	float InReleaseTimeMsec;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.SourceEffectChorusPreset.SetWet Size 4
class FSetWet
{

 public: 
	float WetAmount;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.SourceEffectChorusPreset.SetWetModulator Size 8
class FSetWetModulator
{

 public: 
	struct USoundModulatorBase* Modulator;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function Synthesis.SourceEffectEnvelopeFollowerPreset.RegisterEnvelopeFollowerListener Size 8
class FRegisterEnvelopeFollowerListener
{

 public: 
	struct UEnvelopeFollowerListener* EnvelopeFollowerListener;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function Synthesis.SourceEffectEnvelopeFollowerPreset.UnregisterEnvelopeFollowerListener Size 8
class FUnregisterEnvelopeFollowerListener
{

 public: 
	struct UEnvelopeFollowerListener* EnvelopeFollowerListener;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function Synthesis.SubmixEffectConvolutionReverbPreset.SetImpulseResponse Size 8
class FSetImpulseResponse
{

 public: 
	struct UAudioImpulseResponse* InImpulseResponse;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function Synthesis.SubmixEffectTapDelayPreset.GetMaxDelayInMilliseconds Size 4
class FGetMaxDelayInMilliseconds
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.SubmixEffectDelayPreset.SetDelay Size 4
class FSetDelay
{

 public: 
	float Length;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequency Size 4
class FSetFilterCutoffFrequency
{

 public: 
	float InFrequency;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequencyMod Size 4
class FSetFilterCutoffFrequencyMod
{

 public: 
	float InFrequency;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.SubmixEffectTapDelayPreset.AddTap Size 4
class FAddTap
{

 public: 
	int32_t TapId;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.SubmixEffectTapDelayPreset.GetTap Size 28
class FGetTap
{

 public: 
	int32_t TapId;  // Offset: 0 Size: 4
	struct FTapDelayInfo TapInfo;  // Offset: 4 Size: 24



 // Functions 
 public:
}; 
 
 //Function Synthesis.SubmixEffectTapDelayPreset.RemoveTap Size 4
class FRemoveTap
{

 public: 
	int32_t TapId;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.SynthComponentMonoWaveTable.SetFrequencyPitchBend Size 4
class FSetFrequencyPitchBend
{

 public: 
	float FrequencyOffsetCents;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.SubmixEffectTapDelayPreset.SetTap Size 28
class FSetTap
{

 public: 
	int32_t TapId;  // Offset: 0 Size: 4
	struct FTapDelayInfo TapInfo;  // Offset: 4 Size: 24



 // Functions 
 public:
}; 
 
 //Function Synthesis.SynthKnob.GetValue Size 4
class FGetValue
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.Synth2DSlider.SetIndentHandle Size 1
class FSetIndentHandle
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool InValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function Synthesis.SynthKnob.SetLocked Size 1
class FSetLocked
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool InValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function Synthesis.Synth2DSlider.SetSliderHandleColor Size 16
class FSetSliderHandleColor
{

 public: 
	struct FLinearColor InValue;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function Synthesis.SynthKnob.SetStepSize Size 4
class FSetStepSize
{

 public: 
	float InValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.SynthKnob.SetValue Size 4
class FSetValue
{

 public: 
	float InValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.SynthSamplePlayer.GetSampleDuration Size 4
class FGetSampleDuration
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.SynthSamplePlayer.IsLoaded Size 1
class FIsLoaded
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function Synthesis.GranularSynth.SetGrainDuration Size 12
class FSetGrainDuration
{

 public: 
	float BaseDurationMsec;  // Offset: 0 Size: 4
	struct FVector2D DurationRange;  // Offset: 4 Size: 8



 // Functions 
 public:
}; 
 
 //Function Synthesis.GranularSynth.SetGrainEnvelopeType Size 1
class FSetGrainEnvelopeType
{

 public: 
	enum class EGranularSynthEnvelopeType EnvelopeType;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function Synthesis.GranularSynth.SetGrainPan Size 12
class FSetGrainPan
{

 public: 
	float BasePan;  // Offset: 0 Size: 4
	struct FVector2D PanRange;  // Offset: 4 Size: 8



 // Functions 
 public:
}; 
 
 //Function Synthesis.GranularSynth.SetGrainPitch Size 12
class FSetGrainPitch
{

 public: 
	float BasePitch;  // Offset: 0 Size: 4
	struct FVector2D PitchRange;  // Offset: 4 Size: 8



 // Functions 
 public:
}; 
 
 //Function Synthesis.GranularSynth.SetGrainProbability Size 4
class FSetGrainProbability
{

 public: 
	float InGrainProbability;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.GranularSynth.SetGrainVolume Size 12
class FSetGrainVolume
{

 public: 
	float BaseVolume;  // Offset: 0 Size: 4
	struct FVector2D VolumeRange;  // Offset: 4 Size: 8



 // Functions 
 public:
}; 
 
 //Function Synthesis.GranularSynth.SetPlaybackSpeed Size 4
class FSetPlaybackSpeed
{

 public: 
	float InPlayheadRate;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.GranularSynth.SetPlayheadTime Size 12
class FSetPlayheadTime
{

 public: 
	float InPositionSec;  // Offset: 0 Size: 4
	float LerpTimeSec;  // Offset: 4 Size: 4
	enum class EGranularSynthSeekType SeekType;  // Offset: 8 Size: 1
	char pad_9[3];  // Offset: 9 Size: 3



 // Functions 
 public:
}; 
 
 //Function Synthesis.GranularSynth.SetReleaseTimeMsec Size 4
class FSetReleaseTimeMsec
{

 public: 
	float ReleaseTimeMsec;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.SynthSamplePlayer.SetScrubMode Size 1
class FSetScrubMode
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bScrubMode : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function Synthesis.SynthSamplePlayer.SetSoundWave Size 8
class FSetSoundWave
{

 public: 
	struct USoundWave* InSoundWave;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function Synthesis.SynthComponentMonoWaveTable.GetCurveTangent Size 8
class FGetCurveTangent
{

 public: 
	int32_t TableIndex;  // Offset: 0 Size: 4
	float ReturnValue;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.SynthComponentMonoWaveTable.GetMaxTableIndex Size 4
class FGetMaxTableIndex
{

 public: 
	int32_t ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.SynthComponentMonoWaveTable.RefreshWaveTable Size 4
class FRefreshWaveTable
{

 public: 
	int32_t Index;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeAttackTime Size 4
class FSetAmpEnvelopeAttackTime
{

 public: 
	float InAttackTimeMsec;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasDepth Size 4
class FSetAmpEnvelopeBiasDepth
{

 public: 
	float InDepth;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasInvert Size 1
class FSetAmpEnvelopeBiasInvert
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bInBiasInvert : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDecayTime Size 4
class FSetAmpEnvelopeDecayTime
{

 public: 
	float InDecayTimeMsec;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeInvert Size 1
class FSetAmpEnvelopeInvert
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bInInvert : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeSustainGain Size 4
class FSetAmpEnvelopeSustainGain
{

 public: 
	float InSustainGain;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.SynthComponentMonoWaveTable.SetCurveInterpolationType Size 12
class FSetCurveInterpolationType
{

 public: 
	enum class CurveInterpolationType InterpolationType;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	int32_t TableIndex;  // Offset: 4 Size: 4
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool ReturnValue : 1;  // Offset: 8 Size: 1
	char pad_9[3];  // Offset: 9 Size: 3



 // Functions 
 public:
}; 
 
 //Function Synthesis.SynthComponentMonoWaveTable.SetCurveTangent Size 12
class FSetCurveTangent
{

 public: 
	int32_t TableIndex;  // Offset: 0 Size: 4
	float InNewTangent;  // Offset: 4 Size: 4
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool ReturnValue : 1;  // Offset: 8 Size: 1
	char pad_9[3];  // Offset: 9 Size: 3



 // Functions 
 public:
}; 
 
 //Function Synthesis.SynthComponentMonoWaveTable.SetCurveValue Size 16
class FSetCurveValue
{

 public: 
	int32_t TableIndex;  // Offset: 0 Size: 4
	int32_t KeyframeIndex;  // Offset: 4 Size: 4
	float NewValue;  // Offset: 8 Size: 4
	char pad_12_1 : 7;  // Offset: 12 Size: 1
	bool ReturnValue : 1;  // Offset: 12 Size: 1
	char pad_13[3];  // Offset: 13 Size: 3



 // Functions 
 public:
}; 
 
 //Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeAttackTime Size 4
class FSetFilterEnvelopeAttackTime
{

 public: 
	float InAttackTimeMsec;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasDepth Size 4
class FSetFilterEnvelopeBiasDepth
{

 public: 
	float InDepth;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasInvert Size 1
class FSetFilterEnvelopeBiasInvert
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bInBiasInvert : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeDepth Size 4
class FSetFilterEnvelopeDepth
{

 public: 
	float InDepth;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeInvert Size 1
class FSetFilterEnvelopeInvert
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bInInvert : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopenDecayTime Size 4
class FSetFilterEnvelopenDecayTime
{

 public: 
	float InDecayTimeMsec;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeReleaseTime Size 4
class FSetFilterEnvelopeReleaseTime
{

 public: 
	float InReleaseTimeMsec;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeSustainGain Size 4
class FSetFilterEnvelopeSustainGain
{

 public: 
	float InSustainGain;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.SynthComponentMonoWaveTable.SetFrequencyWithMidiNote Size 4
class FSetFrequencyWithMidiNote
{

 public: 
	float InMidiNote;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.SynthComponentMonoWaveTable.SetLowPassFilterResonance Size 4
class FSetLowPassFilterResonance
{

 public: 
	float InNewQ;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeAttackTime Size 4
class FSetPositionEnvelopeAttackTime
{

 public: 
	float InAttackTimeMsec;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasDepth Size 4
class FSetPositionEnvelopeBiasDepth
{

 public: 
	float InDepth;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDecayTime Size 4
class FSetPositionEnvelopeDecayTime
{

 public: 
	float InDecayTimeMsec;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDepth Size 4
class FSetPositionEnvelopeDepth
{

 public: 
	float InDepth;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeSustainGain Size 4
class FSetPositionEnvelopeSustainGain
{

 public: 
	float InSustainGain;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoDepth Size 4
class FSetPosLfoDepth
{

 public: 
	float InLfoDepth;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoType Size 1
class FSetPosLfoType
{

 public: 
	enum class ESynthLFOType InLfoType;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function Synthesis.SynthComponentMonoWaveTable.SetSustainPedalState Size 1
class FSetSustainPedalState
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool InSustainPedalState : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function Synthesis.SynthComponentMonoWaveTable.SetWaveTablePosition Size 4
class FSetWaveTablePosition
{

 public: 
	float InPosition;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressTime Size 4
class FGetCurrentPlaybackProgressTime
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.SynthSamplePlayer.SeekToTime Size 8
class FSeekToTime
{

 public: 
	float TimeSec;  // Offset: 0 Size: 4
	enum class ESamplePlayerSeekType SeekType;  // Offset: 4 Size: 1
	char pad_5_1 : 7;  // Offset: 5 Size: 1
	bool bWrap : 1;  // Offset: 5 Size: 1
	char pad_6[2];  // Offset: 6 Size: 2



 // Functions 
 public:
}; 
 
 //Function Synthesis.SynthSamplePlayer.SetPitch Size 8
class FSetPitch
{

 public: 
	float InPitch;  // Offset: 0 Size: 4
	float TimeSec;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary.GetLinearFrequency Size 24
class FGetLinearFrequency
{

 public: 
	float InLogFrequencyValue;  // Offset: 0 Size: 4
	float InDomainMin;  // Offset: 4 Size: 4
	float InDomainMax;  // Offset: 8 Size: 4
	float InRangeMin;  // Offset: 12 Size: 4
	float InRangeMax;  // Offset: 16 Size: 4
	float ReturnValue;  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 //Function Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary.GetLogFrequency Size 24
class FGetLogFrequency
{

 public: 
	float InLinearValue;  // Offset: 0 Size: 4
	float InDomainMin;  // Offset: 4 Size: 4
	float InDomainMax;  // Offset: 8 Size: 4
	float InRangeMin;  // Offset: 12 Size: 4
	float InRangeMax;  // Offset: 16 Size: 4
	float ReturnValue;  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 