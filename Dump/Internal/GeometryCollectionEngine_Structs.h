#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//ScriptStruct GeometryCollectionEngine.ChaosBreakingEventData Size 28
class FChaosBreakingEventData
{

 public: 
	struct FVector Location;  // Offset: 0 Size: 12
	struct FVector Velocity;  // Offset: 12 Size: 12
	float Mass;  // Offset: 24 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct GeometryCollectionEngine.GeomComponentCacheParameters Size 80
class FGeomComponentCacheParameters
{

 public: 
	enum class EGeometryCollectionCacheType CacheMode;  // Offset: 0 Size: 1
	char pad_1[7];  // Offset: 1 Size: 7
	struct UGeometryCollectionCache* TargetCache;  // Offset: 8 Size: 8
	float ReverseCacheBeginTime;  // Offset: 16 Size: 4
	char pad_20_1 : 7;  // Offset: 20 Size: 1
	bool SaveCollisionData : 1;  // Offset: 20 Size: 1
	char pad_21_1 : 7;  // Offset: 21 Size: 1
	bool DoGenerateCollisionData : 1;  // Offset: 21 Size: 1
	char pad_22[2];  // Offset: 22 Size: 2
	int32_t CollisionDataSizeMax;  // Offset: 24 Size: 4
	char pad_28_1 : 7;  // Offset: 28 Size: 1
	bool DoCollisionDataSpatialHash : 1;  // Offset: 28 Size: 1
	char pad_29[3];  // Offset: 29 Size: 3
	float CollisionDataSpatialHashRadius;  // Offset: 32 Size: 4
	int32_t MaxCollisionPerCell;  // Offset: 36 Size: 4
	char pad_40_1 : 7;  // Offset: 40 Size: 1
	bool SaveBreakingData : 1;  // Offset: 40 Size: 1
	char pad_41_1 : 7;  // Offset: 41 Size: 1
	bool DoGenerateBreakingData : 1;  // Offset: 41 Size: 1
	char pad_42[2];  // Offset: 42 Size: 2
	int32_t BreakingDataSizeMax;  // Offset: 44 Size: 4
	char pad_48_1 : 7;  // Offset: 48 Size: 1
	bool DoBreakingDataSpatialHash : 1;  // Offset: 48 Size: 1
	char pad_49[3];  // Offset: 49 Size: 3
	float BreakingDataSpatialHashRadius;  // Offset: 52 Size: 4
	int32_t MaxBreakingPerCell;  // Offset: 56 Size: 4
	char pad_60_1 : 7;  // Offset: 60 Size: 1
	bool SaveTrailingData : 1;  // Offset: 60 Size: 1
	char pad_61_1 : 7;  // Offset: 61 Size: 1
	bool DoGenerateTrailingData : 1;  // Offset: 61 Size: 1
	char pad_62[2];  // Offset: 62 Size: 2
	int32_t TrailingDataSizeMax;  // Offset: 64 Size: 4
	float TrailingMinSpeedThreshold;  // Offset: 68 Size: 4
	float TrailingMinVolumeThreshold;  // Offset: 72 Size: 4
	char pad_76[4];  // Offset: 76 Size: 4



 // Functions 
 public:
}; 
 
 //DelegateFunction GeometryCollectionEngine.OnChaosCollisionEvents__DelegateSignature Size 16
class FOnChaosCollisionEvents__DelegateSignature
{

 public: 
	struct TArray<struct FChaosCollisionEventData> CollisionEvents;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct GeometryCollectionEngine.ChaosTrailingEventRequestSettings Size 24
class FChaosTrailingEventRequestSettings
{

 public: 
	int32_t MaxNumberOfResults;  // Offset: 0 Size: 4
	float MinMass;  // Offset: 4 Size: 4
	float MinSpeed;  // Offset: 8 Size: 4
	float MinAngularSpeed;  // Offset: 12 Size: 4
	float MaxDistance;  // Offset: 16 Size: 4
	enum class EChaosTrailingSortMethod SortMethod;  // Offset: 20 Size: 1
	char pad_21[3];  // Offset: 21 Size: 3



 // Functions 
 public:
}; 
 
 //ScriptStruct GeometryCollectionEngine.ChaosCollisionEventData Size 88
class FChaosCollisionEventData
{

 public: 
	struct FVector Location;  // Offset: 0 Size: 12
	struct FVector Normal;  // Offset: 12 Size: 12
	struct FVector Velocity1;  // Offset: 24 Size: 12
	struct FVector Velocity2;  // Offset: 36 Size: 12
	float Mass1;  // Offset: 48 Size: 4
	float Mass2;  // Offset: 52 Size: 4
	struct FVector Impulse;  // Offset: 56 Size: 12
	char pad_68[20];  // Offset: 68 Size: 20



 // Functions 
 public:
}; 
 
 //ScriptStruct GeometryCollectionEngine.ChaosTrailingEventData Size 44
class FChaosTrailingEventData
{

 public: 
	struct FVector Location;  // Offset: 0 Size: 12
	struct FVector Velocity;  // Offset: 12 Size: 12
	struct FVector AngularVelocity;  // Offset: 24 Size: 12
	float Mass;  // Offset: 36 Size: 4
	int32_t ParticleIndex;  // Offset: 40 Size: 4



 // Functions 
 public:
}; 
 
 //DelegateFunction GeometryCollectionEngine.OnChaosBreakingEvents__DelegateSignature Size 16
class FOnChaosBreakingEvents__DelegateSignature
{

 public: 
	struct TArray<struct FChaosBreakingEventData> BreakingEvents;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //DelegateFunction GeometryCollectionEngine.OnChaosBreakEvent__DelegateSignature Size 48
class FOnChaosBreakEvent__DelegateSignature
{

 public: 
	struct FChaosBreakEvent BreakEvent;  // Offset: 0 Size: 48



 // Functions 
 public:
}; 
 
 //Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventRequestSettings Size 24
class FSetBreakingEventRequestSettings
{

 public: 
	struct FChaosBreakingEventRequestSettings InSettings;  // Offset: 0 Size: 24



 // Functions 
 public:
}; 
 
 //DelegateFunction GeometryCollectionEngine.OnChaosTrailingEvents__DelegateSignature Size 16
class FOnChaosTrailingEvents__DelegateSignature
{

 public: 
	struct TArray<struct FChaosTrailingEventData> TrailingEvents;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function GeometryCollectionEngine.ChaosDestructionListener.SortTrailingEvents Size 24
class FSortTrailingEvents
{

 public: 
	struct TArray<struct FChaosTrailingEventData> TrailingEvents;  // Offset: 0 Size: 16
	enum class EChaosTrailingSortMethod SortMethod;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyKinematicField Size 16
class FApplyKinematicField
{

 public: 
	float Radius;  // Offset: 0 Size: 4
	struct FVector position;  // Offset: 4 Size: 12



 // Functions 
 public:
}; 
 
 //ScriptStruct GeometryCollectionEngine.GeometryCollectionSizeSpecificData Size 36
class FGeometryCollectionSizeSpecificData
{

 public: 
	float MaxSize;  // Offset: 0 Size: 4
	enum class ECollisionTypeEnum CollisionType;  // Offset: 4 Size: 1
	enum class EImplicitTypeEnum ImplicitType;  // Offset: 5 Size: 1
	char pad_6[2];  // Offset: 6 Size: 2
	int32_t MinLevelSetResolution;  // Offset: 8 Size: 4
	int32_t MaxLevelSetResolution;  // Offset: 12 Size: 4
	int32_t MinClusterLevelSetResolution;  // Offset: 16 Size: 4
	int32_t MaxClusterLevelSetResolution;  // Offset: 20 Size: 4
	int32_t CollisionObjectReductionPercentage;  // Offset: 24 Size: 4
	float CollisionParticlesFraction;  // Offset: 28 Size: 4
	int32_t MaximumCollisionParticles;  // Offset: 32 Size: 4



 // Functions 
 public:
}; 
 
 //Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyPhysicsField Size 24
class FApplyPhysicsField
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool Enabled : 1;  // Offset: 0 Size: 1
	enum class EGeometryCollectionPhysicsTypeEnum Target;  // Offset: 1 Size: 1
	char pad_2[6];  // Offset: 2 Size: 6
	struct UFieldSystemMetaData* MetaData;  // Offset: 8 Size: 8
	struct UFieldNodeBase* Field;  // Offset: 16 Size: 8



 // Functions 
 public:
}; 
 
 //Function GeometryCollectionEngine.GeometryCollectionComponent.NetAbandonCluster Size 4
class FNetAbandonCluster
{

 public: 
	int32_t TransformIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct GeometryCollectionEngine.GeometryCollectionDebugDrawWarningMessage Size 1
class FGeometryCollectionDebugDrawWarningMessage
{

 public: 
	char pad_0[1];  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature Size 8
class FNotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature
{

 public: 
	struct UGeometryCollectionComponent* FracturedComponent;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventRequestSettings Size 24
class FSetTrailingEventRequestSettings
{

 public: 
	struct FChaosTrailingEventRequestSettings InSettings;  // Offset: 0 Size: 24



 // Functions 
 public:
}; 
 
 //DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsStateChange__DelegateSignature Size 8
class FNotifyGeometryCollectionPhysicsStateChange__DelegateSignature
{

 public: 
	struct UGeometryCollectionComponent* FracturedComponent;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function GeometryCollectionEngine.GeometryCollectionComponent.OnRep_RepData Size 24
class FOnRep_RepData
{

 public: 
	struct FGeometryCollectionRepData OldData;  // Offset: 0 Size: 24



 // Functions 
 public:
}; 
 
 //ScriptStruct GeometryCollectionEngine.GeometryCollectionRepData Size 24
class FGeometryCollectionRepData
{

 public: 
	char pad_0[24];  // Offset: 0 Size: 24



 // Functions 
 public:
}; 
 
 //Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventRequestSettings Size 24
class FSetCollisionEventRequestSettings
{

 public: 
	struct FChaosCollisionEventRequestSettings InSettings;  // Offset: 0 Size: 24



 // Functions 
 public:
}; 
 
 //Function GeometryCollectionEngine.StaticMeshSimulationComponent.ReceivePhysicsCollision Size 112
class FReceivePhysicsCollision
{

 public: 
	struct FChaosPhysicsCollisionInfo CollisionInfo;  // Offset: 0 Size: 112



 // Functions 
 public:
}; 
 
 //Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyBreaks Size 1
class FSetNotifyBreaks
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bNewNotifyBreaks : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct GeometryCollectionEngine.ChaosBreakingEventRequestSettings Size 24
class FChaosBreakingEventRequestSettings
{

 public: 
	int32_t MaxNumberOfResults;  // Offset: 0 Size: 4
	float MinRadius;  // Offset: 4 Size: 4
	float MinSpeed;  // Offset: 8 Size: 4
	float MinMass;  // Offset: 12 Size: 4
	float MaxDistance;  // Offset: 16 Size: 4
	enum class EChaosBreakingSortMethod SortMethod;  // Offset: 20 Size: 1
	char pad_21[3];  // Offset: 21 Size: 3



 // Functions 
 public:
}; 
 
 //ScriptStruct GeometryCollectionEngine.ChaosCollisionEventRequestSettings Size 24
class FChaosCollisionEventRequestSettings
{

 public: 
	int32_t MaxNumberResults;  // Offset: 0 Size: 4
	float MinMass;  // Offset: 4 Size: 4
	float MinSpeed;  // Offset: 8 Size: 4
	float MinImpulse;  // Offset: 12 Size: 4
	float MaxDistance;  // Offset: 16 Size: 4
	enum class EChaosCollisionSortMethod SortMethod;  // Offset: 20 Size: 1
	char pad_21[3];  // Offset: 21 Size: 3



 // Functions 
 public:
}; 
 
 //ScriptStruct GeometryCollectionEngine.GeometryCollectionDebugDrawActorSelectedRigidBody Size 24
class FGeometryCollectionDebugDrawActorSelectedRigidBody
{

 public: 
	int32_t ID;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct AChaosSolverActor* Solver;  // Offset: 8 Size: 8
	struct AGeometryCollectionActor* GeometryCollection;  // Offset: 16 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct GeometryCollectionEngine.GeometryCollectionSource Size 96
class FGeometryCollectionSource
{

 public: 
	struct FSoftObjectPath SourceGeometryObject;  // Offset: 0 Size: 24
	char pad_24[8];  // Offset: 24 Size: 8
	struct FTransform LocalTransform;  // Offset: 32 Size: 48
	struct TArray<struct UMaterialInterface*> SourceMaterial;  // Offset: 80 Size: 16



 // Functions 
 public:
}; 
 
 //Function GeometryCollectionEngine.ChaosDestructionListener.AddChaosSolverActor Size 8
class FAddChaosSolverActor
{

 public: 
	struct AChaosSolverActor* ChaosSolverActor;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function GeometryCollectionEngine.ChaosDestructionListener.AddGeometryCollectionActor Size 8
class FAddGeometryCollectionActor
{

 public: 
	struct AGeometryCollectionActor* GeometryCollectionActor;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function GeometryCollectionEngine.ChaosDestructionListener.IsEventListening Size 1
class FIsEventListening
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function GeometryCollectionEngine.ChaosDestructionListener.RemoveChaosSolverActor Size 8
class FRemoveChaosSolverActor
{

 public: 
	struct AChaosSolverActor* ChaosSolverActor;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function GeometryCollectionEngine.ChaosDestructionListener.RemoveGeometryCollectionActor Size 8
class FRemoveGeometryCollectionActor
{

 public: 
	struct AGeometryCollectionActor* GeometryCollectionActor;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventEnabled Size 1
class FSetBreakingEventEnabled
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bIsEnabled : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventEnabled Size 1
class FSetCollisionEventEnabled
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bIsEnabled : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventEnabled Size 1
class FSetTrailingEventEnabled
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bIsEnabled : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function GeometryCollectionEngine.ChaosDestructionListener.SortBreakingEvents Size 24
class FSortBreakingEvents
{

 public: 
	struct TArray<struct FChaosBreakingEventData> BreakingEvents;  // Offset: 0 Size: 16
	enum class EChaosBreakingSortMethod SortMethod;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //Function GeometryCollectionEngine.ChaosDestructionListener.SortCollisionEvents Size 24
class FSortCollisionEvents
{

 public: 
	struct TArray<struct FChaosCollisionEventData> CollisionEvents;  // Offset: 0 Size: 16
	enum class EChaosCollisionSortMethod SortMethod;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //Function GeometryCollectionEngine.GeometryCollectionActor.RaycastSingle Size 164
class FRaycastSingle
{

 public: 
	struct FVector Start;  // Offset: 0 Size: 12
	struct FVector End;  // Offset: 12 Size: 12
	struct FHitResult OutHit;  // Offset: 24 Size: 136
	char pad_160_1 : 7;  // Offset: 160 Size: 1
	bool ReturnValue : 1;  // Offset: 160 Size: 1
	char pad_161[3];  // Offset: 161 Size: 3



 // Functions 
 public:
}; 
 
 