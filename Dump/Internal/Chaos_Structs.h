#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//ScriptStruct Chaos.RecordedTransformTrack Size 16
class FRecordedTransformTrack
{

 public: 
	struct TArray<struct FRecordedFrame> Records;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct Chaos.ChaosSolverConfiguration Size 104
class FChaosSolverConfiguration
{

 public: 
	int32_t Iterations;  // Offset: 0 Size: 4
	int32_t CollisionPairIterations;  // Offset: 4 Size: 4
	int32_t PushOutIterations;  // Offset: 8 Size: 4
	int32_t CollisionPushOutPairIterations;  // Offset: 12 Size: 4
	float CollisionMarginFraction;  // Offset: 16 Size: 4
	float CollisionMarginMax;  // Offset: 20 Size: 4
	float CollisionCullDistance;  // Offset: 24 Size: 4
	int32_t JointPairIterations;  // Offset: 28 Size: 4
	int32_t JointPushOutPairIterations;  // Offset: 32 Size: 4
	float ClusterConnectionFactor;  // Offset: 36 Size: 4
	enum class EClusterUnionMethod ClusterUnionConnectionType;  // Offset: 40 Size: 1
	char pad_41_1 : 7;  // Offset: 41 Size: 1
	bool bGenerateCollisionData : 1;  // Offset: 41 Size: 1
	char pad_42[2];  // Offset: 42 Size: 2
	struct FSolverCollisionFilterSettings CollisionFilterSettings;  // Offset: 44 Size: 16
	char pad_60_1 : 7;  // Offset: 60 Size: 1
	bool bGenerateBreakData : 1;  // Offset: 60 Size: 1
	char pad_61[3];  // Offset: 61 Size: 3
	struct FSolverBreakingFilterSettings BreakingFilterSettings;  // Offset: 64 Size: 16
	char pad_80_1 : 7;  // Offset: 80 Size: 1
	bool bGenerateTrailingData : 1;  // Offset: 80 Size: 1
	char pad_81[3];  // Offset: 81 Size: 3
	struct FSolverTrailingFilterSettings TrailingFilterSettings;  // Offset: 84 Size: 16
	char pad_100_1 : 7;  // Offset: 100 Size: 1
	bool bGenerateContactGraph : 1;  // Offset: 100 Size: 1
	char pad_101[3];  // Offset: 101 Size: 3



 // Functions 
 public:
}; 
 
 //ScriptStruct Chaos.SolverCollisionFilterSettings Size 16
class FSolverCollisionFilterSettings
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool FilterEnabled : 1;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	float MinMass;  // Offset: 4 Size: 4
	float MinSpeed;  // Offset: 8 Size: 4
	float MinImpulse;  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct Chaos.SolverTrailingFilterSettings Size 16
class FSolverTrailingFilterSettings
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool FilterEnabled : 1;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	float MinMass;  // Offset: 4 Size: 4
	float MinSpeed;  // Offset: 8 Size: 4
	float MinVolume;  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct Chaos.SolverBreakingFilterSettings Size 16
class FSolverBreakingFilterSettings
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool FilterEnabled : 1;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	float MinMass;  // Offset: 4 Size: 4
	float MinSpeed;  // Offset: 8 Size: 4
	float MinVolume;  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct Chaos.SolverTrailingData Size 48
class FSolverTrailingData
{

 public: 
	struct FVector Location;  // Offset: 0 Size: 12
	struct FVector Velocity;  // Offset: 12 Size: 12
	struct FVector AngularVelocity;  // Offset: 24 Size: 12
	float Mass;  // Offset: 36 Size: 4
	int32_t ParticleIndex;  // Offset: 40 Size: 4
	int32_t ParticleIndexMesh;  // Offset: 44 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct Chaos.RecordedFrame Size 184
class FRecordedFrame
{

 public: 
	struct TArray<struct FTransform> Transforms;  // Offset: 0 Size: 16
	struct TArray<int32_t> TransformIndices;  // Offset: 16 Size: 16
	struct TArray<int32_t> PreviousTransformIndices;  // Offset: 32 Size: 16
	struct TArray<bool> DisabledFlags;  // Offset: 48 Size: 16
	struct TArray<struct FSolverCollisionData> Collisions;  // Offset: 64 Size: 16
	struct TArray<struct FSolverBreakingData> Breakings;  // Offset: 80 Size: 16
	struct TSet<struct FSolverTrailingData> Trailings;  // Offset: 96 Size: 80
	float Timestamp;  // Offset: 176 Size: 4
	char pad_180[4];  // Offset: 180 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct Chaos.SolverBreakingData Size 48
class FSolverBreakingData
{

 public: 
	struct FVector Location;  // Offset: 0 Size: 12
	struct FVector Velocity;  // Offset: 12 Size: 12
	struct FVector AngularVelocity;  // Offset: 24 Size: 12
	float Mass;  // Offset: 36 Size: 4
	int32_t ParticleIndex;  // Offset: 40 Size: 4
	int32_t ParticleIndexMesh;  // Offset: 44 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct Chaos.SolverCollisionData Size 108
class FSolverCollisionData
{

 public: 
	struct FVector Location;  // Offset: 0 Size: 12
	struct FVector AccumulatedImpulse;  // Offset: 12 Size: 12
	struct FVector Normal;  // Offset: 24 Size: 12
	struct FVector Velocity1;  // Offset: 36 Size: 12
	struct FVector Velocity2;  // Offset: 48 Size: 12
	struct FVector AngularVelocity1;  // Offset: 60 Size: 12
	struct FVector AngularVelocity2;  // Offset: 72 Size: 12
	float Mass1;  // Offset: 84 Size: 4
	float Mass2;  // Offset: 88 Size: 4
	int32_t ParticleIndex;  // Offset: 92 Size: 4
	int32_t LevelsetIndex;  // Offset: 96 Size: 4
	int32_t ParticleIndexMesh;  // Offset: 100 Size: 4
	int32_t LevelsetIndexMesh;  // Offset: 104 Size: 4



 // Functions 
 public:
}; 
 
 