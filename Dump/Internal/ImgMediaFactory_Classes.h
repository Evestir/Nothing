#pragma once 
#include <ImgMediaFactory_Structs.h>
 
 
 
//Class ImgMediaFactory.ImgMediaSettings Size 104
// Inherited 40 bytes 
class UImgMediaSettings : public UObject
{

 public: 
	struct FFrameRate DefaultFrameRate;  // Offset: 40 Size: 8
	float CacheBehindPercentage;  // Offset: 48 Size: 4
	float CacheSizeGB;  // Offset: 52 Size: 4
	int32_t CacheThreads;  // Offset: 56 Size: 4
	int32_t CacheThreadStackSizeKB;  // Offset: 60 Size: 4
	float GlobalCacheSizeGB;  // Offset: 64 Size: 4
	char pad_68_1 : 7;  // Offset: 68 Size: 1
	bool UseGlobalCache : 1;  // Offset: 68 Size: 1
	char pad_69[3];  // Offset: 69 Size: 3
	uint32_t ExrDecoderThreads;  // Offset: 72 Size: 4
	char pad_76[4];  // Offset: 76 Size: 4
	struct FString DefaultProxy;  // Offset: 80 Size: 16
	char pad_96_1 : 7;  // Offset: 96 Size: 1
	bool UseDefaultProxy : 1;  // Offset: 96 Size: 1
	char pad_97[7];  // Offset: 97 Size: 7



 // Functions 
 public:
}; 
 
 


