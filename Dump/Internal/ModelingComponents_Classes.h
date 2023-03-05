#pragma once 
#include <ModelingComponents_Structs.h>
 
 
 
//Class ModelingComponents.CollectSurfacePathMechanic Size 1360
// Inherited 48 bytes 
class UCollectSurfacePathMechanic : public UInteractionMechanic
{

 public: 
	char pad_48[1312];  // Offset: 48 Size: 1312



 // Functions 
 public:
}; 
 
 


//Class ModelingComponents.BaseCreateFromSelectedToolBuilder Size 48
// Inherited 40 bytes 
class UBaseCreateFromSelectedToolBuilder : public UInteractiveToolBuilder
{

 public: 
	char pad_40[8];  // Offset: 40 Size: 8



 // Functions 
 public:
}; 
 
 


//Class ModelingComponents.MultiTransformer Size 320
// Inherited 40 bytes 
class UMultiTransformer : public UObject
{

 public: 
	char pad_40[72];  // Offset: 40 Size: 72
	struct UInteractiveGizmoManager* GizmoManager;  // Offset: 112 Size: 8
	char pad_120[104];  // Offset: 120 Size: 104
	struct UTransformGizmo* TransformGizmo;  // Offset: 224 Size: 8
	struct UTransformProxy* TransformProxy;  // Offset: 232 Size: 8
	char pad_240[80];  // Offset: 240 Size: 80



 // Functions 
 public:
}; 
 
 


//Class ModelingComponents.OnAcceptHandleSourcesProperties Size 104
// Inherited 96 bytes 
class UOnAcceptHandleSourcesProperties : public UInteractiveToolPropertySet
{

 public: 
	enum class EHandleSourcesMethod OnToolAccept;  // Offset: 96 Size: 1
	char pad_97[7];  // Offset: 97 Size: 7



 // Functions 
 public:
}; 
 
 


//Class ModelingComponents.DynamicMeshReplacementChangeTarget Size 88
// Inherited 40 bytes 
class UDynamicMeshReplacementChangeTarget : public UObject
{

 public: 
	char pad_40[48];  // Offset: 40 Size: 48



 // Functions 
 public:
}; 
 
 


//Class ModelingComponents.BaseCreateFromSelectedHandleSourceProperties Size 144
// Inherited 104 bytes 
class UBaseCreateFromSelectedHandleSourceProperties : public UOnAcceptHandleSourcesProperties
{

 public: 
	enum class EBaseCreateFromSelectedTargetType WriteOutputTo;  // Offset: 104 Size: 4
	char pad_108[4];  // Offset: 108 Size: 4
	struct FString OutputName;  // Offset: 112 Size: 16
	struct FString OutputAsset;  // Offset: 128 Size: 16



 // Functions 
 public:
}; 
 
 


//Class ModelingComponents.TransformInputsToolProperties Size 104
// Inherited 96 bytes 
class UTransformInputsToolProperties : public UInteractiveToolPropertySet
{

 public: 
	char pad_96_1 : 7;  // Offset: 96 Size: 1
	bool bShowTransformUI : 1;  // Offset: 96 Size: 1
	char pad_97_1 : 7;  // Offset: 97 Size: 1
	bool bSnapToWorldGrid : 1;  // Offset: 97 Size: 1
	char pad_98[6];  // Offset: 98 Size: 6



 // Functions 
 public:
}; 
 
 


//Class ModelingComponents.BaseVoxelTool Size 264
// Inherited 240 bytes 
class UBaseVoxelTool : public UBaseCreateFromSelectedTool
{

 public: 
	struct UVoxelProperties* VoxProperties;  // Offset: 240 Size: 8
	char pad_248[16];  // Offset: 248 Size: 16



 // Functions 
 public:
}; 
 
 


//Class ModelingComponents.BaseMeshProcessingTool Size 1024
// Inherited 136 bytes 
class UBaseMeshProcessingTool : public USingleSelectionTool
{

 public: 
	char pad_136[40];  // Offset: 136 Size: 40
	struct UMeshOpPreviewWithBackgroundCompute* preview;  // Offset: 176 Size: 8
	char pad_184[840];  // Offset: 184 Size: 840



 // Functions 
 public:
}; 
 
 


//Class ModelingComponents.BaseMeshProcessingToolBuilder Size 40
// Inherited 40 bytes 
class UBaseMeshProcessingToolBuilder : public UInteractiveToolBuilder
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class ModelingComponents.OctreeDynamicMeshComponent Size 1536
// Inherited 1264 bytes 
class UOctreeDynamicMeshComponent : public UBaseDynamicMeshComponent
{

 public: 
	char pad_1264[24];  // Offset: 1264 Size: 24
	char pad_1288_1 : 7;  // Offset: 1288 Size: 1
	bool bExplicitShowWireframe : 1;  // Offset: 1288 Size: 1
	char pad_1289[247];  // Offset: 1289 Size: 247



 // Functions 
 public:
}; 
 
 


//Class ModelingComponents.BaseCreateFromSelectedTool Size 240
// Inherited 144 bytes 
class UBaseCreateFromSelectedTool : public UMultiSelectionTool
{

 public: 
	char pad_144[8];  // Offset: 144 Size: 8
	struct UTransformInputsToolProperties* TransformProperties;  // Offset: 152 Size: 8
	struct UBaseCreateFromSelectedHandleSourceProperties* HandleSourcesProperties;  // Offset: 160 Size: 8
	struct UMeshOpPreviewWithBackgroundCompute* preview;  // Offset: 168 Size: 8
	struct TArray<struct UTransformProxy*> TransformProxies;  // Offset: 176 Size: 16
	struct TArray<struct UTransformGizmo*> TransformGizmos;  // Offset: 192 Size: 16
	struct TArray<struct FVector> TransformInitialScales;  // Offset: 208 Size: 16
	char pad_224[16];  // Offset: 224 Size: 16



 // Functions 
 public:
}; 
 
 


//Class ModelingComponents.PlaneDistanceFromHitMechanic Size 1184
// Inherited 48 bytes 
class UPlaneDistanceFromHitMechanic : public UInteractionMechanic
{

 public: 
	char pad_48[1136];  // Offset: 48 Size: 1136



 // Functions 
 public:
}; 
 
 


//Class ModelingComponents.BaseDynamicMeshComponent Size 1264
// Inherited 1200 bytes 
class UBaseDynamicMeshComponent : public UMeshComponent
{

 public: 
	char pad_1200[64];  // Offset: 1200 Size: 64



 // Functions 
 public:
}; 
 
 


//Class ModelingComponents.SpaceCurveDeformationMechanic Size 688
// Inherited 48 bytes 
class USpaceCurveDeformationMechanic : public UInteractionMechanic
{

 public: 
	char pad_48[16];  // Offset: 48 Size: 16
	struct USingleClickInputBehavior* ClickBehavior;  // Offset: 64 Size: 8
	struct UMouseHoverBehavior* HoverBehavior;  // Offset: 72 Size: 8
	char pad_80[24];  // Offset: 80 Size: 24
	struct USpaceCurveDeformationMechanicPropertySet* TransformProperties;  // Offset: 104 Size: 8
	char pad_112[248];  // Offset: 112 Size: 248
	struct APreviewGeometryActor* PreviewGeometryActor;  // Offset: 360 Size: 8
	struct UPointSetComponent* RenderPoints;  // Offset: 368 Size: 8
	struct ULineSetComponent* RenderSegments;  // Offset: 376 Size: 8
	char pad_384[56];  // Offset: 384 Size: 56
	struct UTransformProxy* PointTransformProxy;  // Offset: 440 Size: 8
	struct UTransformGizmo* PointTransformGizmo;  // Offset: 448 Size: 8
	char pad_456[232];  // Offset: 456 Size: 232



 // Functions 
 public:
}; 
 
 


//Class ModelingComponents.ConstructionPlaneMechanic Size 240
// Inherited 48 bytes 
class UConstructionPlaneMechanic : public UInteractionMechanic
{

 public: 
	char pad_48[152];  // Offset: 48 Size: 152
	struct UTransformGizmo* PlaneTransformGizmo;  // Offset: 200 Size: 8
	struct UTransformProxy* PlaneTransformProxy;  // Offset: 208 Size: 8
	char pad_216[16];  // Offset: 216 Size: 16
	struct USingleClickInputBehavior* ClickToSetPlaneBehavior;  // Offset: 232 Size: 8



 // Functions 
 public:
}; 
 
 


//Class ModelingComponents.SpaceCurveDeformationMechanicPropertySet Size 112
// Inherited 96 bytes 
class USpaceCurveDeformationMechanicPropertySet : public UInteractiveToolPropertySet
{

 public: 
	enum class ESpaceCurveControlPointTransformMode TransformMode;  // Offset: 96 Size: 4
	enum class ESpaceCurveControlPointOriginMode TransformOrigin;  // Offset: 100 Size: 4
	float Softness;  // Offset: 104 Size: 4
	enum class ESpaceCurveControlPointFalloffType SoftFalloff;  // Offset: 108 Size: 4



 // Functions 
 public:
}; 
 
 


//Class ModelingComponents.CurveControlPointsMechanic Size 1616
// Inherited 48 bytes 
class UCurveControlPointsMechanic : public UInteractionMechanic
{

 public: 
	char pad_48[16];  // Offset: 48 Size: 16
	struct USingleClickInputBehavior* ClickBehavior;  // Offset: 64 Size: 8
	struct UMouseHoverBehavior* HoverBehavior;  // Offset: 72 Size: 8
	char pad_80[1176];  // Offset: 80 Size: 1176
	struct APreviewGeometryActor* PreviewGeometryActor;  // Offset: 1256 Size: 8
	struct UPointSetComponent* DrawnControlPoints;  // Offset: 1264 Size: 8
	struct ULineSetComponent* DrawnControlSegments;  // Offset: 1272 Size: 8
	struct UPointSetComponent* PreviewPoint;  // Offset: 1280 Size: 8
	struct ULineSetComponent* PreviewSegment;  // Offset: 1288 Size: 8
	char pad_1296[120];  // Offset: 1296 Size: 120
	struct UTransformProxy* PointTransformProxy;  // Offset: 1416 Size: 8
	struct UTransformGizmo* PointTransformGizmo;  // Offset: 1424 Size: 8
	char pad_1432[184];  // Offset: 1432 Size: 184



 // Functions 
 public:
}; 
 
 


//Class ModelingComponents.LineSetComponent Size 1296
// Inherited 1200 bytes 
class ULineSetComponent : public UMeshComponent
{

 public: 
	struct UMaterialInterface* LineMaterial;  // Offset: 1192 Size: 8
	struct FBoxSphereBounds Bounds;  // Offset: 1200 Size: 28
	char pad_1236_1 : 7;  // Offset: 1236 Size: 1
	bool bBoundsDirty : 1;  // Offset: 1228 Size: 1
	char pad_1237[59];  // Offset: 1237 Size: 59



 // Functions 
 public:
}; 
 
 


//Class ModelingComponents.MeshCommandChangeTarget Size 40
// Inherited 40 bytes 
class UMeshCommandChangeTarget : public UInterface
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class ModelingComponents.MeshOpPreviewWithBackgroundCompute Size 144
// Inherited 40 bytes 
class UMeshOpPreviewWithBackgroundCompute : public UObject
{

 public: 
	char pad_40[48];  // Offset: 40 Size: 48
	struct UPreviewMesh* PreviewMesh;  // Offset: 88 Size: 8
	struct TArray<struct UMaterialInterface*> StandardMaterials;  // Offset: 96 Size: 16
	struct UMaterialInterface* OverrideMaterial;  // Offset: 112 Size: 8
	struct UMaterialInterface* WorkingMaterial;  // Offset: 120 Size: 8
	char pad_128[16];  // Offset: 128 Size: 16



 // Functions 
 public:
}; 
 
 


//Class ModelingComponents.VoxelProperties Size 120
// Inherited 96 bytes 
class UVoxelProperties : public UInteractiveToolPropertySet
{

 public: 
	int32_t VoxelCount;  // Offset: 96 Size: 4
	char pad_100_1 : 7;  // Offset: 100 Size: 1
	bool bAutoSimplify : 1;  // Offset: 100 Size: 1
	char pad_101_1 : 7;  // Offset: 101 Size: 1
	bool bRemoveInternalSurfaces : 1;  // Offset: 101 Size: 1
	char pad_102[2];  // Offset: 102 Size: 2
	double SimplifyMaxErrorFactor;  // Offset: 104 Size: 8
	double CubeRootMinComponentVolume;  // Offset: 112 Size: 8



 // Functions 
 public:
}; 
 
 


//Class ModelingComponents.MeshVertexCommandChangeTarget Size 40
// Inherited 40 bytes 
class UMeshVertexCommandChangeTarget : public UInterface
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class ModelingComponents.MeshReplacementCommandChangeTarget Size 40
// Inherited 40 bytes 
class UMeshReplacementCommandChangeTarget : public UInterface
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class ModelingComponents.PointSetComponent Size 1296
// Inherited 1200 bytes 
class UPointSetComponent : public UMeshComponent
{

 public: 
	struct UMaterialInterface* PointMaterial;  // Offset: 1192 Size: 8
	struct FBoxSphereBounds Bounds;  // Offset: 1200 Size: 28
	char pad_1236_1 : 7;  // Offset: 1236 Size: 1
	bool bBoundsDirty : 1;  // Offset: 1228 Size: 1
	char pad_1237[59];  // Offset: 1237 Size: 59



 // Functions 
 public:
}; 
 
 


//Class ModelingComponents.WeightMapSetProperties Size 128
// Inherited 96 bytes 
class UWeightMapSetProperties : public UInteractiveToolPropertySet
{

 public: 
	struct FName WeightMap;  // Offset: 96 Size: 8
	struct TArray<struct FString> WeightMapsList;  // Offset: 104 Size: 16
	char pad_120_1 : 7;  // Offset: 120 Size: 1
	bool bInvertWeightMap : 1;  // Offset: 120 Size: 1
	char pad_121[7];  // Offset: 121 Size: 7



 // Functions 
 public:
	struct TArray<struct FString> GetWeightMapsFunc(); // Function ModelingComponents.WeightMapSetProperties.GetWeightMapsFunc
}; 
 
 


//Class ModelingComponents.PreviewMesh Size 224
// Inherited 40 bytes 
class UPreviewMesh : public UObject
{

 public: 
	char pad_40[24];  // Offset: 40 Size: 24
	char pad_64_1 : 7;  // Offset: 64 Size: 1
	bool bBuildSpatialDataStructure : 1;  // Offset: 64 Size: 1
	char pad_65_1 : 7;  // Offset: 65 Size: 1
	bool bDrawOnTop : 1;  // Offset: 65 Size: 1
	char pad_66[14];  // Offset: 66 Size: 14
	struct USimpleDynamicMeshComponent* DynamicMeshComponent;  // Offset: 80 Size: 8
	char pad_88[136];  // Offset: 88 Size: 136



 // Functions 
 public:
}; 
 
 


//Class ModelingComponents.PolyEditPreviewMesh Size 1232
// Inherited 224 bytes 
class UPolyEditPreviewMesh : public UPreviewMesh
{

 public: 
	char pad_224[1008];  // Offset: 224 Size: 1008



 // Functions 
 public:
}; 
 
 


//Class ModelingComponents.PolygonSelectionMechanic Size 2096
// Inherited 48 bytes 
class UPolygonSelectionMechanic : public UInteractionMechanic
{

 public: 
	char pad_48[32];  // Offset: 48 Size: 32
	struct UPolygonSelectionMechanicProperties* Properties;  // Offset: 80 Size: 8
	char pad_88[1224];  // Offset: 88 Size: 1224
	struct APreviewGeometryActor* PreviewGeometryActor;  // Offset: 1312 Size: 8
	struct UTriangleSetComponent* DrawnTriangleSetComponent;  // Offset: 1320 Size: 8
	char pad_1328[80];  // Offset: 1328 Size: 80
	struct UMaterialInterface* HighlightedFaceMaterial;  // Offset: 1408 Size: 8
	char pad_1416[680];  // Offset: 1416 Size: 680



 // Functions 
 public:
}; 
 
 


//Class ModelingComponents.PolygonSelectionMechanicProperties Size 104
// Inherited 96 bytes 
class UPolygonSelectionMechanicProperties : public UInteractiveToolPropertySet
{

 public: 
	char pad_96_1 : 7;  // Offset: 96 Size: 1
	bool bSelectFaces : 1;  // Offset: 96 Size: 1
	char pad_97_1 : 7;  // Offset: 97 Size: 1
	bool bSelectEdges : 1;  // Offset: 97 Size: 1
	char pad_98_1 : 7;  // Offset: 98 Size: 1
	bool bSelectVertices : 1;  // Offset: 98 Size: 1
	char pad_99_1 : 7;  // Offset: 99 Size: 1
	bool bSelectEdgeLoops : 1;  // Offset: 99 Size: 1
	char pad_100_1 : 7;  // Offset: 100 Size: 1
	bool bSelectEdgeRings : 1;  // Offset: 100 Size: 1
	char pad_101_1 : 7;  // Offset: 101 Size: 1
	bool bPreferProjectedElement : 1;  // Offset: 101 Size: 1
	char pad_102_1 : 7;  // Offset: 102 Size: 1
	bool bSelectDownRay : 1;  // Offset: 102 Size: 1
	char pad_103_1 : 7;  // Offset: 103 Size: 1
	bool bIgnoreOcclusion : 1;  // Offset: 103 Size: 1



 // Functions 
 public:
}; 
 
 


//Class ModelingComponents.PreviewGeometryActor Size 544
// Inherited 544 bytes 
class APreviewGeometryActor : public AInternalToolFrameworkActor
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class ModelingComponents.PreviewGeometry Size 128
// Inherited 40 bytes 
class UPreviewGeometry : public UObject
{

 public: 
	struct APreviewGeometryActor* ParentActor;  // Offset: 40 Size: 8
	struct TMap<struct FString, struct ULineSetComponent*> LineSets;  // Offset: 48 Size: 80



 // Functions 
 public:
	bool SetLineSetVisibility(struct FString LineSetIdentifier, bool bVisible); // Function ModelingComponents.PreviewGeometry.SetLineSetVisibility
	bool SetLineSetMaterial(struct FString LineSetIdentifier, struct UMaterialInterface* NewMaterial); // Function ModelingComponents.PreviewGeometry.SetLineSetMaterial
	void SetAllLineSetsMaterial(struct UMaterialInterface* Material); // Function ModelingComponents.PreviewGeometry.SetAllLineSetsMaterial
	bool RemoveLineSet(struct FString LineSetIdentifier, bool bDestroy); // Function ModelingComponents.PreviewGeometry.RemoveLineSet
	void RemoveAllLineSets(bool bDestroy); // Function ModelingComponents.PreviewGeometry.RemoveAllLineSets
	struct APreviewGeometryActor* GetActor(); // Function ModelingComponents.PreviewGeometry.GetActor
	struct ULineSetComponent* FindLineSet(struct FString LineSetIdentifier); // Function ModelingComponents.PreviewGeometry.FindLineSet
	void Disconnect(); // Function ModelingComponents.PreviewGeometry.Disconnect
	void CreateInWorld(struct UWorld* World, struct FTransform& WithTransform); // Function ModelingComponents.PreviewGeometry.CreateInWorld
	struct ULineSetComponent* AddLineSet(struct FString LineSetIdentifier); // Function ModelingComponents.PreviewGeometry.AddLineSet
}; 
 
 


//Class ModelingComponents.PreviewMeshActor Size 544
// Inherited 544 bytes 
class APreviewMeshActor : public AInternalToolFrameworkActor
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class ModelingComponents.SimpleDynamicMeshComponent Size 1600
// Inherited 1264 bytes 
class USimpleDynamicMeshComponent : public UBaseDynamicMeshComponent
{

 public: 
	enum class EDynamicMeshTangentCalcType TangentsType;  // Offset: 1264 Size: 1
	char pad_1265_1 : 7;  // Offset: 1265 Size: 1
	bool bInvalidateProxyOnChange : 1;  // Offset: 1265 Size: 1
	char pad_1266[54];  // Offset: 1266 Size: 54
	char pad_1320_1 : 7;  // Offset: 1320 Size: 1
	bool bExplicitShowWireframe : 1;  // Offset: 1320 Size: 1
	char pad_1321[71];  // Offset: 1321 Size: 71
	char pad_1392_1 : 7;  // Offset: 1392 Size: 1
	bool bDrawOnTop : 1;  // Offset: 1392 Size: 1
	char pad_1393[207];  // Offset: 1393 Size: 207



 // Functions 
 public:
}; 
 
 


//Class ModelingComponents.SpatialCurveDistanceMechanic Size 1008
// Inherited 48 bytes 
class USpatialCurveDistanceMechanic : public UInteractionMechanic
{

 public: 
	char pad_48[960];  // Offset: 48 Size: 960



 // Functions 
 public:
}; 
 
 


//Class ModelingComponents.TriangleSetComponent Size 1424
// Inherited 1200 bytes 
class UTriangleSetComponent : public UMeshComponent
{

 public: 
	struct FBoxSphereBounds Bounds;  // Offset: 1192 Size: 28
	char pad_1228_1 : 7;  // Offset: 1228 Size: 1
	bool bBoundsDirty : 1;  // Offset: 1220 Size: 1
	char pad_1229[195];  // Offset: 1229 Size: 195



 // Functions 
 public:
}; 
 
 


//Class ModelingComponents.UVLayoutPreviewProperties Size 120
// Inherited 96 bytes 
class UUVLayoutPreviewProperties : public UInteractiveToolPropertySet
{

 public: 
	char pad_96_1 : 7;  // Offset: 96 Size: 1
	bool bVisible : 1;  // Offset: 96 Size: 1
	char pad_97[3];  // Offset: 97 Size: 3
	float ScaleFactor;  // Offset: 100 Size: 4
	enum class EUVLayoutPreviewSide WhichSide;  // Offset: 104 Size: 4
	char pad_108_1 : 7;  // Offset: 108 Size: 1
	bool bShowWireframe : 1;  // Offset: 108 Size: 1
	char pad_109[3];  // Offset: 109 Size: 3
	struct FVector2D shift;  // Offset: 112 Size: 8



 // Functions 
 public:
}; 
 
 


//Class ModelingComponents.UVLayoutPreview Size 320
// Inherited 40 bytes 
class UUVLayoutPreview : public UObject
{

 public: 
	struct UUVLayoutPreviewProperties* Settings;  // Offset: 40 Size: 8
	struct UPreviewMesh* PreviewMesh;  // Offset: 48 Size: 8
	struct UTriangleSetComponent* TriangleComponent;  // Offset: 56 Size: 8
	char pad_64_1 : 7;  // Offset: 64 Size: 1
	bool bShowBackingRectangle : 1;  // Offset: 64 Size: 1
	char pad_65[7];  // Offset: 65 Size: 7
	struct UMaterialInterface* BackingRectangleMaterial;  // Offset: 72 Size: 8
	char pad_80[240];  // Offset: 80 Size: 240



 // Functions 
 public:
}; 
 
 


