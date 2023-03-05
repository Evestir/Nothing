#pragma once 
#include <NexonPlatform_Structs.h>
 
 
 
//Class NexonPlatform.NXPToyCSInterface Size 40
// Inherited 40 bytes 
class UNXPToyCSInterface : public UObject
{

 public: 



 // Functions 
 public:
	void OpenNCSUrl(); // Function NexonPlatform.NXPToyCSInterface.OpenNCSUrl
}; 
 
 


//Class NexonPlatform.NXPToyPreferences Size 488
// Inherited 40 bytes 
class UNXPToyPreferences : public UObject
{

 public: 
	struct TMap<struct FString, struct FString> BannerDoNotShowToday;  // Offset: 40 Size: 80
	struct TArray<struct FString> ConditionalBannerDoNotShowAnymore;  // Offset: 120 Size: 16
	struct TMap<struct FString, struct FString> ConditionalBannerDoNotShowToday;  // Offset: 136 Size: 80
	struct TMap<struct FString, int32_t> ConditionalBannerTotalDisplayCount;  // Offset: 216 Size: 80
	struct TMap<struct FString, struct FString> ConditionalBannerLastDisplayDateTime;  // Offset: 296 Size: 80
	struct TMap<struct FString, struct FString> TodayDoNotShowToday;  // Offset: 376 Size: 80
	struct FString NXID;  // Offset: 456 Size: 16
	struct FString NXPW;  // Offset: 472 Size: 16



 // Functions 
 public:
}; 
 
 


