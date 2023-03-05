#pragma once 
#include <GeometryCollectionTracks_Structs.h>
 
 
 
//Class GeometryCollectionTracks.MovieSceneGeometryCollectionSection Size 280
// Inherited 232 bytes 
class UMovieSceneGeometryCollectionSection : public UMovieSceneSection
{

 public: 
	struct FMovieSceneGeometryCollectionParams Params;  // Offset: 232 Size: 48



 // Functions 
 public:
}; 
 
 


//Class GeometryCollectionTracks.MovieSceneGeometryCollectionTrack Size 168
// Inherited 144 bytes 
class UMovieSceneGeometryCollectionTrack : public UMovieSceneNameableTrack
{

 public: 
	char pad_144[8];  // Offset: 144 Size: 8
	struct TArray<struct UMovieSceneSection*> AnimationSections;  // Offset: 152 Size: 16



 // Functions 
 public:
}; 
 
 


