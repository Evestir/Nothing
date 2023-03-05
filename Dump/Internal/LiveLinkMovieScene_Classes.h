#pragma once 
#include <LiveLinkMovieScene_Structs.h>
 
 
 
//Class LiveLinkMovieScene.MovieSceneLiveLinkSubSectionAnimation Size 96
// Inherited 80 bytes 
class UMovieSceneLiveLinkSubSectionAnimation : public UMovieSceneLiveLinkSubSection
{

 public: 
	char pad_80[16];  // Offset: 80 Size: 16



 // Functions 
 public:
}; 
 
 


//Class LiveLinkMovieScene.MovieSceneLiveLinkSubSection Size 80
// Inherited 40 bytes 
class UMovieSceneLiveLinkSubSection : public UObject
{

 public: 
	struct FLiveLinkSubSectionData SubSectionData;  // Offset: 40 Size: 16
	ULiveLinkRole* SubjectRole;  // Offset: 56 Size: 8
	char pad_64[16];  // Offset: 64 Size: 16



 // Functions 
 public:
}; 
 
 


//Class LiveLinkMovieScene.MovieSceneLiveLinkSection Size 552
// Inherited 232 bytes 
class UMovieSceneLiveLinkSection : public UMovieSceneSection
{

 public: 
	struct FLiveLinkSubjectPreset SubjectPreset;  // Offset: 232 Size: 56
	struct TArray<bool> ChannelMask;  // Offset: 288 Size: 16
	struct TArray<struct UMovieSceneLiveLinkSubSection*> SubSections;  // Offset: 304 Size: 16
	char pad_320[16];  // Offset: 320 Size: 16
	struct FName SubjectName;  // Offset: 336 Size: 8
	struct FLiveLinkFrameData TemplateToPush;  // Offset: 344 Size: 144
	struct FLiveLinkRefSkeleton RefSkeleton;  // Offset: 488 Size: 32
	struct TArray<struct FName> CurveNames;  // Offset: 520 Size: 16
	struct TArray<struct FMovieSceneFloatChannel> PropertyFloatChannels;  // Offset: 536 Size: 16



 // Functions 
 public:
}; 
 
 


//Class LiveLinkMovieScene.MovieSceneLiveLinkSubSectionBasicRole Size 96
// Inherited 80 bytes 
class UMovieSceneLiveLinkSubSectionBasicRole : public UMovieSceneLiveLinkSubSection
{

 public: 
	char pad_80[16];  // Offset: 80 Size: 16



 // Functions 
 public:
}; 
 
 


//Class LiveLinkMovieScene.MovieSceneLiveLinkTrack Size 208
// Inherited 192 bytes 
class UMovieSceneLiveLinkTrack : public UMovieScenePropertyTrack
{

 public: 
	char pad_192[8];  // Offset: 192 Size: 8
	ULiveLinkRole* TrackRole;  // Offset: 200 Size: 8



 // Functions 
 public:
}; 
 
 


//Class LiveLinkMovieScene.MovieSceneLiveLinkSubSectionProperties Size 96
// Inherited 80 bytes 
class UMovieSceneLiveLinkSubSectionProperties : public UMovieSceneLiveLinkSubSection
{

 public: 
	char pad_80[16];  // Offset: 80 Size: 16



 // Functions 
 public:
}; 
 
 


