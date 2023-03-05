#pragma once 
#include <NavigationSystem_Structs.h>
 
 
 
//Class NavigationSystem.AbstractNavData Size 1064
// Inherited 1064 bytes 
class AAbstractNavData : public ANavigationData
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class NavigationSystem.NavigationData Size 1064
// Inherited 544 bytes 
class ANavigationData : public AActor
{

 public: 
	char pad_544[8];  // Offset: 544 Size: 8
	struct UPrimitiveComponent* RenderingComp;  // Offset: 552 Size: 8
	struct FNavDataConfig NavDataConfig;  // Offset: 560 Size: 120
	char bEnableDrawing : 1;  // Offset: 680 Size: 1
	char bForceRebuildOnLoad : 1;  // Offset: 680 Size: 1
	char bAutoDestroyWhenNoNavigation : 1;  // Offset: 680 Size: 1
	char bCanBeMainNavData : 1;  // Offset: 680 Size: 1
	char bCanSpawnOnRebuild : 1;  // Offset: 680 Size: 1
	char bRebuildAtRuntime : 1;  // Offset: 680 Size: 1
	char pad_680_1 : 2;  // Offset: 680 Size: 1
	char pad_681[4];  // Offset: 681 Size: 4
	enum class ERuntimeGenerationType RuntimeGeneration;  // Offset: 684 Size: 1
	char pad_685[3];  // Offset: 685 Size: 3
	float ObservedPathsTickInterval;  // Offset: 688 Size: 4
	uint32_t DataVersion;  // Offset: 692 Size: 4
	char pad_696[264];  // Offset: 696 Size: 264
	struct TArray<struct FSupportedAreaData> SupportedAreas;  // Offset: 960 Size: 16
	char pad_976[88];  // Offset: 976 Size: 88



 // Functions 
 public:
}; 
 
 


//Class NavigationSystem.CrowdManagerBase Size 40
// Inherited 40 bytes 
class UCrowdManagerBase : public UObject
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class NavigationSystem.NavArea Size 72
// Inherited 48 bytes 
class UNavArea : public UNavAreaBase
{

 public: 
	float DefaultCost;  // Offset: 48 Size: 4
	float FixedAreaEnteringCost;  // Offset: 52 Size: 4
	struct FColor DrawColor;  // Offset: 56 Size: 4
	struct FNavAgentSelector SupportedAgents;  // Offset: 60 Size: 4
	char bSupportsAgent0 : 1;  // Offset: 64 Size: 1
	char bSupportsAgent1 : 1;  // Offset: 64 Size: 1
	char bSupportsAgent2 : 1;  // Offset: 64 Size: 1
	char bSupportsAgent3 : 1;  // Offset: 64 Size: 1
	char bSupportsAgent4 : 1;  // Offset: 64 Size: 1
	char bSupportsAgent5 : 1;  // Offset: 64 Size: 1
	char bSupportsAgent6 : 1;  // Offset: 64 Size: 1
	char bSupportsAgent7 : 1;  // Offset: 64 Size: 1
	char bSupportsAgent8 : 1;  // Offset: 65 Size: 1
	char bSupportsAgent9 : 1;  // Offset: 65 Size: 1
	char bSupportsAgent10 : 1;  // Offset: 65 Size: 1
	char bSupportsAgent11 : 1;  // Offset: 65 Size: 1
	char bSupportsAgent12 : 1;  // Offset: 65 Size: 1
	char bSupportsAgent13 : 1;  // Offset: 65 Size: 1
	char bSupportsAgent14 : 1;  // Offset: 65 Size: 1
	char bSupportsAgent15 : 1;  // Offset: 65 Size: 1
	char pad_66[6];  // Offset: 66 Size: 6



 // Functions 
 public:
}; 
 
 


//Class NavigationSystem.NavArea_LowHeight Size 72
// Inherited 72 bytes 
class UNavArea_LowHeight : public UNavArea
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class NavigationSystem.NavArea_Default Size 72
// Inherited 72 bytes 
class UNavArea_Default : public UNavArea
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class NavigationSystem.NavigationSystemV1 Size 5600
// Inherited 40 bytes 
class UNavigationSystemV1 : public UNavigationSystemBase
{

 public: 
	struct ANavigationData* MainNavData;  // Offset: 40 Size: 8
	struct ANavigationData* AbstractNavData;  // Offset: 48 Size: 8
	struct FName DefaultAgentName;  // Offset: 56 Size: 8
	struct TSoftClassPtr<UObject> CrowdManagerClass;  // Offset: 64 Size: 40
	char bAutoCreateNavigationData : 1;  // Offset: 104 Size: 1
	char bSpawnNavDataInNavBoundsLevel : 1;  // Offset: 104 Size: 1
	char bAllowClientSideNavigation : 1;  // Offset: 104 Size: 1
	char bShouldDiscardSubLevelNavData : 1;  // Offset: 104 Size: 1
	char bTickWhilePaused : 1;  // Offset: 104 Size: 1
	char bSupportRebuilding : 1;  // Offset: 104 Size: 1
	char bInitialBuildingLocked : 1;  // Offset: 104 Size: 1
	char pad_104_1 : 1;  // Offset: 104 Size: 1
	char bSkipAgentHeightCheckWhenPickingNavData : 1;  // Offset: 105 Size: 1
	char bGenerateNavigationOnlyAroundNavigationInvokers : 1;  // Offset: 105 Size: 1
	char pad_105_1 : 6;  // Offset: 105 Size: 1
	char pad_106[3];  // Offset: 106 Size: 3
	float ActiveTilesUpdateInterval;  // Offset: 108 Size: 4
	enum class ENavDataGatheringModeConfig DataGatheringMode;  // Offset: 112 Size: 1
	char pad_113[3];  // Offset: 113 Size: 3
	float DirtyAreaWarningSizeThreshold;  // Offset: 116 Size: 4
	struct TArray<struct FNavDataConfig> SupportedAgents;  // Offset: 120 Size: 16
	struct FNavAgentSelector SupportedAgentsMask;  // Offset: 136 Size: 4
	char pad_140[4];  // Offset: 140 Size: 4
	struct TArray<struct ANavigationData*> NavDataSet;  // Offset: 144 Size: 16
	struct TArray<struct ANavigationData*> NavDataRegistrationQueue;  // Offset: 160 Size: 16
	char pad_176[16];  // Offset: 176 Size: 16
	struct FMulticastInlineDelegate OnNavDataRegisteredEvent;  // Offset: 192 Size: 16
	struct FMulticastInlineDelegate OnNavigationGenerationFinishedDelegate;  // Offset: 208 Size: 16
	char pad_224[220];  // Offset: 224 Size: 220
	enum class FNavigationSystemRunMode OperationMode;  // Offset: 444 Size: 1
	char pad_445[5119];  // Offset: 445 Size: 5119
	float DirtyAreasUpdateFreq;  // Offset: 5564 Size: 4
	char pad_5568[32];  // Offset: 5568 Size: 32



 // Functions 
 public:
	void UnregisterNavigationInvoker(struct AActor* Invoker); // Function NavigationSystem.NavigationSystemV1.UnregisterNavigationInvoker
	void SimpleMoveToLocation(struct AController* Controller, struct FVector& Goal); // Function NavigationSystem.NavigationSystemV1.SimpleMoveToLocation
	void SimpleMoveToActor(struct AController* Controller, struct AActor* Goal); // Function NavigationSystem.NavigationSystemV1.SimpleMoveToActor
	void SetMaxSimultaneousTileGenerationJobsCount(int32_t MaxNumberOfJobs); // Function NavigationSystem.NavigationSystemV1.SetMaxSimultaneousTileGenerationJobsCount
	void SetGeometryGatheringMode(enum class ENavDataGatheringModeConfig NewMode); // Function NavigationSystem.NavigationSystemV1.SetGeometryGatheringMode
	void ResetMaxSimultaneousTileGenerationJobsCount(); // Function NavigationSystem.NavigationSystemV1.ResetMaxSimultaneousTileGenerationJobsCount
	void RegisterNavigationInvoker(struct AActor* Invoker, float TileGenerationRadius, float TileRemovalRadius); // Function NavigationSystem.NavigationSystemV1.RegisterNavigationInvoker
	struct FVector ProjectPointToNavigation(struct UObject* WorldContextObject, struct FVector& Point, struct ANavigationData* NavData, UNavigationQueryFilter* FilterClass, struct FVector QueryExtent); // Function NavigationSystem.NavigationSystemV1.ProjectPointToNavigation
	void OnNavigationBoundsUpdated(struct ANavMeshBoundsVolume* NavVolume); // Function NavigationSystem.NavigationSystemV1.OnNavigationBoundsUpdated
	bool NavigationRaycast(struct UObject* WorldContextObject, struct FVector& RayStart, struct FVector& RayEnd, struct FVector& HitLocation, UNavigationQueryFilter* FilterClass, struct AController* Querier); // Function NavigationSystem.NavigationSystemV1.NavigationRaycast
	bool K2_ReplaceAreaInOctreeData(struct UObject* Object, UNavArea* OldArea, UNavArea* NewArea); // Function NavigationSystem.NavigationSystemV1.K2_ReplaceAreaInOctreeData
	bool K2_ProjectPointToNavigation(struct UObject* WorldContextObject, struct FVector& Point, struct FVector& ProjectedLocation, struct ANavigationData* NavData, UNavigationQueryFilter* FilterClass, struct FVector QueryExtent); // Function NavigationSystem.NavigationSystemV1.K2_ProjectPointToNavigation
	bool K2_GetRandomReachablePointInRadius(struct UObject* WorldContextObject, struct FVector& Origin, struct FVector& RandomLocation, float Radius, struct ANavigationData* NavData, UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.K2_GetRandomReachablePointInRadius
	bool K2_GetRandomPointInNavigableRadius(struct UObject* WorldContextObject, struct FVector& Origin, struct FVector& RandomLocation, float Radius, struct ANavigationData* NavData, UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.K2_GetRandomPointInNavigableRadius
	bool K2_GetRandomLocationInNavigableRadius(struct UObject* WorldContextObject, struct FVector& Origin, struct FVector& RandomLocation, float Radius, struct ANavigationData* NavData, UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.K2_GetRandomLocationInNavigableRadius
	bool IsNavigationBeingBuiltOrLocked(struct UObject* WorldContextObject); // Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuiltOrLocked
	bool IsNavigationBeingBuilt(struct UObject* WorldContextObject); // Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuilt
	struct FVector GetRandomReachablePointInRadius(struct UObject* WorldContextObject, struct FVector& Origin, float Radius, struct ANavigationData* NavData, UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.GetRandomReachablePointInRadius
	struct FVector GetRandomPointInNavigableRadius(struct UObject* WorldContextObject, struct FVector& Origin, float Radius, struct ANavigationData* NavData, UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.GetRandomPointInNavigableRadius
	enum class ENavigationQueryResult GetPathLength(struct UObject* WorldContextObject, struct FVector& PathStart, struct FVector& PathEnd, float& PathLength, struct ANavigationData* NavData, UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.GetPathLength
	enum class ENavigationQueryResult GetPathCost(struct UObject* WorldContextObject, struct FVector& PathStart, struct FVector& PathEnd, float& PathCost, struct ANavigationData* NavData, UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.GetPathCost
	struct UNavigationSystemV1* GetNavigationSystem(struct UObject* WorldContextObject); // Function NavigationSystem.NavigationSystemV1.GetNavigationSystem
	struct UNavigationPath* FindPathToLocationSynchronously(struct UObject* WorldContextObject, struct FVector& PathStart, struct FVector& PathEnd, struct AActor* PathfindingContext, UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.FindPathToLocationSynchronously
	struct UNavigationPath* FindPathToActorSynchronously(struct UObject* WorldContextObject, struct FVector& PathStart, struct AActor* GoalActor, float TetherDistance, struct AActor* PathfindingContext, UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.FindPathToActorSynchronously
}; 
 
 


//Class NavigationSystem.NavArea_Obstacle Size 72
// Inherited 72 bytes 
class UNavArea_Obstacle : public UNavArea
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class NavigationSystem.NavArea_Null Size 72
// Inherited 72 bytes 
class UNavArea_Null : public UNavArea
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class NavigationSystem.NavAreaMeta Size 72
// Inherited 72 bytes 
class UNavAreaMeta : public UNavArea
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class NavigationSystem.NavAreaMeta_SwitchByAgent Size 200
// Inherited 72 bytes 
class UNavAreaMeta_SwitchByAgent : public UNavAreaMeta
{

 public: 
	UNavArea* Agent0Area;  // Offset: 72 Size: 8
	UNavArea* Agent1Area;  // Offset: 80 Size: 8
	UNavArea* Agent2Area;  // Offset: 88 Size: 8
	UNavArea* Agent3Area;  // Offset: 96 Size: 8
	UNavArea* Agent4Area;  // Offset: 104 Size: 8
	UNavArea* Agent5Area;  // Offset: 112 Size: 8
	UNavArea* Agent6Area;  // Offset: 120 Size: 8
	UNavArea* Agent7Area;  // Offset: 128 Size: 8
	UNavArea* Agent8Area;  // Offset: 136 Size: 8
	UNavArea* Agent9Area;  // Offset: 144 Size: 8
	UNavArea* Agent10Area;  // Offset: 152 Size: 8
	UNavArea* Agent11Area;  // Offset: 160 Size: 8
	UNavArea* Agent12Area;  // Offset: 168 Size: 8
	UNavArea* Agent13Area;  // Offset: 176 Size: 8
	UNavArea* Agent14Area;  // Offset: 184 Size: 8
	UNavArea* Agent15Area;  // Offset: 192 Size: 8



 // Functions 
 public:
}; 
 
 


//Class NavigationSystem.NavCollision Size 216
// Inherited 112 bytes 
class UNavCollision : public UNavCollisionBase
{

 public: 
	char pad_112[16];  // Offset: 112 Size: 16
	struct TArray<struct FNavCollisionCylinder> CylinderCollision;  // Offset: 128 Size: 16
	struct TArray<struct FNavCollisionBox> BoxCollision;  // Offset: 144 Size: 16
	UNavArea* AreaClass;  // Offset: 160 Size: 8
	char bGatherConvexGeometry : 1;  // Offset: 168 Size: 1
	char bCreateOnClient : 1;  // Offset: 168 Size: 1
	char pad_168_1 : 6;  // Offset: 168 Size: 1
	char pad_169[48];  // Offset: 169 Size: 48



 // Functions 
 public:
}; 
 
 


//Class NavigationSystem.NavigationGraph Size 1064
// Inherited 1064 bytes 
class ANavigationGraph : public ANavigationData
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class NavigationSystem.NavigationGraphNode Size 544
// Inherited 544 bytes 
class ANavigationGraphNode : public AActor
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class NavigationSystem.RecastFilter_UseDefaultArea Size 72
// Inherited 72 bytes 
class URecastFilter_UseDefaultArea : public UNavigationQueryFilter
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class NavigationSystem.NavigationGraphNodeComponent Size 560
// Inherited 528 bytes 
class UNavigationGraphNodeComponent : public USceneComponent
{

 public: 
	struct FNavGraphNode Node;  // Offset: 520 Size: 24
	struct UNavigationGraphNodeComponent* NextNodeComponent;  // Offset: 544 Size: 8
	struct UNavigationGraphNodeComponent* PrevNodeComponent;  // Offset: 552 Size: 8



 // Functions 
 public:
}; 
 
 


//Class NavigationSystem.NavLinkHostInterface Size 40
// Inherited 40 bytes 
class UNavLinkHostInterface : public UInterface
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class NavigationSystem.NavigationInvokerComponent Size 184
// Inherited 176 bytes 
class UNavigationInvokerComponent : public UActorComponent
{

 public: 
	float TileGenerationRadius;  // Offset: 176 Size: 4
	float TileRemovalRadius;  // Offset: 180 Size: 4



 // Functions 
 public:
}; 
 
 


//Class NavigationSystem.RecastNavMeshDataChunk Size 64
// Inherited 48 bytes 
class URecastNavMeshDataChunk : public UNavigationDataChunk
{

 public: 
	char pad_48[16];  // Offset: 48 Size: 16



 // Functions 
 public:
}; 
 
 


//Class NavigationSystem.RecastNavMesh Size 1240
// Inherited 1064 bytes 
class ARecastNavMesh : public ANavigationData
{

 public: 
	char bDrawTriangleEdges : 1;  // Offset: 1064 Size: 1
	char bDrawPolyEdges : 1;  // Offset: 1064 Size: 1
	char bDrawFilledPolys : 1;  // Offset: 1064 Size: 1
	char bDrawNavMeshEdges : 1;  // Offset: 1064 Size: 1
	char bDrawTileBounds : 1;  // Offset: 1064 Size: 1
	char bDrawPathCollidingGeometry : 1;  // Offset: 1064 Size: 1
	char bDrawTileLabels : 1;  // Offset: 1064 Size: 1
	char bDrawPolygonLabels : 1;  // Offset: 1064 Size: 1
	char bDrawDefaultPolygonCost : 1;  // Offset: 1065 Size: 1
	char bDrawPolygonFlags : 1;  // Offset: 1065 Size: 1
	char bDrawLabelsOnPathNodes : 1;  // Offset: 1065 Size: 1
	char bDrawNavLinks : 1;  // Offset: 1065 Size: 1
	char bDrawFailedNavLinks : 1;  // Offset: 1065 Size: 1
	char bDrawClusters : 1;  // Offset: 1065 Size: 1
	char bDrawOctree : 1;  // Offset: 1065 Size: 1
	char bDrawOctreeDetails : 1;  // Offset: 1065 Size: 1
	char bDrawMarkedForbiddenPolys : 1;  // Offset: 1066 Size: 1
	char bDistinctlyDrawTilesBeingBuilt : 1;  // Offset: 1066 Size: 1
	char pad_1066_1 : 6;  // Offset: 1066 Size: 1
	char pad_1067[2];  // Offset: 1067 Size: 2
	float DrawOffset;  // Offset: 1068 Size: 4
	char bFixedTilePoolSize : 1;  // Offset: 1072 Size: 1
	char pad_1072_1 : 7;  // Offset: 1072 Size: 1
	char pad_1073[4];  // Offset: 1073 Size: 4
	int32_t TilePoolSize;  // Offset: 1076 Size: 4
	float TileSizeUU;  // Offset: 1080 Size: 4
	float CellSize;  // Offset: 1084 Size: 4
	float CellHeight;  // Offset: 1088 Size: 4
	float AgentRadius;  // Offset: 1092 Size: 4
	float AgentHeight;  // Offset: 1096 Size: 4
	float AgentMaxSlope;  // Offset: 1100 Size: 4
	float AgentMaxStepHeight;  // Offset: 1104 Size: 4
	float MinRegionArea;  // Offset: 1108 Size: 4
	float MergeRegionSize;  // Offset: 1112 Size: 4
	float MaxSimplificationError;  // Offset: 1116 Size: 4
	int32_t MaxSimultaneousTileGenerationJobsCount;  // Offset: 1120 Size: 4
	int32_t TileNumberHardLimit;  // Offset: 1124 Size: 4
	int32_t PolyRefTileBits;  // Offset: 1128 Size: 4
	int32_t PolyRefNavPolyBits;  // Offset: 1132 Size: 4
	int32_t PolyRefSaltBits;  // Offset: 1136 Size: 4
	struct FVector NavMeshOriginOffset;  // Offset: 1140 Size: 12
	float DefaultDrawDistance;  // Offset: 1152 Size: 4
	float DefaultMaxSearchNodes;  // Offset: 1156 Size: 4
	float DefaultMaxHierarchicalSearchNodes;  // Offset: 1160 Size: 4
	enum class ERecastPartitioning RegionPartitioning;  // Offset: 1164 Size: 1
	enum class ERecastPartitioning LayerPartitioning;  // Offset: 1165 Size: 1
	char pad_1166[2];  // Offset: 1166 Size: 2
	int32_t RegionChunkSplits;  // Offset: 1168 Size: 4
	int32_t LayerChunkSplits;  // Offset: 1172 Size: 4
	char bSortNavigationAreasByCost : 1;  // Offset: 1176 Size: 1
	char bPerformVoxelFiltering : 1;  // Offset: 1176 Size: 1
	char bMarkLowHeightAreas : 1;  // Offset: 1176 Size: 1
	char bUseExtraTopCellWhenMarkingAreas : 1;  // Offset: 1176 Size: 1
	char bFilterLowSpanSequences : 1;  // Offset: 1176 Size: 1
	char bFilterLowSpanFromTileCache : 1;  // Offset: 1176 Size: 1
	char bDoFullyAsyncNavDataGathering : 1;  // Offset: 1176 Size: 1
	char bUseBetterOffsetsFromCorners : 1;  // Offset: 1176 Size: 1
	char bStoreEmptyTileLayers : 1;  // Offset: 1177 Size: 1
	char bUseVirtualFilters : 1;  // Offset: 1177 Size: 1
	char bAllowNavLinkAsPathEnd : 1;  // Offset: 1177 Size: 1
	char bUseVoxelCache : 1;  // Offset: 1177 Size: 1
	char pad_1177_1 : 4;  // Offset: 1177 Size: 1
	char pad_1178[3];  // Offset: 1178 Size: 3
	float TileSetUpdateInterval;  // Offset: 1180 Size: 4
	float HeuristicScale;  // Offset: 1184 Size: 4
	float VerticalDeviationFromGroundCompensation;  // Offset: 1188 Size: 4
	char pad_1192[48];  // Offset: 1192 Size: 48



 // Functions 
 public:
	bool K2_ReplaceAreaInTileBounds(struct FBox Bounds, UNavArea* OldArea, UNavArea* NewArea, bool ReplaceLinks); // Function NavigationSystem.RecastNavMesh.K2_ReplaceAreaInTileBounds
}; 
 
 


//Class NavigationSystem.NavModifierVolume Size 624
// Inherited 600 bytes 
class ANavModifierVolume : public AVolume
{

 public: 
	char pad_600[8];  // Offset: 600 Size: 8
	UNavArea* AreaClass;  // Offset: 608 Size: 8
	char pad_616_1 : 7;  // Offset: 616 Size: 1
	bool bMaskFillCollisionUnderneathForNavmesh : 1;  // Offset: 616 Size: 1
	char pad_617[7];  // Offset: 617 Size: 7



 // Functions 
 public:
	void SetAreaClass(UNavArea* NewAreaClass); // Function NavigationSystem.NavModifierVolume.SetAreaClass
}; 
 
 


//Class NavigationSystem.NavLinkCustomComponent Size 400
// Inherited 224 bytes 
class UNavLinkCustomComponent : public UNavRelevantComponent
{

 public: 
	char pad_224[8];  // Offset: 224 Size: 8
	uint32_t NavLinkUserId;  // Offset: 232 Size: 4
	char pad_236[4];  // Offset: 236 Size: 4
	UNavArea* EnabledAreaClass;  // Offset: 240 Size: 8
	UNavArea* DisabledAreaClass;  // Offset: 248 Size: 8
	struct FNavAgentSelector SupportedAgents;  // Offset: 256 Size: 4
	struct FVector LinkRelativeStart;  // Offset: 260 Size: 12
	struct FVector LinkRelativeEnd;  // Offset: 272 Size: 12
	enum class ENavLinkDirection LinkDirection;  // Offset: 284 Size: 1
	char pad_285[3];  // Offset: 285 Size: 3
	char bLinkEnabled : 1;  // Offset: 288 Size: 1
	char bNotifyWhenEnabled : 1;  // Offset: 288 Size: 1
	char bNotifyWhenDisabled : 1;  // Offset: 288 Size: 1
	char bCreateBoxObstacle : 1;  // Offset: 288 Size: 1
	char pad_288_1 : 4;  // Offset: 288 Size: 1
	char pad_289[4];  // Offset: 289 Size: 4
	struct FVector ObstacleOffset;  // Offset: 292 Size: 12
	struct FVector ObstacleExtent;  // Offset: 304 Size: 12
	char pad_316[4];  // Offset: 316 Size: 4
	UNavArea* ObstacleAreaClass;  // Offset: 320 Size: 8
	float BroadcastRadius;  // Offset: 328 Size: 4
	float BroadcastInterval;  // Offset: 332 Size: 4
	enum class ECollisionChannel BroadcastChannel;  // Offset: 336 Size: 1
	char pad_337[63];  // Offset: 337 Size: 63



 // Functions 
 public:
}; 
 
 


//Class NavigationSystem.NavigationPath Size 136
// Inherited 40 bytes 
class UNavigationPath : public UObject
{

 public: 
	struct FMulticastInlineDelegate PathUpdatedNotifier;  // Offset: 40 Size: 16
	struct TArray<struct FVector> PathPoints;  // Offset: 56 Size: 16
	enum class ENavigationOptionFlag RecalculateOnInvalidation;  // Offset: 72 Size: 1
	char pad_73[63];  // Offset: 73 Size: 63



 // Functions 
 public:
	bool IsValid(); // Function NavigationSystem.NavigationPath.IsValid
	bool IsStringPulled(); // Function NavigationSystem.NavigationPath.IsStringPulled
	bool IsPartial(); // Function NavigationSystem.NavigationPath.IsPartial
	float GetPathLength(); // Function NavigationSystem.NavigationPath.GetPathLength
	float GetPathCost(); // Function NavigationSystem.NavigationPath.GetPathCost
	struct FString GetDebugString(); // Function NavigationSystem.NavigationPath.GetDebugString
	void EnableRecalculationOnInvalidation(enum class ENavigationOptionFlag DoRecalculation); // Function NavigationSystem.NavigationPath.EnableRecalculationOnInvalidation
	void EnableDebugDrawing(bool bShouldDrawDebugData, struct FLinearColor PathColor); // Function NavigationSystem.NavigationPath.EnableDebugDrawing
}; 
 
 


//Class NavigationSystem.NavigationPathGenerator Size 40
// Inherited 40 bytes 
class UNavigationPathGenerator : public UInterface
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class NavigationSystem.NavigationQueryFilter Size 72
// Inherited 40 bytes 
class UNavigationQueryFilter : public UObject
{

 public: 
	struct TArray<struct FNavigationFilterArea> Areas;  // Offset: 40 Size: 16
	struct FNavigationFilterFlags IncludeFlags;  // Offset: 56 Size: 4
	struct FNavigationFilterFlags ExcludeFlags;  // Offset: 60 Size: 4
	char pad_64[8];  // Offset: 64 Size: 8



 // Functions 
 public:
}; 
 
 


//Class NavigationSystem.NavigationSystemModuleConfig Size 88
// Inherited 80 bytes 
class UNavigationSystemModuleConfig : public UNavigationSystemConfig
{

 public: 
	char bStrictlyStatic : 1;  // Offset: 80 Size: 1
	char bCreateOnClient : 1;  // Offset: 80 Size: 1
	char bAutoSpawnMissingNavData : 1;  // Offset: 80 Size: 1
	char bSpawnNavDataInNavBoundsLevel : 1;  // Offset: 80 Size: 1
	char pad_80_1 : 4;  // Offset: 80 Size: 1
	char pad_81[8];  // Offset: 81 Size: 8



 // Functions 
 public:
}; 
 
 


//Class NavigationSystem.NavigationTestingActor Size 784
// Inherited 544 bytes 
class ANavigationTestingActor : public AActor
{

 public: 
	char pad_544[16];  // Offset: 544 Size: 16
	struct UCapsuleComponent* CapsuleComponent;  // Offset: 560 Size: 8
	struct UNavigationInvokerComponent* InvokerComponent;  // Offset: 568 Size: 8
	char bActAsNavigationInvoker : 1;  // Offset: 576 Size: 1
	char pad_576_1 : 7;  // Offset: 576 Size: 1
	char pad_577[8];  // Offset: 577 Size: 8
	struct FNavAgentProperties NavAgentProps;  // Offset: 584 Size: 48
	struct FVector QueryingExtent;  // Offset: 632 Size: 12
	char pad_644[4];  // Offset: 644 Size: 4
	struct ANavigationData* MyNavData;  // Offset: 648 Size: 8
	struct FVector ProjectedLocation;  // Offset: 656 Size: 12
	char bProjectedLocationValid : 1;  // Offset: 668 Size: 1
	char bSearchStart : 1;  // Offset: 668 Size: 1
	char pad_668_1 : 6;  // Offset: 668 Size: 1
	char pad_669[4];  // Offset: 669 Size: 4
	float CostLimitFactor;  // Offset: 672 Size: 4
	float MinimumCostLimit;  // Offset: 676 Size: 4
	char bBacktracking : 1;  // Offset: 680 Size: 1
	char bUseHierarchicalPathfinding : 1;  // Offset: 680 Size: 1
	char bGatherDetailedInfo : 1;  // Offset: 680 Size: 1
	char bDrawDistanceToWall : 1;  // Offset: 680 Size: 1
	char bShowNodePool : 1;  // Offset: 680 Size: 1
	char bShowBestPath : 1;  // Offset: 680 Size: 1
	char bShowDiffWithPreviousStep : 1;  // Offset: 680 Size: 1
	char bShouldBeVisibleInGame : 1;  // Offset: 680 Size: 1
	char pad_681[3];  // Offset: 681 Size: 3
	enum class ENavCostDisplay CostDisplayMode;  // Offset: 684 Size: 1
	char pad_685[3];  // Offset: 685 Size: 3
	struct FVector2D TextCanvasOffset;  // Offset: 688 Size: 8
	char bPathExist : 1;  // Offset: 696 Size: 1
	char bPathIsPartial : 1;  // Offset: 696 Size: 1
	char bPathSearchOutOfNodes : 1;  // Offset: 696 Size: 1
	char pad_696_1 : 5;  // Offset: 696 Size: 1
	char pad_697[4];  // Offset: 697 Size: 4
	float PathfindingTime;  // Offset: 700 Size: 4
	float PathCost;  // Offset: 704 Size: 4
	int32_t PathfindingSteps;  // Offset: 708 Size: 4
	struct ANavigationTestingActor* OtherActor;  // Offset: 712 Size: 8
	UNavigationQueryFilter* FilterClass;  // Offset: 720 Size: 8
	int32_t ShowStepIndex;  // Offset: 728 Size: 4
	float OffsetFromCornersDistance;  // Offset: 732 Size: 4
	char pad_736[48];  // Offset: 736 Size: 48



 // Functions 
 public:
}; 
 
 


//Class NavigationSystem.NavLinkComponent Size 1168
// Inherited 1136 bytes 
class UNavLinkComponent : public UPrimitiveComponent
{

 public: 
	char pad_1136[8];  // Offset: 1136 Size: 8
	struct TArray<struct FNavigationLink> Links;  // Offset: 1144 Size: 16
	char pad_1160[8];  // Offset: 1160 Size: 8



 // Functions 
 public:
}; 
 
 


//Class NavigationSystem.NavRelevantComponent Size 224
// Inherited 176 bytes 
class UNavRelevantComponent : public UActorComponent
{

 public: 
	char pad_176[36];  // Offset: 176 Size: 36
	char bAttachToOwnersRoot : 1;  // Offset: 212 Size: 1
	char pad_212_1 : 7;  // Offset: 212 Size: 1
	char pad_213[4];  // Offset: 213 Size: 4
	struct UObject* CachedNavParent;  // Offset: 216 Size: 8



 // Functions 
 public:
	void SetNavigationRelevancy(bool bRelevant); // Function NavigationSystem.NavRelevantComponent.SetNavigationRelevancy
}; 
 
 


//Class NavigationSystem.NavLinkCustomInterface Size 40
// Inherited 40 bytes 
class UNavLinkCustomInterface : public UInterface
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class NavigationSystem.NavLinkRenderingComponent Size 1136
// Inherited 1136 bytes 
class UNavLinkRenderingComponent : public UPrimitiveComponent
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class NavigationSystem.NavLinkTrivial Size 80
// Inherited 80 bytes 
class UNavLinkTrivial : public UNavLinkDefinition
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class NavigationSystem.NavMeshBoundsVolume Size 608
// Inherited 600 bytes 
class ANavMeshBoundsVolume : public AVolume
{

 public: 
	struct FNavAgentSelector SupportedAgents;  // Offset: 600 Size: 4
	char pad_604[4];  // Offset: 604 Size: 4



 // Functions 
 public:
}; 
 
 


//Class NavigationSystem.NavMeshRenderingComponent Size 1152
// Inherited 1136 bytes 
class UNavMeshRenderingComponent : public UPrimitiveComponent
{

 public: 
	char pad_1136[16];  // Offset: 1136 Size: 16



 // Functions 
 public:
}; 
 
 


//Class NavigationSystem.NavModifierComponent Size 320
// Inherited 224 bytes 
class UNavModifierComponent : public UNavRelevantComponent
{

 public: 
	UNavArea* AreaClass;  // Offset: 224 Size: 8
	struct FVector FailsafeExtent;  // Offset: 232 Size: 12
	char bIncludeAgentHeight : 1;  // Offset: 244 Size: 1
	char pad_244_1 : 7;  // Offset: 244 Size: 1
	char pad_245[76];  // Offset: 245 Size: 76



 // Functions 
 public:
	void SetAreaClass(UNavArea* NewAreaClass); // Function NavigationSystem.NavModifierComponent.SetAreaClass
}; 
 
 


//Class NavigationSystem.NavNodeInterface Size 40
// Inherited 40 bytes 
class UNavNodeInterface : public UInterface
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class NavigationSystem.NavSystemConfigOverride Size 560
// Inherited 544 bytes 
class ANavSystemConfigOverride : public AActor
{

 public: 
	struct UNavigationSystemConfig* NavigationSystemConfig;  // Offset: 544 Size: 8
	enum class ENavSystemOverridePolicy OverridePolicy;  // Offset: 552 Size: 1
	char bLoadOnClient : 1;  // Offset: 553 Size: 1
	char pad_553_1 : 7;  // Offset: 553 Size: 1
	char pad_554[7];  // Offset: 554 Size: 7



 // Functions 
 public:
}; 
 
 


//Class NavigationSystem.NavTestRenderingComponent Size 1136
// Inherited 1136 bytes 
class UNavTestRenderingComponent : public UPrimitiveComponent
{

 public: 



 // Functions 
 public:
}; 
 
 


