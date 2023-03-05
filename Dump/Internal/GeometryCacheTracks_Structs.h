#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//ScriptStruct GeometryCacheTracks.MovieSceneGeometryCacheParams Size 64
class FMovieSceneGeometryCacheParams
{

 public: 
	struct UGeometryCache* GeometryCacheAsset;  // Offset: 0 Size: 8
	struct FFrameNumber FirstLoopStartFrameOffset;  // Offset: 8 Size: 4
	struct FFrameNumber StartFrameOffset;  // Offset: 12 Size: 4
	struct FFrameNumber EndFrameOffset;  // Offset: 16 Size: 4
	float PlayRate;  // Offset: 20 Size: 4
	char bReverse : 1;  // Offset: 24 Size: 1
	char pad_24_1 : 7;  // Offset: 24 Size: 1
	char pad_25[4];  // Offset: 25 Size: 4
	float StartOffset;  // Offset: 28 Size: 4
	float EndOffset;  // Offset: 32 Size: 4
	char pad_36[4];  // Offset: 36 Size: 4
	struct FSoftObjectPath GeometryCache;  // Offset: 40 Size: 24



 // Functions 
 public:
}; 
 
 //ScriptStruct GeometryCacheTracks.MovieSceneGeometryCacheSectionTemplate Size 104
// Inherited 32 bytes 
class FMovieSceneGeometryCacheSectionTemplate : public FMovieSceneEvalTemplate
{

 public: 
	struct FMovieSceneGeometryCacheSectionTemplateParameters Params;  // Offset: 32 Size: 72



 // Functions 
 public:
}; 
 
 //ScriptStruct GeometryCacheTracks.MovieSceneGeometryCacheSectionTemplateParameters Size 72
// Inherited 64 bytes 
class FMovieSceneGeometryCacheSectionTemplateParameters : public FMovieSceneGeometryCacheParams
{

 public: 
	struct FFrameNumber SectionStartTime;  // Offset: 64 Size: 4
	struct FFrameNumber SectionEndTime;  // Offset: 68 Size: 4



 // Functions 
 public:
}; 
 
 