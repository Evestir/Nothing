#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//ScriptStruct MediaCompositing.MovieSceneMediaPlayerPropertySectionTemplate Size 72
// Inherited 56 bytes 
class FMovieSceneMediaPlayerPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{

 public: 
	struct UMediaSource* MediaSource;  // Offset: 56 Size: 8
	struct FFrameNumber SectionStartFrame;  // Offset: 64 Size: 4
	char pad_68_1 : 7;  // Offset: 68 Size: 1
	bool bLoop : 1;  // Offset: 68 Size: 1
	char pad_69[3];  // Offset: 69 Size: 3



 // Functions 
 public:
}; 
 
 //ScriptStruct MediaCompositing.MovieSceneMediaSectionTemplate Size 80
// Inherited 32 bytes 
class FMovieSceneMediaSectionTemplate : public FMovieSceneEvalTemplate
{

 public: 
	struct FMovieSceneMediaSectionParams Params;  // Offset: 32 Size: 48



 // Functions 
 public:
}; 
 
 //ScriptStruct MediaCompositing.MovieSceneMediaSectionParams Size 48
class FMovieSceneMediaSectionParams
{

 public: 
	struct UMediaSoundComponent* MediaSoundComponent;  // Offset: 0 Size: 8
	struct UMediaSource* MediaSource;  // Offset: 8 Size: 8
	struct UMediaTexture* MediaTexture;  // Offset: 16 Size: 8
	struct UMediaPlayer* MediaPlayer;  // Offset: 24 Size: 8
	struct FFrameNumber SectionStartFrame;  // Offset: 32 Size: 4
	struct FFrameNumber SectionEndFrame;  // Offset: 36 Size: 4
	char pad_40_1 : 7;  // Offset: 40 Size: 1
	bool bLooping : 1;  // Offset: 40 Size: 1
	char pad_41[3];  // Offset: 41 Size: 3
	struct FFrameNumber StartFrameOffset;  // Offset: 44 Size: 4



 // Functions 
 public:
}; 
 
 