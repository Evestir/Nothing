#pragma once 
#include <Foliage_Structs.h>
 
 
 
//Class Foliage.FoliageType Size 952
// Inherited 40 bytes 
class UFoliageType : public UObject
{

 public: 
	struct FGuid UpdateGuid;  // Offset: 40 Size: 16
	float Density;  // Offset: 56 Size: 4
	float DensityAdjustmentFactor;  // Offset: 60 Size: 4
	float Radius;  // Offset: 64 Size: 4
	char pad_68_1 : 7;  // Offset: 68 Size: 1
	bool bSingleInstanceModeOverrideRadius : 1;  // Offset: 68 Size: 1
	char pad_69[3];  // Offset: 69 Size: 3
	float SingleInstanceModeRadius;  // Offset: 72 Size: 4
	enum class EFoliageScaling Scaling;  // Offset: 76 Size: 1
	char pad_77[3];  // Offset: 77 Size: 3
	struct FFloatInterval ScaleX;  // Offset: 80 Size: 8
	struct FFloatInterval ScaleY;  // Offset: 88 Size: 8
	struct FFloatInterval ScaleZ;  // Offset: 96 Size: 8
	struct FFoliageVertexColorChannelMask VertexColorMaskByChannel[4];  // Offset: 104 Size: 48
	enum class FoliageVertexColorMask VertexColorMask;  // Offset: 152 Size: 1
	char pad_153[3];  // Offset: 153 Size: 3
	float VertexColorMaskThreshold;  // Offset: 156 Size: 4
	char VertexColorMaskInvert : 1;  // Offset: 160 Size: 1
	char pad_160_1 : 7;  // Offset: 160 Size: 1
	char pad_161[4];  // Offset: 161 Size: 4
	struct FFloatInterval ZOffset;  // Offset: 164 Size: 8
	char AlignToNormal : 1;  // Offset: 172 Size: 1
	char pad_172_1 : 7;  // Offset: 172 Size: 1
	char pad_173[4];  // Offset: 173 Size: 4
	float AlignMaxAngle;  // Offset: 176 Size: 4
	char RandomYaw : 1;  // Offset: 180 Size: 1
	char pad_180_1 : 7;  // Offset: 180 Size: 1
	char pad_181[4];  // Offset: 181 Size: 4
	float RandomPitchAngle;  // Offset: 184 Size: 4
	struct FFloatInterval GroundSlopeAngle;  // Offset: 188 Size: 8
	struct FFloatInterval Height;  // Offset: 196 Size: 8
	char pad_204[4];  // Offset: 204 Size: 4
	struct TArray<struct FName> LandscapeLayers;  // Offset: 208 Size: 16
	float MinimumLayerWeight;  // Offset: 224 Size: 4
	char pad_228[4];  // Offset: 228 Size: 4
	struct TArray<struct FName> ExclusionLandscapeLayers;  // Offset: 232 Size: 16
	float MinimumExclusionLayerWeight;  // Offset: 248 Size: 4
	struct FName LandscapeLayer;  // Offset: 252 Size: 8
	char CollisionWithWorld : 1;  // Offset: 260 Size: 1
	char pad_260_1 : 7;  // Offset: 260 Size: 1
	char pad_261[4];  // Offset: 261 Size: 4
	struct FVector CollisionScale;  // Offset: 264 Size: 12
	struct FBoxSphereBounds MeshBounds;  // Offset: 276 Size: 28
	struct FVector LowBoundOriginRadius;  // Offset: 304 Size: 12
	enum class EComponentMobility Mobility;  // Offset: 316 Size: 1
	char pad_317[3];  // Offset: 317 Size: 3
	struct FInt32Interval CullDistance;  // Offset: 320 Size: 8
	char bEnableStaticLighting : 1;  // Offset: 328 Size: 1
	char CastShadow : 1;  // Offset: 328 Size: 1
	char bAffectDynamicIndirectLighting : 1;  // Offset: 328 Size: 1
	char bAffectDistanceFieldLighting : 1;  // Offset: 328 Size: 1
	char bCastDynamicShadow : 1;  // Offset: 328 Size: 1
	char bCastStaticShadow : 1;  // Offset: 328 Size: 1
	char bCastShadowAsTwoSided : 1;  // Offset: 328 Size: 1
	char bReceivesDecals : 1;  // Offset: 328 Size: 1
	char bOverrideLightMapRes : 1;  // Offset: 329 Size: 1
	char pad_329_1 : 7;  // Offset: 329 Size: 1
	char pad_330[3];  // Offset: 330 Size: 3
	int32_t OverriddenLightMapRes;  // Offset: 332 Size: 4
	enum class ELightmapType LightmapType;  // Offset: 336 Size: 1
	char pad_337[3];  // Offset: 337 Size: 3
	char bUseAsOccluder : 1;  // Offset: 340 Size: 1
	char pad_340_1 : 7;  // Offset: 340 Size: 1
	char pad_341[4];  // Offset: 341 Size: 4
	char bVisibleInRayTracing : 1;  // Offset: 344 Size: 1
	char bEvaluateWorldPositionOffset : 1;  // Offset: 344 Size: 1
	char pad_344_1 : 6;  // Offset: 344 Size: 1
	char pad_345[8];  // Offset: 345 Size: 8
	struct FBodyInstance BodyInstance;  // Offset: 352 Size: 344
	enum class EHasCustomNavigableGeometry CustomNavigableGeometry;  // Offset: 696 Size: 1
	struct FLightingChannels LightingChannels;  // Offset: 697 Size: 1
	char pad_698[2];  // Offset: 698 Size: 2
	char bRenderCustomDepth : 1;  // Offset: 700 Size: 1
	char pad_700_1 : 7;  // Offset: 700 Size: 1
	char pad_701[4];  // Offset: 701 Size: 4
	enum class ERendererStencilMask CustomDepthStencilWriteMask;  // Offset: 704 Size: 1
	char pad_705[3];  // Offset: 705 Size: 3
	int32_t CustomDepthStencilValue;  // Offset: 708 Size: 4
	int32_t TranslucencySortPriority;  // Offset: 712 Size: 4
	int32_t OutlineStencilValue;  // Offset: 716 Size: 4
	float CollisionRadius;  // Offset: 720 Size: 4
	float ShadeRadius;  // Offset: 724 Size: 4
	int32_t NumSteps;  // Offset: 728 Size: 4
	float InitialSeedDensity;  // Offset: 732 Size: 4
	float AverageSpreadDistance;  // Offset: 736 Size: 4
	float SpreadVariance;  // Offset: 740 Size: 4
	int32_t SeedsPerStep;  // Offset: 744 Size: 4
	int32_t DistributionSeed;  // Offset: 748 Size: 4
	float MaxInitialSeedOffset;  // Offset: 752 Size: 4
	char pad_756_1 : 7;  // Offset: 756 Size: 1
	bool bCanGrowInShade : 1;  // Offset: 756 Size: 1
	char pad_757_1 : 7;  // Offset: 757 Size: 1
	bool bSpawnsInShade : 1;  // Offset: 757 Size: 1
	char pad_758[2];  // Offset: 758 Size: 2
	float MaxInitialAge;  // Offset: 760 Size: 4
	float MaxAge;  // Offset: 764 Size: 4
	float OverlapPriority;  // Offset: 768 Size: 4
	struct FFloatInterval ProceduralScale;  // Offset: 772 Size: 8
	char pad_780[4];  // Offset: 780 Size: 4
	struct FRuntimeFloatCurve ScaleCurve;  // Offset: 784 Size: 136
	int32_t changeCount;  // Offset: 920 Size: 4
	char ReapplyDensity : 1;  // Offset: 924 Size: 1
	char ReapplyRadius : 1;  // Offset: 924 Size: 1
	char ReapplyAlignToNormal : 1;  // Offset: 924 Size: 1
	char ReapplyRandomYaw : 1;  // Offset: 924 Size: 1
	char ReapplyScaling : 1;  // Offset: 924 Size: 1
	char ReapplyScaleX : 1;  // Offset: 924 Size: 1
	char ReapplyScaleY : 1;  // Offset: 924 Size: 1
	char ReapplyScaleZ : 1;  // Offset: 924 Size: 1
	char ReapplyRandomPitchAngle : 1;  // Offset: 925 Size: 1
	char ReapplyGroundSlope : 1;  // Offset: 925 Size: 1
	char ReapplyHeight : 1;  // Offset: 925 Size: 1
	char ReapplyLandscapeLayers : 1;  // Offset: 925 Size: 1
	char ReapplyZOffset : 1;  // Offset: 925 Size: 1
	char ReapplyCollisionWithWorld : 1;  // Offset: 925 Size: 1
	char ReapplyVertexColorMask : 1;  // Offset: 925 Size: 1
	char bEnableDensityScaling : 1;  // Offset: 925 Size: 1
	char bEnableDiscardOnLoad : 1;  // Offset: 926 Size: 1
	char pad_926_1 : 7;  // Offset: 926 Size: 1
	char pad_927[2];  // Offset: 927 Size: 2
	struct TArray<struct URuntimeVirtualTexture*> RuntimeVirtualTextures;  // Offset: 928 Size: 16
	int32_t VirtualTextureCullMips;  // Offset: 944 Size: 4
	enum class ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType;  // Offset: 948 Size: 1
	char pad_949[3];  // Offset: 949 Size: 3



 // Functions 
 public:
}; 
 
 


//Class Foliage.FoliageType_Actor Size 968
// Inherited 952 bytes 
class UFoliageType_Actor : public UFoliageType
{

 public: 
	AActor* ActorClass;  // Offset: 952 Size: 8
	char pad_960_1 : 7;  // Offset: 960 Size: 1
	bool bShouldAttachToBaseComponent : 1;  // Offset: 960 Size: 1
	char pad_961[7];  // Offset: 961 Size: 7



 // Functions 
 public:
}; 
 
 


//Class Foliage.FoliageStatistics Size 40
// Inherited 40 bytes 
class UFoliageStatistics : public UBlueprintFunctionLibrary
{

 public: 



 // Functions 
 public:
	int32_t FoliageOverlappingSphereCount(struct UObject* WorldContextObject, struct UStaticMesh* StaticMesh, struct FVector CenterPosition, float Radius); // Function Foliage.FoliageStatistics.FoliageOverlappingSphereCount
	int32_t FoliageOverlappingBoxCount(struct UObject* WorldContextObject, struct UStaticMesh* StaticMesh, struct FBox Box); // Function Foliage.FoliageStatistics.FoliageOverlappingBoxCount
}; 
 
 


//Class Foliage.FoliageInstancedStaticMeshComponent Size 1776
// Inherited 1728 bytes 
class UFoliageInstancedStaticMeshComponent : public UHierarchicalInstancedStaticMeshComponent
{

 public: 
	struct FMulticastInlineDelegate OnInstanceTakePointDamage;  // Offset: 1720 Size: 16
	struct FMulticastInlineDelegate OnInstanceTakeRadialDamage;  // Offset: 1736 Size: 16
	struct FGuid GenerationGuid;  // Offset: 1752 Size: 16



 // Functions 
 public:
}; 
 
 


//Class Foliage.FoliageType_InstancedStaticMesh Size 984
// Inherited 952 bytes 
class UFoliageType_InstancedStaticMesh : public UFoliageType
{

 public: 
	struct UStaticMesh* Mesh;  // Offset: 952 Size: 8
	struct TArray<struct UMaterialInterface*> OverrideMaterials;  // Offset: 960 Size: 16
	UFoliageInstancedStaticMeshComponent* ComponentClass;  // Offset: 976 Size: 8



 // Functions 
 public:
}; 
 
 


//Class Foliage.InstancedFoliageActor Size 624
// Inherited 544 bytes 
class AInstancedFoliageActor : public AActor
{

 public: 
	char pad_544[80];  // Offset: 544 Size: 80



 // Functions 
 public:
}; 
 
 


//Class Foliage.InteractiveFoliageActor Size 656
// Inherited 560 bytes 
class AInteractiveFoliageActor : public AStaticMeshActor
{

 public: 
	struct UCapsuleComponent* CapsuleComponent;  // Offset: 560 Size: 8
	struct FVector TouchingActorEntryPosition;  // Offset: 568 Size: 12
	struct FVector FoliageVelocity;  // Offset: 580 Size: 12
	struct FVector FoliageForce;  // Offset: 592 Size: 12
	struct FVector FoliagePosition;  // Offset: 604 Size: 12
	float FoliageDamageImpulseScale;  // Offset: 616 Size: 4
	float FoliageTouchImpulseScale;  // Offset: 620 Size: 4
	float FoliageStiffness;  // Offset: 624 Size: 4
	float FoliageStiffnessQuadratic;  // Offset: 628 Size: 4
	float FoliageDamping;  // Offset: 632 Size: 4
	float MaxDamageImpulse;  // Offset: 636 Size: 4
	float MaxTouchImpulse;  // Offset: 640 Size: 4
	float MaxForce;  // Offset: 644 Size: 4
	float Mass;  // Offset: 648 Size: 4
	char pad_652[4];  // Offset: 652 Size: 4



 // Functions 
 public:
	void CapsuleTouched(struct UPrimitiveComponent* OverlappedComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& OverlapInfo); // Function Foliage.InteractiveFoliageActor.CapsuleTouched
}; 
 
 


//Class Foliage.InteractiveFoliageComponent Size 1312
// Inherited 1312 bytes 
class UInteractiveFoliageComponent : public UStaticMeshComponent
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class Foliage.ProceduralFoliageBlockingVolume Size 608
// Inherited 600 bytes 
class AProceduralFoliageBlockingVolume : public AVolume
{

 public: 
	struct AProceduralFoliageVolume* ProceduralFoliageVolume;  // Offset: 600 Size: 8



 // Functions 
 public:
}; 
 
 


//Class Foliage.ProceduralFoliageComponent Size 216
// Inherited 176 bytes 
class UProceduralFoliageComponent : public UActorComponent
{

 public: 
	struct UProceduralFoliageSpawner* FoliageSpawner;  // Offset: 176 Size: 8
	float TileOverlap;  // Offset: 184 Size: 4
	char pad_188[4];  // Offset: 188 Size: 4
	struct AVolume* SpawningVolume;  // Offset: 192 Size: 8
	struct FGuid ProceduralGuid;  // Offset: 200 Size: 16



 // Functions 
 public:
}; 
 
 


//Class Foliage.ProceduralFoliageSpawner Size 104
// Inherited 40 bytes 
class UProceduralFoliageSpawner : public UObject
{

 public: 
	int32_t RandomSeed;  // Offset: 40 Size: 4
	float TileSize;  // Offset: 44 Size: 4
	int32_t NumUniqueTiles;  // Offset: 48 Size: 4
	float MinimumQuadTreeSize;  // Offset: 52 Size: 4
	char pad_56[8];  // Offset: 56 Size: 8
	struct TArray<struct FFoliageTypeObject> FoliageTypes;  // Offset: 64 Size: 16
	char pad_80[24];  // Offset: 80 Size: 24



 // Functions 
 public:
	void Simulate(int32_t NumSteps); // Function Foliage.ProceduralFoliageSpawner.Simulate
}; 
 
 


//Class Foliage.ProceduralFoliageTile Size 344
// Inherited 40 bytes 
class UProceduralFoliageTile : public UObject
{

 public: 
	struct UProceduralFoliageSpawner* FoliageSpawner;  // Offset: 40 Size: 8
	char pad_48[160];  // Offset: 48 Size: 160
	struct TArray<struct FProceduralFoliageInstance> InstancesArray;  // Offset: 208 Size: 16
	char pad_224[120];  // Offset: 224 Size: 120



 // Functions 
 public:
}; 
 
 


//Class Foliage.ProceduralFoliageVolume Size 608
// Inherited 600 bytes 
class AProceduralFoliageVolume : public AVolume
{

 public: 
	struct UProceduralFoliageComponent* ProceduralComponent;  // Offset: 600 Size: 8



 // Functions 
 public:
}; 
 
 


