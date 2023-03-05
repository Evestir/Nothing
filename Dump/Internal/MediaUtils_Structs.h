#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//ScriptStruct MediaUtils.MediaPlayerOptions Size 48
class FMediaPlayerOptions
{

 public: 
	struct FMediaPlayerTrackOptions Tracks;  // Offset: 0 Size: 28
	char pad_28[4];  // Offset: 28 Size: 4
	struct FTimespan SeekTime;  // Offset: 32 Size: 8
	enum class EMediaPlayerOptionBooleanOverride PlayOnOpen;  // Offset: 40 Size: 1
	enum class EMediaPlayerOptionBooleanOverride Loop;  // Offset: 41 Size: 1
	char pad_42[6];  // Offset: 42 Size: 6



 // Functions 
 public:
}; 
 
 //ScriptStruct MediaUtils.MediaPlayerTrackOptions Size 28
class FMediaPlayerTrackOptions
{

 public: 
	int32_t Audio;  // Offset: 0 Size: 4
	int32_t Caption;  // Offset: 4 Size: 4
	int32_t MetaData;  // Offset: 8 Size: 4
	int32_t Script;  // Offset: 12 Size: 4
	int32_t Subtitle;  // Offset: 16 Size: 4
	int32_t Text;  // Offset: 20 Size: 4
	int32_t Video;  // Offset: 24 Size: 4



 // Functions 
 public:
}; 
 
 