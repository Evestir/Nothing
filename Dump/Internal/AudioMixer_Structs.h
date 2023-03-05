#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//Function AudioMixer.AudioMixerBlueprintLibrary.SetBypassSourceEffectChainEntry Size 24
class FSetBypassSourceEffectChainEntry
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct USoundEffectSourcePresetChain* PresetChain;  // Offset: 8 Size: 8
	int32_t EntryIndex;  // Offset: 16 Size: 4
	char pad_20_1 : 7;  // Offset: 20 Size: 1
	bool bBypassed : 1;  // Offset: 20 Size: 1
	char pad_21[3];  // Offset: 21 Size: 3



 // Functions 
 public:
}; 
 
 //ScriptStruct AudioMixer.SubmixEffectDynamicProcessorFilterSettings Size 12
class FSubmixEffectDynamicProcessorFilterSettings
{

 public: 
	char bEnabled : 1;  // Offset: 0 Size: 1
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	char pad_1[4];  // Offset: 1 Size: 4
	float Cutoff;  // Offset: 4 Size: 4
	float GainDb;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //DelegateFunction AudioMixer.OnSynthEnvelopeValue__DelegateSignature Size 4
class FOnSynthEnvelopeValue__DelegateSignature
{

 public: 
	float EnvelopeValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function AudioMixer.QuartzClockHandle.PauseClock Size 16
class FPauseClock
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct UQuartzClockHandle* ClockHandle;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function AudioMixer.QuartzClockHandle.GetMillisecondsPerTick Size 16
class FGetMillisecondsPerTick
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	float ReturnValue;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function AudioMixer.SynthComponent.SetOutputToBusOnly Size 1
class FSetOutputToBusOnly
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bInOutputToBusOnly : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function AudioMixer.SynthComponent.IsPlaying Size 1
class FIsPlaying
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function AudioMixer.AudioMixerBlueprintLibrary.TrimAudioCache Size 8
class FTrimAudioCache
{

 public: 
	float InMegabytesToFree;  // Offset: 0 Size: 4
	float ReturnValue;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //DelegateFunction AudioMixer.OnSoundLoadComplete__DelegateSignature Size 16
class FOnSoundLoadComplete__DelegateSignature
{

 public: 
	struct USoundWave* LoadedSoundWave;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool WasCancelled : 1;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7



 // Functions 
 public:
}; 
 
 //ScriptStruct AudioMixer.SubmixEffectDynamicsProcessorSettings Size 96
class FSubmixEffectDynamicsProcessorSettings
{

 public: 
	enum class ESubmixEffectDynamicsProcessorType DynamicsProcessorType;  // Offset: 0 Size: 1
	enum class ESubmixEffectDynamicsPeakMode PeakMode;  // Offset: 1 Size: 1
	enum class ESubmixEffectDynamicsChannelLinkMode LinkMode;  // Offset: 2 Size: 1
	char pad_3[1];  // Offset: 3 Size: 1
	float InputGainDb;  // Offset: 4 Size: 4
	float ThresholdDb;  // Offset: 8 Size: 4
	float Ratio;  // Offset: 12 Size: 4
	float KneeBandwidthDb;  // Offset: 16 Size: 4
	float LookAheadMsec;  // Offset: 20 Size: 4
	float AttackTimeMsec;  // Offset: 24 Size: 4
	float ReleaseTimeMsec;  // Offset: 28 Size: 4
	enum class ESubmixEffectDynamicsKeySource KeySource;  // Offset: 32 Size: 1
	char pad_33[7];  // Offset: 33 Size: 7
	struct UAudioBus* ExternalAudioBus;  // Offset: 40 Size: 8
	struct USoundSubmix* ExternalSubmix;  // Offset: 48 Size: 8
	char bChannelLinked : 1;  // Offset: 56 Size: 1
	char bAnalogMode : 1;  // Offset: 56 Size: 1
	char bBypass : 1;  // Offset: 56 Size: 1
	char bKeyAudition : 1;  // Offset: 56 Size: 1
	char pad_56_1 : 4;  // Offset: 56 Size: 1
	char pad_57[4];  // Offset: 57 Size: 4
	float KeyGainDb;  // Offset: 60 Size: 4
	float OutputGainDb;  // Offset: 64 Size: 4
	struct FSubmixEffectDynamicProcessorFilterSettings KeyHighshelf;  // Offset: 68 Size: 12
	struct FSubmixEffectDynamicProcessorFilterSettings KeyLowshelf;  // Offset: 80 Size: 12
	char pad_92[4];  // Offset: 92 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct AudioMixer.SubmixEffectSubmixEQSettings Size 16
class FSubmixEffectSubmixEQSettings
{

 public: 
	struct TArray<struct FSubmixEffectEQBand> EQBands;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function AudioMixer.QuartzClockHandle.SetMillisecondsPerTick Size 56
class FSetMillisecondsPerTick
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct FQuartzQuantizationBoundary QuantizationBoundary;  // Offset: 8 Size: 12
	struct FDelegate Delegate;  // Offset: 20 Size: 16
	char pad_36[4];  // Offset: 36 Size: 4
	struct UQuartzClockHandle* ClockHandle;  // Offset: 40 Size: 8
	float MillisecondsPerTick;  // Offset: 48 Size: 4
	char pad_52[4];  // Offset: 52 Size: 4



 // Functions 
 public:
}; 
 
 //Function AudioMixer.SynthComponent.SetLowPassFilterEnabled Size 1
class FSetLowPassFilterEnabled
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool InLowPassFilterEnabled : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct AudioMixer.SubmixEffectEQBand Size 16
class FSubmixEffectEQBand
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
 
 //ScriptStruct AudioMixer.SubmixEffectReverbSettings Size 64
class FSubmixEffectReverbSettings
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bBypassEarlyReflections : 1;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	float ReflectionsDelay;  // Offset: 4 Size: 4
	float GainHF;  // Offset: 8 Size: 4
	float ReflectionsGain;  // Offset: 12 Size: 4
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool bBypassLateReflections : 1;  // Offset: 16 Size: 1
	char pad_17[3];  // Offset: 17 Size: 3
	float LateDelay;  // Offset: 20 Size: 4
	float DecayTime;  // Offset: 24 Size: 4
	float Density;  // Offset: 28 Size: 4
	float Diffusion;  // Offset: 32 Size: 4
	float AirAbsorptionGainHF;  // Offset: 36 Size: 4
	float DecayHFRatio;  // Offset: 40 Size: 4
	float LateGain;  // Offset: 44 Size: 4
	float Gain;  // Offset: 48 Size: 4
	float WetLevel;  // Offset: 52 Size: 4
	float DryLevel;  // Offset: 56 Size: 4
	char pad_60_1 : 7;  // Offset: 60 Size: 1
	bool bBypass : 1;  // Offset: 60 Size: 1
	char pad_61[3];  // Offset: 61 Size: 3



 // Functions 
 public:
}; 
 
 //Function AudioMixer.QuartzClockHandle.ResetTransportQuantized Size 48
class FResetTransportQuantized
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct FQuartzQuantizationBoundary InQuantizationBoundary;  // Offset: 8 Size: 12
	struct FDelegate InDelegate;  // Offset: 20 Size: 16
	char pad_36[4];  // Offset: 36 Size: 4
	struct UQuartzClockHandle* ClockHandle;  // Offset: 40 Size: 8



 // Functions 
 public:
}; 
 
 //Function AudioMixer.QuartzClockHandle.SetSecondsPerTick Size 56
class FSetSecondsPerTick
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct FQuartzQuantizationBoundary QuantizationBoundary;  // Offset: 8 Size: 12
	struct FDelegate Delegate;  // Offset: 20 Size: 16
	char pad_36[4];  // Offset: 36 Size: 4
	struct UQuartzClockHandle* ClockHandle;  // Offset: 40 Size: 8
	float SecondsPerTick;  // Offset: 48 Size: 4
	char pad_52[4];  // Offset: 52 Size: 4



 // Functions 
 public:
}; 
 
 //Function AudioMixer.SynthComponent.SetLowPassFilterFrequency Size 4
class FSetLowPassFilterFrequency
{

 public: 
	float InLowPassFilterFrequency;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function AudioMixer.SynthComponent.SetSubmixSend Size 16
class FSetSubmixSend
{

 public: 
	struct USoundSubmixBase* Submix;  // Offset: 0 Size: 8
	float SendLevel;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function AudioMixer.SynthComponent.SetVolumeMultiplier Size 4
class FSetVolumeMultiplier
{

 public: 
	float VolumeMultiplier;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function AudioMixer.AudioMixerBlueprintLibrary.AddMasterSubmixEffect Size 16
class FAddMasterSubmixEffect
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct USoundEffectSubmixPreset* SubmixEffectPreset;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function AudioMixer.QuartzClockHandle.SetBeatsPerMinute Size 56
class FSetBeatsPerMinute
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct FQuartzQuantizationBoundary QuantizationBoundary;  // Offset: 8 Size: 12
	struct FDelegate Delegate;  // Offset: 20 Size: 16
	char pad_36[4];  // Offset: 36 Size: 4
	struct UQuartzClockHandle* ClockHandle;  // Offset: 40 Size: 8
	float BeatsPerMinute;  // Offset: 48 Size: 4
	char pad_52[4];  // Offset: 52 Size: 4



 // Functions 
 public:
}; 
 
 //Function AudioMixer.AudioMixerBlueprintLibrary.StartAnalyzingOutput Size 32
class FStartAnalyzingOutput
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct USoundSubmix* SubmixToAnalyze;  // Offset: 8 Size: 8
	enum class EFFTSize FFTSize;  // Offset: 16 Size: 1
	enum class EFFTPeakInterpolationMethod InterpolationMethod;  // Offset: 17 Size: 1
	enum class EFFTWindowType WindowType;  // Offset: 18 Size: 1
	char pad_19[1];  // Offset: 19 Size: 1
	float HopSize;  // Offset: 20 Size: 4
	enum class EAudioSpectrumType SpectrumType;  // Offset: 24 Size: 1
	char pad_25[7];  // Offset: 25 Size: 7



 // Functions 
 public:
}; 
 
 //Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectAtIndex Size 24
class FRemoveSubmixEffectAtIndex
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct USoundSubmix* SoundSubmix;  // Offset: 8 Size: 8
	int32_t SubmixChainIndex;  // Offset: 16 Size: 4
	char pad_20[4];  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 //Function AudioMixer.AudioMixerBlueprintLibrary.AddSourceEffectToPresetChain Size 32
class FAddSourceEffectToPresetChain
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct USoundEffectSourcePresetChain* PresetChain;  // Offset: 8 Size: 8
	struct FSourceEffectChainEntry entry;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function AudioMixer.AudioMixerBlueprintLibrary.AddSubmixEffect Size 32
class FAddSubmixEffect
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct USoundSubmix* SoundSubmix;  // Offset: 8 Size: 8
	struct USoundEffectSubmixPreset* SubmixEffectPreset;  // Offset: 16 Size: 8
	int32_t ReturnValue;  // Offset: 24 Size: 4
	char pad_28[4];  // Offset: 28 Size: 4



 // Functions 
 public:
}; 
 
 //Function AudioMixer.AudioMixerBlueprintLibrary.ClearMasterSubmixEffects Size 8
class FClearMasterSubmixEffects
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function AudioMixer.AudioMixerBlueprintLibrary.ResumeRecordingOutput Size 16
class FResumeRecordingOutput
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct USoundSubmix* SubmixToPause;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function AudioMixer.AudioMixerBlueprintLibrary.ClearSubmixEffectChainOverride Size 24
class FClearSubmixEffectChainOverride
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct USoundSubmix* SoundSubmix;  // Offset: 8 Size: 8
	float FadeTimeSec;  // Offset: 16 Size: 4
	char pad_20[4];  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 //Function AudioMixer.QuartzClockHandle.GetCurrentTimestamp Size 24
class FGetCurrentTimestamp
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct FQuartzTransportTimeStamp ReturnValue;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffect Size 24
class FRemoveSubmixEffect
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct USoundSubmix* SoundSubmix;  // Offset: 8 Size: 8
	struct USoundEffectSubmixPreset* SubmixEffectPreset;  // Offset: 16 Size: 8



 // Functions 
 public:
}; 
 
 //Function AudioMixer.AudioMixerBlueprintLibrary.ClearSubmixEffects Size 16
class FClearSubmixEffects
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct USoundSubmix* SoundSubmix;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetExternalSubmix Size 8
class FSetExternalSubmix
{

 public: 
	struct USoundSubmix* Submix;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function AudioMixer.AudioMixerBlueprintLibrary.GetMagnitudeForFrequencies Size 48
class FGetMagnitudeForFrequencies
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct TArray<float> Frequencies;  // Offset: 8 Size: 16
	struct TArray<float> Magnitudes;  // Offset: 24 Size: 16
	struct USoundSubmix* SubmixToAnalyze;  // Offset: 40 Size: 8



 // Functions 
 public:
}; 
 
 //Function AudioMixer.AudioMixerBlueprintLibrary.StartRecordingOutput Size 24
class FStartRecordingOutput
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	float ExpectedDuration;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4
	struct USoundSubmix* SubmixToRecord;  // Offset: 16 Size: 8



 // Functions 
 public:
}; 
 
 //Function AudioMixer.QuartzSubsystem.IsQuartzEnabled Size 1
class FIsQuartzEnabled
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function AudioMixer.AudioMixerBlueprintLibrary.GetNumberOfEntriesInSourceEffectChain Size 24
class FGetNumberOfEntriesInSourceEffectChain
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct USoundEffectSourcePresetChain* PresetChain;  // Offset: 8 Size: 8
	int32_t ReturnValue;  // Offset: 16 Size: 4
	char pad_20[4];  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 //Function AudioMixer.AudioMixerBlueprintLibrary.GetPhaseForFrequencies Size 48
class FGetPhaseForFrequencies
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct TArray<float> Frequencies;  // Offset: 8 Size: 16
	struct TArray<float> Phases;  // Offset: 24 Size: 16
	struct USoundSubmix* SubmixToAnalyze;  // Offset: 40 Size: 8



 // Functions 
 public:
}; 
 
 //Function AudioMixer.QuartzClockHandle.GetBeatsPerMinute Size 16
class FGetBeatsPerMinute
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	float ReturnValue;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function AudioMixer.AudioMixerBlueprintLibrary.IsAudioBusActive Size 24
class FIsAudioBusActive
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct UAudioBus* AudioBus;  // Offset: 8 Size: 8
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool ReturnValue : 1;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //Function AudioMixer.AudioMixerBlueprintLibrary.MakeFullSpectrumSpectralAnalysisBandSettings Size 40
class FMakeFullSpectrumSpectralAnalysisBandSettings
{

 public: 
	int32_t InNumBands;  // Offset: 0 Size: 4
	float InMinimumFrequency;  // Offset: 4 Size: 4
	float InMaximumFrequency;  // Offset: 8 Size: 4
	int32_t InAttackTimeMsec;  // Offset: 12 Size: 4
	int32_t InReleaseTimeMsec;  // Offset: 16 Size: 4
	char pad_20[4];  // Offset: 20 Size: 4
	struct TArray<struct FSoundSubmixSpectralAnalysisBandSettings> ReturnValue;  // Offset: 24 Size: 16



 // Functions 
 public:
}; 
 
 //Function AudioMixer.QuartzClockHandle.GetThirtySecondNotesPerMinute Size 16
class FGetThirtySecondNotesPerMinute
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	float ReturnValue;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function AudioMixer.AudioMixerBlueprintLibrary.MakeMusicalSpectralAnalysisBandSettings Size 40
class FMakeMusicalSpectralAnalysisBandSettings
{

 public: 
	int32_t InNumSemitones;  // Offset: 0 Size: 4
	enum class EMusicalNoteName InStartingMusicalNote;  // Offset: 4 Size: 1
	char pad_5[3];  // Offset: 5 Size: 3
	int32_t InStartingOctave;  // Offset: 8 Size: 4
	int32_t InAttackTimeMsec;  // Offset: 12 Size: 4
	int32_t InReleaseTimeMsec;  // Offset: 16 Size: 4
	char pad_20[4];  // Offset: 20 Size: 4
	struct TArray<struct FSoundSubmixSpectralAnalysisBandSettings> ReturnValue;  // Offset: 24 Size: 16



 // Functions 
 public:
}; 
 
 //Function AudioMixer.QuartzClockHandle.ResumeClock Size 16
class FResumeClock
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct UQuartzClockHandle* ClockHandle;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function AudioMixer.AudioMixerBlueprintLibrary.MakePresetSpectralAnalysisBandSettings Size 32
class FMakePresetSpectralAnalysisBandSettings
{

 public: 
	enum class EAudioSpectrumBandPresetType InBandPresetType;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	int32_t InNumBands;  // Offset: 4 Size: 4
	int32_t InAttackTimeMsec;  // Offset: 8 Size: 4
	int32_t InReleaseTimeMsec;  // Offset: 12 Size: 4
	struct TArray<struct FSoundSubmixSpectralAnalysisBandSettings> ReturnValue;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function AudioMixer.AudioMixerBlueprintLibrary.PauseRecordingOutput Size 16
class FPauseRecordingOutput
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct USoundSubmix* SubmixToPause;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundCueForPlayback Size 8
class FPrimeSoundCueForPlayback
{

 public: 
	struct USoundCue* SoundCue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundForPlayback Size 24
class FPrimeSoundForPlayback
{

 public: 
	struct USoundWave* SoundWave;  // Offset: 0 Size: 8
	struct FDelegate OnLoadCompletion;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSourceEffectFromPresetChain Size 24
class FRemoveSourceEffectFromPresetChain
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct USoundEffectSourcePresetChain* PresetChain;  // Offset: 8 Size: 8
	int32_t EntryIndex;  // Offset: 16 Size: 4
	char pad_20[4];  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 //Function AudioMixer.QuartzClockHandle.GetSecondsPerTick Size 16
class FGetSecondsPerTick
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	float ReturnValue;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function AudioMixer.AudioMixerBlueprintLibrary.RemoveMasterSubmixEffect Size 16
class FRemoveMasterSubmixEffect
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct USoundEffectSubmixPreset* SubmixEffectPreset;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectPreset Size 24
class FRemoveSubmixEffectPreset
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct USoundSubmix* SoundSubmix;  // Offset: 8 Size: 8
	struct USoundEffectSubmixPreset* SubmixEffectPreset;  // Offset: 16 Size: 8



 // Functions 
 public:
}; 
 
 //Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectPresetAtIndex Size 24
class FRemoveSubmixEffectPresetAtIndex
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct USoundSubmix* SoundSubmix;  // Offset: 8 Size: 8
	int32_t SubmixChainIndex;  // Offset: 16 Size: 4
	char pad_20[4];  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 //Function AudioMixer.AudioMixerBlueprintLibrary.ReplaceSoundEffectSubmix Size 32
class FReplaceSoundEffectSubmix
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct USoundSubmix* InSoundSubmix;  // Offset: 8 Size: 8
	int32_t SubmixChainIndex;  // Offset: 16 Size: 4
	char pad_20[4];  // Offset: 20 Size: 4
	struct USoundEffectSubmixPreset* SubmixEffectPreset;  // Offset: 24 Size: 8



 // Functions 
 public:
}; 
 
 //Function AudioMixer.AudioMixerBlueprintLibrary.ReplaceSubmixEffect Size 32
class FReplaceSubmixEffect
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct USoundSubmix* InSoundSubmix;  // Offset: 8 Size: 8
	int32_t SubmixChainIndex;  // Offset: 16 Size: 4
	char pad_20[4];  // Offset: 20 Size: 4
	struct USoundEffectSubmixPreset* SubmixEffectPreset;  // Offset: 24 Size: 8



 // Functions 
 public:
}; 
 
 //Function AudioMixer.AudioMixerBlueprintLibrary.SetSubmixEffectChainOverride Size 40
class FSetSubmixEffectChainOverride
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct USoundSubmix* SoundSubmix;  // Offset: 8 Size: 8
	struct TArray<struct USoundEffectSubmixPreset*> SubmixEffectPresetChain;  // Offset: 16 Size: 16
	float FadeTimeSec;  // Offset: 32 Size: 4
	char pad_36[4];  // Offset: 36 Size: 4



 // Functions 
 public:
}; 
 
 //Function AudioMixer.AudioMixerBlueprintLibrary.StartAudioBus Size 16
class FStartAudioBus
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct UAudioBus* AudioBus;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function AudioMixer.AudioMixerBlueprintLibrary.StopAnalyzingOutput Size 16
class FStopAnalyzingOutput
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct USoundSubmix* SubmixToStopAnalyzing;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function AudioMixer.QuartzClockHandle.ResetTransport Size 24
class FResetTransport
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct FDelegate InDelegate;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function AudioMixer.AudioMixerBlueprintLibrary.StopAudioBus Size 16
class FStopAudioBus
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct UAudioBus* AudioBus;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function AudioMixer.QuartzSubsystem.GetDurationOfQuantizationTypeInSeconds Size 32
class FGetDurationOfQuantizationTypeInSeconds
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct FName ClockName;  // Offset: 8 Size: 8
	enum class EQuartzCommandQuantization QuantizationType;  // Offset: 16 Size: 1
	char pad_17[3];  // Offset: 17 Size: 3
	float Multiplier;  // Offset: 20 Size: 4
	float ReturnValue;  // Offset: 24 Size: 4
	char pad_28[4];  // Offset: 28 Size: 4



 // Functions 
 public:
}; 
 
 //Function AudioMixer.AudioMixerBlueprintLibrary.StopRecordingOutput Size 72
class FStopRecordingOutput
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	enum class EAudioRecordingExportType ExportType;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7
	struct FString Name;  // Offset: 16 Size: 16
	struct FString Path;  // Offset: 32 Size: 16
	struct USoundSubmix* SubmixToRecord;  // Offset: 48 Size: 8
	struct USoundWave* ExistingSoundWaveToOverwrite;  // Offset: 56 Size: 8
	struct USoundWave* ReturnValue;  // Offset: 64 Size: 8



 // Functions 
 public:
}; 
 
 //Function AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadAverageLatency Size 16
class FGetGameThreadToAudioRenderThreadAverageLatency
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	float ReturnValue;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function AudioMixer.QuartzClockHandle.GetEstimatedRunTime Size 16
class FGetEstimatedRunTime
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	float ReturnValue;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function AudioMixer.QuartzSubsystem.DeleteClockByName Size 16
class FDeleteClockByName
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct FName ClockName;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function AudioMixer.QuartzClockHandle.GetTicksPerSecond Size 16
class FGetTicksPerSecond
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	float ReturnValue;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function AudioMixer.QuartzSubsystem.IsClockRunning Size 24
class FIsClockRunning
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct FName ClockName;  // Offset: 8 Size: 8
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool ReturnValue : 1;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //Function AudioMixer.QuartzClockHandle.StartClock Size 16
class FStartClock
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct UQuartzClockHandle* ClockHandle;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function AudioMixer.QuartzClockHandle.SetThirtySecondNotesPerMinute Size 56
class FSetThirtySecondNotesPerMinute
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct FQuartzQuantizationBoundary QuantizationBoundary;  // Offset: 8 Size: 12
	struct FDelegate Delegate;  // Offset: 20 Size: 16
	char pad_36[4];  // Offset: 36 Size: 4
	struct UQuartzClockHandle* ClockHandle;  // Offset: 40 Size: 8
	float ThirtySecondsNotesPerMinute;  // Offset: 48 Size: 4
	char pad_52[4];  // Offset: 52 Size: 4



 // Functions 
 public:
}; 
 
 //Function AudioMixer.QuartzClockHandle.SetTicksPerSecond Size 56
class FSetTicksPerSecond
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct FQuartzQuantizationBoundary QuantizationBoundary;  // Offset: 8 Size: 12
	struct FDelegate Delegate;  // Offset: 20 Size: 16
	char pad_36[4];  // Offset: 36 Size: 4
	struct UQuartzClockHandle* ClockHandle;  // Offset: 40 Size: 8
	float TicksPerSecond;  // Offset: 48 Size: 4
	char pad_52[4];  // Offset: 52 Size: 4



 // Functions 
 public:
}; 
 
 //Function AudioMixer.QuartzClockHandle.StartOtherClock Size 48
class FStartOtherClock
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct FName OtherClockName;  // Offset: 8 Size: 8
	struct FQuartzQuantizationBoundary InQuantizationBoundary;  // Offset: 16 Size: 12
	struct FDelegate InDelegate;  // Offset: 28 Size: 16
	char pad_44[4];  // Offset: 44 Size: 4



 // Functions 
 public:
}; 
 
 //Function AudioMixer.QuartzClockHandle.StopClock Size 24
class FStopClock
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool CancelPendingEvents : 1;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7
	struct UQuartzClockHandle* ClockHandle;  // Offset: 16 Size: 8



 // Functions 
 public:
}; 
 
 //Function AudioMixer.QuartzClockHandle.SubscribeToAllQuantizationEvents Size 32
class FSubscribeToAllQuantizationEvents
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct FDelegate OnQuantizationEvent;  // Offset: 8 Size: 16
	struct UQuartzClockHandle* ClockHandle;  // Offset: 24 Size: 8



 // Functions 
 public:
}; 
 
 //Function AudioMixer.QuartzClockHandle.SubscribeToQuantizationEvent Size 40
class FSubscribeToQuantizationEvent
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	enum class EQuartzCommandQuantization InQuantizationBoundary;  // Offset: 8 Size: 1
	char pad_9[3];  // Offset: 9 Size: 3
	struct FDelegate OnQuantizationEvent;  // Offset: 12 Size: 16
	char pad_28[4];  // Offset: 28 Size: 4
	struct UQuartzClockHandle* ClockHandle;  // Offset: 32 Size: 8



 // Functions 
 public:
}; 
 
 //Function AudioMixer.QuartzClockHandle.UnsubscribeFromAllTimeDivisions Size 16
class FUnsubscribeFromAllTimeDivisions
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct UQuartzClockHandle* ClockHandle;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function AudioMixer.QuartzClockHandle.UnsubscribeFromTimeDivision Size 24
class FUnsubscribeFromTimeDivision
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	enum class EQuartzCommandQuantization InQuantizationBoundary;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7
	struct UQuartzClockHandle* ClockHandle;  // Offset: 16 Size: 8



 // Functions 
 public:
}; 
 
 //Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetAudioBus Size 8
class FSetAudioBus
{

 public: 
	struct UAudioBus* AudioBus;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function AudioMixer.SubmixEffectReverbPreset.SetSettings Size 64
class FSetSettings
{

 public: 
	struct FSubmixEffectReverbSettings InSettings;  // Offset: 0 Size: 64



 // Functions 
 public:
}; 
 
 //Function AudioMixer.SubmixEffectReverbPreset.SetSettingsWithReverbEffect Size 16
class FSetSettingsWithReverbEffect
{

 public: 
	struct UReverbEffect* InReverbEffect;  // Offset: 0 Size: 8
	float WetLevel;  // Offset: 8 Size: 4
	float DryLevel;  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function AudioMixer.QuartzSubsystem.CreateNewClock Size 64
class FCreateNewClock
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct FName ClockName;  // Offset: 8 Size: 8
	struct FQuartzClockSettings InSettings;  // Offset: 16 Size: 32
	char pad_48_1 : 7;  // Offset: 48 Size: 1
	bool bOverrideSettingsIfClockExists : 1;  // Offset: 48 Size: 1
	char pad_49_1 : 7;  // Offset: 49 Size: 1
	bool bUseAudioEngineClockManager : 1;  // Offset: 49 Size: 1
	char pad_50[6];  // Offset: 50 Size: 6
	struct UQuartzClockHandle* ReturnValue;  // Offset: 56 Size: 8



 // Functions 
 public:
}; 
 
 //Function AudioMixer.QuartzSubsystem.DeleteClockByHandle Size 16
class FDeleteClockByHandle
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct UQuartzClockHandle* InClockHandle;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function AudioMixer.QuartzSubsystem.GetEstimatedClockRunTime Size 24
class FGetEstimatedClockRunTime
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct FName InClockName;  // Offset: 8 Size: 8
	float ReturnValue;  // Offset: 16 Size: 4
	char pad_20[4];  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 //Function AudioMixer.QuartzSubsystem.DoesClockExist Size 24
class FDoesClockExist
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct FName ClockName;  // Offset: 8 Size: 8
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool ReturnValue : 1;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //Function AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadAverageLatency Size 4
class FGetAudioRenderThreadToGameThreadAverageLatency
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadMaxLatency Size 4
class FGetAudioRenderThreadToGameThreadMaxLatency
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadMinLatency Size 4
class FGetAudioRenderThreadToGameThreadMinLatency
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function AudioMixer.QuartzSubsystem.GetCurrentClockTimestamp Size 32
class FGetCurrentClockTimestamp
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct FName InClockName;  // Offset: 8 Size: 8
	struct FQuartzTransportTimeStamp ReturnValue;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadMaxLatency Size 16
class FGetGameThreadToAudioRenderThreadMaxLatency
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	float ReturnValue;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadMinLatency Size 16
class FGetGameThreadToAudioRenderThreadMinLatency
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	float ReturnValue;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function AudioMixer.QuartzSubsystem.GetHandleForClock Size 24
class FGetHandleForClock
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct FName ClockName;  // Offset: 8 Size: 8
	struct UQuartzClockHandle* ReturnValue;  // Offset: 16 Size: 8



 // Functions 
 public:
}; 
 
 //Function AudioMixer.QuartzSubsystem.GetRoundTripAverageLatency Size 16
class FGetRoundTripAverageLatency
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	float ReturnValue;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function AudioMixer.QuartzSubsystem.GetRoundTripMaxLatency Size 16
class FGetRoundTripMaxLatency
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	float ReturnValue;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function AudioMixer.QuartzSubsystem.GetRoundTripMinLatency Size 16
class FGetRoundTripMinLatency
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	float ReturnValue;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 