#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//ScriptStruct GeometryCollectionTracks.MovieSceneGeometryCollectionParams Size 48
class FMovieSceneGeometryCollectionParams
{

 public: 
	char pad_0[8];  // Offset: 0 Size: 8
	struct FSoftObjectPath GeometryCollectionCache;  // Offset: 8 Size: 24
	struct FFrameNumber StartFrameOffset;  // Offset: 32 Size: 4
	struct FFrameNumber EndFrameOffset;  // Offset: 36 Size: 4
	float PlayRate;  // Offset: 40 Size: 4
	char pad_44[4];  // Offset: 44 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct GeometryCollectionTracks.MovieSceneGeometryCollectionSectionTemplate Size 88
// Inherited 32 bytes 
class FMovieSceneGeometryCollectionSectionTemplate : public FMovieSceneEvalTemplate
{

 public: 
	struct FMovieSceneGeometryCollectionSectionTemplateParameters Params;  // Offset: 32 Size: 56



 // Functions 
 public:
}; 
 
 //ScriptStruct GeometryCollectionTracks.MovieSceneGeometryCollectionSectionTemplateParameters Size 56
// Inherited 48 bytes 
class FMovieSceneGeometryCollectionSectionTemplateParameters : public FMovieSceneGeometryCollectionParams
{

 public: 
	struct FFrameNumber SectionStartTime;  // Offset: 48 Size: 4
	struct FFrameNumber SectionEndTime;  // Offset: 52 Size: 4



 // Functions 
 public:
}; 
 
 