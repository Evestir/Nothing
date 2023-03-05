#pragma once 
#include <MotoSynth_Structs.h>
 
 
 
//Class MotoSynth.MotoSynthPreset Size 144
// Inherited 40 bytes 
class UMotoSynthPreset : public UObject
{

 public: 
	struct FMotoSynthRuntimeSettings Settings;  // Offset: 40 Size: 104



 // Functions 
 public:
}; 
 
 


//Class MotoSynth.MotoSynthSource Size 248
// Inherited 40 bytes 
class UMotoSynthSource : public UObject
{

 public: 
	char pad_40_1 : 7;  // Offset: 40 Size: 1
	bool bConvertTo8Bit : 1;  // Offset: 40 Size: 1
	char pad_41[3];  // Offset: 41 Size: 3
	float DownSampleFactor;  // Offset: 44 Size: 4
	struct FRuntimeFloatCurve RPMCurve;  // Offset: 48 Size: 136
	struct TArray<float> SourceData;  // Offset: 184 Size: 16
	struct TArray<int16_t> SourceDataPCM;  // Offset: 200 Size: 16
	int32_t SourceSampleRate;  // Offset: 216 Size: 4
	char pad_220[4];  // Offset: 220 Size: 4
	struct TArray<struct FGrainTableEntry> GrainTable;  // Offset: 224 Size: 16
	char pad_240[8];  // Offset: 240 Size: 8



 // Functions 
 public:
}; 
 
 


//Class MotoSynth.SynthComponentMoto Size 1936
// Inherited 1744 bytes 
class USynthComponentMoto : public USynthComponent
{

 public: 
	struct UMotoSynthPreset* MotoSynthPreset;  // Offset: 1744 Size: 8
	float RPM;  // Offset: 1752 Size: 4
	char pad_1756[180];  // Offset: 1756 Size: 180



 // Functions 
 public:
	void SetSettings(struct FMotoSynthRuntimeSettings& InSettings); // Function MotoSynth.SynthComponentMoto.SetSettings
	void SetRPM(float InRPM, float InTimeSec); // Function MotoSynth.SynthComponentMoto.SetRPM
	bool IsEnabled(); // Function MotoSynth.SynthComponentMoto.IsEnabled
	void GetRPMRange(float& OutMinRPM, float& OutMaxRPM); // Function MotoSynth.SynthComponentMoto.GetRPMRange
}; 
 
 


