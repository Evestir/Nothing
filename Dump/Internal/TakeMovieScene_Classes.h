#pragma once 
#include <TakeMovieScene_Structs.h>
 
 
 
//Class TakeMovieScene.MovieSceneTakeSection Size 1128
// Inherited 232 bytes 
class UMovieSceneTakeSection : public UMovieSceneSection
{

 public: 
	struct FMovieSceneIntegerChannel HoursCurve;  // Offset: 232 Size: 144
	struct FMovieSceneIntegerChannel MinutesCurve;  // Offset: 376 Size: 144
	struct FMovieSceneIntegerChannel SecondsCurve;  // Offset: 520 Size: 144
	struct FMovieSceneIntegerChannel FramesCurve;  // Offset: 664 Size: 144
	struct FMovieSceneFloatChannel SubFramesCurve;  // Offset: 808 Size: 160
	struct FMovieSceneStringChannel Slate;  // Offset: 968 Size: 160



 // Functions 
 public:
}; 
 
 


//Class TakeMovieScene.MovieSceneTakeSettings Size 136
// Inherited 40 bytes 
class UMovieSceneTakeSettings : public UObject
{

 public: 
	struct FString HoursName;  // Offset: 40 Size: 16
	struct FString MinutesName;  // Offset: 56 Size: 16
	struct FString SecondsName;  // Offset: 72 Size: 16
	struct FString FramesName;  // Offset: 88 Size: 16
	struct FString SubFramesName;  // Offset: 104 Size: 16
	struct FString SlateName;  // Offset: 120 Size: 16



 // Functions 
 public:
}; 
 
 


//Class TakeMovieScene.MovieSceneTakeTrack Size 160
// Inherited 144 bytes 
class UMovieSceneTakeTrack : public UMovieSceneNameableTrack
{

 public: 
	struct TArray<struct UMovieSceneSection*> Sections;  // Offset: 144 Size: 16



 // Functions 
 public:
}; 
 
 


