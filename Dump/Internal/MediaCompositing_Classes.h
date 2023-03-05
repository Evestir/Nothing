#pragma once 
#include <MediaCompositing_Structs.h>
 
 
 
//Class MediaCompositing.MovieSceneMediaSection Size 280
// Inherited 232 bytes 
class UMovieSceneMediaSection : public UMovieSceneSection
{

 public: 
	struct UMediaSource* MediaSource;  // Offset: 232 Size: 8
	char pad_240_1 : 7;  // Offset: 240 Size: 1
	bool bLooping : 1;  // Offset: 240 Size: 1
	char pad_241[3];  // Offset: 241 Size: 3
	struct FFrameNumber StartFrameOffset;  // Offset: 244 Size: 4
	struct UMediaTexture* MediaTexture;  // Offset: 248 Size: 8
	struct UMediaSoundComponent* MediaSoundComponent;  // Offset: 256 Size: 8
	char pad_264_1 : 7;  // Offset: 264 Size: 1
	bool bUseExternalMediaPlayer : 1;  // Offset: 264 Size: 1
	char pad_265[7];  // Offset: 265 Size: 7
	struct UMediaPlayer* ExternalMediaPlayer;  // Offset: 272 Size: 8



 // Functions 
 public:
}; 
 
 


//Class MediaCompositing.MovieSceneMediaPlayerPropertySection Size 248
// Inherited 232 bytes 
class UMovieSceneMediaPlayerPropertySection : public UMovieSceneSection
{

 public: 
	struct UMediaSource* MediaSource;  // Offset: 232 Size: 8
	char pad_240_1 : 7;  // Offset: 240 Size: 1
	bool bLoop : 1;  // Offset: 240 Size: 1
	char pad_241[7];  // Offset: 241 Size: 7



 // Functions 
 public:
}; 
 
 


//Class MediaCompositing.MovieSceneMediaPlayerPropertyTrack Size 200
// Inherited 192 bytes 
class UMovieSceneMediaPlayerPropertyTrack : public UMovieScenePropertyTrack
{

 public: 
	char pad_192[8];  // Offset: 192 Size: 8



 // Functions 
 public:
}; 
 
 


//Class MediaCompositing.MovieSceneMediaTrack Size 168
// Inherited 144 bytes 
class UMovieSceneMediaTrack : public UMovieSceneNameableTrack
{

 public: 
	char pad_144[8];  // Offset: 144 Size: 8
	struct TArray<struct UMovieSceneSection*> MediaSections;  // Offset: 152 Size: 16



 // Functions 
 public:
}; 
 
 


