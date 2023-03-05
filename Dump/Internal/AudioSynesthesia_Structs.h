#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//Function AudioSynesthesia.LoudnessNRT.GetNormalizedLoudnessAtTime Size 8
class FGetNormalizedLoudnessAtTime
{

 public: 
	float InSeconds;  // Offset: 0 Size: 4
	float OutLoudness;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function AudioSynesthesia.ConstantQNRT.GetChannelConstantQAtTime Size 24
class FGetChannelConstantQAtTime
{

 public: 
	float InSeconds;  // Offset: 0 Size: 4
	int32_t InChannel;  // Offset: 4 Size: 4
	struct TArray<float> OutConstantQ;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function AudioSynesthesia.OnsetNRT.GetChannelOnsetsBetweenTimes Size 48
class FGetChannelOnsetsBetweenTimes
{

 public: 
	float InStartSeconds;  // Offset: 0 Size: 4
	float InEndSeconds;  // Offset: 4 Size: 4
	int32_t InChannel;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4
	struct TArray<float> OutOnsetTimestamps;  // Offset: 16 Size: 16
	struct TArray<float> OutOnsetStrengths;  // Offset: 32 Size: 16



 // Functions 
 public:
}; 
 
 //Function AudioSynesthesia.LoudnessNRT.GetLoudnessAtTime Size 8
class FGetLoudnessAtTime
{

 public: 
	float InSeconds;  // Offset: 0 Size: 4
	float OutLoudness;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function AudioSynesthesia.ConstantQNRT.GetNormalizedChannelConstantQAtTime Size 24
class FGetNormalizedChannelConstantQAtTime
{

 public: 
	float InSeconds;  // Offset: 0 Size: 4
	int32_t InChannel;  // Offset: 4 Size: 4
	struct TArray<float> OutConstantQ;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function AudioSynesthesia.LoudnessNRT.GetChannelLoudnessAtTime Size 12
class FGetChannelLoudnessAtTime
{

 public: 
	float InSeconds;  // Offset: 0 Size: 4
	int32_t InChannel;  // Offset: 4 Size: 4
	float OutLoudness;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //Function AudioSynesthesia.LoudnessNRT.GetNormalizedChannelLoudnessAtTime Size 12
class FGetNormalizedChannelLoudnessAtTime
{

 public: 
	float InSeconds;  // Offset: 0 Size: 4
	int32_t InChannel;  // Offset: 4 Size: 4
	float OutLoudness;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //Function AudioSynesthesia.OnsetNRT.GetNormalizedChannelOnsetsBetweenTimes Size 48
class FGetNormalizedChannelOnsetsBetweenTimes
{

 public: 
	float InStartSeconds;  // Offset: 0 Size: 4
	float InEndSeconds;  // Offset: 4 Size: 4
	int32_t InChannel;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4
	struct TArray<float> OutOnsetTimestamps;  // Offset: 16 Size: 16
	struct TArray<float> OutOnsetStrengths;  // Offset: 32 Size: 16



 // Functions 
 public:
}; 
 
 