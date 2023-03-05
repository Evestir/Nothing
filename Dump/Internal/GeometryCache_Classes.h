#pragma once 
#include <GeometryCache_Structs.h>
 
 
 
//Class GeometryCache.GeometryCacheComponent Size 1296
// Inherited 1200 bytes 
class UGeometryCacheComponent : public UMeshComponent
{

 public: 
	struct UGeometryCache* GeometryCache;  // Offset: 1192 Size: 8
	char pad_1208_1 : 7;  // Offset: 1208 Size: 1
	bool bRunning : 1;  // Offset: 1200 Size: 1
	char pad_1209_1 : 7;  // Offset: 1209 Size: 1
	bool bLooping : 1;  // Offset: 1201 Size: 1
	char pad_1210_1 : 7;  // Offset: 1210 Size: 1
	bool bExtrapolateFrames : 1;  // Offset: 1202 Size: 1
	float StartTimeOffset;  // Offset: 1204 Size: 4
	float PlaybackSpeed;  // Offset: 1208 Size: 4
	float MotionVectorScale;  // Offset: 1212 Size: 4
	int32_t NumTracks;  // Offset: 1216 Size: 4
	float ElapsedTime;  // Offset: 1220 Size: 4
	char pad_1231[45];  // Offset: 1231 Size: 45
	float Duration;  // Offset: 1276 Size: 4
	char pad_1280_1 : 7;  // Offset: 1280 Size: 1
	bool bManualTick : 1;  // Offset: 1280 Size: 1
	char pad_1281[15];  // Offset: 1281 Size: 15



 // Functions 
 public:
	void TickAtThisTime(float Time, bool bInIsRunning, bool bInBackwards, bool bInIsLooping); // Function GeometryCache.GeometryCacheComponent.TickAtThisTime
	void Stop(); // Function GeometryCache.GeometryCacheComponent.Stop
	void SetStartTimeOffset(float NewStartTimeOffset); // Function GeometryCache.GeometryCacheComponent.SetStartTimeOffset
	void SetPlaybackSpeed(float NewPlaybackSpeed); // Function GeometryCache.GeometryCacheComponent.SetPlaybackSpeed
	void SetMotionVectorScale(float NewMotionVectorScale); // Function GeometryCache.GeometryCacheComponent.SetMotionVectorScale
	void SetLooping(bool bNewLooping); // Function GeometryCache.GeometryCacheComponent.SetLooping
	bool SetGeometryCache(struct UGeometryCache* NewGeomCache); // Function GeometryCache.GeometryCacheComponent.SetGeometryCache
	void SetExtrapolateFrames(bool bNewExtrapolating); // Function GeometryCache.GeometryCacheComponent.SetExtrapolateFrames
	void PlayReversedFromEnd(); // Function GeometryCache.GeometryCacheComponent.PlayReversedFromEnd
	void PlayReversed(); // Function GeometryCache.GeometryCacheComponent.PlayReversed
	void PlayFromStart(); // Function GeometryCache.GeometryCacheComponent.PlayFromStart
	void Play(); // Function GeometryCache.GeometryCacheComponent.Play
	void Pause(); // Function GeometryCache.GeometryCacheComponent.Pause
	bool IsPlayingReversed(); // Function GeometryCache.GeometryCacheComponent.IsPlayingReversed
	bool IsPlaying(); // Function GeometryCache.GeometryCacheComponent.IsPlaying
	bool IsLooping(); // Function GeometryCache.GeometryCacheComponent.IsLooping
	bool IsExtrapolatingFrames(); // Function GeometryCache.GeometryCacheComponent.IsExtrapolatingFrames
	float GetStartTimeOffset(); // Function GeometryCache.GeometryCacheComponent.GetStartTimeOffset
	float GetPlaybackSpeed(); // Function GeometryCache.GeometryCacheComponent.GetPlaybackSpeed
	float GetPlaybackDirection(); // Function GeometryCache.GeometryCacheComponent.GetPlaybackDirection
	int32_t GetNumberOfFrames(); // Function GeometryCache.GeometryCacheComponent.GetNumberOfFrames
	float GetMotionVectorScale(); // Function GeometryCache.GeometryCacheComponent.GetMotionVectorScale
	float GetDuration(); // Function GeometryCache.GeometryCacheComponent.GetDuration
	float GetAnimationTime(); // Function GeometryCache.GeometryCacheComponent.GetAnimationTime
}; 
 
 


//Class GeometryCache.GeometryCache Size 112
// Inherited 40 bytes 
class UGeometryCache : public UObject
{

 public: 
	char pad_40[8];  // Offset: 40 Size: 8
	struct TArray<struct UMaterialInterface*> Materials;  // Offset: 48 Size: 16
	struct TArray<struct UGeometryCacheTrack*> Tracks;  // Offset: 64 Size: 16
	char pad_80[16];  // Offset: 80 Size: 16
	int32_t StartFrame;  // Offset: 96 Size: 4
	int32_t EndFrame;  // Offset: 100 Size: 4
	uint64_t Hash;  // Offset: 104 Size: 8



 // Functions 
 public:
}; 
 
 


//Class GeometryCache.GeometryCacheActor Size 552
// Inherited 544 bytes 
class AGeometryCacheActor : public AActor
{

 public: 
	struct UGeometryCacheComponent* GeometryCacheComponent;  // Offset: 544 Size: 8



 // Functions 
 public:
	struct UGeometryCacheComponent* GetGeometryCacheComponent(); // Function GeometryCache.GeometryCacheActor.GetGeometryCacheComponent
}; 
 
 


//Class GeometryCache.GeometryCacheCodecBase Size 56
// Inherited 40 bytes 
class UGeometryCacheCodecBase : public UObject
{

 public: 
	struct TArray<int32_t> TopologyRanges;  // Offset: 40 Size: 16



 // Functions 
 public:
}; 
 
 


//Class GeometryCache.GeometryCacheTrack Size 88
// Inherited 40 bytes 
class UGeometryCacheTrack : public UObject
{

 public: 
	float Duration;  // Offset: 40 Size: 4
	char pad_44[44];  // Offset: 44 Size: 44



 // Functions 
 public:
}; 
 
 


//Class GeometryCache.GeometryCacheTrack_FlipbookAnimation Size 128
// Inherited 88 bytes 
class UGeometryCacheTrack_FlipbookAnimation : public UGeometryCacheTrack
{

 public: 
	uint32_t NumMeshSamples;  // Offset: 88 Size: 4
	char pad_92[36];  // Offset: 92 Size: 36



 // Functions 
 public:
	void AddMeshSample(struct FGeometryCacheMeshData& MeshData, float SampleTime); // Function GeometryCache.GeometryCacheTrack_FlipbookAnimation.AddMeshSample
}; 
 
 


//Class GeometryCache.GeometryCacheCodecRaw Size 64
// Inherited 56 bytes 
class UGeometryCacheCodecRaw : public UGeometryCacheCodecBase
{

 public: 
	int32_t DummyProperty;  // Offset: 56 Size: 4
	char pad_60[4];  // Offset: 60 Size: 4



 // Functions 
 public:
}; 
 
 


//Class GeometryCache.GeometryCacheCodecV1 Size 64
// Inherited 56 bytes 
class UGeometryCacheCodecV1 : public UGeometryCacheCodecBase
{

 public: 
	char pad_56[8];  // Offset: 56 Size: 8



 // Functions 
 public:
}; 
 
 


//Class GeometryCache.GeometryCacheTrackStreamable Size 216
// Inherited 88 bytes 
class UGeometryCacheTrackStreamable : public UGeometryCacheTrack
{

 public: 
	struct UGeometryCacheCodecBase* Codec;  // Offset: 88 Size: 8
	char pad_96[104];  // Offset: 96 Size: 104
	float StartSampleTime;  // Offset: 200 Size: 4
	char pad_204[12];  // Offset: 204 Size: 12



 // Functions 
 public:
}; 
 
 


//Class GeometryCache.GeometryCacheTrack_TransformAnimation Size 264
// Inherited 88 bytes 
class UGeometryCacheTrack_TransformAnimation : public UGeometryCacheTrack
{

 public: 
	char pad_88[176];  // Offset: 88 Size: 176



 // Functions 
 public:
	void SetMesh(struct FGeometryCacheMeshData& NewMeshData); // Function GeometryCache.GeometryCacheTrack_TransformAnimation.SetMesh
}; 
 
 


//Class GeometryCache.GeometryCacheTrack_TransformGroupAnimation Size 264
// Inherited 88 bytes 
class UGeometryCacheTrack_TransformGroupAnimation : public UGeometryCacheTrack
{

 public: 
	char pad_88[176];  // Offset: 88 Size: 176



 // Functions 
 public:
	void SetMesh(struct FGeometryCacheMeshData& NewMeshData); // Function GeometryCache.GeometryCacheTrack_TransformGroupAnimation.SetMesh
}; 
 
 


