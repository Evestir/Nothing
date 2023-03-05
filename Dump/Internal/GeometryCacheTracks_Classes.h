#pragma once 
#include <GeometryCacheTracks_Structs.h>
 
 
 
//Class GeometryCacheTracks.MovieSceneGeometryCacheSection Size 296
// Inherited 232 bytes 
class UMovieSceneGeometryCacheSection : public UMovieSceneSection
{

 public: 
	struct FMovieSceneGeometryCacheParams Params;  // Offset: 232 Size: 64



 // Functions 
 public:
}; 
 
 


//Class GeometryCacheTracks.MovieSceneGeometryCacheTrack Size 168
// Inherited 144 bytes 
class UMovieSceneGeometryCacheTrack : public UMovieSceneNameableTrack
{

 public: 
	char pad_144[8];  // Offset: 144 Size: 8
	struct TArray<struct UMovieSceneSection*> AnimationSections;  // Offset: 152 Size: 16



 // Functions 
 public:
}; 
 
 


