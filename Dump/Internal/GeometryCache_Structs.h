#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//ScriptStruct GeometryCache.GeometryCacheMeshBatchInfo Size 12
class FGeometryCacheMeshBatchInfo
{

 public: 
	char pad_0[12];  // Offset: 0 Size: 12



 // Functions 
 public:
}; 
 
 //Function GeometryCache.GeometryCacheComponent.SetMotionVectorScale Size 4
class FSetMotionVectorScale
{

 public: 
	float NewMotionVectorScale;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct GeometryCache.TrackRenderData Size 112
class FTrackRenderData
{

 public: 
	char pad_0[112];  // Offset: 0 Size: 112



 // Functions 
 public:
}; 
 
 //Function GeometryCache.GeometryCacheComponent.GetMotionVectorScale Size 4
class FGetMotionVectorScale
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function GeometryCache.GeometryCacheComponent.SetExtrapolateFrames Size 1
class FSetExtrapolateFrames
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bNewExtrapolating : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct GeometryCache.GeometryCacheMeshData Size 176
class FGeometryCacheMeshData
{

 public: 
	char pad_0[176];  // Offset: 0 Size: 176



 // Functions 
 public:
}; 
 
 //Function GeometryCache.GeometryCacheComponent.GetPlaybackDirection Size 4
class FGetPlaybackDirection
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct GeometryCache.GeometryCacheVertexInfo Size 8
class FGeometryCacheVertexInfo
{

 public: 
	char pad_0[8];  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function GeometryCache.GeometryCacheComponent.GetAnimationTime Size 4
class FGetAnimationTime
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function GeometryCache.GeometryCacheActor.GetGeometryCacheComponent Size 8
class FGetGeometryCacheComponent
{

 public: 
	struct UGeometryCacheComponent* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function GeometryCache.GeometryCacheComponent.SetStartTimeOffset Size 4
class FSetStartTimeOffset
{

 public: 
	float NewStartTimeOffset;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function GeometryCache.GeometryCacheComponent.GetDuration Size 4
class FGetDuration
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function GeometryCache.GeometryCacheComponent.GetNumberOfFrames Size 4
class FGetNumberOfFrames
{

 public: 
	int32_t ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function GeometryCache.GeometryCacheComponent.GetPlaybackSpeed Size 4
class FGetPlaybackSpeed
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function GeometryCache.GeometryCacheComponent.GetStartTimeOffset Size 4
class FGetStartTimeOffset
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function GeometryCache.GeometryCacheComponent.IsExtrapolatingFrames Size 1
class FIsExtrapolatingFrames
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function GeometryCache.GeometryCacheComponent.IsLooping Size 1
class FIsLooping
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function GeometryCache.GeometryCacheComponent.IsPlaying Size 1
class FIsPlaying
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function GeometryCache.GeometryCacheComponent.IsPlayingReversed Size 1
class FIsPlayingReversed
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function GeometryCache.GeometryCacheComponent.SetGeometryCache Size 16
class FSetGeometryCache
{

 public: 
	struct UGeometryCache* NewGeomCache;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool ReturnValue : 1;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7



 // Functions 
 public:
}; 
 
 //Function GeometryCache.GeometryCacheComponent.SetLooping Size 1
class FSetLooping
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bNewLooping : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function GeometryCache.GeometryCacheComponent.SetPlaybackSpeed Size 4
class FSetPlaybackSpeed
{

 public: 
	float NewPlaybackSpeed;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function GeometryCache.GeometryCacheComponent.TickAtThisTime Size 8
class FTickAtThisTime
{

 public: 
	float Time;  // Offset: 0 Size: 4
	char pad_4_1 : 7;  // Offset: 4 Size: 1
	bool bInIsRunning : 1;  // Offset: 4 Size: 1
	char pad_5_1 : 7;  // Offset: 5 Size: 1
	bool bInBackwards : 1;  // Offset: 5 Size: 1
	char pad_6_1 : 7;  // Offset: 6 Size: 1
	bool bInIsLooping : 1;  // Offset: 6 Size: 1
	char pad_7[1];  // Offset: 7 Size: 1



 // Functions 
 public:
}; 
 
 //Function GeometryCache.GeometryCacheTrack_FlipbookAnimation.AddMeshSample Size 184
class FAddMeshSample
{

 public: 
	struct FGeometryCacheMeshData MeshData;  // Offset: 0 Size: 176
	float SampleTime;  // Offset: 176 Size: 4
	char pad_180[4];  // Offset: 180 Size: 4



 // Functions 
 public:
}; 
 
 //Function GeometryCache.GeometryCacheTrack_TransformGroupAnimation.SetMesh Size 176
class FSetMesh
{

 public: 
	struct FGeometryCacheMeshData NewMeshData;  // Offset: 0 Size: 176



 // Functions 
 public:
}; 
 
 