#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//DelegateFunction NavigationSystem.OnNavigationPathUpdated__DelegateSignature Size 16
class FOnNavigationPathUpdated__DelegateSignature
{

 public: 
	struct UNavigationPath* AffectedPath;  // Offset: 0 Size: 8
	enum class ENavPathEvent PathEvent;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7



 // Functions 
 public:
}; 
 
 //Function NavigationSystem.NavigationSystemV1.ProjectPointToNavigation Size 64
class FProjectPointToNavigation
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct FVector Point;  // Offset: 8 Size: 12
	char pad_20[4];  // Offset: 20 Size: 4
	struct ANavigationData* NavData;  // Offset: 24 Size: 8
	UNavigationQueryFilter* FilterClass;  // Offset: 32 Size: 8
	struct FVector QueryExtent;  // Offset: 40 Size: 12
	struct FVector ReturnValue;  // Offset: 52 Size: 12



 // Functions 
 public:
}; 
 
 //ScriptStruct NavigationSystem.NavCollisionBox Size 24
class FNavCollisionBox
{

 public: 
	struct FVector Offset;  // Offset: 0 Size: 12
	struct FVector Extent;  // Offset: 12 Size: 12



 // Functions 
 public:
}; 
 
 //DelegateFunction NavigationSystem.OnNavDataGenericEvent__DelegateSignature Size 8
class FOnNavDataGenericEvent__DelegateSignature
{

 public: 
	struct ANavigationData* NavData;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function NavigationSystem.NavRelevantComponent.SetNavigationRelevancy Size 1
class FSetNavigationRelevancy
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bRelevant : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct NavigationSystem.NavigationFilterArea Size 24
class FNavigationFilterArea
{

 public: 
	UNavArea* AreaClass;  // Offset: 0 Size: 8
	float TravelCostOverride;  // Offset: 8 Size: 4
	float EnteringCostOverride;  // Offset: 12 Size: 4
	char bIsExcluded : 1;  // Offset: 16 Size: 1
	char bOverrideTravelCost : 1;  // Offset: 16 Size: 1
	char bOverrideEnteringCost : 1;  // Offset: 16 Size: 1
	char pad_16_1 : 5;  // Offset: 16 Size: 1
	char pad_17[8];  // Offset: 17 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct NavigationSystem.NavigationFilterFlags Size 4
class FNavigationFilterFlags
{

 public: 
	char bNavFlag0 : 1;  // Offset: 0 Size: 1
	char bNavFlag1 : 1;  // Offset: 0 Size: 1
	char bNavFlag2 : 1;  // Offset: 0 Size: 1
	char bNavFlag3 : 1;  // Offset: 0 Size: 1
	char bNavFlag4 : 1;  // Offset: 0 Size: 1
	char bNavFlag5 : 1;  // Offset: 0 Size: 1
	char bNavFlag6 : 1;  // Offset: 0 Size: 1
	char bNavFlag7 : 1;  // Offset: 0 Size: 1
	char bNavFlag8 : 1;  // Offset: 1 Size: 1
	char bNavFlag9 : 1;  // Offset: 1 Size: 1
	char bNavFlag10 : 1;  // Offset: 1 Size: 1
	char bNavFlag11 : 1;  // Offset: 1 Size: 1
	char bNavFlag12 : 1;  // Offset: 1 Size: 1
	char bNavFlag13 : 1;  // Offset: 1 Size: 1
	char bNavFlag14 : 1;  // Offset: 1 Size: 1
	char bNavFlag15 : 1;  // Offset: 1 Size: 1
	char pad_2[2];  // Offset: 2 Size: 2



 // Functions 
 public:
}; 
 
 //ScriptStruct NavigationSystem.NavCollisionCylinder Size 20
class FNavCollisionCylinder
{

 public: 
	struct FVector Offset;  // Offset: 0 Size: 12
	float Radius;  // Offset: 12 Size: 4
	float Height;  // Offset: 16 Size: 4



 // Functions 
 public:
}; 
 
 //Function NavigationSystem.NavigationSystemV1.GetNavigationSystem Size 16
class FGetNavigationSystem
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct UNavigationSystemV1* ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct NavigationSystem.SupportedAreaData Size 32
class FSupportedAreaData
{

 public: 
	struct FString AreaClassName;  // Offset: 0 Size: 16
	int32_t AreaID;  // Offset: 16 Size: 4
	char pad_20[4];  // Offset: 20 Size: 4
	UObject* AreaClass;  // Offset: 24 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct NavigationSystem.RecastNavMeshGenerationProperties Size 64
class FRecastNavMeshGenerationProperties
{

 public: 
	int32_t TilePoolSize;  // Offset: 0 Size: 4
	float TileSizeUU;  // Offset: 4 Size: 4
	float CellSize;  // Offset: 8 Size: 4
	float CellHeight;  // Offset: 12 Size: 4
	float AgentRadius;  // Offset: 16 Size: 4
	float AgentHeight;  // Offset: 20 Size: 4
	float AgentMaxSlope;  // Offset: 24 Size: 4
	float AgentMaxStepHeight;  // Offset: 28 Size: 4
	float MinRegionArea;  // Offset: 32 Size: 4
	float MergeRegionSize;  // Offset: 36 Size: 4
	float MaxSimplificationError;  // Offset: 40 Size: 4
	int32_t TileNumberHardLimit;  // Offset: 44 Size: 4
	enum class ERecastPartitioning RegionPartitioning;  // Offset: 48 Size: 1
	enum class ERecastPartitioning LayerPartitioning;  // Offset: 49 Size: 1
	char pad_50[2];  // Offset: 50 Size: 2
	int32_t RegionChunkSplits;  // Offset: 52 Size: 4
	int32_t LayerChunkSplits;  // Offset: 56 Size: 4
	char bSortNavigationAreasByCost : 1;  // Offset: 60 Size: 1
	char bPerformVoxelFiltering : 1;  // Offset: 60 Size: 1
	char bMarkLowHeightAreas : 1;  // Offset: 60 Size: 1
	char bUseExtraTopCellWhenMarkingAreas : 1;  // Offset: 60 Size: 1
	char bFilterLowSpanSequences : 1;  // Offset: 60 Size: 1
	char bFilterLowSpanFromTileCache : 1;  // Offset: 60 Size: 1
	char bFixedTilePoolSize : 1;  // Offset: 60 Size: 1
	char pad_60_1 : 1;  // Offset: 60 Size: 1
	char pad_61[4];  // Offset: 61 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct NavigationSystem.NavGraphNode Size 24
class FNavGraphNode
{

 public: 
	struct UObject* Owner;  // Offset: 0 Size: 8
	char pad_8[16];  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct NavigationSystem.NavGraphEdge Size 24
class FNavGraphEdge
{

 public: 
	char pad_0[24];  // Offset: 0 Size: 24



 // Functions 
 public:
}; 
 
 //ScriptStruct NavigationSystem.NavLinkCustomInstanceData Size 112
// Inherited 104 bytes 
class FNavLinkCustomInstanceData : public FActorComponentInstanceData
{

 public: 
	uint32_t NavLinkUserId;  // Offset: 104 Size: 4
	char pad_108[4];  // Offset: 108 Size: 4



 // Functions 
 public:
}; 
 
 //Function NavigationSystem.NavigationPath.EnableDebugDrawing Size 20
class FEnableDebugDrawing
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bShouldDrawDebugData : 1;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	struct FLinearColor PathColor;  // Offset: 4 Size: 16



 // Functions 
 public:
}; 
 
 //Function NavigationSystem.NavigationPath.EnableRecalculationOnInvalidation Size 1
class FEnableRecalculationOnInvalidation
{

 public: 
	enum class ENavigationOptionFlag DoRecalculation;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function NavigationSystem.NavigationSystemV1.K2_ProjectPointToNavigation Size 64
class FK2_ProjectPointToNavigation
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct FVector Point;  // Offset: 8 Size: 12
	struct FVector ProjectedLocation;  // Offset: 20 Size: 12
	struct ANavigationData* NavData;  // Offset: 32 Size: 8
	UNavigationQueryFilter* FilterClass;  // Offset: 40 Size: 8
	struct FVector QueryExtent;  // Offset: 48 Size: 12
	char pad_60_1 : 7;  // Offset: 60 Size: 1
	bool ReturnValue : 1;  // Offset: 60 Size: 1
	char pad_61[3];  // Offset: 61 Size: 3



 // Functions 
 public:
}; 
 
 //Function NavigationSystem.NavigationPath.GetDebugString Size 16
class FGetDebugString
{

 public: 
	struct FString ReturnValue;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function NavigationSystem.NavigationSystemV1.GetPathCost Size 64
class FGetPathCost
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct FVector PathStart;  // Offset: 8 Size: 12
	struct FVector PathEnd;  // Offset: 20 Size: 12
	float PathCost;  // Offset: 32 Size: 4
	char pad_36[4];  // Offset: 36 Size: 4
	struct ANavigationData* NavData;  // Offset: 40 Size: 8
	UNavigationQueryFilter* FilterClass;  // Offset: 48 Size: 8
	enum class ENavigationQueryResult ReturnValue;  // Offset: 56 Size: 1
	char pad_57[7];  // Offset: 57 Size: 7



 // Functions 
 public:
}; 
 
 //Function NavigationSystem.NavigationSystemV1.GetPathLength Size 64
class FGetPathLength
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct FVector PathStart;  // Offset: 8 Size: 12
	struct FVector PathEnd;  // Offset: 20 Size: 12
	float PathLength;  // Offset: 32 Size: 4
	char pad_36[4];  // Offset: 36 Size: 4
	struct ANavigationData* NavData;  // Offset: 40 Size: 8
	UNavigationQueryFilter* FilterClass;  // Offset: 48 Size: 8
	enum class ENavigationQueryResult ReturnValue;  // Offset: 56 Size: 1
	char pad_57[7];  // Offset: 57 Size: 7



 // Functions 
 public:
}; 
 
 //Function NavigationSystem.NavigationPath.IsPartial Size 1
class FIsPartial
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function NavigationSystem.NavigationPath.IsStringPulled Size 1
class FIsStringPulled
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function NavigationSystem.NavigationPath.IsValid Size 1
class FIsValid
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function NavigationSystem.NavigationSystemV1.FindPathToActorSynchronously Size 64
class FFindPathToActorSynchronously
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct FVector PathStart;  // Offset: 8 Size: 12
	char pad_20[4];  // Offset: 20 Size: 4
	struct AActor* GoalActor;  // Offset: 24 Size: 8
	float TetherDistance;  // Offset: 32 Size: 4
	char pad_36[4];  // Offset: 36 Size: 4
	struct AActor* PathfindingContext;  // Offset: 40 Size: 8
	UNavigationQueryFilter* FilterClass;  // Offset: 48 Size: 8
	struct UNavigationPath* ReturnValue;  // Offset: 56 Size: 8



 // Functions 
 public:
}; 
 
 //Function NavigationSystem.NavigationSystemV1.FindPathToLocationSynchronously Size 56
class FFindPathToLocationSynchronously
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct FVector PathStart;  // Offset: 8 Size: 12
	struct FVector PathEnd;  // Offset: 20 Size: 12
	struct AActor* PathfindingContext;  // Offset: 32 Size: 8
	UNavigationQueryFilter* FilterClass;  // Offset: 40 Size: 8
	struct UNavigationPath* ReturnValue;  // Offset: 48 Size: 8



 // Functions 
 public:
}; 
 
 //Function NavigationSystem.NavigationSystemV1.GetRandomPointInNavigableRadius Size 56
class FGetRandomPointInNavigableRadius
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct FVector Origin;  // Offset: 8 Size: 12
	float Radius;  // Offset: 20 Size: 4
	struct ANavigationData* NavData;  // Offset: 24 Size: 8
	UNavigationQueryFilter* FilterClass;  // Offset: 32 Size: 8
	struct FVector ReturnValue;  // Offset: 40 Size: 12
	char pad_52[4];  // Offset: 52 Size: 4



 // Functions 
 public:
}; 
 
 //Function NavigationSystem.NavigationSystemV1.GetRandomReachablePointInRadius Size 56
class FGetRandomReachablePointInRadius
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct FVector Origin;  // Offset: 8 Size: 12
	float Radius;  // Offset: 20 Size: 4
	struct ANavigationData* NavData;  // Offset: 24 Size: 8
	UNavigationQueryFilter* FilterClass;  // Offset: 32 Size: 8
	struct FVector ReturnValue;  // Offset: 40 Size: 12
	char pad_52[4];  // Offset: 52 Size: 4



 // Functions 
 public:
}; 
 
 //Function NavigationSystem.NavigationSystemV1.NavigationRaycast Size 72
class FNavigationRaycast
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct FVector RayStart;  // Offset: 8 Size: 12
	struct FVector RayEnd;  // Offset: 20 Size: 12
	struct FVector HitLocation;  // Offset: 32 Size: 12
	char pad_44[4];  // Offset: 44 Size: 4
	UNavigationQueryFilter* FilterClass;  // Offset: 48 Size: 8
	struct AController* Querier;  // Offset: 56 Size: 8
	char pad_64_1 : 7;  // Offset: 64 Size: 1
	bool ReturnValue : 1;  // Offset: 64 Size: 1
	char pad_65[7];  // Offset: 65 Size: 7



 // Functions 
 public:
}; 
 
 //Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuilt Size 16
class FIsNavigationBeingBuilt
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool ReturnValue : 1;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7



 // Functions 
 public:
}; 
 
 //Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuiltOrLocked Size 16
class FIsNavigationBeingBuiltOrLocked
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool ReturnValue : 1;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7



 // Functions 
 public:
}; 
 
 //Function NavigationSystem.NavigationSystemV1.SetGeometryGatheringMode Size 1
class FSetGeometryGatheringMode
{

 public: 
	enum class ENavDataGatheringModeConfig NewMode;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function NavigationSystem.NavigationSystemV1.K2_GetRandomLocationInNavigableRadius Size 64
class FK2_GetRandomLocationInNavigableRadius
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct FVector Origin;  // Offset: 8 Size: 12
	struct FVector RandomLocation;  // Offset: 20 Size: 12
	float Radius;  // Offset: 32 Size: 4
	char pad_36[4];  // Offset: 36 Size: 4
	struct ANavigationData* NavData;  // Offset: 40 Size: 8
	UNavigationQueryFilter* FilterClass;  // Offset: 48 Size: 8
	char pad_56_1 : 7;  // Offset: 56 Size: 1
	bool ReturnValue : 1;  // Offset: 56 Size: 1
	char pad_57[7];  // Offset: 57 Size: 7



 // Functions 
 public:
}; 
 
 //Function NavigationSystem.RecastNavMesh.K2_ReplaceAreaInTileBounds Size 56
class FK2_ReplaceAreaInTileBounds
{

 public: 
	struct FBox Bounds;  // Offset: 0 Size: 28
	char pad_28[4];  // Offset: 28 Size: 4
	UNavArea* OldArea;  // Offset: 32 Size: 8
	UNavArea* NewArea;  // Offset: 40 Size: 8
	char pad_48_1 : 7;  // Offset: 48 Size: 1
	bool ReplaceLinks : 1;  // Offset: 48 Size: 1
	char pad_49_1 : 7;  // Offset: 49 Size: 1
	bool ReturnValue : 1;  // Offset: 49 Size: 1
	char pad_50[6];  // Offset: 50 Size: 6



 // Functions 
 public:
}; 
 
 //Function NavigationSystem.NavigationSystemV1.K2_GetRandomPointInNavigableRadius Size 64
class FK2_GetRandomPointInNavigableRadius
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct FVector Origin;  // Offset: 8 Size: 12
	struct FVector RandomLocation;  // Offset: 20 Size: 12
	float Radius;  // Offset: 32 Size: 4
	char pad_36[4];  // Offset: 36 Size: 4
	struct ANavigationData* NavData;  // Offset: 40 Size: 8
	UNavigationQueryFilter* FilterClass;  // Offset: 48 Size: 8
	char pad_56_1 : 7;  // Offset: 56 Size: 1
	bool ReturnValue : 1;  // Offset: 56 Size: 1
	char pad_57[7];  // Offset: 57 Size: 7



 // Functions 
 public:
}; 
 
 //Function NavigationSystem.NavigationSystemV1.K2_GetRandomReachablePointInRadius Size 64
class FK2_GetRandomReachablePointInRadius
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct FVector Origin;  // Offset: 8 Size: 12
	struct FVector RandomLocation;  // Offset: 20 Size: 12
	float Radius;  // Offset: 32 Size: 4
	char pad_36[4];  // Offset: 36 Size: 4
	struct ANavigationData* NavData;  // Offset: 40 Size: 8
	UNavigationQueryFilter* FilterClass;  // Offset: 48 Size: 8
	char pad_56_1 : 7;  // Offset: 56 Size: 1
	bool ReturnValue : 1;  // Offset: 56 Size: 1
	char pad_57[7];  // Offset: 57 Size: 7



 // Functions 
 public:
}; 
 
 //Function NavigationSystem.NavigationSystemV1.K2_ReplaceAreaInOctreeData Size 32
class FK2_ReplaceAreaInOctreeData
{

 public: 
	struct UObject* Object;  // Offset: 0 Size: 8
	UNavArea* OldArea;  // Offset: 8 Size: 8
	UNavArea* NewArea;  // Offset: 16 Size: 8
	char pad_24_1 : 7;  // Offset: 24 Size: 1
	bool ReturnValue : 1;  // Offset: 24 Size: 1
	char pad_25[7];  // Offset: 25 Size: 7



 // Functions 
 public:
}; 
 
 //Function NavigationSystem.NavigationSystemV1.OnNavigationBoundsUpdated Size 8
class FOnNavigationBoundsUpdated
{

 public: 
	struct ANavMeshBoundsVolume* NavVolume;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function NavigationSystem.NavigationSystemV1.RegisterNavigationInvoker Size 16
class FRegisterNavigationInvoker
{

 public: 
	struct AActor* Invoker;  // Offset: 0 Size: 8
	float TileGenerationRadius;  // Offset: 8 Size: 4
	float TileRemovalRadius;  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function NavigationSystem.NavigationSystemV1.SetMaxSimultaneousTileGenerationJobsCount Size 4
class FSetMaxSimultaneousTileGenerationJobsCount
{

 public: 
	int32_t MaxNumberOfJobs;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function NavigationSystem.NavigationSystemV1.SimpleMoveToActor Size 16
class FSimpleMoveToActor
{

 public: 
	struct AController* Controller;  // Offset: 0 Size: 8
	struct AActor* Goal;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function NavigationSystem.NavigationSystemV1.SimpleMoveToLocation Size 24
class FSimpleMoveToLocation
{

 public: 
	struct AController* Controller;  // Offset: 0 Size: 8
	struct FVector Goal;  // Offset: 8 Size: 12
	char pad_20[4];  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 //Function NavigationSystem.NavigationSystemV1.UnregisterNavigationInvoker Size 8
class FUnregisterNavigationInvoker
{

 public: 
	struct AActor* Invoker;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function NavigationSystem.NavModifierVolume.SetAreaClass Size 8
class FSetAreaClass
{

 public: 
	UNavArea* NewAreaClass;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 