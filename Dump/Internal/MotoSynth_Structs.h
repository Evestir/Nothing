#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//ScriptStruct MotoSynth.MotoSynthRuntimeSettings Size 104
class FMotoSynthRuntimeSettings
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bSynthToneEnabled : 1;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	float SynthToneVolume;  // Offset: 4 Size: 4
	float SynthToneFilterFrequency;  // Offset: 8 Size: 4
	int32_t SynthOctaveShift;  // Offset: 12 Size: 4
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool bGranularEngineEnabled : 1;  // Offset: 16 Size: 1
	char pad_17[3];  // Offset: 17 Size: 3
	float GranularEngineVolume;  // Offset: 20 Size: 4
	float GranularEnginePitchScale;  // Offset: 24 Size: 4
	int32_t NumSamplesToCrossfadeBetweenGrains;  // Offset: 28 Size: 4
	int32_t NumGrainTableEntriesPerGrain;  // Offset: 32 Size: 4
	int32_t GrainTableRandomOffsetForConstantRPMs;  // Offset: 36 Size: 4
	int32_t GrainCrossfadeSamplesForConstantRPMs;  // Offset: 40 Size: 4
	char pad_44[4];  // Offset: 44 Size: 4
	struct UMotoSynthSource* AccelerationSource;  // Offset: 48 Size: 8
	struct UMotoSynthSource* DecelerationSource;  // Offset: 56 Size: 8
	char pad_64_1 : 7;  // Offset: 64 Size: 1
	bool bStereoWidenerEnabled : 1;  // Offset: 64 Size: 1
	char pad_65[3];  // Offset: 65 Size: 3
	float StereoDelayMsec;  // Offset: 68 Size: 4
	float StereoFeedback;  // Offset: 72 Size: 4
	float StereoWidenerWetlevel;  // Offset: 76 Size: 4
	float StereoWidenerDryLevel;  // Offset: 80 Size: 4
	float StereoWidenerDelayRatio;  // Offset: 84 Size: 4
	char pad_88_1 : 7;  // Offset: 88 Size: 1
	bool bStereoWidenerFilterEnabled : 1;  // Offset: 88 Size: 1
	char pad_89[3];  // Offset: 89 Size: 3
	float StereoWidenerFilterFrequency;  // Offset: 92 Size: 4
	float StereoWidenerFilterQ;  // Offset: 96 Size: 4
	char pad_100[4];  // Offset: 100 Size: 4



 // Functions 
 public:
}; 
 
 //Function MotoSynth.SynthComponentMoto.SetRPM Size 8
class FSetRPM
{

 public: 
	float InRPM;  // Offset: 0 Size: 4
	float InTimeSec;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct MotoSynth.GrainTableEntry Size 8
class FGrainTableEntry
{

 public: 
	int32_t SampleIndex;  // Offset: 0 Size: 4
	float RPM;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function MotoSynth.SynthComponentMoto.GetRPMRange Size 8
class FGetRPMRange
{

 public: 
	float OutMinRPM;  // Offset: 0 Size: 4
	float OutMaxRPM;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function MotoSynth.SynthComponentMoto.SetSettings Size 104
class FSetSettings
{

 public: 
	struct FMotoSynthRuntimeSettings InSettings;  // Offset: 0 Size: 104



 // Functions 
 public:
}; 
 
 //Function MotoSynth.SynthComponentMoto.IsEnabled Size 1
class FIsEnabled
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 