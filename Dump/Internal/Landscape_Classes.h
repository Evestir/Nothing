#pragma once 
#include <Landscape_Structs.h>
 
 
 
//Class Landscape.LandscapeMeshCollisionComponent Size 1392
// Inherited 1360 bytes 
class ULandscapeMeshCollisionComponent : public ULandscapeHeightfieldCollisionComponent
{

 public: 
	struct FGuid MeshGuid;  // Offset: 1360 Size: 16
	char pad_1376[16];  // Offset: 1376 Size: 16



 // Functions 
 public:
}; 
 
 


//Class Landscape.LandscapeComponent Size 1680
// Inherited 1136 bytes 
class ULandscapeComponent : public UPrimitiveComponent
{

 public: 
	int32_t SectionBaseX;  // Offset: 1136 Size: 4
	int32_t SectionBaseY;  // Offset: 1140 Size: 4
	int32_t ComponentSizeQuads;  // Offset: 1144 Size: 4
	int32_t SubsectionSizeQuads;  // Offset: 1148 Size: 4
	int32_t NumSubsections;  // Offset: 1152 Size: 4
	char pad_1156[4];  // Offset: 1156 Size: 4
	struct UMaterialInterface* OverrideMaterial;  // Offset: 1160 Size: 8
	struct UMaterialInterface* OverrideHoleMaterial;  // Offset: 1168 Size: 8
	struct TArray<struct FLandscapeComponentMaterialOverride> OverrideMaterials;  // Offset: 1176 Size: 16
	struct TArray<struct UMaterialInstanceConstant*> MaterialInstances;  // Offset: 1192 Size: 16
	struct TArray<struct UMaterialInstanceDynamic*> MaterialInstancesDynamic;  // Offset: 1208 Size: 16
	struct TArray<int8_t> LODIndexToMaterialIndex;  // Offset: 1224 Size: 16
	struct TArray<int8_t> MaterialIndexToDisabledTessellationMaterial;  // Offset: 1240 Size: 16
	struct UTexture2D* XYOffsetmapTexture;  // Offset: 1256 Size: 8
	struct FVector4 WeightmapScaleBias;  // Offset: 1264 Size: 16
	float WeightmapSubsectionOffset;  // Offset: 1280 Size: 4
	char pad_1284[12];  // Offset: 1284 Size: 12
	struct FVector4 HeightmapScaleBias;  // Offset: 1296 Size: 16
	struct FBox CachedLocalBox;  // Offset: 1312 Size: 28
	 CollisionComponent;  // Offset: 1340 Size: 28
	struct UTexture2D* HeightmapTexture;  // Offset: 1368 Size: 8
	struct TArray<struct FWeightmapLayerAllocationInfo> WeightmapLayerAllocations;  // Offset: 1376 Size: 16
	struct TArray<struct UTexture2D*> WeightmapTextures;  // Offset: 1392 Size: 16
	struct ULandscapeLODStreamingProxy* LODStreamingProxy;  // Offset: 1408 Size: 8
	struct FGuid MapBuildDataId;  // Offset: 1416 Size: 16
	struct TArray<struct FGuid> IrrelevantLights;  // Offset: 1432 Size: 16
	int32_t CollisionMipLevel;  // Offset: 1448 Size: 4
	int32_t SimpleCollisionMipLevel;  // Offset: 1452 Size: 4
	float NegativeZBoundsExtension;  // Offset: 1456 Size: 4
	float PositiveZBoundsExtension;  // Offset: 1460 Size: 4
	float StaticLightingResolution;  // Offset: 1464 Size: 4
	int32_t ForcedLOD;  // Offset: 1468 Size: 4
	int32_t LODBias;  // Offset: 1472 Size: 4
	struct FGuid StateId;  // Offset: 1476 Size: 16
	struct FGuid BakedTextureMaterialGuid;  // Offset: 1492 Size: 16
	char pad_1508[4];  // Offset: 1508 Size: 4
	struct UTexture2D* GIBakedBaseColorTexture;  // Offset: 1512 Size: 8
	char MobileBlendableLayerMask;  // Offset: 1520 Size: 1
	char pad_1521[7];  // Offset: 1521 Size: 7
	struct UMaterialInterface* MobileMaterialInterface;  // Offset: 1528 Size: 8
	struct TArray<struct UMaterialInterface*> MobileMaterialInterfaces;  // Offset: 1536 Size: 16
	struct TArray<struct UTexture2D*> MobileWeightmapTextures;  // Offset: 1552 Size: 16
	char pad_1568[112];  // Offset: 1568 Size: 112



 // Functions 
 public:
	struct UMaterialInstanceDynamic* GetMaterialInstanceDynamic(int32_t InIndex); // Function Landscape.LandscapeComponent.GetMaterialInstanceDynamic
	float EditorGetPaintLayerWeightByNameAtLocation(struct FVector& InLocation, struct FName InPaintLayerName); // Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightByNameAtLocation
	float EditorGetPaintLayerWeightAtLocation(struct FVector& InLocation, struct ULandscapeLayerInfoObject* PaintLayer); // Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightAtLocation
}; 
 
 


//Class Landscape.LandscapeInfoMap Size 128
// Inherited 40 bytes 
class ULandscapeInfoMap : public UObject
{

 public: 
	char pad_40[88];  // Offset: 40 Size: 88



 // Functions 
 public:
}; 
 
 


//Class Landscape.ControlPointMeshActor Size 552
// Inherited 544 bytes 
class AControlPointMeshActor : public AActor
{

 public: 
	struct UControlPointMeshComponent* ControlPointMeshComponent;  // Offset: 544 Size: 8



 // Functions 
 public:
}; 
 
 


//Class Landscape.ControlPointMeshComponent Size 1312
// Inherited 1312 bytes 
class UControlPointMeshComponent : public UStaticMeshComponent
{

 public: 
	float VirtualTextureMainPassMaxDrawDistance;  // Offset: 1304 Size: 4



 // Functions 
 public:
}; 
 
 


//Class Landscape.LandscapeProxy Size 1432
// Inherited 544 bytes 
class ALandscapeProxy : public AActor
{

 public: 
	struct ULandscapeSplinesComponent* SplineComponent;  // Offset: 544 Size: 8
	struct FGuid LandscapeGuid;  // Offset: 552 Size: 16
	struct FIntPoint LandscapeSectionOffset;  // Offset: 568 Size: 8
	int32_t MaxLODLevel;  // Offset: 576 Size: 4
	float LODDistanceFactor;  // Offset: 580 Size: 4
	enum class ELandscapeLODFalloff LODFalloff;  // Offset: 584 Size: 1
	char pad_585[3];  // Offset: 585 Size: 3
	float ComponentScreenSizeToUseSubSections;  // Offset: 588 Size: 4
	float LOD0ScreenSize;  // Offset: 592 Size: 4
	float LOD0DistributionSetting;  // Offset: 596 Size: 4
	float LODDistributionSetting;  // Offset: 600 Size: 4
	float TessellationComponentScreenSize;  // Offset: 604 Size: 4
	char pad_608_1 : 7;  // Offset: 608 Size: 1
	bool UseTessellationComponentScreenSizeFalloff : 1;  // Offset: 608 Size: 1
	char pad_609[3];  // Offset: 609 Size: 3
	float TessellationComponentScreenSizeFalloff;  // Offset: 612 Size: 4
	int32_t OccluderGeometryLOD;  // Offset: 616 Size: 4
	int32_t StaticLightingLOD;  // Offset: 620 Size: 4
	struct UPhysicalMaterial* DefaultPhysMaterial;  // Offset: 624 Size: 8
	float StreamingDistanceMultiplier;  // Offset: 632 Size: 4
	char pad_636[4];  // Offset: 636 Size: 4
	struct UMaterialInterface* LandscapeMaterial;  // Offset: 640 Size: 8
	char pad_648[32];  // Offset: 648 Size: 32
	struct UMaterialInterface* LandscapeHoleMaterial;  // Offset: 680 Size: 8
	struct TArray<struct FLandscapeProxyMaterialOverride> LandscapeMaterialsOverride;  // Offset: 688 Size: 16
	char pad_704_1 : 7;  // Offset: 704 Size: 1
	bool bMeshHoles : 1;  // Offset: 704 Size: 1
	char MeshHolesMaxLod;  // Offset: 705 Size: 1
	char pad_706[6];  // Offset: 706 Size: 6
	struct TArray<struct URuntimeVirtualTexture*> RuntimeVirtualTextures;  // Offset: 712 Size: 16
	int32_t VirtualTextureNumLods;  // Offset: 728 Size: 4
	int32_t VirtualTextureLodBias;  // Offset: 732 Size: 4
	enum class ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType;  // Offset: 736 Size: 1
	char pad_737[3];  // Offset: 737 Size: 3
	float NegativeZBoundsExtension;  // Offset: 740 Size: 4
	float PositiveZBoundsExtension;  // Offset: 744 Size: 4
	char pad_748[4];  // Offset: 748 Size: 4
	struct TArray<struct ULandscapeComponent*> LandscapeComponents;  // Offset: 752 Size: 16
	struct TArray<struct ULandscapeHeightfieldCollisionComponent*> CollisionComponents;  // Offset: 768 Size: 16
	struct TArray<struct UHierarchicalInstancedStaticMeshComponent*> FoliageComponents;  // Offset: 784 Size: 16
	char pad_800[100];  // Offset: 800 Size: 100
	char pad_900_1 : 7;  // Offset: 900 Size: 1
	bool bHasLandscapeGrass : 1;  // Offset: 900 Size: 1
	char pad_901[3];  // Offset: 901 Size: 3
	float StaticLightingResolution;  // Offset: 904 Size: 4
	char CastShadow : 1;  // Offset: 908 Size: 1
	char bCastDynamicShadow : 1;  // Offset: 908 Size: 1
	char bCastStaticShadow : 1;  // Offset: 908 Size: 1
	char pad_908_1 : 5;  // Offset: 908 Size: 1
	char pad_909[4];  // Offset: 909 Size: 4
	char bCastFarShadow : 1;  // Offset: 912 Size: 1
	char pad_912_1 : 7;  // Offset: 912 Size: 1
	char pad_913[4];  // Offset: 913 Size: 4
	char bCastHiddenShadow : 1;  // Offset: 916 Size: 1
	char pad_916_1 : 7;  // Offset: 916 Size: 1
	char pad_917[4];  // Offset: 917 Size: 4
	char bCastShadowAsTwoSided : 1;  // Offset: 920 Size: 1
	char pad_920_1 : 7;  // Offset: 920 Size: 1
	char pad_921[4];  // Offset: 921 Size: 4
	char bAffectDistanceFieldLighting : 1;  // Offset: 924 Size: 1
	char pad_924_1 : 7;  // Offset: 924 Size: 1
	struct FLightingChannels LightingChannels;  // Offset: 925 Size: 1
	char pad_926[2];  // Offset: 926 Size: 2
	char bUseMaterialPositionOffsetInStaticLighting : 1;  // Offset: 928 Size: 1
	char bRenderCustomDepth : 1;  // Offset: 928 Size: 1
	char pad_928_1 : 6;  // Offset: 928 Size: 1
	char pad_929[4];  // Offset: 929 Size: 4
	enum class ERendererStencilMask CustomDepthStencilWriteMask;  // Offset: 932 Size: 1
	char pad_933[3];  // Offset: 933 Size: 3
	int32_t CustomDepthStencilValue;  // Offset: 936 Size: 4
	int32_t OutlineStencilValue;  // Offset: 940 Size: 4
	float LDMaxDrawDistance;  // Offset: 944 Size: 4
	struct FLightmassPrimitiveSettings LightmassSettings;  // Offset: 948 Size: 24
	int32_t CollisionMipLevel;  // Offset: 972 Size: 4
	int32_t SimpleCollisionMipLevel;  // Offset: 976 Size: 4
	float CollisionThickness;  // Offset: 980 Size: 4
	struct FBodyInstance BodyInstance;  // Offset: 984 Size: 344
	char bGenerateOverlapEvents : 1;  // Offset: 1328 Size: 1
	char bBakeMaterialPositionOffsetIntoCollision : 1;  // Offset: 1328 Size: 1
	char pad_1328_1 : 6;  // Offset: 1328 Size: 1
	char pad_1329[4];  // Offset: 1329 Size: 4
	int32_t ComponentSizeQuads;  // Offset: 1332 Size: 4
	int32_t SubsectionSizeQuads;  // Offset: 1336 Size: 4
	int32_t NumSubsections;  // Offset: 1340 Size: 4
	char bUsedForNavigation : 1;  // Offset: 1344 Size: 1
	char bFillCollisionUnderLandscapeForNavmesh : 1;  // Offset: 1344 Size: 1
	char pad_1344_1 : 6;  // Offset: 1344 Size: 1
	char pad_1345[4];  // Offset: 1345 Size: 4
	char pad_1348_1 : 7;  // Offset: 1348 Size: 1
	bool bUseDynamicMaterialInstance : 1;  // Offset: 1348 Size: 1
	enum class ENavDataGatheringMode NavigationGeometryGatheringMode;  // Offset: 1349 Size: 1
	char pad_1350_1 : 7;  // Offset: 1350 Size: 1
	bool bUseLandscapeForCullingInvisibleHLODVertices : 1;  // Offset: 1350 Size: 1
	char pad_1351_1 : 7;  // Offset: 1351 Size: 1
	bool bHasLayersContent : 1;  // Offset: 1351 Size: 1
	struct TMap<struct UTexture2D*, struct ULandscapeWeightmapUsage*> WeightmapUsageMap;  // Offset: 1352 Size: 80



 // Functions 
 public:
	void SetLandscapeMaterialVectorParameterValue(struct FName ParameterName, struct FLinearColor Value); // Function Landscape.LandscapeProxy.SetLandscapeMaterialVectorParameterValue
	void SetLandscapeMaterialTextureParameterValue(struct FName ParameterName, struct UTexture* Value); // Function Landscape.LandscapeProxy.SetLandscapeMaterialTextureParameterValue
	void SetLandscapeMaterialScalarParameterValue(struct FName ParameterName, float Value); // Function Landscape.LandscapeProxy.SetLandscapeMaterialScalarParameterValue
	bool LandscapeExportHeightmapToRenderTarget(struct UTextureRenderTarget2D* InRenderTarget, bool InExportHeightIntoRGChannel, bool InExportLandscapeProxies); // Function Landscape.LandscapeProxy.LandscapeExportHeightmapToRenderTarget
	void EditorSetLandscapeMaterial(struct UMaterialInterface* NewLandscapeMaterial); // Function Landscape.LandscapeProxy.EditorSetLandscapeMaterial
	void EditorApplySpline(struct USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int32_t NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, struct ULandscapeLayerInfoObject* PaintLayer, struct FName EditLayerName); // Function Landscape.LandscapeProxy.EditorApplySpline
	void ChangeUseTessellationComponentScreenSizeFalloff(bool InComponentScreenSizeToUseSubSections); // Function Landscape.LandscapeProxy.ChangeUseTessellationComponentScreenSizeFalloff
	void ChangeTessellationComponentScreenSizeFalloff(float InUseTessellationComponentScreenSizeFalloff); // Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSizeFalloff
	void ChangeTessellationComponentScreenSize(float InTessellationComponentScreenSize); // Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSize
	void ChangeLODDistanceFactor(float InLODDistanceFactor); // Function Landscape.LandscapeProxy.ChangeLODDistanceFactor
	void ChangeComponentScreenSizeToUseSubSections(float InComponentScreenSizeToUseSubSections); // Function Landscape.LandscapeProxy.ChangeComponentScreenSizeToUseSubSections
}; 
 
 


//Class Landscape.MaterialExpressionLandscapeGrassOutput Size 80
// Inherited 64 bytes 
class UMaterialExpressionLandscapeGrassOutput : public UMaterialExpressionCustomOutput
{

 public: 
	struct TArray<struct FGrassInput> GrassTypes;  // Offset: 64 Size: 16



 // Functions 
 public:
}; 
 
 


//Class Landscape.Landscape Size 1432
// Inherited 1432 bytes 
class ALandscape : public ALandscapeProxy
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class Landscape.LandscapeLODStreamingProxy Size 104
// Inherited 96 bytes 
class ULandscapeLODStreamingProxy : public UStreamableRenderAsset
{

 public: 
	char pad_96[8];  // Offset: 96 Size: 8



 // Functions 
 public:
}; 
 
 


//Class Landscape.LandscapeMeshProxyActor Size 552
// Inherited 544 bytes 
class ALandscapeMeshProxyActor : public AActor
{

 public: 
	struct ULandscapeMeshProxyComponent* LandscapeMeshProxyComponent;  // Offset: 544 Size: 8



 // Functions 
 public:
}; 
 
 


//Class Landscape.LandscapeBlueprintBrushBase Size 544
// Inherited 544 bytes 
class ALandscapeBlueprintBrushBase : public AActor
{

 public: 



 // Functions 
 public:
	void RequestLandscapeUpdate(); // Function Landscape.LandscapeBlueprintBrushBase.RequestLandscapeUpdate
	struct UTextureRenderTarget2D* Render(bool InIsHeightmap, struct UTextureRenderTarget2D* InCombinedResult, struct FName& InWeightmapLayerName); // Function Landscape.LandscapeBlueprintBrushBase.Render
	void Initialize(struct FTransform& InLandscapeTransform, struct FIntPoint& InLandscapeSize, struct FIntPoint& InLandscapeRenderTargetSize); // Function Landscape.LandscapeBlueprintBrushBase.Initialize
	void GetBlueprintRenderDependencies(struct TArray<struct UObject*>& OutStreamableAssets); // Function Landscape.LandscapeBlueprintBrushBase.GetBlueprintRenderDependencies
}; 
 
 


//Class Landscape.LandscapeGizmoActor Size 544
// Inherited 544 bytes 
class ALandscapeGizmoActor : public AActor
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class Landscape.LandscapeGizmoActiveActor Size 624
// Inherited 544 bytes 
class ALandscapeGizmoActiveActor : public ALandscapeGizmoActor
{

 public: 
	char pad_544[80];  // Offset: 544 Size: 80



 // Functions 
 public:
}; 
 
 


//Class Landscape.LandscapeGizmoRenderComponent Size 1136
// Inherited 1136 bytes 
class ULandscapeGizmoRenderComponent : public UPrimitiveComponent
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class Landscape.LandscapeGrassType Size 96
// Inherited 40 bytes 
class ULandscapeGrassType : public UObject
{

 public: 
	struct TArray<struct FGrassVariety> GrassVarieties;  // Offset: 40 Size: 16
	char bEnableDensityScaling : 1;  // Offset: 56 Size: 1
	char pad_56_1 : 7;  // Offset: 56 Size: 1
	char pad_57[8];  // Offset: 57 Size: 8
	struct UStaticMesh* GrassMesh;  // Offset: 64 Size: 8
	float GrassDensity;  // Offset: 72 Size: 4
	float PlacementJitter;  // Offset: 76 Size: 4
	int32_t StartCullDistance;  // Offset: 80 Size: 4
	int32_t EndCullDistance;  // Offset: 84 Size: 4
	char pad_88_1 : 7;  // Offset: 88 Size: 1
	bool RandomRotation : 1;  // Offset: 88 Size: 1
	char pad_89_1 : 7;  // Offset: 89 Size: 1
	bool AlignToSurface : 1;  // Offset: 89 Size: 1
	char pad_90[6];  // Offset: 90 Size: 6



 // Functions 
 public:
}; 
 
 


//Class Landscape.LandscapeWeightmapUsage Size 88
// Inherited 40 bytes 
class ULandscapeWeightmapUsage : public UObject
{

 public: 
	struct ULandscapeComponent* ChannelUsage[4];  // Offset: 40 Size: 32
	struct FGuid LayerGuid;  // Offset: 72 Size: 16



 // Functions 
 public:
}; 
 
 


//Class Landscape.LandscapeHeightfieldCollisionComponent Size 1360
// Inherited 1136 bytes 
class ULandscapeHeightfieldCollisionComponent : public UPrimitiveComponent
{

 public: 
	struct TArray<struct ULandscapeLayerInfoObject*> ComponentLayerInfos;  // Offset: 1136 Size: 16
	int32_t SectionBaseX;  // Offset: 1152 Size: 4
	int32_t SectionBaseY;  // Offset: 1156 Size: 4
	int32_t CollisionSizeQuads;  // Offset: 1160 Size: 4
	float CollisionScale;  // Offset: 1164 Size: 4
	int32_t SimpleCollisionSizeQuads;  // Offset: 1168 Size: 4
	char pad_1172[4];  // Offset: 1172 Size: 4
	struct TArray<char> CollisionQuadFlags;  // Offset: 1176 Size: 16
	struct FGuid HeightfieldGuid;  // Offset: 1192 Size: 16
	struct FBox CachedLocalBox;  // Offset: 1208 Size: 28
	 RenderComponent;  // Offset: 1236 Size: 28
	char pad_1264[16];  // Offset: 1264 Size: 16
	struct TArray<struct UPhysicalMaterial*> CookedPhysicalMaterials;  // Offset: 1280 Size: 16
	char pad_1296[64];  // Offset: 1296 Size: 64



 // Functions 
 public:
	struct ULandscapeComponent* GetRenderComponent(); // Function Landscape.LandscapeHeightfieldCollisionComponent.GetRenderComponent
}; 
 
 


//Class Landscape.LandscapeSplineSegment Size 176
// Inherited 40 bytes 
class ULandscapeSplineSegment : public UObject
{

 public: 
	struct FLandscapeSplineSegmentConnection Connections[2];  // Offset: 40 Size: 48
	struct FInterpCurveVector SplineInfo;  // Offset: 88 Size: 24
	struct TArray<struct FLandscapeSplineInterpPoint> Points;  // Offset: 112 Size: 16
	struct FBox Bounds;  // Offset: 128 Size: 28
	char pad_156[4];  // Offset: 156 Size: 4
	struct TArray<struct USplineMeshComponent*> LocalMeshComponents;  // Offset: 160 Size: 16



 // Functions 
 public:
}; 
 
 


//Class Landscape.LandscapeInfo Size 528
// Inherited 40 bytes 
class ULandscapeInfo : public UObject
{

 public: 
	 LandscapeActor;  // Offset: 40 Size: 28
	struct FGuid LandscapeGuid;  // Offset: 68 Size: 16
	int32_t ComponentSizeQuads;  // Offset: 84 Size: 4
	int32_t SubsectionSizeQuads;  // Offset: 88 Size: 4
	int32_t ComponentNumSubsections;  // Offset: 92 Size: 4
	struct FVector DrawScale;  // Offset: 96 Size: 12
	char pad_108[164];  // Offset: 108 Size: 164
	struct TArray<struct ALandscapeStreamingProxy*> Proxies;  // Offset: 272 Size: 16
	char pad_288[240];  // Offset: 288 Size: 240



 // Functions 
 public:
}; 
 
 


//Class Landscape.MaterialExpressionLandscapeLayerSwitch Size 136
// Inherited 64 bytes 
class UMaterialExpressionLandscapeLayerSwitch : public UMaterialExpression
{

 public: 
	struct FExpressionInput LayerUsed;  // Offset: 64 Size: 20
	struct FExpressionInput LayerNotUsed;  // Offset: 84 Size: 20
	struct FName ParameterName;  // Offset: 104 Size: 8
	char PreviewUsed : 1;  // Offset: 112 Size: 1
	char pad_112_1 : 7;  // Offset: 112 Size: 1
	char pad_113[4];  // Offset: 113 Size: 4
	struct FGuid ExpressionGUID;  // Offset: 116 Size: 16
	char pad_132[4];  // Offset: 132 Size: 4



 // Functions 
 public:
}; 
 
 


//Class Landscape.LandscapeLayerInfoObject Size 80
// Inherited 40 bytes 
class ULandscapeLayerInfoObject : public UObject
{

 public: 
	struct FName LayerName;  // Offset: 40 Size: 8
	struct UPhysicalMaterial* PhysMaterial;  // Offset: 48 Size: 8
	float Hardness;  // Offset: 56 Size: 4
	struct FLinearColor LayerUsageDebugColor;  // Offset: 60 Size: 16
	char pad_76[4];  // Offset: 76 Size: 4



 // Functions 
 public:
}; 
 
 


//Class Landscape.LandscapeMaterialInstanceConstant Size 840
// Inherited 816 bytes 
class ULandscapeMaterialInstanceConstant : public UMaterialInstanceConstant
{

 public: 
	struct TArray<struct FLandscapeMaterialTextureStreamingInfo> TextureStreamingInfo;  // Offset: 816 Size: 16
	char bIsLayerThumbnail : 1;  // Offset: 832 Size: 1
	char bDisableTessellation : 1;  // Offset: 832 Size: 1
	char bMobile : 1;  // Offset: 832 Size: 1
	char bEditorToolUsage : 1;  // Offset: 832 Size: 1
	char pad_832_1 : 4;  // Offset: 832 Size: 1
	char pad_833[8];  // Offset: 833 Size: 8



 // Functions 
 public:
}; 
 
 


//Class Landscape.LandscapeMeshProxyComponent Size 1344
// Inherited 1312 bytes 
class ULandscapeMeshProxyComponent : public UStaticMeshComponent
{

 public: 
	struct FGuid LandscapeGuid;  // Offset: 1304 Size: 16
	struct TArray<struct FIntPoint> ProxyComponentBases;  // Offset: 1320 Size: 16
	int8_t ProxyLOD;  // Offset: 1336 Size: 1



 // Functions 
 public:
}; 
 
 


//Class Landscape.LandscapeSettings Size 64
// Inherited 56 bytes 
class ULandscapeSettings : public UDeveloperSettings
{

 public: 
	int32_t MaxNumberOfLayers;  // Offset: 56 Size: 4
	char pad_60[4];  // Offset: 60 Size: 4



 // Functions 
 public:
}; 
 
 


//Class Landscape.LandscapeSplinesComponent Size 1184
// Inherited 1136 bytes 
class ULandscapeSplinesComponent : public UPrimitiveComponent
{

 public: 
	struct TArray<struct ULandscapeSplineControlPoint*> ControlPoints;  // Offset: 1136 Size: 16
	struct TArray<struct ULandscapeSplineSegment*> Segments;  // Offset: 1152 Size: 16
	struct TArray<struct UMeshComponent*> CookedForeignMeshComponents;  // Offset: 1168 Size: 16



 // Functions 
 public:
	struct TArray<struct USplineMeshComponent*> GetSplineMeshComponents(); // Function Landscape.LandscapeSplinesComponent.GetSplineMeshComponents
}; 
 
 


//Class Landscape.MaterialExpressionLandscapeLayerWeight Size 144
// Inherited 64 bytes 
class UMaterialExpressionLandscapeLayerWeight : public UMaterialExpression
{

 public: 
	struct FExpressionInput Base;  // Offset: 64 Size: 20
	struct FExpressionInput Layer;  // Offset: 84 Size: 20
	struct FName ParameterName;  // Offset: 104 Size: 8
	float PreviewWeight;  // Offset: 112 Size: 4
	struct FVector ConstBase;  // Offset: 116 Size: 12
	struct FGuid ExpressionGUID;  // Offset: 128 Size: 16



 // Functions 
 public:
}; 
 
 


//Class Landscape.LandscapeSplineControlPoint Size 168
// Inherited 40 bytes 
class ULandscapeSplineControlPoint : public UObject
{

 public: 
	struct FVector Location;  // Offset: 40 Size: 12
	struct FRotator Rotation;  // Offset: 52 Size: 12
	float Width;  // Offset: 64 Size: 4
	float LayerWidthRatio;  // Offset: 68 Size: 4
	float SideFalloff;  // Offset: 72 Size: 4
	float LeftSideFalloffFactor;  // Offset: 76 Size: 4
	float RightSideFalloffFactor;  // Offset: 80 Size: 4
	float LeftSideLayerFalloffFactor;  // Offset: 84 Size: 4
	float RightSideLayerFalloffFactor;  // Offset: 88 Size: 4
	float EndFalloff;  // Offset: 92 Size: 4
	struct TArray<struct FLandscapeSplineConnection> ConnectedSegments;  // Offset: 96 Size: 16
	struct TArray<struct FLandscapeSplineInterpPoint> Points;  // Offset: 112 Size: 16
	struct FBox Bounds;  // Offset: 128 Size: 28
	char pad_156[4];  // Offset: 156 Size: 4
	struct UControlPointMeshComponent* LocalMeshComponent;  // Offset: 160 Size: 8



 // Functions 
 public:
}; 
 
 


//Class Landscape.LandscapeStreamingProxy Size 1464
// Inherited 1432 bytes 
class ALandscapeStreamingProxy : public ALandscapeProxy
{

 public: 
	 LandscapeActor;  // Offset: 1432 Size: 28
	char pad_1460[4];  // Offset: 1460 Size: 4



 // Functions 
 public:
}; 
 
 


//Class Landscape.MaterialExpressionLandscapePhysicalMaterialOutput Size 80
// Inherited 64 bytes 
class UMaterialExpressionLandscapePhysicalMaterialOutput : public UMaterialExpressionCustomOutput
{

 public: 
	struct TArray<struct FPhysicalMaterialInput> Inputs;  // Offset: 64 Size: 16



 // Functions 
 public:
}; 
 
 


//Class Landscape.LandscapeSubsystem Size 80
// Inherited 64 bytes 
class ULandscapeSubsystem : public UTickableWorldSubsystem
{

 public: 
	char pad_64[16];  // Offset: 64 Size: 16



 // Functions 
 public:
}; 
 
 


//Class Landscape.MaterialExpressionLandscapeLayerBlend Size 96
// Inherited 64 bytes 
class UMaterialExpressionLandscapeLayerBlend : public UMaterialExpression
{

 public: 
	struct TArray<struct FLayerBlendInput> Layers;  // Offset: 64 Size: 16
	struct FGuid ExpressionGUID;  // Offset: 80 Size: 16



 // Functions 
 public:
}; 
 
 


//Class Landscape.MaterialExpressionLandscapeLayerCoords Size 88
// Inherited 64 bytes 
class UMaterialExpressionLandscapeLayerCoords : public UMaterialExpression
{

 public: 
	enum class ETerrainCoordMappingType MappingType;  // Offset: 64 Size: 1
	enum class ELandscapeCustomizedCoordType CustomUVType;  // Offset: 65 Size: 1
	char pad_66[2];  // Offset: 66 Size: 2
	float MappingScale;  // Offset: 68 Size: 4
	float MappingRotation;  // Offset: 72 Size: 4
	float MappingPanU;  // Offset: 76 Size: 4
	float MappingPanV;  // Offset: 80 Size: 4
	char pad_84[4];  // Offset: 84 Size: 4



 // Functions 
 public:
}; 
 
 


//Class Landscape.MaterialExpressionLandscapeLayerSample Size 96
// Inherited 64 bytes 
class UMaterialExpressionLandscapeLayerSample : public UMaterialExpression
{

 public: 
	struct FName ParameterName;  // Offset: 64 Size: 8
	float PreviewWeight;  // Offset: 72 Size: 4
	struct FGuid ExpressionGUID;  // Offset: 76 Size: 16
	char pad_92[4];  // Offset: 92 Size: 4



 // Functions 
 public:
}; 
 
 


//Class Landscape.MaterialExpressionLandscapeVisibilityMask Size 80
// Inherited 64 bytes 
class UMaterialExpressionLandscapeVisibilityMask : public UMaterialExpression
{

 public: 
	struct FGuid ExpressionGUID;  // Offset: 64 Size: 16



 // Functions 
 public:
}; 
 
 


