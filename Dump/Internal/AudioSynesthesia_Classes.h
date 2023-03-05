#pragma once 
#include <AudioSynesthesia_Structs.h>
 
 
 
//Class AudioSynesthesia.AudioSynesthesiaNRTSettings Size 40
// Inherited 40 bytes 
class UAudioSynesthesiaNRTSettings : public UAudioAnalyzerNRTSettings
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class AudioSynesthesia.AudioSynesthesiaNRT Size 120
// Inherited 120 bytes 
class UAudioSynesthesiaNRT : public UAudioAnalyzerNRT
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class AudioSynesthesia.OnsetNRTSettings Size 64
// Inherited 40 bytes 
class UOnsetNRTSettings : public UAudioSynesthesiaNRTSettings
{

 public: 
	char pad_40_1 : 7;  // Offset: 40 Size: 1
	bool bDownmixToMono : 1;  // Offset: 40 Size: 1
	char pad_41[3];  // Offset: 41 Size: 3
	float GranularityInSeconds;  // Offset: 44 Size: 4
	float Sensitivity;  // Offset: 48 Size: 4
	float MinimumFrequency;  // Offset: 52 Size: 4
	float MaximumFrequency;  // Offset: 56 Size: 4
	char pad_60[4];  // Offset: 60 Size: 4



 // Functions 
 public:
}; 
 
 


//Class AudioSynesthesia.LoudnessNRT Size 128
// Inherited 120 bytes 
class ULoudnessNRT : public UAudioSynesthesiaNRT
{

 public: 
	struct ULoudnessNRTSettings* Settings;  // Offset: 120 Size: 8



 // Functions 
 public:
	void GetNormalizedLoudnessAtTime(float InSeconds, float& OutLoudness); // Function AudioSynesthesia.LoudnessNRT.GetNormalizedLoudnessAtTime
	void GetNormalizedChannelLoudnessAtTime(float InSeconds, int32_t InChannel, float& OutLoudness); // Function AudioSynesthesia.LoudnessNRT.GetNormalizedChannelLoudnessAtTime
	void GetLoudnessAtTime(float InSeconds, float& OutLoudness); // Function AudioSynesthesia.LoudnessNRT.GetLoudnessAtTime
	void GetChannelLoudnessAtTime(float InSeconds, int32_t InChannel, float& OutLoudness); // Function AudioSynesthesia.LoudnessNRT.GetChannelLoudnessAtTime
}; 
 
 


//Class AudioSynesthesia.ConstantQNRTSettings Size 72
// Inherited 40 bytes 
class UConstantQNRTSettings : public UAudioSynesthesiaNRTSettings
{

 public: 
	float StartingFrequency;  // Offset: 40 Size: 4
	int32_t NumBands;  // Offset: 44 Size: 4
	float NumBandsPerOctave;  // Offset: 48 Size: 4
	float AnalysisPeriod;  // Offset: 52 Size: 4
	char pad_56_1 : 7;  // Offset: 56 Size: 1
	bool bDownmixToMono : 1;  // Offset: 56 Size: 1
	enum class EConstantQFFTSizeEnum FFTSize;  // Offset: 57 Size: 1
	enum class EFFTWindowType WindowType;  // Offset: 58 Size: 1
	enum class EAudioSpectrumType SpectrumType;  // Offset: 59 Size: 1
	float BandWidthStretch;  // Offset: 60 Size: 4
	enum class EConstantQNormalizationEnum CQTNormalization;  // Offset: 64 Size: 1
	char pad_65[3];  // Offset: 65 Size: 3
	float NoiseFloorDb;  // Offset: 68 Size: 4



 // Functions 
 public:
}; 
 
 


//Class AudioSynesthesia.OnsetNRT Size 128
// Inherited 120 bytes 
class UOnsetNRT : public UAudioSynesthesiaNRT
{

 public: 
	struct UOnsetNRTSettings* Settings;  // Offset: 120 Size: 8



 // Functions 
 public:
	void GetNormalizedChannelOnsetsBetweenTimes(float InStartSeconds, float InEndSeconds, int32_t InChannel, struct TArray<float>& OutOnsetTimestamps, struct TArray<float>& OutOnsetStrengths); // Function AudioSynesthesia.OnsetNRT.GetNormalizedChannelOnsetsBetweenTimes
	void GetChannelOnsetsBetweenTimes(float InStartSeconds, float InEndSeconds, int32_t InChannel, struct TArray<float>& OutOnsetTimestamps, struct TArray<float>& OutOnsetStrengths); // Function AudioSynesthesia.OnsetNRT.GetChannelOnsetsBetweenTimes
}; 
 
 


//Class AudioSynesthesia.LoudnessNRTSettings Size 64
// Inherited 40 bytes 
class ULoudnessNRTSettings : public UAudioSynesthesiaNRTSettings
{

 public: 
	float AnalysisPeriod;  // Offset: 40 Size: 4
	float MinimumFrequency;  // Offset: 44 Size: 4
	float MaximumFrequency;  // Offset: 48 Size: 4
	enum class ELoudnessNRTCurveTypeEnum CurveType;  // Offset: 52 Size: 1
	char pad_53[3];  // Offset: 53 Size: 3
	float NoiseFloorDb;  // Offset: 56 Size: 4
	char pad_60[4];  // Offset: 60 Size: 4



 // Functions 
 public:
}; 
 
 


//Class AudioSynesthesia.ConstantQNRT Size 128
// Inherited 120 bytes 
class UConstantQNRT : public UAudioSynesthesiaNRT
{

 public: 
	struct UConstantQNRTSettings* Settings;  // Offset: 120 Size: 8



 // Functions 
 public:
	void GetNormalizedChannelConstantQAtTime(float InSeconds, int32_t InChannel, struct TArray<float>& OutConstantQ); // Function AudioSynesthesia.ConstantQNRT.GetNormalizedChannelConstantQAtTime
	void GetChannelConstantQAtTime(float InSeconds, int32_t InChannel, struct TArray<float>& OutConstantQ); // Function AudioSynesthesia.ConstantQNRT.GetChannelConstantQAtTime
}; 
 
 


