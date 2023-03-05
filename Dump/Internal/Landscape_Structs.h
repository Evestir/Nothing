#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//ScriptStruct Landscape.LandscapeLayer Size 136
class FLandscapeLayer
{

 public: 
	struct FGuid Guid;  // Offset: 0 Size: 16
	struct FName Name;  // Offset: 16 Size: 8
	char pad_24_1 : 7;  // Offset: 24 Size: 1
	bool bVisible : 1;  // Offset: 24 Size: 1
	char pad_25_1 : 7;  // Offset: 25 Size: 1
	bool bLocked : 1;  // Offset: 25 Size: 1
	char pad_26[2];  // Offset: 26 Size: 2
	float HeightmapAlpha;  // Offset: 28 Size: 4
	float WeightmapAlpha;  // Offset: 32 Size: 4
	enum class ELandscapeBlendMode BlendMode;  // Offset: 36 Size: 1
	char pad_37[3];  // Offset: 37 Size: 3
	struct TArray<struct FLandscapeLayerBrush> Brushes;  // Offset: 40 Size: 16
	struct TMap<struct ULandscapeLayerInfoObject*, bool> WeightmapLayerAllocationBlend;  // Offset: 56 Size: 80



 // Functions 
 public:
}; 
 
 //ScriptStruct Landscape.WeightmapData Size 48
class FWeightmapData
{

 public: 
	struct TArray<struct UTexture2D*> Textures;  // Offset: 0 Size: 16
	struct TArray<struct FWeightmapLayerAllocationInfo> LayerAllocations;  // Offset: 16 Size: 16
	struct TArray<struct ULandscapeWeightmapUsage*> TextureUsages;  // Offset: 32 Size: 16



 // Functions 
 public:
}; 
 
 //Function Landscape.LandscapeProxy.SetLandscapeMaterialScalarParameterValue Size 12
class FSetLandscapeMaterialScalarParameterValue
{

 public: 
	struct FName ParameterName;  // Offset: 0 Size: 8
	float Value;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct Landscape.LandscapeLayerBrush Size 1
class FLandscapeLayerBrush
{

 public: 
	char pad_0[1];  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct Landscape.LandscapeLayerComponentData Size 56
class FLandscapeLayerComponentData
{

 public: 
	struct FHeightmapData HeightmapData;  // Offset: 0 Size: 8
	struct FWeightmapData WeightmapData;  // Offset: 8 Size: 48



 // Functions 
 public:
}; 
 
 //ScriptStruct Landscape.WeightmapLayerAllocationInfo Size 16
class FWeightmapLayerAllocationInfo
{

 public: 
	struct ULandscapeLayerInfoObject* LayerInfo;  // Offset: 0 Size: 8
	char WeightmapTextureIndex;  // Offset: 8 Size: 1
	char WeightmapTextureChannel;  // Offset: 9 Size: 1
	char pad_10[6];  // Offset: 10 Size: 6



 // Functions 
 public:
}; 
 
 //ScriptStruct Landscape.LandscapeEditToolRenderData Size 56
class FLandscapeEditToolRenderData
{

 public: 
	struct UMaterialInterface* ToolMaterial;  // Offset: 0 Size: 8
	struct UMaterialInterface* GizmoMaterial;  // Offset: 8 Size: 8
	int32_t SelectedType;  // Offset: 16 Size: 4
	int32_t DebugChannelR;  // Offset: 20 Size: 4
	int32_t DebugChannelG;  // Offset: 24 Size: 4
	int32_t DebugChannelB;  // Offset: 28 Size: 4
	struct UTexture2D* DataTexture;  // Offset: 32 Size: 8
	struct UTexture2D* LayerContributionTexture;  // Offset: 40 Size: 8
	struct UTexture2D* DirtyTexture;  // Offset: 48 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct Landscape.LandscapeComponentMaterialOverride Size 16
class FLandscapeComponentMaterialOverride
{

 public: 
	struct FPerPlatformInt LODIndex;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct UMaterialInterface* Material;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function Landscape.LandscapeProxy.SetLandscapeMaterialTextureParameterValue Size 16
class FSetLandscapeMaterialTextureParameterValue
{

 public: 
	struct FName ParameterName;  // Offset: 0 Size: 8
	struct UTexture* Value;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct Landscape.HeightmapData Size 8
class FHeightmapData
{

 public: 
	struct UTexture2D* Texture;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function Landscape.LandscapeProxy.EditorApplySpline Size 56
class FEditorApplySpline
{

 public: 
	struct USplineComponent* InSplineComponent;  // Offset: 0 Size: 8
	float StartWidth;  // Offset: 8 Size: 4
	float EndWidth;  // Offset: 12 Size: 4
	float StartSideFalloff;  // Offset: 16 Size: 4
	float EndSideFalloff;  // Offset: 20 Size: 4
	float StartRoll;  // Offset: 24 Size: 4
	float EndRoll;  // Offset: 28 Size: 4
	int32_t NumSubdivisions;  // Offset: 32 Size: 4
	char pad_36_1 : 7;  // Offset: 36 Size: 1
	bool bRaiseHeights : 1;  // Offset: 36 Size: 1
	char pad_37_1 : 7;  // Offset: 37 Size: 1
	bool bLowerHeights : 1;  // Offset: 37 Size: 1
	char pad_38[2];  // Offset: 38 Size: 2
	struct ULandscapeLayerInfoObject* PaintLayer;  // Offset: 40 Size: 8
	struct FName EditLayerName;  // Offset: 48 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct Landscape.GizmoSelectData Size 80
class FGizmoSelectData
{

 public: 
	char pad_0[80];  // Offset: 0 Size: 80



 // Functions 
 public:
}; 
 
 //ScriptStruct Landscape.GrassVariety Size 88
class FGrassVariety
{

 public: 
	struct UStaticMesh* GrassMesh;  // Offset: 0 Size: 8
	struct TArray<struct UMaterialInterface*> OverrideMaterials;  // Offset: 8 Size: 16
	struct FPerPlatformFloat GrassDensity;  // Offset: 24 Size: 4
	char pad_28_1 : 7;  // Offset: 28 Size: 1
	bool bUseGrid : 1;  // Offset: 28 Size: 1
	char pad_29[3];  // Offset: 29 Size: 3
	float PlacementJitter;  // Offset: 32 Size: 4
	struct FPerPlatformInt StartCullDistance;  // Offset: 36 Size: 4
	struct FPerPlatformInt EndCullDistance;  // Offset: 40 Size: 4
	int32_t MinLOD;  // Offset: 44 Size: 4
	enum class EGrassScaling Scaling;  // Offset: 48 Size: 1
	char pad_49[3];  // Offset: 49 Size: 3
	struct FFloatInterval ScaleX;  // Offset: 52 Size: 8
	struct FFloatInterval ScaleY;  // Offset: 60 Size: 8
	struct FFloatInterval ScaleZ;  // Offset: 68 Size: 8
	char pad_76_1 : 7;  // Offset: 76 Size: 1
	bool RandomRotation : 1;  // Offset: 76 Size: 1
	char pad_77_1 : 7;  // Offset: 77 Size: 1
	bool AlignToSurface : 1;  // Offset: 77 Size: 1
	char pad_78_1 : 7;  // Offset: 78 Size: 1
	bool bUseLandscapeLightmap : 1;  // Offset: 78 Size: 1
	struct FLightingChannels LightingChannels;  // Offset: 79 Size: 1
	char pad_80_1 : 7;  // Offset: 80 Size: 1
	bool bReceivesDecals : 1;  // Offset: 80 Size: 1
	char pad_81_1 : 7;  // Offset: 81 Size: 1
	bool bCastDynamicShadow : 1;  // Offset: 81 Size: 1
	char pad_82_1 : 7;  // Offset: 82 Size: 1
	bool bKeepInstanceBufferCPUCopy : 1;  // Offset: 82 Size: 1
	char pad_83[5];  // Offset: 83 Size: 5



 // Functions 
 public:
}; 
 
 //ScriptStruct Landscape.ForeignControlPointData Size 1
class FForeignControlPointData
{

 public: 
	char pad_0[1];  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct Landscape.LandscapeInfoLayerSettings Size 16
class FLandscapeInfoLayerSettings
{

 public: 
	struct ULandscapeLayerInfoObject* LayerInfoObj;  // Offset: 0 Size: 8
	struct FName LayerName;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct Landscape.LandscapeMaterialTextureStreamingInfo Size 12
class FLandscapeMaterialTextureStreamingInfo
{

 public: 
	struct FName TextureName;  // Offset: 0 Size: 8
	float TexelFactor;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct Landscape.LayerBlendInput Size 72
class FLayerBlendInput
{

 public: 
	struct FName LayerName;  // Offset: 0 Size: 8
	enum class ELandscapeLayerBlendType BlendType;  // Offset: 8 Size: 1
	char pad_9[3];  // Offset: 9 Size: 3
	struct FExpressionInput LayerInput;  // Offset: 12 Size: 20
	struct FExpressionInput HeightInput;  // Offset: 32 Size: 20
	float PreviewWeight;  // Offset: 52 Size: 4
	struct FVector ConstLayerInput;  // Offset: 56 Size: 12
	float ConstHeightInput;  // Offset: 68 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct Landscape.LandscapeProxyMaterialOverride Size 16
class FLandscapeProxyMaterialOverride
{

 public: 
	struct FPerPlatformInt LODIndex;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct UMaterialInterface* Material;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct Landscape.LandscapeImportLayerInfo Size 1
class FLandscapeImportLayerInfo
{

 public: 
	char pad_0[1];  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function Landscape.LandscapeHeightfieldCollisionComponent.GetRenderComponent Size 8
class FGetRenderComponent
{

 public: 
	struct ULandscapeComponent* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct Landscape.LandscapeLayerStruct Size 8
class FLandscapeLayerStruct
{

 public: 
	struct ULandscapeLayerInfoObject* LayerInfoObj;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct Landscape.LandscapeEditorLayerSettings Size 1
class FLandscapeEditorLayerSettings
{

 public: 
	char pad_0[1];  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function Landscape.LandscapeSplinesComponent.GetSplineMeshComponents Size 16
class FGetSplineMeshComponents
{

 public: 
	struct TArray<struct USplineMeshComponent*> ReturnValue;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct Landscape.LandscapeSplineConnection Size 16
class FLandscapeSplineConnection
{

 public: 
	struct ULandscapeSplineSegment* Segment;  // Offset: 0 Size: 8
	char End : 1;  // Offset: 8 Size: 1
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	char pad_9[8];  // Offset: 9 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct Landscape.ForeignWorldSplineData Size 1
class FForeignWorldSplineData
{

 public: 
	char pad_0[1];  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct Landscape.ForeignSplineSegmentData Size 1
class FForeignSplineSegmentData
{

 public: 
	char pad_0[1];  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct Landscape.LandscapeSplineMeshEntry Size 56
class FLandscapeSplineMeshEntry
{

 public: 
	struct UStaticMesh* Mesh;  // Offset: 0 Size: 8
	struct TArray<struct UMaterialInterface*> MaterialOverrides;  // Offset: 8 Size: 16
	char bCenterH : 1;  // Offset: 24 Size: 1
	char pad_24_1 : 7;  // Offset: 24 Size: 1
	char pad_25[4];  // Offset: 25 Size: 4
	struct FVector2D CenterAdjust;  // Offset: 28 Size: 8
	char bScaleToWidth : 1;  // Offset: 36 Size: 1
	char pad_36_1 : 7;  // Offset: 36 Size: 1
	char pad_37[4];  // Offset: 37 Size: 4
	struct FVector Scale;  // Offset: 40 Size: 12
	enum class LandscapeSplineMeshOrientation Orientation;  // Offset: 52 Size: 1
	enum class ESplineMeshAxis ForwardAxis;  // Offset: 53 Size: 1
	enum class ESplineMeshAxis UpAxis;  // Offset: 54 Size: 1
	char pad_55[1];  // Offset: 55 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct Landscape.LandscapeSplineSegmentConnection Size 24
class FLandscapeSplineSegmentConnection
{

 public: 
	struct ULandscapeSplineControlPoint* ControlPoint;  // Offset: 0 Size: 8
	float TangentLen;  // Offset: 8 Size: 4
	struct FName SocketName;  // Offset: 12 Size: 8
	char pad_20[4];  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct Landscape.LandscapeSplineInterpPoint Size 112
class FLandscapeSplineInterpPoint
{

 public: 
	struct FVector Center;  // Offset: 0 Size: 12
	struct FVector Left;  // Offset: 12 Size: 12
	struct FVector Right;  // Offset: 24 Size: 12
	struct FVector FalloffLeft;  // Offset: 36 Size: 12
	struct FVector FalloffRight;  // Offset: 48 Size: 12
	struct FVector LayerLeft;  // Offset: 60 Size: 12
	struct FVector LayerRight;  // Offset: 72 Size: 12
	struct FVector LayerFalloffLeft;  // Offset: 84 Size: 12
	struct FVector LayerFalloffRight;  // Offset: 96 Size: 12
	float StartEndFalloff;  // Offset: 108 Size: 4



 // Functions 
 public:
}; 
 
 //Function Landscape.LandscapeBlueprintBrushBase.GetBlueprintRenderDependencies Size 16
class FGetBlueprintRenderDependencies
{

 public: 
	struct TArray<struct UObject*> OutStreamableAssets;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function Landscape.LandscapeProxy.LandscapeExportHeightmapToRenderTarget Size 16
class FLandscapeExportHeightmapToRenderTarget
{

 public: 
	struct UTextureRenderTarget2D* InRenderTarget;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool InExportHeightIntoRGChannel : 1;  // Offset: 8 Size: 1
	char pad_9_1 : 7;  // Offset: 9 Size: 1
	bool InExportLandscapeProxies : 1;  // Offset: 9 Size: 1
	char pad_10_1 : 7;  // Offset: 10 Size: 1
	bool ReturnValue : 1;  // Offset: 10 Size: 1
	char pad_11[5];  // Offset: 11 Size: 5



 // Functions 
 public:
}; 
 
 //ScriptStruct Landscape.GrassInput Size 40
class FGrassInput
{

 public: 
	struct FName Name;  // Offset: 0 Size: 8
	struct ULandscapeGrassType* GrassType;  // Offset: 8 Size: 8
	struct FExpressionInput Input;  // Offset: 16 Size: 20
	char pad_36[4];  // Offset: 36 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct Landscape.PhysicalMaterialInput Size 32
class FPhysicalMaterialInput
{

 public: 
	struct UPhysicalMaterial* PhysicalMaterial;  // Offset: 0 Size: 8
	struct FExpressionInput Input;  // Offset: 8 Size: 20
	char pad_28[4];  // Offset: 28 Size: 4



 // Functions 
 public:
}; 
 
 //Function Landscape.LandscapeProxy.ChangeComponentScreenSizeToUseSubSections Size 4
class FChangeComponentScreenSizeToUseSubSections
{

 public: 
	float InComponentScreenSizeToUseSubSections;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Landscape.LandscapeProxy.ChangeLODDistanceFactor Size 4
class FChangeLODDistanceFactor
{

 public: 
	float InLODDistanceFactor;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSize Size 4
class FChangeTessellationComponentScreenSize
{

 public: 
	float InTessellationComponentScreenSize;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSizeFalloff Size 4
class FChangeTessellationComponentScreenSizeFalloff
{

 public: 
	float InUseTessellationComponentScreenSizeFalloff;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Landscape.LandscapeBlueprintBrushBase.Render Size 32
class FRender
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool InIsHeightmap : 1;  // Offset: 0 Size: 1
	char pad_1[7];  // Offset: 1 Size: 7
	struct UTextureRenderTarget2D* InCombinedResult;  // Offset: 8 Size: 8
	struct FName InWeightmapLayerName;  // Offset: 16 Size: 8
	struct UTextureRenderTarget2D* ReturnValue;  // Offset: 24 Size: 8



 // Functions 
 public:
}; 
 
 //Function Landscape.LandscapeProxy.ChangeUseTessellationComponentScreenSizeFalloff Size 1
class FChangeUseTessellationComponentScreenSizeFalloff
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool InComponentScreenSizeToUseSubSections : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function Landscape.LandscapeProxy.EditorSetLandscapeMaterial Size 8
class FEditorSetLandscapeMaterial
{

 public: 
	struct UMaterialInterface* NewLandscapeMaterial;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function Landscape.LandscapeProxy.SetLandscapeMaterialVectorParameterValue Size 24
class FSetLandscapeMaterialVectorParameterValue
{

 public: 
	struct FName ParameterName;  // Offset: 0 Size: 8
	struct FLinearColor Value;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightAtLocation Size 32
class FEditorGetPaintLayerWeightAtLocation
{

 public: 
	struct FVector InLocation;  // Offset: 0 Size: 12
	char pad_12[4];  // Offset: 12 Size: 4
	struct ULandscapeLayerInfoObject* PaintLayer;  // Offset: 16 Size: 8
	float ReturnValue;  // Offset: 24 Size: 4
	char pad_28[4];  // Offset: 28 Size: 4



 // Functions 
 public:
}; 
 
 //Function Landscape.LandscapeBlueprintBrushBase.Initialize Size 64
class FInitialize
{

 public: 
	struct FTransform InLandscapeTransform;  // Offset: 0 Size: 48
	struct FIntPoint InLandscapeSize;  // Offset: 48 Size: 8
	struct FIntPoint InLandscapeRenderTargetSize;  // Offset: 56 Size: 8



 // Functions 
 public:
}; 
 
 //Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightByNameAtLocation Size 24
class FEditorGetPaintLayerWeightByNameAtLocation
{

 public: 
	struct FVector InLocation;  // Offset: 0 Size: 12
	struct FName InPaintLayerName;  // Offset: 12 Size: 8
	float ReturnValue;  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 //Function Landscape.LandscapeComponent.GetMaterialInstanceDynamic Size 16
class FGetMaterialInstanceDynamic
{

 public: 
	int32_t InIndex;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct UMaterialInstanceDynamic* ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 