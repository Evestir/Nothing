#pragma once 
#include <GeometryCollectionEngine_Structs.h>
 
 
 
//Class GeometryCollectionEngine.GeometryCollection Size 264
// Inherited 40 bytes 
class UGeometryCollection : public UObject
{

 public: 
	char pad_40[8];  // Offset: 40 Size: 8
	char pad_48_1 : 7;  // Offset: 48 Size: 1
	bool EnableClustering : 1;  // Offset: 48 Size: 1
	char pad_49[3];  // Offset: 49 Size: 3
	int32_t ClusterGroupIndex;  // Offset: 52 Size: 4
	int32_t MaxClusterLevel;  // Offset: 56 Size: 4
	char pad_60[4];  // Offset: 60 Size: 4
	struct TArray<float> DamageThreshold;  // Offset: 64 Size: 16
	enum class EClusterConnectionTypeEnum ClusterConnectionType;  // Offset: 80 Size: 1
	char pad_81[7];  // Offset: 81 Size: 7
	struct TArray<struct FGeometryCollectionSource> GeometrySource;  // Offset: 88 Size: 16
	struct TArray<struct UMaterialInterface*> Materials;  // Offset: 104 Size: 16
	enum class ECollisionTypeEnum CollisionType;  // Offset: 120 Size: 1
	enum class EImplicitTypeEnum ImplicitType;  // Offset: 121 Size: 1
	char pad_122[2];  // Offset: 122 Size: 2
	int32_t MinLevelSetResolution;  // Offset: 124 Size: 4
	int32_t MaxLevelSetResolution;  // Offset: 128 Size: 4
	int32_t MinClusterLevelSetResolution;  // Offset: 132 Size: 4
	int32_t MaxClusterLevelSetResolution;  // Offset: 136 Size: 4
	float CollisionObjectReductionPercentage;  // Offset: 140 Size: 4
	char pad_144_1 : 7;  // Offset: 144 Size: 1
	bool bMassAsDensity : 1;  // Offset: 144 Size: 1
	char pad_145[3];  // Offset: 145 Size: 3
	float Mass;  // Offset: 148 Size: 4
	float MinimumMassClamp;  // Offset: 152 Size: 4
	float CollisionParticlesFraction;  // Offset: 156 Size: 4
	int32_t MaximumCollisionParticles;  // Offset: 160 Size: 4
	char pad_164[4];  // Offset: 164 Size: 4
	struct TArray<struct FGeometryCollectionSizeSpecificData> SizeSpecificData;  // Offset: 168 Size: 16
	char pad_184_1 : 7;  // Offset: 184 Size: 1
	bool EnableRemovePiecesOnFracture : 1;  // Offset: 184 Size: 1
	char pad_185[7];  // Offset: 185 Size: 7
	struct TArray<struct UMaterialInterface*> RemoveOnFractureMaterials;  // Offset: 192 Size: 16
	struct FGuid PersistentGuid;  // Offset: 208 Size: 16
	struct FGuid StateGuid;  // Offset: 224 Size: 16
	int32_t BoneSelectedMaterialIndex;  // Offset: 240 Size: 4
	char pad_244[20];  // Offset: 244 Size: 20



 // Functions 
 public:
}; 
 
 


//Class GeometryCollectionEngine.ChaosDestructionListener Size 1072
// Inherited 528 bytes 
class UChaosDestructionListener : public USceneComponent
{

 public: 
	char bIsCollisionEventListeningEnabled : 1;  // Offset: 520 Size: 1
	char bIsBreakingEventListeningEnabled : 1;  // Offset: 520 Size: 1
	char bIsTrailingEventListeningEnabled : 1;  // Offset: 520 Size: 1
	struct FChaosCollisionEventRequestSettings CollisionEventRequestSettings;  // Offset: 524 Size: 24
	struct FChaosBreakingEventRequestSettings BreakingEventRequestSettings;  // Offset: 548 Size: 24
	struct FChaosTrailingEventRequestSettings TrailingEventRequestSettings;  // Offset: 572 Size: 24
	struct TSet<struct AChaosSolverActor*> ChaosSolverActors;  // Offset: 600 Size: 80
	struct TSet<struct AGeometryCollectionActor*> GeometryCollectionActors;  // Offset: 680 Size: 80
	struct FMulticastInlineDelegate OnCollisionEvents;  // Offset: 760 Size: 16
	struct FMulticastInlineDelegate OnBreakingEvents;  // Offset: 776 Size: 16
	struct FMulticastInlineDelegate OnTrailingEvents;  // Offset: 792 Size: 16
	char pad_808_1 : 5;  // Offset: 808 Size: 1
	char pad_809[264];  // Offset: 809 Size: 264



 // Functions 
 public:
	void SortTrailingEvents(struct TArray<struct FChaosTrailingEventData>& TrailingEvents, enum class EChaosTrailingSortMethod SortMethod); // Function GeometryCollectionEngine.ChaosDestructionListener.SortTrailingEvents
	void SortCollisionEvents(struct TArray<struct FChaosCollisionEventData>& CollisionEvents, enum class EChaosCollisionSortMethod SortMethod); // Function GeometryCollectionEngine.ChaosDestructionListener.SortCollisionEvents
	void SortBreakingEvents(struct TArray<struct FChaosBreakingEventData>& BreakingEvents, enum class EChaosBreakingSortMethod SortMethod); // Function GeometryCollectionEngine.ChaosDestructionListener.SortBreakingEvents
	void SetTrailingEventRequestSettings(struct FChaosTrailingEventRequestSettings& InSettings); // Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventRequestSettings
	void SetTrailingEventEnabled(bool bIsEnabled); // Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventEnabled
	void SetCollisionEventRequestSettings(struct FChaosCollisionEventRequestSettings& InSettings); // Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventRequestSettings
	void SetCollisionEventEnabled(bool bIsEnabled); // Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventEnabled
	void SetBreakingEventRequestSettings(struct FChaosBreakingEventRequestSettings& InSettings); // Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventRequestSettings
	void SetBreakingEventEnabled(bool bIsEnabled); // Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventEnabled
	void RemoveGeometryCollectionActor(struct AGeometryCollectionActor* GeometryCollectionActor); // Function GeometryCollectionEngine.ChaosDestructionListener.RemoveGeometryCollectionActor
	void RemoveChaosSolverActor(struct AChaosSolverActor* ChaosSolverActor); // Function GeometryCollectionEngine.ChaosDestructionListener.RemoveChaosSolverActor
	bool IsEventListening(); // Function GeometryCollectionEngine.ChaosDestructionListener.IsEventListening
	void AddGeometryCollectionActor(struct AGeometryCollectionActor* GeometryCollectionActor); // Function GeometryCollectionEngine.ChaosDestructionListener.AddGeometryCollectionActor
	void AddChaosSolverActor(struct AChaosSolverActor* ChaosSolverActor); // Function GeometryCollectionEngine.ChaosDestructionListener.AddChaosSolverActor
}; 
 
 


//Class GeometryCollectionEngine.GeometryCollectionDebugDrawComponent Size 200
// Inherited 176 bytes 
class UGeometryCollectionDebugDrawComponent : public UActorComponent
{

 public: 
	struct AGeometryCollectionDebugDrawActor* GeometryCollectionDebugDrawActor;  // Offset: 176 Size: 8
	struct AGeometryCollectionRenderLevelSetActor* GeometryCollectionRenderLevelSetActor;  // Offset: 184 Size: 8
	char pad_192[8];  // Offset: 192 Size: 8



 // Functions 
 public:
}; 
 
 


//Class GeometryCollectionEngine.GeometryCollectionActor Size 560
// Inherited 544 bytes 
class AGeometryCollectionActor : public AActor
{

 public: 
	struct UGeometryCollectionComponent* GeometryCollectionComponent;  // Offset: 544 Size: 8
	struct UGeometryCollectionDebugDrawComponent* GeometryCollectionDebugDrawComponent;  // Offset: 552 Size: 8



 // Functions 
 public:
	bool RaycastSingle(struct FVector Start, struct FVector End, struct FHitResult& OutHit); // Function GeometryCollectionEngine.GeometryCollectionActor.RaycastSingle
}; 
 
 


//Class GeometryCollectionEngine.StaticMeshSimulationComponent Size 312
// Inherited 176 bytes 
class UStaticMeshSimulationComponent : public UActorComponent
{

 public: 
	char pad_176[8];  // Offset: 176 Size: 8
	char pad_184_1 : 7;  // Offset: 184 Size: 1
	bool Simulating : 1;  // Offset: 184 Size: 1
	char pad_185_1 : 7;  // Offset: 185 Size: 1
	bool bNotifyCollisions : 1;  // Offset: 185 Size: 1
	enum class EObjectStateTypeEnum ObjectType;  // Offset: 186 Size: 1
	char pad_187[1];  // Offset: 187 Size: 1
	float Mass;  // Offset: 188 Size: 4
	enum class ECollisionTypeEnum CollisionType;  // Offset: 192 Size: 1
	enum class EImplicitTypeEnum ImplicitType;  // Offset: 193 Size: 1
	char pad_194[2];  // Offset: 194 Size: 2
	int32_t MinLevelSetResolution;  // Offset: 196 Size: 4
	int32_t MaxLevelSetResolution;  // Offset: 200 Size: 4
	enum class EInitialVelocityTypeEnum InitialVelocityType;  // Offset: 204 Size: 1
	char pad_205[3];  // Offset: 205 Size: 3
	struct FVector InitialLinearVelocity;  // Offset: 208 Size: 12
	struct FVector InitialAngularVelocity;  // Offset: 220 Size: 12
	float DamageThreshold;  // Offset: 232 Size: 4
	char pad_236[4];  // Offset: 236 Size: 4
	struct UChaosPhysicalMaterial* PhysicalMaterial;  // Offset: 240 Size: 8
	struct AChaosSolverActor* ChaosSolverActor;  // Offset: 248 Size: 8
	struct FMulticastInlineDelegate OnChaosPhysicsCollision;  // Offset: 256 Size: 16
	char pad_272[16];  // Offset: 272 Size: 16
	struct TArray<struct UPrimitiveComponent*> SimulatedComponents;  // Offset: 288 Size: 16
	char pad_304[8];  // Offset: 304 Size: 8



 // Functions 
 public:
	void ReceivePhysicsCollision(struct FChaosPhysicsCollisionInfo& CollisionInfo); // Function GeometryCollectionEngine.StaticMeshSimulationComponent.ReceivePhysicsCollision
	void ForceRecreatePhysicsState(); // Function GeometryCollectionEngine.StaticMeshSimulationComponent.ForceRecreatePhysicsState
}; 
 
 


//Class GeometryCollectionEngine.GeometryCollectionCache Size 80
// Inherited 40 bytes 
class UGeometryCollectionCache : public UObject
{

 public: 
	struct FRecordedTransformTrack RecordedData;  // Offset: 40 Size: 16
	struct UGeometryCollection* SupportedCollection;  // Offset: 56 Size: 8
	struct FGuid CompatibleCollectionState;  // Offset: 64 Size: 16



 // Functions 
 public:
}; 
 
 


//Class GeometryCollectionEngine.GeometryCollectionDebugDrawActor Size 776
// Inherited 544 bytes 
class AGeometryCollectionDebugDrawActor : public AActor
{

 public: 
	struct FGeometryCollectionDebugDrawWarningMessage WarningMessage;  // Offset: 544 Size: 1
	char pad_545[7];  // Offset: 545 Size: 7
	struct FGeometryCollectionDebugDrawActorSelectedRigidBody SelectedRigidBody;  // Offset: 552 Size: 24
	char pad_576_1 : 7;  // Offset: 576 Size: 1
	bool bDebugDrawWholeCollection : 1;  // Offset: 576 Size: 1
	char pad_577_1 : 7;  // Offset: 577 Size: 1
	bool bDebugDrawHierarchy : 1;  // Offset: 577 Size: 1
	char pad_578_1 : 7;  // Offset: 578 Size: 1
	bool bDebugDrawClustering : 1;  // Offset: 578 Size: 1
	enum class EGeometryCollectionDebugDrawActorHideGeometry HideGeometry;  // Offset: 579 Size: 1
	char pad_580_1 : 7;  // Offset: 580 Size: 1
	bool bShowRigidBodyId : 1;  // Offset: 580 Size: 1
	char pad_581_1 : 7;  // Offset: 581 Size: 1
	bool bShowRigidBodyCollision : 1;  // Offset: 581 Size: 1
	char pad_582_1 : 7;  // Offset: 582 Size: 1
	bool bCollisionAtOrigin : 1;  // Offset: 582 Size: 1
	char pad_583_1 : 7;  // Offset: 583 Size: 1
	bool bShowRigidBodyTransform : 1;  // Offset: 583 Size: 1
	char pad_584_1 : 7;  // Offset: 584 Size: 1
	bool bShowRigidBodyInertia : 1;  // Offset: 584 Size: 1
	char pad_585_1 : 7;  // Offset: 585 Size: 1
	bool bShowRigidBodyVelocity : 1;  // Offset: 585 Size: 1
	char pad_586_1 : 7;  // Offset: 586 Size: 1
	bool bShowRigidBodyForce : 1;  // Offset: 586 Size: 1
	char pad_587_1 : 7;  // Offset: 587 Size: 1
	bool bShowRigidBodyInfos : 1;  // Offset: 587 Size: 1
	char pad_588_1 : 7;  // Offset: 588 Size: 1
	bool bShowTransformIndex : 1;  // Offset: 588 Size: 1
	char pad_589_1 : 7;  // Offset: 589 Size: 1
	bool bShowTransform : 1;  // Offset: 589 Size: 1
	char pad_590_1 : 7;  // Offset: 590 Size: 1
	bool bShowParent : 1;  // Offset: 590 Size: 1
	char pad_591_1 : 7;  // Offset: 591 Size: 1
	bool bShowLevel : 1;  // Offset: 591 Size: 1
	char pad_592_1 : 7;  // Offset: 592 Size: 1
	bool bShowConnectivityEdges : 1;  // Offset: 592 Size: 1
	char pad_593_1 : 7;  // Offset: 593 Size: 1
	bool bShowGeometryIndex : 1;  // Offset: 593 Size: 1
	char pad_594_1 : 7;  // Offset: 594 Size: 1
	bool bShowGeometryTransform : 1;  // Offset: 594 Size: 1
	char pad_595_1 : 7;  // Offset: 595 Size: 1
	bool bShowBoundingBox : 1;  // Offset: 595 Size: 1
	char pad_596_1 : 7;  // Offset: 596 Size: 1
	bool bShowFaces : 1;  // Offset: 596 Size: 1
	char pad_597_1 : 7;  // Offset: 597 Size: 1
	bool bShowFaceIndices : 1;  // Offset: 597 Size: 1
	char pad_598_1 : 7;  // Offset: 598 Size: 1
	bool bShowFaceNormals : 1;  // Offset: 598 Size: 1
	char pad_599_1 : 7;  // Offset: 599 Size: 1
	bool bShowSingleFace : 1;  // Offset: 599 Size: 1
	int32_t SingleFaceIndex;  // Offset: 600 Size: 4
	char pad_604_1 : 7;  // Offset: 604 Size: 1
	bool bShowVertices : 1;  // Offset: 604 Size: 1
	char pad_605_1 : 7;  // Offset: 605 Size: 1
	bool bShowVertexIndices : 1;  // Offset: 605 Size: 1
	char pad_606_1 : 7;  // Offset: 606 Size: 1
	bool bShowVertexNormals : 1;  // Offset: 606 Size: 1
	char pad_607_1 : 7;  // Offset: 607 Size: 1
	bool bUseActiveVisualization : 1;  // Offset: 607 Size: 1
	float PointThickness;  // Offset: 608 Size: 4
	float LineThickness;  // Offset: 612 Size: 4
	char pad_616_1 : 7;  // Offset: 616 Size: 1
	bool bTextShadow : 1;  // Offset: 616 Size: 1
	char pad_617[3];  // Offset: 617 Size: 3
	float TextScale;  // Offset: 620 Size: 4
	float NormalScale;  // Offset: 624 Size: 4
	float AxisScale;  // Offset: 628 Size: 4
	float ArrowScale;  // Offset: 632 Size: 4
	struct FColor RigidBodyIdColor;  // Offset: 636 Size: 4
	float RigidBodyTransformScale;  // Offset: 640 Size: 4
	struct FColor RigidBodyCollisionColor;  // Offset: 644 Size: 4
	struct FColor RigidBodyInertiaColor;  // Offset: 648 Size: 4
	struct FColor RigidBodyVelocityColor;  // Offset: 652 Size: 4
	struct FColor RigidBodyForceColor;  // Offset: 656 Size: 4
	struct FColor RigidBodyInfoColor;  // Offset: 660 Size: 4
	struct FColor TransformIndexColor;  // Offset: 664 Size: 4
	float TransformScale;  // Offset: 668 Size: 4
	struct FColor LevelColor;  // Offset: 672 Size: 4
	struct FColor ParentColor;  // Offset: 676 Size: 4
	float ConnectivityEdgeThickness;  // Offset: 680 Size: 4
	struct FColor GeometryIndexColor;  // Offset: 684 Size: 4
	float GeometryTransformScale;  // Offset: 688 Size: 4
	struct FColor BoundingBoxColor;  // Offset: 692 Size: 4
	struct FColor FaceColor;  // Offset: 696 Size: 4
	struct FColor FaceIndexColor;  // Offset: 700 Size: 4
	struct FColor FaceNormalColor;  // Offset: 704 Size: 4
	struct FColor SingleFaceColor;  // Offset: 708 Size: 4
	struct FColor VertexColor;  // Offset: 712 Size: 4
	struct FColor VertexIndexColor;  // Offset: 716 Size: 4
	struct FColor VertexNormalColor;  // Offset: 720 Size: 4
	char pad_724[4];  // Offset: 724 Size: 4
	struct UBillboardComponent* SpriteComponent;  // Offset: 728 Size: 8
	char pad_736[40];  // Offset: 736 Size: 40



 // Functions 
 public:
}; 
 
 


//Class GeometryCollectionEngine.GeometryCollectionComponent Size 2352
// Inherited 1200 bytes 
class UGeometryCollectionComponent : public UMeshComponent
{

 public: 
	struct AChaosSolverActor* ChaosSolverActor;  // Offset: 1200 Size: 8
	char pad_1208[224];  // Offset: 1208 Size: 224
	struct UGeometryCollection* RestCollection;  // Offset: 1432 Size: 8
	struct TArray<struct AFieldSystemActor*> InitializationFields;  // Offset: 1440 Size: 16
	char pad_1456_1 : 7;  // Offset: 1456 Size: 1
	bool Simulating : 1;  // Offset: 1456 Size: 1
	char pad_1457[7];  // Offset: 1457 Size: 7
	enum class EObjectStateTypeEnum ObjectType;  // Offset: 1464 Size: 1
	char pad_1465_1 : 7;  // Offset: 1465 Size: 1
	bool EnableClustering : 1;  // Offset: 1465 Size: 1
	char pad_1466[2];  // Offset: 1466 Size: 2
	int32_t ClusterGroupIndex;  // Offset: 1468 Size: 4
	int32_t MaxClusterLevel;  // Offset: 1472 Size: 4
	char pad_1476[4];  // Offset: 1476 Size: 4
	struct TArray<float> DamageThreshold;  // Offset: 1480 Size: 16
	enum class EClusterConnectionTypeEnum ClusterConnectionType;  // Offset: 1496 Size: 1
	char pad_1497[3];  // Offset: 1497 Size: 3
	int32_t CollisionGroup;  // Offset: 1500 Size: 4
	float CollisionSampleFraction;  // Offset: 1504 Size: 4
	float LinearEtherDrag;  // Offset: 1508 Size: 4
	float AngularEtherDrag;  // Offset: 1512 Size: 4
	char pad_1516[4];  // Offset: 1516 Size: 4
	struct UChaosPhysicalMaterial* PhysicalMaterial;  // Offset: 1520 Size: 8
	enum class EInitialVelocityTypeEnum InitialVelocityType;  // Offset: 1528 Size: 1
	char pad_1529[3];  // Offset: 1529 Size: 3
	struct FVector InitialLinearVelocity;  // Offset: 1532 Size: 12
	struct FVector InitialAngularVelocity;  // Offset: 1544 Size: 12
	char pad_1556[4];  // Offset: 1556 Size: 4
	struct UPhysicalMaterial* PhysicalMaterialOverride;  // Offset: 1560 Size: 8
	struct FGeomComponentCacheParameters CacheParameters;  // Offset: 1568 Size: 80
	struct FMulticastInlineDelegate NotifyGeometryCollectionPhysicsStateChange;  // Offset: 1648 Size: 16
	struct FMulticastInlineDelegate NotifyGeometryCollectionPhysicsLoadingStateChange;  // Offset: 1664 Size: 16
	char pad_1680[24];  // Offset: 1680 Size: 24
	struct FMulticastInlineDelegate OnChaosBreakEvent;  // Offset: 1704 Size: 16
	float DesiredCacheTime;  // Offset: 1720 Size: 4
	char pad_1724_1 : 7;  // Offset: 1724 Size: 1
	bool CachePlayback : 1;  // Offset: 1724 Size: 1
	char pad_1725[3];  // Offset: 1725 Size: 3
	struct FMulticastInlineDelegate OnChaosPhysicsCollision;  // Offset: 1728 Size: 16
	char pad_1744_1 : 7;  // Offset: 1744 Size: 1
	bool bNotifyBreaks : 1;  // Offset: 1744 Size: 1
	char pad_1745_1 : 7;  // Offset: 1745 Size: 1
	bool bNotifyCollisions : 1;  // Offset: 1745 Size: 1
	char pad_1746_1 : 7;  // Offset: 1746 Size: 1
	bool bEnableReplication : 1;  // Offset: 1746 Size: 1
	char pad_1747_1 : 7;  // Offset: 1747 Size: 1
	bool bEnableAbandonAfterLevel : 1;  // Offset: 1747 Size: 1
	int32_t ReplicationAbandonClusterLevel;  // Offset: 1748 Size: 4
	struct FGeometryCollectionRepData RepData;  // Offset: 1752 Size: 24
	char pad_1776[536];  // Offset: 1776 Size: 536
	struct UBodySetup* DummyBodySetup;  // Offset: 2312 Size: 8
	char pad_2320[32];  // Offset: 2320 Size: 32



 // Functions 
 public:
	void SetNotifyBreaks(bool bNewNotifyBreaks); // Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyBreaks
	void ReceivePhysicsCollision(struct FChaosPhysicsCollisionInfo& CollisionInfo); // Function GeometryCollectionEngine.GeometryCollectionComponent.ReceivePhysicsCollision
	void OnRep_RepData(struct FGeometryCollectionRepData& OldData); // Function GeometryCollectionEngine.GeometryCollectionComponent.OnRep_RepData
	void NotifyGeometryCollectionPhysicsStateChange__DelegateSignature(struct UGeometryCollectionComponent* FracturedComponent); // DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsStateChange__DelegateSignature
	void NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature(struct UGeometryCollectionComponent* FracturedComponent); // DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature
	void NetAbandonCluster(int32_t TransformIndex); // Function GeometryCollectionEngine.GeometryCollectionComponent.NetAbandonCluster
	void ApplyPhysicsField(bool Enabled, enum class EGeometryCollectionPhysicsTypeEnum Target, struct UFieldSystemMetaData* MetaData, struct UFieldNodeBase* Field); // Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyPhysicsField
	void ApplyKinematicField(float Radius, struct FVector position); // Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyKinematicField
}; 
 
 


//Class GeometryCollectionEngine.GeometryCollectionRenderLevelSetActor Size 704
// Inherited 544 bytes 
class AGeometryCollectionRenderLevelSetActor : public AActor
{

 public: 
	struct UVolumeTexture* TargetVolumeTexture;  // Offset: 544 Size: 8
	struct UMaterial* RayMarchMaterial;  // Offset: 552 Size: 8
	float SurfaceTolerance;  // Offset: 560 Size: 4
	float Isovalue;  // Offset: 564 Size: 4
	char pad_568_1 : 7;  // Offset: 568 Size: 1
	bool Enabled : 1;  // Offset: 568 Size: 1
	char pad_569_1 : 7;  // Offset: 569 Size: 1
	bool RenderVolumeBoundingBox : 1;  // Offset: 569 Size: 1
	char pad_570[134];  // Offset: 570 Size: 134



 // Functions 
 public:
}; 
 
 


//Class GeometryCollectionEngine.SkeletalMeshSimulationComponent Size 312
// Inherited 176 bytes 
class USkeletalMeshSimulationComponent : public UActorComponent
{

 public: 
	char pad_176[8];  // Offset: 176 Size: 8
	struct UChaosPhysicalMaterial* PhysicalMaterial;  // Offset: 184 Size: 8
	struct AChaosSolverActor* ChaosSolverActor;  // Offset: 192 Size: 8
	struct UPhysicsAsset* OverridePhysicsAsset;  // Offset: 200 Size: 8
	char pad_208_1 : 7;  // Offset: 208 Size: 1
	bool bSimulating : 1;  // Offset: 208 Size: 1
	char pad_209_1 : 7;  // Offset: 209 Size: 1
	bool bNotifyCollisions : 1;  // Offset: 209 Size: 1
	enum class EObjectStateTypeEnum ObjectType;  // Offset: 210 Size: 1
	char pad_211[1];  // Offset: 211 Size: 1
	float Density;  // Offset: 212 Size: 4
	float MinMass;  // Offset: 216 Size: 4
	float MaxMass;  // Offset: 220 Size: 4
	enum class ECollisionTypeEnum CollisionType;  // Offset: 224 Size: 1
	char pad_225[3];  // Offset: 225 Size: 3
	float ImplicitShapeParticlesPerUnitArea;  // Offset: 228 Size: 4
	int32_t ImplicitShapeMinNumParticles;  // Offset: 232 Size: 4
	int32_t ImplicitShapeMaxNumParticles;  // Offset: 236 Size: 4
	int32_t MinLevelSetResolution;  // Offset: 240 Size: 4
	int32_t MaxLevelSetResolution;  // Offset: 244 Size: 4
	int32_t CollisionGroup;  // Offset: 248 Size: 4
	enum class EInitialVelocityTypeEnum InitialVelocityType;  // Offset: 252 Size: 1
	char pad_253[3];  // Offset: 253 Size: 3
	struct FVector InitialLinearVelocity;  // Offset: 256 Size: 12
	struct FVector InitialAngularVelocity;  // Offset: 268 Size: 12
	struct FMulticastInlineDelegate OnChaosPhysicsCollision;  // Offset: 280 Size: 16
	char pad_296[16];  // Offset: 296 Size: 16



 // Functions 
 public:
	void ReceivePhysicsCollision(struct FChaosPhysicsCollisionInfo& CollisionInfo); // Function GeometryCollectionEngine.SkeletalMeshSimulationComponent.ReceivePhysicsCollision
}; 
 
 


