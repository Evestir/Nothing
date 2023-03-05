#pragma once 
#include <AudioAnalyzer_Structs.h>
 
 
 
//Class AudioAnalyzer.AudioAnalyzerAsset Size 40
// Inherited 40 bytes 
class UAudioAnalyzerAsset : public UObject
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class AudioAnalyzer.AudioAnalyzerNRTSettings Size 40
// Inherited 40 bytes 
class UAudioAnalyzerNRTSettings : public UAudioAnalyzerAsset
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class AudioAnalyzer.AudioAnalyzerNRT Size 120
// Inherited 40 bytes 
class UAudioAnalyzerNRT : public UAudioAnalyzerAsset
{

 public: 
	struct USoundWave* Sound;  // Offset: 40 Size: 8
	float DurationInSeconds;  // Offset: 48 Size: 4
	char pad_52[68];  // Offset: 52 Size: 68



 // Functions 
 public:
}; 
 
 


