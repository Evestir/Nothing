#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//ScriptStruct LiveLinkMovieScene.MovieSceneLiveLinkSectionTemplate Size 184
// Inherited 56 bytes 
class FMovieSceneLiveLinkSectionTemplate : public FMovieScenePropertySectionTemplate
{

 public: 
	struct FLiveLinkSubjectPreset SubjectPreset;  // Offset: 56 Size: 56
	struct TArray<bool> ChannelMask;  // Offset: 112 Size: 16
	struct TArray<struct FLiveLinkSubSectionData> SubSectionsData;  // Offset: 128 Size: 16
	char pad_144[40];  // Offset: 144 Size: 40



 // Functions 
 public:
}; 
 
 //ScriptStruct LiveLinkMovieScene.LiveLinkPropertyData Size 88
class FLiveLinkPropertyData
{

 public: 
	struct FName PropertyName;  // Offset: 0 Size: 8
	struct TArray<struct FMovieSceneFloatChannel> FloatChannel;  // Offset: 8 Size: 16
	struct TArray<struct FMovieSceneStringChannel> StringChannel;  // Offset: 24 Size: 16
	struct TArray<struct FMovieSceneIntegerChannel> IntegerChannel;  // Offset: 40 Size: 16
	struct TArray<struct FMovieSceneBoolChannel> BoolChannel;  // Offset: 56 Size: 16
	struct TArray<struct FMovieSceneByteChannel> ByteChannel;  // Offset: 72 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct LiveLinkMovieScene.LiveLinkSubSectionData Size 16
class FLiveLinkSubSectionData
{

 public: 
	struct TArray<struct FLiveLinkPropertyData> Properties;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 