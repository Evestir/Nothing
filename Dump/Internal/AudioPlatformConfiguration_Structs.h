#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//ScriptStruct AudioPlatformConfiguration.PlatformRuntimeAudioCompressionOverrides Size 16
class FPlatformRuntimeAudioCompressionOverrides
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bOverrideCompressionTimes : 1;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	float DurationThreshold;  // Offset: 4 Size: 4
	int32_t MaxNumRandomBranches;  // Offset: 8 Size: 4
	int32_t SoundCueQualityIndex;  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 