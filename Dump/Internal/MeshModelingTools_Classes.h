#pragma once 
#include <MeshModelingTools_Structs.h>
 
 
 
//Class MeshModelingTools.AcceptOutputProperties Size 104
// Inherited 96 bytes 
class UAcceptOutputProperties : public UInteractiveToolPropertySet
{

 public: 
	char pad_96_1 : 7;  // Offset: 96 Size: 1
	bool bExportSeparatedPiecesAsNewMeshAssets : 1;  // Offset: 96 Size: 1
	char pad_97[7];  // Offset: 97 Size: 7



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.AddPatchToolBuilder Size 48
// Inherited 40 bytes 
class UAddPatchToolBuilder : public UInteractiveToolBuilder
{

 public: 
	char pad_40[8];  // Offset: 40 Size: 8



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.EdgeLoopInsertionOperatorFactory Size 56
// Inherited 40 bytes 
class UEdgeLoopInsertionOperatorFactory : public UObject
{

 public: 
	char pad_40[8];  // Offset: 40 Size: 8
	struct UEdgeLoopInsertionTool* Tool;  // Offset: 48 Size: 8



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.ProceduralRoundedRectangleToolProperties Size 136
// Inherited 128 bytes 
class UProceduralRoundedRectangleToolProperties : public UProceduralRectangleToolProperties
{

 public: 
	float CornerRadius;  // Offset: 128 Size: 4
	int32_t CornerSlices;  // Offset: 132 Size: 4



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.BakeTransformToolBuilder Size 48
// Inherited 40 bytes 
class UBakeTransformToolBuilder : public UInteractiveToolBuilder
{

 public: 
	char pad_40[8];  // Offset: 40 Size: 8



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.OffsetMeshTool Size 1056
// Inherited 1024 bytes 
class UOffsetMeshTool : public UBaseMeshProcessingTool
{

 public: 
	struct UOffsetMeshToolProperties* OffsetProperties;  // Offset: 1024 Size: 8
	struct UIterativeOffsetProperties* IterativeProperties;  // Offset: 1032 Size: 8
	struct UImplicitOffsetProperties* ImplicitProperties;  // Offset: 1040 Size: 8
	struct UOffsetWeightMapSetProperties* WeightMapProperties;  // Offset: 1048 Size: 8



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.MeshAttributePaintEditActions Size 104
// Inherited 96 bytes 
class UMeshAttributePaintEditActions : public UInteractiveToolPropertySet
{

 public: 
	char pad_96[8];  // Offset: 96 Size: 8



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.AddPatchToolProperties Size 112
// Inherited 96 bytes 
class UAddPatchToolProperties : public UInteractiveToolPropertySet
{

 public: 
	float Width;  // Offset: 96 Size: 4
	float Rotation;  // Offset: 100 Size: 4
	int32_t Subdivisions;  // Offset: 104 Size: 4
	float shift;  // Offset: 108 Size: 4



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.AddTorusPrimitiveTool Size 240
// Inherited 240 bytes 
class UAddTorusPrimitiveTool : public UAddPrimitiveTool
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.DrawPolyPathToolBuilder Size 56
// Inherited 48 bytes 
class UDrawPolyPathToolBuilder : public UMeshSurfacePointToolBuilder
{

 public: 
	char pad_48[8];  // Offset: 48 Size: 8



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.AddPatchTool Size 256
// Inherited 136 bytes 
class UAddPatchTool : public USingleClickTool
{

 public: 
	char pad_136[8];  // Offset: 136 Size: 8
	struct UAddPatchToolProperties* ShapeSettings;  // Offset: 144 Size: 8
	struct UNewMeshMaterialProperties* MaterialProperties;  // Offset: 152 Size: 8
	struct UPreviewMesh* PreviewMesh;  // Offset: 160 Size: 8
	char pad_168[88];  // Offset: 168 Size: 88



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.ProceduralPuncturedDiscToolProperties Size 136
// Inherited 128 bytes 
class UProceduralPuncturedDiscToolProperties : public UProceduralDiscToolProperties
{

 public: 
	float HoleRadius;  // Offset: 128 Size: 4
	char pad_132[4];  // Offset: 132 Size: 4



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.AddPrimitiveToolBuilder Size 56
// Inherited 40 bytes 
class UAddPrimitiveToolBuilder : public UInteractiveToolBuilder
{

 public: 
	char pad_40[16];  // Offset: 40 Size: 16



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.ProceduralShapeToolProperties Size 112
// Inherited 96 bytes 
class UProceduralShapeToolProperties : public UInteractiveToolPropertySet
{

 public: 
	char pad_96_1 : 7;  // Offset: 96 Size: 1
	bool bInstanceIfPossible : 1;  // Offset: 96 Size: 1
	enum class EMakeMeshPolygroupMode PolygroupMode;  // Offset: 97 Size: 1
	enum class EMakeMeshPlacementType PlaceMode;  // Offset: 98 Size: 1
	char pad_99_1 : 7;  // Offset: 99 Size: 1
	bool bSnapToGrid : 1;  // Offset: 99 Size: 1
	enum class EMakeMeshPivotLocation PivotLocation;  // Offset: 100 Size: 1
	char pad_101[3];  // Offset: 101 Size: 3
	float Rotation;  // Offset: 104 Size: 4
	char pad_108_1 : 7;  // Offset: 108 Size: 1
	bool bAlignShapeToPlacementSurface : 1;  // Offset: 108 Size: 1
	char pad_109[3];  // Offset: 109 Size: 3



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.EditNormalsAdvancedProperties Size 96
// Inherited 96 bytes 
class UEditNormalsAdvancedProperties : public UInteractiveToolPropertySet
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.BakedOcclusionMapVisualizationProperties Size 104
// Inherited 96 bytes 
class UBakedOcclusionMapVisualizationProperties : public UInteractiveToolPropertySet
{

 public: 
	float BaseGrayLevel;  // Offset: 96 Size: 4
	float OcclusionMultiplier;  // Offset: 100 Size: 4



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.ProceduralBoxToolProperties Size 136
// Inherited 128 bytes 
class UProceduralBoxToolProperties : public UProceduralRectangleToolProperties
{

 public: 
	float Height;  // Offset: 128 Size: 4
	int32_t HeightSubdivisions;  // Offset: 132 Size: 4



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.MeshInspectorProperties Size 120
// Inherited 96 bytes 
class UMeshInspectorProperties : public UInteractiveToolPropertySet
{

 public: 
	char pad_96_1 : 7;  // Offset: 96 Size: 1
	bool bWireframe : 1;  // Offset: 96 Size: 1
	char pad_97_1 : 7;  // Offset: 97 Size: 1
	bool bBoundaryEdges : 1;  // Offset: 97 Size: 1
	char pad_98_1 : 7;  // Offset: 98 Size: 1
	bool bBowtieVertices : 1;  // Offset: 98 Size: 1
	char pad_99_1 : 7;  // Offset: 99 Size: 1
	bool bPolygonBorders : 1;  // Offset: 99 Size: 1
	char pad_100_1 : 7;  // Offset: 100 Size: 1
	bool bUVSeams : 1;  // Offset: 100 Size: 1
	char pad_101_1 : 7;  // Offset: 101 Size: 1
	bool bUVBowties : 1;  // Offset: 101 Size: 1
	char pad_102_1 : 7;  // Offset: 102 Size: 1
	bool bNormalSeams : 1;  // Offset: 102 Size: 1
	char pad_103_1 : 7;  // Offset: 103 Size: 1
	bool bNormalVectors : 1;  // Offset: 103 Size: 1
	char pad_104_1 : 7;  // Offset: 104 Size: 1
	bool bTangentVectors : 1;  // Offset: 104 Size: 1
	char pad_105[3];  // Offset: 105 Size: 3
	float NormalLength;  // Offset: 108 Size: 4
	float TangentLength;  // Offset: 112 Size: 4
	char pad_116[4];  // Offset: 116 Size: 4



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.DrawAndRevolveToolBuilder Size 48
// Inherited 40 bytes 
class UDrawAndRevolveToolBuilder : public UInteractiveToolBuilder
{

 public: 
	char pad_40[8];  // Offset: 40 Size: 8



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.BakeTransformTool Size 184
// Inherited 144 bytes 
class UBakeTransformTool : public UMultiSelectionTool
{

 public: 
	struct UBakeTransformToolProperties* BasicProperties;  // Offset: 144 Size: 8
	char pad_152[32];  // Offset: 152 Size: 32



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.LastActorInfo Size 88
// Inherited 40 bytes 
class ULastActorInfo : public UObject
{

 public: 
	char pad_40[16];  // Offset: 40 Size: 16
	struct AActor* Actor;  // Offset: 56 Size: 8
	struct UStaticMesh* StaticMesh;  // Offset: 64 Size: 8
	struct UProceduralShapeToolProperties* ShapeSettings;  // Offset: 72 Size: 8
	struct UNewMeshMaterialProperties* MaterialProperties;  // Offset: 80 Size: 8



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.ProceduralRectangleToolProperties Size 128
// Inherited 112 bytes 
class UProceduralRectangleToolProperties : public UProceduralShapeToolProperties
{

 public: 
	float Width;  // Offset: 112 Size: 4
	float Depth;  // Offset: 116 Size: 4
	int32_t WidthSubdivisions;  // Offset: 120 Size: 4
	int32_t DepthSubdivisions;  // Offset: 124 Size: 4



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.CSGMeshesTool Size 288
// Inherited 240 bytes 
class UCSGMeshesTool : public UBaseCreateFromSelectedTool
{

 public: 
	struct UCSGMeshesToolProperties* CSGProperties;  // Offset: 240 Size: 8
	char pad_248[16];  // Offset: 248 Size: 16
	struct ULineSetComponent* DrawnLineSet;  // Offset: 264 Size: 8
	char pad_272[16];  // Offset: 272 Size: 16



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.ProceduralDiscToolProperties Size 128
// Inherited 112 bytes 
class UProceduralDiscToolProperties : public UProceduralShapeToolProperties
{

 public: 
	float Radius;  // Offset: 112 Size: 4
	int32_t RadialSlices;  // Offset: 116 Size: 4
	int32_t RadialSubdivisions;  // Offset: 120 Size: 4
	char pad_124[4];  // Offset: 124 Size: 4



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.DisplaceMeshPerlinNoiseProperties Size 112
// Inherited 96 bytes 
class UDisplaceMeshPerlinNoiseProperties : public UInteractiveToolPropertySet
{

 public: 
	struct TArray<struct FPerlinLayerProperties> PerlinLayerProperties;  // Offset: 96 Size: 16



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.AddPrimitiveTool Size 240
// Inherited 136 bytes 
class UAddPrimitiveTool : public USingleClickTool
{

 public: 
	char pad_136[8];  // Offset: 136 Size: 8
	struct UProceduralShapeToolProperties* ShapeSettings;  // Offset: 144 Size: 8
	struct UNewMeshMaterialProperties* MaterialProperties;  // Offset: 152 Size: 8
	struct UPreviewMesh* PreviewMesh;  // Offset: 160 Size: 8
	struct ULastActorInfo* LastGenerated;  // Offset: 168 Size: 8
	struct FString AssetName;  // Offset: 176 Size: 16
	char pad_192[48];  // Offset: 192 Size: 48



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.ProceduralTorusToolProperties Size 128
// Inherited 112 bytes 
class UProceduralTorusToolProperties : public UProceduralShapeToolProperties
{

 public: 
	float MajorRadius;  // Offset: 112 Size: 4
	float MinorRadius;  // Offset: 116 Size: 4
	int32_t TubeSlices;  // Offset: 120 Size: 4
	int32_t CrossSectionSlices;  // Offset: 124 Size: 4



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.ProceduralCylinderToolProperties Size 128
// Inherited 112 bytes 
class UProceduralCylinderToolProperties : public UProceduralShapeToolProperties
{

 public: 
	float Radius;  // Offset: 112 Size: 4
	float Height;  // Offset: 116 Size: 4
	int32_t RadialSlices;  // Offset: 120 Size: 4
	int32_t HeightSubdivisions;  // Offset: 124 Size: 4



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.BakeTransformToolProperties Size 104
// Inherited 96 bytes 
class UBakeTransformToolProperties : public UInteractiveToolPropertySet
{

 public: 
	char pad_96_1 : 7;  // Offset: 96 Size: 1
	bool bBakeRotation : 1;  // Offset: 96 Size: 1
	enum class EBakeScaleMethod BakeScale;  // Offset: 97 Size: 1
	char pad_98_1 : 7;  // Offset: 98 Size: 1
	bool bRecenterPivot : 1;  // Offset: 98 Size: 1
	char pad_99[5];  // Offset: 99 Size: 5



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.PhysicsObjectToolPropertySet Size 184
// Inherited 96 bytes 
class UPhysicsObjectToolPropertySet : public UInteractiveToolPropertySet
{

 public: 
	struct FString ObjectName;  // Offset: 96 Size: 16
	enum class ECollisionGeometryMode CollisionType;  // Offset: 112 Size: 4
	char pad_116[4];  // Offset: 116 Size: 4
	struct TArray<struct FPhysicsSphereData> Spheres;  // Offset: 120 Size: 16
	struct TArray<struct FPhysicsBoxData> Boxes;  // Offset: 136 Size: 16
	struct TArray<struct FPhysicsCapsuleData> Capsules;  // Offset: 152 Size: 16
	struct TArray<struct FPhysicsConvexData> Convexes;  // Offset: 168 Size: 16



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.ProceduralConeToolProperties Size 128
// Inherited 112 bytes 
class UProceduralConeToolProperties : public UProceduralShapeToolProperties
{

 public: 
	float Radius;  // Offset: 112 Size: 4
	float Height;  // Offset: 116 Size: 4
	int32_t RadialSlices;  // Offset: 120 Size: 4
	int32_t HeightSubdivisions;  // Offset: 124 Size: 4



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.ProceduralArrowToolProperties Size 136
// Inherited 112 bytes 
class UProceduralArrowToolProperties : public UProceduralShapeToolProperties
{

 public: 
	float ShaftRadius;  // Offset: 112 Size: 4
	float ShaftHeight;  // Offset: 116 Size: 4
	float HeadRadius;  // Offset: 120 Size: 4
	float HeadHeight;  // Offset: 124 Size: 4
	int32_t RadialSlices;  // Offset: 128 Size: 4
	int32_t TotalSubdivisions;  // Offset: 132 Size: 4



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.EditMeshPolygonsToolActionPropertySet Size 104
// Inherited 96 bytes 
class UEditMeshPolygonsToolActionPropertySet : public UInteractiveToolPropertySet
{

 public: 
	char pad_96[8];  // Offset: 96 Size: 8



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.ProceduralSphereToolProperties Size 128
// Inherited 112 bytes 
class UProceduralSphereToolProperties : public UProceduralShapeToolProperties
{

 public: 
	float Radius;  // Offset: 112 Size: 4
	int32_t LatitudeSlices;  // Offset: 116 Size: 4
	int32_t LongitudeSlices;  // Offset: 120 Size: 4
	char pad_124[4];  // Offset: 124 Size: 4



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.ProceduralSphericalBoxToolProperties Size 120
// Inherited 112 bytes 
class UProceduralSphericalBoxToolProperties : public UProceduralShapeToolProperties
{

 public: 
	float Radius;  // Offset: 112 Size: 4
	int32_t Subdivisions;  // Offset: 116 Size: 4



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.PositionPlaneGizmoBuilder Size 40
// Inherited 40 bytes 
class UPositionPlaneGizmoBuilder : public UInteractiveGizmoBuilder
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.AddBoxPrimitiveTool Size 240
// Inherited 240 bytes 
class UAddBoxPrimitiveTool : public UAddPrimitiveTool
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.AddCylinderPrimitiveTool Size 240
// Inherited 240 bytes 
class UAddCylinderPrimitiveTool : public UAddPrimitiveTool
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.CSGMeshesToolBuilder Size 48
// Inherited 48 bytes 
class UCSGMeshesToolBuilder : public UBaseCreateFromSelectedToolBuilder
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.MeshSelectionToolProperties Size 112
// Inherited 96 bytes 
class UMeshSelectionToolProperties : public UInteractiveToolPropertySet
{

 public: 
	enum class EMeshSelectionToolPrimaryMode SelectionMode;  // Offset: 96 Size: 4
	float AngleTolerance;  // Offset: 100 Size: 4
	char pad_104_1 : 7;  // Offset: 104 Size: 1
	bool bHitBackFaces : 1;  // Offset: 104 Size: 1
	char pad_105_1 : 7;  // Offset: 105 Size: 1
	bool bShowWireframe : 1;  // Offset: 105 Size: 1
	char pad_106[2];  // Offset: 106 Size: 2
	enum class EMeshFacesColorMode FaceColorMode;  // Offset: 108 Size: 4



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.AddConePrimitiveTool Size 240
// Inherited 240 bytes 
class UAddConePrimitiveTool : public UAddPrimitiveTool
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.DeformMeshPolygonsTool Size 5056
// Inherited 192 bytes 
class UDeformMeshPolygonsTool : public UMeshSurfacePointTool
{

 public: 
	char pad_192[8];  // Offset: 192 Size: 8
	struct USimpleDynamicMeshComponent* DynamicMeshComponent;  // Offset: 200 Size: 8
	struct UDeformMeshPolygonsTransformProperties* TransformProps;  // Offset: 208 Size: 8
	char pad_216[4840];  // Offset: 216 Size: 4840



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.DeformMeshPolygonsToolBuilder Size 48
// Inherited 48 bytes 
class UDeformMeshPolygonsToolBuilder : public UMeshSurfacePointToolBuilder
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.AddRectanglePrimitiveTool Size 240
// Inherited 240 bytes 
class UAddRectanglePrimitiveTool : public UAddPrimitiveTool
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.CollisionGeometryVisualizationProperties Size 112
// Inherited 96 bytes 
class UCollisionGeometryVisualizationProperties : public UInteractiveToolPropertySet
{

 public: 
	float LineThickness;  // Offset: 96 Size: 4
	char pad_100_1 : 7;  // Offset: 100 Size: 1
	bool bShowHidden : 1;  // Offset: 100 Size: 1
	char pad_101[3];  // Offset: 101 Size: 3
	struct FColor Color;  // Offset: 104 Size: 4
	char pad_108[4];  // Offset: 108 Size: 4



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.AddRoundedRectanglePrimitiveTool Size 240
// Inherited 240 bytes 
class UAddRoundedRectanglePrimitiveTool : public UAddPrimitiveTool
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.AddDiscPrimitiveTool Size 240
// Inherited 240 bytes 
class UAddDiscPrimitiveTool : public UAddPrimitiveTool
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.GroupEdgeInsertionToolBuilder Size 48
// Inherited 40 bytes 
class UGroupEdgeInsertionToolBuilder : public UInteractiveToolBuilder
{

 public: 
	char pad_40[8];  // Offset: 40 Size: 8



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.AddPuncturedDiscPrimitiveTool Size 240
// Inherited 240 bytes 
class UAddPuncturedDiscPrimitiveTool : public UAddPrimitiveTool
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.AddArrowPrimitiveTool Size 240
// Inherited 240 bytes 
class UAddArrowPrimitiveTool : public UAddPrimitiveTool
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.ConvertToPolygonsTool Size 992
// Inherited 136 bytes 
class UConvertToPolygonsTool : public USingleSelectionTool
{

 public: 
	struct UConvertToPolygonsToolProperties* Settings;  // Offset: 136 Size: 8
	struct UPreviewMesh* PreviewMesh;  // Offset: 144 Size: 8
	char pad_152[840];  // Offset: 152 Size: 840



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.AddSpherePrimitiveTool Size 240
// Inherited 240 bytes 
class UAddSpherePrimitiveTool : public UAddPrimitiveTool
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.CombineMeshesToolProperties Size 136
// Inherited 96 bytes 
class UCombineMeshesToolProperties : public UInteractiveToolPropertySet
{

 public: 
	char pad_96_1 : 7;  // Offset: 96 Size: 1
	bool bIsDuplicateMode : 1;  // Offset: 96 Size: 1
	char pad_97[3];  // Offset: 97 Size: 3
	enum class ECombineTargetType WriteOutputTo;  // Offset: 100 Size: 4
	struct FString OutputName;  // Offset: 104 Size: 16
	struct FString OutputAsset;  // Offset: 120 Size: 16



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.AlignObjectsTool Size 320
// Inherited 144 bytes 
class UAlignObjectsTool : public UMultiSelectionTool
{

 public: 
	char pad_144[8];  // Offset: 144 Size: 8
	struct UAlignObjectsToolProperties* AlignProps;  // Offset: 152 Size: 8
	char pad_160[160];  // Offset: 160 Size: 160



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.AddSphericalBoxPrimitiveTool Size 240
// Inherited 240 bytes 
class UAddSphericalBoxPrimitiveTool : public UAddPrimitiveTool
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.DisplaceMeshTextureMapProperties Size 104
// Inherited 96 bytes 
class UDisplaceMeshTextureMapProperties : public UInteractiveToolPropertySet
{

 public: 
	struct UTexture2D* DisplacementMap;  // Offset: 96 Size: 8



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.SculptMaxBrushOpProps Size 120
// Inherited 96 bytes 
class USculptMaxBrushOpProps : public UMeshSculptBrushOpProps
{

 public: 
	float Strength;  // Offset: 96 Size: 4
	float Falloff;  // Offset: 100 Size: 4
	float MaxHeight;  // Offset: 104 Size: 4
	char pad_108_1 : 7;  // Offset: 108 Size: 1
	bool bUseFixedHeight : 1;  // Offset: 108 Size: 1
	char pad_109[3];  // Offset: 109 Size: 3
	float FixedHeight;  // Offset: 112 Size: 4
	char pad_116[4];  // Offset: 116 Size: 4



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.DeformMeshPolygonsTransformProperties Size 128
// Inherited 96 bytes 
class UDeformMeshPolygonsTransformProperties : public UInteractiveToolPropertySet
{

 public: 
	enum class EGroupTopologyDeformationStrategy DeformationStrategy;  // Offset: 96 Size: 1
	enum class EQuickTransformerMode TransformMode;  // Offset: 97 Size: 1
	char pad_98_1 : 7;  // Offset: 98 Size: 1
	bool bSelectFaces : 1;  // Offset: 98 Size: 1
	char pad_99_1 : 7;  // Offset: 99 Size: 1
	bool bSelectEdges : 1;  // Offset: 99 Size: 1
	char pad_100_1 : 7;  // Offset: 100 Size: 1
	bool bSelectVertices : 1;  // Offset: 100 Size: 1
	char pad_101_1 : 7;  // Offset: 101 Size: 1
	bool bSnapToWorldGrid : 1;  // Offset: 101 Size: 1
	char pad_102_1 : 7;  // Offset: 102 Size: 1
	bool bShowWireframe : 1;  // Offset: 102 Size: 1
	char pad_103[1];  // Offset: 103 Size: 1
	enum class EWeightScheme SelectedWeightScheme;  // Offset: 104 Size: 4
	char pad_108[4];  // Offset: 108 Size: 4
	double HandleWeight;  // Offset: 112 Size: 8
	char pad_120_1 : 7;  // Offset: 120 Size: 1
	bool bPostFixHandles : 1;  // Offset: 120 Size: 1
	char pad_121[7];  // Offset: 121 Size: 7



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.AlignObjectsToolBuilder Size 40
// Inherited 40 bytes 
class UAlignObjectsToolBuilder : public UInteractiveToolBuilder
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.SpaceDeformerOperatorFactory Size 56
// Inherited 40 bytes 
class USpaceDeformerOperatorFactory : public UObject
{

 public: 
	char pad_40[8];  // Offset: 40 Size: 8
	struct UMeshSpaceDeformerTool* SpaceDeformerTool;  // Offset: 48 Size: 8



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.AlignObjectsToolProperties Size 112
// Inherited 96 bytes 
class UAlignObjectsToolProperties : public UInteractiveToolPropertySet
{

 public: 
	enum class EAlignObjectsAlignTypes AlignType;  // Offset: 96 Size: 4
	enum class EAlignObjectsAlignToOptions AlignTo;  // Offset: 100 Size: 4
	enum class EAlignObjectsBoxPoint BoxPosition;  // Offset: 104 Size: 4
	char pad_108_1 : 7;  // Offset: 108 Size: 1
	bool bAlignX : 1;  // Offset: 108 Size: 1
	char pad_109_1 : 7;  // Offset: 109 Size: 1
	bool bAlignY : 1;  // Offset: 109 Size: 1
	char pad_110_1 : 7;  // Offset: 110 Size: 1
	bool bAlignZ : 1;  // Offset: 110 Size: 1
	char pad_111[1];  // Offset: 111 Size: 1



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.BakeMeshAttributeMapsToolBuilder Size 48
// Inherited 40 bytes 
class UBakeMeshAttributeMapsToolBuilder : public UInteractiveToolBuilder
{

 public: 
	char pad_40[8];  // Offset: 40 Size: 8



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.CombineMeshesTool Size 184
// Inherited 144 bytes 
class UCombineMeshesTool : public UMultiSelectionTool
{

 public: 
	struct UCombineMeshesToolProperties* BasicProperties;  // Offset: 144 Size: 8
	struct UOnAcceptHandleSourcesProperties* HandleSourceProperties;  // Offset: 152 Size: 8
	char pad_160[24];  // Offset: 160 Size: 24



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.BakeMeshAttributeMapsToolProperties Size 160
// Inherited 96 bytes 
class UBakeMeshAttributeMapsToolProperties : public UInteractiveToolPropertySet
{

 public: 
	enum class EBakeMapType MapType;  // Offset: 96 Size: 4
	enum class EBakeTextureResolution Resolution;  // Offset: 100 Size: 4
	char pad_104_1 : 7;  // Offset: 104 Size: 1
	bool bUseWorldSpace : 1;  // Offset: 104 Size: 1
	char pad_105[3];  // Offset: 105 Size: 3
	float Thickness;  // Offset: 108 Size: 4
	struct FString UVLayer;  // Offset: 112 Size: 16
	struct TArray<struct FString> UVLayerNamesList;  // Offset: 128 Size: 16
	struct TArray<struct UTexture2D*> Result;  // Offset: 144 Size: 16



 // Functions 
 public:
	struct TArray<struct FString> GetUVLayerNamesFunc(); // Function MeshModelingTools.BakeMeshAttributeMapsToolProperties.GetUVLayerNamesFunc
}; 
 
 


//Class MeshModelingTools.BakedCurvatureMapToolProperties Size 128
// Inherited 96 bytes 
class UBakedCurvatureMapToolProperties : public UInteractiveToolPropertySet
{

 public: 
	enum class EBakedCurvatureTypeMode CurvatureType;  // Offset: 96 Size: 4
	enum class EBakedCurvatureColorMode ColorMode;  // Offset: 100 Size: 4
	float RangeMultiplier;  // Offset: 104 Size: 4
	float MinRangeMultiplier;  // Offset: 108 Size: 4
	enum class EBakedCurvatureClampMode Clamping;  // Offset: 112 Size: 4
	char pad_116_1 : 7;  // Offset: 116 Size: 1
	bool bGaussianBlur : 1;  // Offset: 116 Size: 1
	char pad_117[3];  // Offset: 117 Size: 3
	float BlurRadius;  // Offset: 120 Size: 4
	char pad_124[4];  // Offset: 124 Size: 4



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.ImplicitOffsetProperties Size 104
// Inherited 96 bytes 
class UImplicitOffsetProperties : public UInteractiveToolPropertySet
{

 public: 
	float Smoothness;  // Offset: 96 Size: 4
	char pad_100_1 : 7;  // Offset: 100 Size: 1
	bool bPreserveUVs : 1;  // Offset: 100 Size: 1
	char pad_101[3];  // Offset: 101 Size: 3



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.EdgeLoopInsertionTool Size 1280
// Inherited 136 bytes 
class UEdgeLoopInsertionTool : public USingleSelectionTool
{

 public: 
	char pad_136[16];  // Offset: 136 Size: 16
	struct UEdgeLoopInsertionProperties* Settings;  // Offset: 152 Size: 8
	char pad_160[608];  // Offset: 160 Size: 608
	struct UMeshOpPreviewWithBackgroundCompute* preview;  // Offset: 768 Size: 8
	char pad_776[504];  // Offset: 776 Size: 504



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.BakedNormalMapToolProperties Size 96
// Inherited 96 bytes 
class UBakedNormalMapToolProperties : public UInteractiveToolPropertySet
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.BrushRemeshProperties Size 128
// Inherited 112 bytes 
class UBrushRemeshProperties : public URemeshProperties
{

 public: 
	char pad_112_1 : 7;  // Offset: 112 Size: 1
	bool bEnableRemeshing : 1;  // Offset: 112 Size: 1
	char pad_113[3];  // Offset: 113 Size: 3
	int32_t TriangleSize;  // Offset: 116 Size: 4
	int32_t PreserveDetail;  // Offset: 120 Size: 4
	int32_t Iterations;  // Offset: 124 Size: 4



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.CombineMeshesToolBuilder Size 56
// Inherited 40 bytes 
class UCombineMeshesToolBuilder : public UInteractiveToolBuilder
{

 public: 
	char pad_40[16];  // Offset: 40 Size: 16



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.BakedOcclusionMapToolProperties Size 136
// Inherited 96 bytes 
class UBakedOcclusionMapToolProperties : public UInteractiveToolPropertySet
{

 public: 
	enum class EOcclusionMapPreview preview;  // Offset: 96 Size: 4
	int32_t OcclusionRays;  // Offset: 100 Size: 4
	float MaxDistance;  // Offset: 104 Size: 4
	float SpreadAngle;  // Offset: 108 Size: 4
	enum class EOcclusionMapDistribution Distribution;  // Offset: 112 Size: 4
	char pad_116_1 : 7;  // Offset: 116 Size: 1
	bool bGaussianBlur : 1;  // Offset: 116 Size: 1
	char pad_117[3];  // Offset: 117 Size: 3
	float BlurRadius;  // Offset: 120 Size: 4
	float BiasAngle;  // Offset: 124 Size: 4
	enum class ENormalMapSpace NormalSpace;  // Offset: 128 Size: 4
	char pad_132[4];  // Offset: 132 Size: 4



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.SetCollisionGeometryTool Size 448
// Inherited 144 bytes 
class USetCollisionGeometryTool : public UMultiSelectionTool
{

 public: 
	struct USetCollisionGeometryToolProperties* Settings;  // Offset: 144 Size: 8
	struct UCollisionGeometryVisualizationProperties* VizSettings;  // Offset: 152 Size: 8
	struct UPhysicsObjectToolPropertySet* CollisionProps;  // Offset: 160 Size: 8
	struct UMaterialInterface* LineMaterial;  // Offset: 168 Size: 8
	struct UPreviewGeometry* PreviewGeom;  // Offset: 176 Size: 8
	char pad_184[264];  // Offset: 184 Size: 264



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.MirrorToolBuilder Size 48
// Inherited 40 bytes 
class UMirrorToolBuilder : public UInteractiveToolBuilder
{

 public: 
	char pad_40[8];  // Offset: 40 Size: 8



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.BakedTexture2DImageProperties Size 112
// Inherited 96 bytes 
class UBakedTexture2DImageProperties : public UInteractiveToolPropertySet
{

 public: 
	struct UTexture2D* SourceTexture;  // Offset: 96 Size: 8
	int32_t UVLayer;  // Offset: 104 Size: 4
	char pad_108[4];  // Offset: 108 Size: 4



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.PhysicsInspectorToolBuilder Size 40
// Inherited 40 bytes 
class UPhysicsInspectorToolBuilder : public UInteractiveToolBuilder
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.BakeMeshAttributeMapsTool Size 1272
// Inherited 144 bytes 
class UBakeMeshAttributeMapsTool : public UMultiSelectionTool
{

 public: 
	struct UBakeMeshAttributeMapsToolProperties* Settings;  // Offset: 144 Size: 8
	struct UBakedNormalMapToolProperties* NormalMapProps;  // Offset: 152 Size: 8
	struct UBakedOcclusionMapToolProperties* OcclusionMapProps;  // Offset: 160 Size: 8
	struct UBakedCurvatureMapToolProperties* CurvatureMapProps;  // Offset: 168 Size: 8
	struct UBakedTexture2DImageProperties* Texture2DProps;  // Offset: 176 Size: 8
	struct UBakedOcclusionMapVisualizationProperties* VisualizationProps;  // Offset: 184 Size: 8
	char pad_192[16];  // Offset: 192 Size: 16
	struct UMaterialInstanceDynamic* PreviewMaterial;  // Offset: 208 Size: 8
	struct UMaterialInstanceDynamic* BentNormalPreviewMaterial;  // Offset: 216 Size: 8
	char pad_224[864];  // Offset: 224 Size: 864
	struct UTexture2D* CachedNormalMap;  // Offset: 1088 Size: 8
	char pad_1096[40];  // Offset: 1096 Size: 40
	struct UTexture2D* CachedOcclusionMap;  // Offset: 1136 Size: 8
	struct UTexture2D* CachedBentNormalMap;  // Offset: 1144 Size: 8
	char pad_1152[40];  // Offset: 1152 Size: 40
	struct UTexture2D* CachedCurvatureMap;  // Offset: 1192 Size: 8
	char pad_1200[16];  // Offset: 1200 Size: 16
	struct UTexture2D* CachedMeshPropertyMap;  // Offset: 1216 Size: 8
	char pad_1224[16];  // Offset: 1224 Size: 16
	struct UTexture2D* CachedTexture2DImageMap;  // Offset: 1240 Size: 8
	struct UTexture2D* EmptyNormalMap;  // Offset: 1248 Size: 8
	struct UTexture2D* EmptyColorMapBlack;  // Offset: 1256 Size: 8
	struct UTexture2D* EmptyColorMapWhite;  // Offset: 1264 Size: 8



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.ConvertToPolygonsToolBuilder Size 40
// Inherited 40 bytes 
class UConvertToPolygonsToolBuilder : public UInteractiveToolBuilder
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.ConvertToPolygonsToolProperties Size 112
// Inherited 96 bytes 
class UConvertToPolygonsToolProperties : public UInteractiveToolPropertySet
{

 public: 
	enum class EConvertToPolygonsMode ConversionMode;  // Offset: 96 Size: 4
	float AngleTolerance;  // Offset: 100 Size: 4
	char pad_104_1 : 7;  // Offset: 104 Size: 1
	bool bCalculateNormals : 1;  // Offset: 104 Size: 1
	char pad_105_1 : 7;  // Offset: 105 Size: 1
	bool bShowGroupColors : 1;  // Offset: 105 Size: 1
	char pad_106[6];  // Offset: 106 Size: 6



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.CSGMeshesToolProperties Size 104
// Inherited 96 bytes 
class UCSGMeshesToolProperties : public UInteractiveToolPropertySet
{

 public: 
	enum class ECSGOperation Operation;  // Offset: 96 Size: 1
	char pad_97_1 : 7;  // Offset: 97 Size: 1
	bool bShowNewBoundaryEdges : 1;  // Offset: 97 Size: 1
	char pad_98_1 : 7;  // Offset: 98 Size: 1
	bool bAttemptFixHoles : 1;  // Offset: 98 Size: 1
	char pad_99_1 : 7;  // Offset: 99 Size: 1
	bool bOnlyUseFirstMeshMaterials : 1;  // Offset: 99 Size: 1
	char pad_100[4];  // Offset: 100 Size: 4



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.DisplaceMeshCommonProperties Size 144
// Inherited 96 bytes 
class UDisplaceMeshCommonProperties : public UInteractiveToolPropertySet
{

 public: 
	enum class EDisplaceMeshToolDisplaceType DisplacementType;  // Offset: 96 Size: 1
	char pad_97[3];  // Offset: 97 Size: 3
	float DisplaceIntensity;  // Offset: 100 Size: 4
	int32_t RandomSeed;  // Offset: 104 Size: 4
	int32_t Subdivisions;  // Offset: 108 Size: 4
	struct FName WeightMap;  // Offset: 112 Size: 8
	struct TArray<struct FString> WeightMapsList;  // Offset: 120 Size: 16
	char pad_136_1 : 7;  // Offset: 136 Size: 1
	bool bInvertWeightMap : 1;  // Offset: 136 Size: 1
	char pad_137_1 : 7;  // Offset: 137 Size: 1
	bool bDisableSizeWarning : 1;  // Offset: 137 Size: 1
	char pad_138[6];  // Offset: 138 Size: 6



 // Functions 
 public:
	struct TArray<struct FString> GetWeightMapsFunc(); // Function MeshModelingTools.DisplaceMeshCommonProperties.GetWeightMapsFunc
}; 
 
 


//Class MeshModelingTools.DisplaceMeshDirectionalFilterProperties Size 120
// Inherited 96 bytes 
class UDisplaceMeshDirectionalFilterProperties : public UInteractiveToolPropertySet
{

 public: 
	char pad_96_1 : 7;  // Offset: 96 Size: 1
	bool bEnableFilter : 1;  // Offset: 96 Size: 1
	char pad_97[3];  // Offset: 97 Size: 3
	struct FVector FilterDirection;  // Offset: 100 Size: 12
	float FilterWidth;  // Offset: 112 Size: 4
	char pad_116[4];  // Offset: 116 Size: 4



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.DisplaceMeshToolBuilder Size 40
// Inherited 40 bytes 
class UDisplaceMeshToolBuilder : public UInteractiveToolBuilder
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.DisplaceMeshSineWaveProperties Size 120
// Inherited 96 bytes 
class UDisplaceMeshSineWaveProperties : public UInteractiveToolPropertySet
{

 public: 
	float SineWaveFrequency;  // Offset: 96 Size: 4
	float SineWavePhaseShift;  // Offset: 100 Size: 4
	struct FVector SineWaveDirection;  // Offset: 104 Size: 12
	char pad_116[4];  // Offset: 116 Size: 4



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.DisplaceMeshTool Size 1008
// Inherited 136 bytes 
class UDisplaceMeshTool : public USingleSelectionTool
{

 public: 
	struct UDisplaceMeshCommonProperties* CommonProperties;  // Offset: 136 Size: 8
	struct UDisplaceMeshDirectionalFilterProperties* DirectionalFilterProperties;  // Offset: 144 Size: 8
	struct UDisplaceMeshTextureMapProperties* TextureMapProperties;  // Offset: 152 Size: 8
	struct UDisplaceMeshPerlinNoiseProperties* NoiseProperties;  // Offset: 160 Size: 8
	struct UDisplaceMeshSineWaveProperties* SineWaveProperties;  // Offset: 168 Size: 8
	char pad_176[832];  // Offset: 176 Size: 832



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.RemeshMeshToolBuilder Size 48
// Inherited 40 bytes 
class URemeshMeshToolBuilder : public UInteractiveToolBuilder
{

 public: 
	char pad_40[8];  // Offset: 40 Size: 8



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.RevolveProperties Size 176
// Inherited 96 bytes 
class URevolveProperties : public UInteractiveToolPropertySet
{

 public: 
	double RevolutionDegrees;  // Offset: 96 Size: 8
	double RevolutionDegreesOffset;  // Offset: 104 Size: 8
	int32_t steps;  // Offset: 112 Size: 4
	char pad_116_1 : 7;  // Offset: 116 Size: 1
	bool bReverseRevolutionDirection : 1;  // Offset: 116 Size: 1
	char pad_117_1 : 7;  // Offset: 117 Size: 1
	bool bFlipMesh : 1;  // Offset: 117 Size: 1
	char pad_118_1 : 7;  // Offset: 118 Size: 1
	bool bProfileIsCrossSectionOfSide : 1;  // Offset: 118 Size: 1
	enum class ERevolvePropertiesPolygroupMode PolygroupMode;  // Offset: 119 Size: 1
	enum class ERevolvePropertiesQuadSplit QuadSplitMode;  // Offset: 120 Size: 1
	char pad_121[7];  // Offset: 121 Size: 7
	double DiagonalProportionTolerance;  // Offset: 128 Size: 8
	enum class ERevolvePropertiesCapFillMode CapFillMode;  // Offset: 136 Size: 1
	char pad_137_1 : 7;  // Offset: 137 Size: 1
	bool bWeldFullRevolution : 1;  // Offset: 137 Size: 1
	char pad_138_1 : 7;  // Offset: 138 Size: 1
	bool bWeldVertsOnAxis : 1;  // Offset: 138 Size: 1
	char pad_139[5];  // Offset: 139 Size: 5
	double AxisWeldTolerance;  // Offset: 144 Size: 8
	char pad_152_1 : 7;  // Offset: 152 Size: 1
	bool bSharpNormals : 1;  // Offset: 152 Size: 1
	char pad_153[7];  // Offset: 153 Size: 7
	double SharpNormalAngleTolerance;  // Offset: 160 Size: 8
	char pad_168_1 : 7;  // Offset: 168 Size: 1
	bool bFlipVs : 1;  // Offset: 168 Size: 1
	char pad_169_1 : 7;  // Offset: 169 Size: 1
	bool bUVsSkipFullyWeldedEdges : 1;  // Offset: 169 Size: 1
	char pad_170[6];  // Offset: 170 Size: 6



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.VoxelSolidifyMeshesToolBuilder Size 48
// Inherited 48 bytes 
class UVoxelSolidifyMeshesToolBuilder : public UBaseCreateFromSelectedToolBuilder
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.RevolveToolProperties Size 208
// Inherited 176 bytes 
class URevolveToolProperties : public URevolveProperties
{

 public: 
	char pad_176_1 : 7;  // Offset: 176 Size: 1
	bool bConnectOpenProfileToAxis : 1;  // Offset: 176 Size: 1
	char pad_177_1 : 7;  // Offset: 177 Size: 1
	bool bSnapToWorldGrid : 1;  // Offset: 177 Size: 1
	char pad_178[2];  // Offset: 178 Size: 2
	struct FVector DrawPlaneOrigin;  // Offset: 180 Size: 12
	struct FRotator DrawPlaneOrientation;  // Offset: 192 Size: 12
	char pad_204_1 : 7;  // Offset: 204 Size: 1
	bool bEnableSnapping : 1;  // Offset: 204 Size: 1
	char pad_205_1 : 7;  // Offset: 205 Size: 1
	bool bAllowedToEditDrawPlane : 1;  // Offset: 205 Size: 1
	char pad_206[2];  // Offset: 206 Size: 2



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.RevolveOperatorFactory Size 56
// Inherited 40 bytes 
class URevolveOperatorFactory : public UObject
{

 public: 
	char pad_40[8];  // Offset: 40 Size: 8
	struct UDrawAndRevolveTool* RevolveTool;  // Offset: 48 Size: 8



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.MirrorOperatorFactory Size 64
// Inherited 40 bytes 
class UMirrorOperatorFactory : public UObject
{

 public: 
	char pad_40[8];  // Offset: 40 Size: 8
	struct UMirrorTool* MirrorTool;  // Offset: 48 Size: 8
	char pad_56[8];  // Offset: 56 Size: 8



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.MeshVertexSculptToolBuilder Size 48
// Inherited 48 bytes 
class UMeshVertexSculptToolBuilder : public UMeshSurfacePointToolBuilder
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.EdgeLoopInsertionToolBuilder Size 48
// Inherited 40 bytes 
class UEdgeLoopInsertionToolBuilder : public UInteractiveToolBuilder
{

 public: 
	char pad_40[8];  // Offset: 40 Size: 8



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.DrawAndRevolveTool Size 288
// Inherited 128 bytes 
class UDrawAndRevolveTool : public UInteractiveTool
{

 public: 
	char pad_128[120];  // Offset: 128 Size: 120
	struct UCurveControlPointsMechanic* ControlPointsMechanic;  // Offset: 248 Size: 8
	struct UConstructionPlaneMechanic* PlaneMechanic;  // Offset: 256 Size: 8
	struct URevolveToolProperties* Settings;  // Offset: 264 Size: 8
	struct UNewMeshMaterialProperties* MaterialProperties;  // Offset: 272 Size: 8
	struct UMeshOpPreviewWithBackgroundCompute* preview;  // Offset: 280 Size: 8



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.DrawPolygonToolBuilder Size 48
// Inherited 40 bytes 
class UDrawPolygonToolBuilder : public UInteractiveToolBuilder
{

 public: 
	char pad_40[8];  // Offset: 40 Size: 8



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.UVProjectionTool Size 544
// Inherited 144 bytes 
class UUVProjectionTool : public UMultiSelectionTool
{

 public: 
	struct UUVProjectionToolProperties* BasicProperties;  // Offset: 144 Size: 8
	struct UUVProjectionAdvancedProperties* AdvancedProperties;  // Offset: 152 Size: 8
	struct UExistingMeshMaterialProperties* MaterialSettings;  // Offset: 160 Size: 8
	struct TArray<struct UMeshOpPreviewWithBackgroundCompute*> Previews;  // Offset: 168 Size: 16
	struct UMaterialInstanceDynamic* CheckerMaterial;  // Offset: 184 Size: 8
	struct TArray<struct UTransformGizmo*> TransformGizmos;  // Offset: 192 Size: 16
	struct TArray<struct UTransformProxy*> TransformProxies;  // Offset: 208 Size: 16
	char pad_224[320];  // Offset: 224 Size: 320



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.BasePlaneBrushOpProps Size 96
// Inherited 96 bytes 
class UBasePlaneBrushOpProps : public UMeshSculptBrushOpProps
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.EditUVIslandsTool Size 896
// Inherited 192 bytes 
class UEditUVIslandsTool : public UMeshSurfacePointTool
{

 public: 
	char pad_192[8];  // Offset: 192 Size: 8
	struct UExistingMeshMaterialProperties* MaterialSettings;  // Offset: 200 Size: 8
	struct UMaterialInstanceDynamic* CheckerMaterial;  // Offset: 208 Size: 8
	struct USimpleDynamicMeshComponent* DynamicMeshComponent;  // Offset: 216 Size: 8
	struct UPolygonSelectionMechanic* SelectionMechanic;  // Offset: 224 Size: 8
	char pad_232[8];  // Offset: 232 Size: 8
	struct UMultiTransformer* MultiTransformer;  // Offset: 240 Size: 8
	char pad_248[648];  // Offset: 248 Size: 648



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.DrawPolygonToolStandardProperties Size 120
// Inherited 96 bytes 
class UDrawPolygonToolStandardProperties : public UInteractiveToolPropertySet
{

 public: 
	enum class EDrawPolygonDrawMode PolygonType;  // Offset: 96 Size: 1
	enum class EDrawPolygonOutputMode OutputMode;  // Offset: 97 Size: 1
	char pad_98[2];  // Offset: 98 Size: 2
	float FeatureSizeRatio;  // Offset: 100 Size: 4
	float ExtrudeHeight;  // Offset: 104 Size: 4
	int32_t steps;  // Offset: 108 Size: 4
	char pad_112_1 : 7;  // Offset: 112 Size: 1
	bool bAllowSelfIntersections : 1;  // Offset: 112 Size: 1
	char pad_113_1 : 7;  // Offset: 113 Size: 1
	bool bShowGizmo : 1;  // Offset: 113 Size: 1
	char pad_114[6];  // Offset: 114 Size: 6



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.DrawPolygonToolSnapProperties Size 120
// Inherited 96 bytes 
class UDrawPolygonToolSnapProperties : public UInteractiveToolPropertySet
{

 public: 
	char pad_96_1 : 7;  // Offset: 96 Size: 1
	bool bEnableSnapping : 1;  // Offset: 96 Size: 1
	char pad_97_1 : 7;  // Offset: 97 Size: 1
	bool bSnapToWorldGrid : 1;  // Offset: 97 Size: 1
	char pad_98_1 : 7;  // Offset: 98 Size: 1
	bool bSnapToVertices : 1;  // Offset: 98 Size: 1
	char pad_99_1 : 7;  // Offset: 99 Size: 1
	bool bSnapToEdges : 1;  // Offset: 99 Size: 1
	char pad_100_1 : 7;  // Offset: 100 Size: 1
	bool bSnapToAngles : 1;  // Offset: 100 Size: 1
	char pad_101_1 : 7;  // Offset: 101 Size: 1
	bool bSnapToLengths : 1;  // Offset: 101 Size: 1
	char pad_102[2];  // Offset: 102 Size: 2
	float SegmentLength;  // Offset: 104 Size: 4
	char pad_108_1 : 7;  // Offset: 108 Size: 1
	bool bHitSceneObjects : 1;  // Offset: 108 Size: 1
	char pad_109[3];  // Offset: 109 Size: 3
	float HitNormalOffset;  // Offset: 112 Size: 4
	char pad_116[4];  // Offset: 116 Size: 4



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.DrawPolygonTool Size 1392
// Inherited 128 bytes 
class UDrawPolygonTool : public UInteractiveTool
{

 public: 
	char pad_128[8];  // Offset: 128 Size: 8
	struct UDrawPolygonToolStandardProperties* PolygonProperties;  // Offset: 136 Size: 8
	struct UDrawPolygonToolSnapProperties* SnapProperties;  // Offset: 144 Size: 8
	struct UNewMeshMaterialProperties* MaterialProperties;  // Offset: 152 Size: 8
	char pad_160[176];  // Offset: 160 Size: 176
	struct UPreviewMesh* PreviewMesh;  // Offset: 336 Size: 8
	struct UTransformGizmo* PlaneTransformGizmo;  // Offset: 344 Size: 8
	struct UTransformProxy* PlaneTransformProxy;  // Offset: 352 Size: 8
	char pad_360[984];  // Offset: 360 Size: 984
	struct UPlaneDistanceFromHitMechanic* HeightMechanic;  // Offset: 1344 Size: 8
	char pad_1352[40];  // Offset: 1352 Size: 40



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.BrushSculptProperties Size 120
// Inherited 96 bytes 
class UBrushSculptProperties : public UInteractiveToolPropertySet
{

 public: 
	char pad_96_1 : 7;  // Offset: 96 Size: 1
	bool bIsRemeshingEnabled : 1;  // Offset: 96 Size: 1
	enum class EDynamicMeshSculptBrushType PrimaryBrushType;  // Offset: 97 Size: 1
	char pad_98[2];  // Offset: 98 Size: 2
	float PrimaryBrushSpeed;  // Offset: 100 Size: 4
	char pad_104_1 : 7;  // Offset: 104 Size: 1
	bool bPreserveUVFlow : 1;  // Offset: 104 Size: 1
	char pad_105_1 : 7;  // Offset: 105 Size: 1
	bool bFreezeTarget : 1;  // Offset: 105 Size: 1
	char pad_106[2];  // Offset: 106 Size: 2
	float SmoothBrushSpeed;  // Offset: 108 Size: 4
	char pad_112_1 : 7;  // Offset: 112 Size: 1
	bool bDetailPreservingSmooth : 1;  // Offset: 112 Size: 1
	char pad_113[7];  // Offset: 113 Size: 7



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.DrawPolyPathProperties Size 128
// Inherited 96 bytes 
class UDrawPolyPathProperties : public UInteractiveToolPropertySet
{

 public: 
	enum class EDrawPolyPathOutputMode OutputType;  // Offset: 96 Size: 4
	enum class EDrawPolyPathWidthMode WidthMode;  // Offset: 100 Size: 4
	float Width;  // Offset: 104 Size: 4
	enum class EDrawPolyPathHeightMode HeightMode;  // Offset: 108 Size: 4
	float Height;  // Offset: 112 Size: 4
	float RampStartRatio;  // Offset: 116 Size: 4
	char pad_120_1 : 7;  // Offset: 120 Size: 1
	bool bSnapToWorldGrid : 1;  // Offset: 120 Size: 1
	char pad_121[7];  // Offset: 121 Size: 7



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.FlattenBrushOpProps Size 112
// Inherited 96 bytes 
class UFlattenBrushOpProps : public UMeshSculptBrushOpProps
{

 public: 
	float Strength;  // Offset: 96 Size: 4
	float Falloff;  // Offset: 100 Size: 4
	float Depth;  // Offset: 104 Size: 4
	enum class EPlaneBrushSideMode WhichSide;  // Offset: 108 Size: 1
	char pad_109[3];  // Offset: 109 Size: 3



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.DrawPolyPathExtrudeProperties Size 104
// Inherited 96 bytes 
class UDrawPolyPathExtrudeProperties : public UInteractiveToolPropertySet
{

 public: 
	enum class EDrawPolyPathExtrudeDirection Direction;  // Offset: 96 Size: 4
	char pad_100[4];  // Offset: 100 Size: 4



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.MeshSelectionTool Size 1168
// Inherited 504 bytes 
class UMeshSelectionTool : public UDynamicMeshBrushTool
{

 public: 
	struct UMeshSelectionToolProperties* SelectionProps;  // Offset: 504 Size: 8
	struct UMeshSelectionEditActions* SelectionActions;  // Offset: 512 Size: 8
	struct UMeshSelectionToolActionPropertySet* EditActions;  // Offset: 520 Size: 8
	struct UMeshSelectionSet* Selection;  // Offset: 528 Size: 8
	struct TArray<struct AActor*> SpawnedActors;  // Offset: 536 Size: 16
	char pad_552[616];  // Offset: 552 Size: 616



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.DrawPolyPathTool Size 528
// Inherited 128 bytes 
class UDrawPolyPathTool : public UInteractiveTool
{

 public: 
	char pad_128[32];  // Offset: 128 Size: 32
	struct UDrawPolyPathProperties* TransformProps;  // Offset: 160 Size: 8
	struct UDrawPolyPathExtrudeProperties* ExtrudeProperties;  // Offset: 168 Size: 8
	struct UNewMeshMaterialProperties* MaterialProperties;  // Offset: 176 Size: 8
	char pad_184[136];  // Offset: 184 Size: 136
	struct UConstructionPlaneMechanic* PlaneMechanic;  // Offset: 320 Size: 8
	char pad_328[160];  // Offset: 328 Size: 160
	struct UPolyEditPreviewMesh* EditPreview;  // Offset: 488 Size: 8
	struct UPlaneDistanceFromHitMechanic* ExtrudeHeightMechanic;  // Offset: 496 Size: 8
	struct USpatialCurveDistanceMechanic* CurveDistMechanic;  // Offset: 504 Size: 8
	struct UCollectSurfacePathMechanic* SurfacePathMechanic;  // Offset: 512 Size: 8
	char pad_520[8];  // Offset: 520 Size: 8



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.PlaneBrushOpProps Size 112
// Inherited 96 bytes 
class UPlaneBrushOpProps : public UBasePlaneBrushOpProps
{

 public: 
	float Strength;  // Offset: 96 Size: 4
	float Falloff;  // Offset: 100 Size: 4
	float Depth;  // Offset: 104 Size: 4
	enum class EPlaneBrushSideMode WhichSide;  // Offset: 108 Size: 1
	char pad_109[3];  // Offset: 109 Size: 3



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.DynamicMeshBrushTool Size 504
// Inherited 440 bytes 
class UDynamicMeshBrushTool : public UBaseBrushTool
{

 public: 
	struct UPreviewMesh* PreviewMesh;  // Offset: 440 Size: 8
	char pad_448[56];  // Offset: 448 Size: 56



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.SeamSculptToolProperties Size 104
// Inherited 96 bytes 
class USeamSculptToolProperties : public UInteractiveToolPropertySet
{

 public: 
	char pad_96_1 : 7;  // Offset: 96 Size: 1
	bool bShowWireframe : 1;  // Offset: 96 Size: 1
	char pad_97_1 : 7;  // Offset: 97 Size: 1
	bool bHitBackFaces : 1;  // Offset: 97 Size: 1
	char pad_98[6];  // Offset: 98 Size: 6



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.DynamicMeshSculptToolBuilder Size 56
// Inherited 48 bytes 
class UDynamicMeshSculptToolBuilder : public UMeshSurfacePointToolBuilder
{

 public: 
	char pad_48[8];  // Offset: 48 Size: 8



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.DynamicSculptToolActions Size 104
// Inherited 96 bytes 
class UDynamicSculptToolActions : public UInteractiveToolPropertySet
{

 public: 
	char pad_96[8];  // Offset: 96 Size: 8



 // Functions 
 public:
	void DiscardAttributes(); // Function MeshModelingTools.DynamicSculptToolActions.DiscardAttributes
}; 
 
 


//Class MeshModelingTools.MeshConstraintProperties Size 104
// Inherited 96 bytes 
class UMeshConstraintProperties : public UInteractiveToolPropertySet
{

 public: 
	char pad_96_1 : 7;  // Offset: 96 Size: 1
	bool bPreserveSharpEdges : 1;  // Offset: 96 Size: 1
	enum class EMeshBoundaryConstraint MeshBoundaryConstraint;  // Offset: 97 Size: 1
	enum class EGroupBoundaryConstraint GroupBoundaryConstraint;  // Offset: 98 Size: 1
	enum class EMaterialBoundaryConstraint MaterialBoundaryConstraint;  // Offset: 99 Size: 1
	char pad_100_1 : 7;  // Offset: 100 Size: 1
	bool bPreventNormalFlips : 1;  // Offset: 100 Size: 1
	char pad_101[3];  // Offset: 101 Size: 3



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.RemeshProperties Size 112
// Inherited 104 bytes 
class URemeshProperties : public UMeshConstraintProperties
{

 public: 
	float SmoothingStrength;  // Offset: 104 Size: 4
	char pad_108_1 : 7;  // Offset: 108 Size: 1
	bool bFlips : 1;  // Offset: 108 Size: 1
	char pad_109_1 : 7;  // Offset: 109 Size: 1
	bool bSplits : 1;  // Offset: 109 Size: 1
	char pad_110_1 : 7;  // Offset: 110 Size: 1
	bool bCollapses : 1;  // Offset: 110 Size: 1
	char pad_111[1];  // Offset: 111 Size: 1



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.FixedPlaneBrushProperties Size 128
// Inherited 96 bytes 
class UFixedPlaneBrushProperties : public UInteractiveToolPropertySet
{

 public: 
	char pad_96_1 : 7;  // Offset: 96 Size: 1
	bool bPropertySetEnabled : 1;  // Offset: 96 Size: 1
	char pad_97_1 : 7;  // Offset: 97 Size: 1
	bool bShowGizmo : 1;  // Offset: 97 Size: 1
	char pad_98_1 : 7;  // Offset: 98 Size: 1
	bool bSnapToGrid : 1;  // Offset: 98 Size: 1
	char pad_99[1];  // Offset: 99 Size: 1
	struct FVector position;  // Offset: 100 Size: 12
	struct FQuat Rotation;  // Offset: 112 Size: 16



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.RevolveBoundaryToolBuilder Size 48
// Inherited 40 bytes 
class URevolveBoundaryToolBuilder : public UInteractiveToolBuilder
{

 public: 
	char pad_40[8];  // Offset: 40 Size: 8



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.PolyEditCommonProperties Size 112
// Inherited 96 bytes 
class UPolyEditCommonProperties : public UInteractiveToolPropertySet
{

 public: 
	char pad_96_1 : 7;  // Offset: 96 Size: 1
	bool bShowWireframe : 1;  // Offset: 96 Size: 1
	char pad_97[3];  // Offset: 97 Size: 3
	enum class ELocalFrameMode LocalFrameMode;  // Offset: 100 Size: 4
	char pad_104_1 : 7;  // Offset: 104 Size: 1
	bool bLockRotation : 1;  // Offset: 104 Size: 1
	char pad_105_1 : 7;  // Offset: 105 Size: 1
	bool bSnapToWorldGrid : 1;  // Offset: 105 Size: 1
	char pad_106[6];  // Offset: 106 Size: 6



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.DynamicMeshSculptTool Size 3360
// Inherited 192 bytes 
class UDynamicMeshSculptTool : public UMeshSurfacePointTool
{

 public: 
	struct USculptBrushProperties* BrushProperties;  // Offset: 192 Size: 8
	struct UBrushSculptProperties* SculptProperties;  // Offset: 200 Size: 8
	struct USculptMaxBrushProperties* SculptMaxBrushProperties;  // Offset: 208 Size: 8
	struct UKelvinBrushProperties* KelvinBrushProperties;  // Offset: 216 Size: 8
	struct UBrushRemeshProperties* RemeshProperties;  // Offset: 224 Size: 8
	struct UFixedPlaneBrushProperties* GizmoProperties;  // Offset: 232 Size: 8
	struct UMeshEditingViewProperties* ViewProperties;  // Offset: 240 Size: 8
	struct UDynamicSculptToolActions* SculptToolActions;  // Offset: 248 Size: 8
	char pad_256[64];  // Offset: 256 Size: 64
	struct UBrushStampIndicator* BrushIndicator;  // Offset: 320 Size: 8
	struct UMaterialInstanceDynamic* BrushIndicatorMaterial;  // Offset: 328 Size: 8
	struct UPreviewMesh* BrushIndicatorMesh;  // Offset: 336 Size: 8
	struct UOctreeDynamicMeshComponent* DynamicMeshComponent;  // Offset: 344 Size: 8
	struct UMaterialInstanceDynamic* ActiveOverrideMaterial;  // Offset: 352 Size: 8
	char pad_360[2976];  // Offset: 360 Size: 2976
	struct UTransformGizmo* PlaneTransformGizmo;  // Offset: 3336 Size: 8
	struct UTransformProxy* PlaneTransformProxy;  // Offset: 3344 Size: 8
	char pad_3352[8];  // Offset: 3352 Size: 8



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.IterativeOffsetProperties Size 112
// Inherited 96 bytes 
class UIterativeOffsetProperties : public UInteractiveToolPropertySet
{

 public: 
	int32_t steps;  // Offset: 96 Size: 4
	char pad_100_1 : 7;  // Offset: 100 Size: 1
	bool bOffsetBoundaries : 1;  // Offset: 100 Size: 1
	char pad_101[3];  // Offset: 101 Size: 3
	float SmoothingPerStep;  // Offset: 104 Size: 4
	char pad_108_1 : 7;  // Offset: 108 Size: 1
	bool bReprojectSmooth : 1;  // Offset: 108 Size: 1
	char pad_109[3];  // Offset: 109 Size: 3



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.PullKelvinletBrushOpProps Size 120
// Inherited 112 bytes 
class UPullKelvinletBrushOpProps : public UBaseKelvinletBrushOpProps
{

 public: 
	float Falloff;  // Offset: 112 Size: 4
	float Depth;  // Offset: 116 Size: 4



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.EdgeLoopInsertionProperties Size 144
// Inherited 96 bytes 
class UEdgeLoopInsertionProperties : public UInteractiveToolPropertySet
{

 public: 
	enum class EEdgeLoopPositioningMode PositionMode;  // Offset: 96 Size: 4
	enum class EEdgeLoopInsertionMode InsertionMode;  // Offset: 100 Size: 4
	int32_t NumLoops;  // Offset: 104 Size: 4
	char pad_108[4];  // Offset: 108 Size: 4
	double ProportionOffset;  // Offset: 112 Size: 8
	double DistanceOffset;  // Offset: 120 Size: 8
	char pad_128_1 : 7;  // Offset: 128 Size: 1
	bool bInteractive : 1;  // Offset: 128 Size: 1
	char pad_129_1 : 7;  // Offset: 129 Size: 1
	bool bFlipOffsetDirection : 1;  // Offset: 129 Size: 1
	char pad_130_1 : 7;  // Offset: 130 Size: 1
	bool bWireframe : 1;  // Offset: 130 Size: 1
	char pad_131[5];  // Offset: 131 Size: 5
	double VertexTolerance;  // Offset: 136 Size: 8



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.EditMeshPolygonsToolBuilder Size 56
// Inherited 48 bytes 
class UEditMeshPolygonsToolBuilder : public UMeshSurfacePointToolBuilder
{

 public: 
	char pad_48[8];  // Offset: 48 Size: 8



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.VoxelBlendMeshesToolBuilder Size 48
// Inherited 48 bytes 
class UVoxelBlendMeshesToolBuilder : public UBaseCreateFromSelectedToolBuilder
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.EditMeshPolygonsToolActions Size 104
// Inherited 104 bytes 
class UEditMeshPolygonsToolActions : public UEditMeshPolygonsToolActionPropertySet
{

 public: 



 // Functions 
 public:
	void Retriangulate(); // Function MeshModelingTools.EditMeshPolygonsToolActions.Retriangulate
	void RecalcNormals(); // Function MeshModelingTools.EditMeshPolygonsToolActions.RecalcNormals
	void Outset(); // Function MeshModelingTools.EditMeshPolygonsToolActions.Outset
	void Offset(); // Function MeshModelingTools.EditMeshPolygonsToolActions.Offset
	void Merge(); // Function MeshModelingTools.EditMeshPolygonsToolActions.Merge
	void Inset(); // Function MeshModelingTools.EditMeshPolygonsToolActions.Inset
	void Flip(); // Function MeshModelingTools.EditMeshPolygonsToolActions.Flip
	void Extrude(); // Function MeshModelingTools.EditMeshPolygonsToolActions.Extrude
	void Disconnect(); // Function MeshModelingTools.EditMeshPolygonsToolActions.Disconnect
	void Delete(); // Function MeshModelingTools.EditMeshPolygonsToolActions.Delete
	void Decompose(); // Function MeshModelingTools.EditMeshPolygonsToolActions.Decompose
	void CutFaces(); // Function MeshModelingTools.EditMeshPolygonsToolActions.CutFaces
}; 
 
 


//Class MeshModelingTools.EditPivotToolProperties Size 104
// Inherited 96 bytes 
class UEditPivotToolProperties : public UInteractiveToolPropertySet
{

 public: 
	char pad_96_1 : 7;  // Offset: 96 Size: 1
	bool bEnableSnapDragging : 1;  // Offset: 96 Size: 1
	enum class EEditPivotSnapDragRotationMode RotationMode;  // Offset: 97 Size: 1
	char pad_98[6];  // Offset: 98 Size: 6



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.EditMeshPolygonsToolActions_Triangles Size 104
// Inherited 104 bytes 
class UEditMeshPolygonsToolActions_Triangles : public UEditMeshPolygonsToolActionPropertySet
{

 public: 



 // Functions 
 public:
	void RecalcNormals(); // Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.RecalcNormals
	void Poke(); // Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Poke
	void Outset(); // Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Outset
	void Offset(); // Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Offset
	void Inset(); // Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Inset
	void Flip(); // Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Flip
	void Extrude(); // Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Extrude
	void Disconnect(); // Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Disconnect
	void Delete(); // Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.Delete
	void CutFaces(); // Function MeshModelingTools.EditMeshPolygonsToolActions_Triangles.CutFaces
}; 
 
 


//Class MeshModelingTools.EditMeshPolygonsToolUVActions Size 104
// Inherited 104 bytes 
class UEditMeshPolygonsToolUVActions : public UEditMeshPolygonsToolActionPropertySet
{

 public: 



 // Functions 
 public:
	void PlanarProjection(); // Function MeshModelingTools.EditMeshPolygonsToolUVActions.PlanarProjection
}; 
 
 


//Class MeshModelingTools.EditMeshPolygonsToolEdgeActions Size 104
// Inherited 104 bytes 
class UEditMeshPolygonsToolEdgeActions : public UEditMeshPolygonsToolActionPropertySet
{

 public: 



 // Functions 
 public:
	void Weld(); // Function MeshModelingTools.EditMeshPolygonsToolEdgeActions.Weld
	void Straighten(); // Function MeshModelingTools.EditMeshPolygonsToolEdgeActions.Straighten
	void FillHole(); // Function MeshModelingTools.EditMeshPolygonsToolEdgeActions.FillHole
}; 
 
 


//Class MeshModelingTools.PlaneCutTool Size 352
// Inherited 144 bytes 
class UPlaneCutTool : public UMultiSelectionTool
{

 public: 
	char pad_144[8];  // Offset: 144 Size: 8
	struct UPlaneCutToolProperties* BasicProperties;  // Offset: 152 Size: 8
	struct UAcceptOutputProperties* AcceptProperties;  // Offset: 160 Size: 8
	struct FVector CutPlaneOrigin;  // Offset: 168 Size: 12
	char pad_180[12];  // Offset: 180 Size: 12
	struct FQuat CutPlaneOrientation;  // Offset: 192 Size: 16
	struct TArray<struct UMeshOpPreviewWithBackgroundCompute*> Previews;  // Offset: 208 Size: 16
	struct TArray<struct UDynamicMeshReplacementChangeTarget*> MeshesToCut;  // Offset: 224 Size: 16
	char pad_240[88];  // Offset: 240 Size: 88
	struct UTransformGizmo* PlaneTransformGizmo;  // Offset: 328 Size: 8
	struct UTransformProxy* PlaneTransformProxy;  // Offset: 336 Size: 8
	char pad_344[8];  // Offset: 344 Size: 8



 // Functions 
 public:
	void Cut(); // Function MeshModelingTools.PlaneCutTool.Cut
}; 
 
 


//Class MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles Size 104
// Inherited 104 bytes 
class UEditMeshPolygonsToolEdgeActions_Triangles : public UEditMeshPolygonsToolActionPropertySet
{

 public: 



 // Functions 
 public:
	void Weld(); // Function MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.Weld
	void Split(); // Function MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.Split
	void Flip(); // Function MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.Flip
	void FillHole(); // Function MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.FillHole
	void Collapse(); // Function MeshModelingTools.EditMeshPolygonsToolEdgeActions_Triangles.Collapse
}; 
 
 


//Class MeshModelingTools.PolyEditExtrudeProperties Size 104
// Inherited 96 bytes 
class UPolyEditExtrudeProperties : public UInteractiveToolPropertySet
{

 public: 
	enum class EPolyEditExtrudeDirection Direction;  // Offset: 96 Size: 4
	char pad_100_1 : 7;  // Offset: 100 Size: 1
	bool bShellsToSolids : 1;  // Offset: 100 Size: 1
	char pad_101[3];  // Offset: 101 Size: 3



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.HoleFillToolBuilder Size 40
// Inherited 40 bytes 
class UHoleFillToolBuilder : public UInteractiveToolBuilder
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.PolyEditOffsetProperties Size 104
// Inherited 96 bytes 
class UPolyEditOffsetProperties : public UInteractiveToolPropertySet
{

 public: 
	char pad_96_1 : 7;  // Offset: 96 Size: 1
	bool bUseFaceNormals : 1;  // Offset: 96 Size: 1
	char pad_97[7];  // Offset: 97 Size: 7



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.PolyEditInsetProperties Size 112
// Inherited 96 bytes 
class UPolyEditInsetProperties : public UInteractiveToolPropertySet
{

 public: 
	char pad_96_1 : 7;  // Offset: 96 Size: 1
	bool bReproject : 1;  // Offset: 96 Size: 1
	char pad_97[3];  // Offset: 97 Size: 3
	float Softness;  // Offset: 100 Size: 4
	char pad_104_1 : 7;  // Offset: 104 Size: 1
	bool bBoundaryOnly : 1;  // Offset: 104 Size: 1
	char pad_105[3];  // Offset: 105 Size: 3
	float AreaScale;  // Offset: 108 Size: 4



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.PolyEditOutsetProperties Size 112
// Inherited 96 bytes 
class UPolyEditOutsetProperties : public UInteractiveToolPropertySet
{

 public: 
	float Softness;  // Offset: 96 Size: 4
	char pad_100_1 : 7;  // Offset: 100 Size: 1
	bool bBoundaryOnly : 1;  // Offset: 100 Size: 1
	char pad_101[3];  // Offset: 101 Size: 3
	float AreaScale;  // Offset: 104 Size: 4
	char pad_108[4];  // Offset: 108 Size: 4



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.PolyEditCutProperties Size 104
// Inherited 96 bytes 
class UPolyEditCutProperties : public UInteractiveToolPropertySet
{

 public: 
	enum class EPolyEditCutPlaneOrientation Orientation;  // Offset: 96 Size: 4
	char pad_100_1 : 7;  // Offset: 100 Size: 1
	bool bSnapToVertices : 1;  // Offset: 100 Size: 1
	char pad_101[3];  // Offset: 101 Size: 3



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.PolyEditSetUVProperties Size 104
// Inherited 96 bytes 
class UPolyEditSetUVProperties : public UInteractiveToolPropertySet
{

 public: 
	char pad_96_1 : 7;  // Offset: 96 Size: 1
	bool bShowMaterial : 1;  // Offset: 96 Size: 1
	char pad_97[7];  // Offset: 97 Size: 7



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.EditMeshPolygonsTool Size 2000
// Inherited 192 bytes 
class UEditMeshPolygonsTool : public UMeshSurfacePointTool
{

 public: 
	char pad_192[16];  // Offset: 192 Size: 16
	struct USimpleDynamicMeshComponent* DynamicMeshComponent;  // Offset: 208 Size: 8
	struct UPolyEditCommonProperties* CommonProps;  // Offset: 216 Size: 8
	struct UEditMeshPolygonsToolActions* EditActions;  // Offset: 224 Size: 8
	struct UEditMeshPolygonsToolActions_Triangles* EditActions_Triangles;  // Offset: 232 Size: 8
	struct UEditMeshPolygonsToolEdgeActions* EditEdgeActions;  // Offset: 240 Size: 8
	struct UEditMeshPolygonsToolEdgeActions_Triangles* EditEdgeActions_Triangles;  // Offset: 248 Size: 8
	struct UEditMeshPolygonsToolUVActions* EditUVActions;  // Offset: 256 Size: 8
	struct UPolyEditExtrudeProperties* ExtrudeProperties;  // Offset: 264 Size: 8
	struct UPolyEditOffsetProperties* OffsetProperties;  // Offset: 272 Size: 8
	struct UPolyEditInsetProperties* InsetProperties;  // Offset: 280 Size: 8
	struct UPolyEditOutsetProperties* OutsetProperties;  // Offset: 288 Size: 8
	struct UPolyEditCutProperties* CutProperties;  // Offset: 296 Size: 8
	struct UPolyEditSetUVProperties* SetUVProperties;  // Offset: 304 Size: 8
	struct UPolygonSelectionMechanic* SelectionMechanic;  // Offset: 312 Size: 8
	char pad_320[8];  // Offset: 320 Size: 8
	struct UMultiTransformer* MultiTransformer;  // Offset: 328 Size: 8
	char pad_336[848];  // Offset: 336 Size: 848
	struct UPolyEditPreviewMesh* EditPreview;  // Offset: 1184 Size: 8
	char pad_1192[8];  // Offset: 1192 Size: 8
	struct UPlaneDistanceFromHitMechanic* ExtrudeHeightMechanic;  // Offset: 1200 Size: 8
	struct USpatialCurveDistanceMechanic* CurveDistMechanic;  // Offset: 1208 Size: 8
	struct UCollectSurfacePathMechanic* SurfacePathMechanic;  // Offset: 1216 Size: 8
	char pad_1224[776];  // Offset: 1224 Size: 776



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.EditNormalsToolBuilder Size 48
// Inherited 40 bytes 
class UEditNormalsToolBuilder : public UInteractiveToolBuilder
{

 public: 
	char pad_40[8];  // Offset: 40 Size: 8



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.EditNormalsToolProperties Size 112
// Inherited 96 bytes 
class UEditNormalsToolProperties : public UInteractiveToolPropertySet
{

 public: 
	char pad_96_1 : 7;  // Offset: 96 Size: 1
	bool bRecomputeNormals : 1;  // Offset: 96 Size: 1
	enum class ENormalCalculationMethod NormalCalculationMethod;  // Offset: 97 Size: 1
	char pad_98_1 : 7;  // Offset: 98 Size: 1
	bool bFixInconsistentNormals : 1;  // Offset: 98 Size: 1
	char pad_99_1 : 7;  // Offset: 99 Size: 1
	bool bInvertNormals : 1;  // Offset: 99 Size: 1
	enum class ESplitNormalMethod SplitNormalMethod;  // Offset: 100 Size: 1
	char pad_101[3];  // Offset: 101 Size: 3
	float SharpEdgeAngleThreshold;  // Offset: 104 Size: 4
	char pad_108_1 : 7;  // Offset: 108 Size: 1
	bool bAllowSharpVertices : 1;  // Offset: 108 Size: 1
	char pad_109[3];  // Offset: 109 Size: 3



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.MeshSelectionToolActionPropertySet Size 104
// Inherited 96 bytes 
class UMeshSelectionToolActionPropertySet : public UInteractiveToolPropertySet
{

 public: 
	char pad_96[8];  // Offset: 96 Size: 8



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.EditNormalsOperatorFactory Size 64
// Inherited 40 bytes 
class UEditNormalsOperatorFactory : public UObject
{

 public: 
	char pad_40[8];  // Offset: 40 Size: 8
	struct UEditNormalsTool* Tool;  // Offset: 48 Size: 8
	char pad_56[8];  // Offset: 56 Size: 8



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.EditNormalsTool Size 256
// Inherited 144 bytes 
class UEditNormalsTool : public UMultiSelectionTool
{

 public: 
	struct UEditNormalsToolProperties* BasicProperties;  // Offset: 144 Size: 8
	struct UEditNormalsAdvancedProperties* AdvancedProperties;  // Offset: 152 Size: 8
	struct TArray<struct UMeshOpPreviewWithBackgroundCompute*> Previews;  // Offset: 160 Size: 16
	char pad_176[80];  // Offset: 176 Size: 80



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.EditPivotToolBuilder Size 40
// Inherited 40 bytes 
class UEditPivotToolBuilder : public UInteractiveToolBuilder
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.EditPivotToolActionPropertySet Size 112
// Inherited 96 bytes 
class UEditPivotToolActionPropertySet : public UInteractiveToolPropertySet
{

 public: 
	char pad_96[8];  // Offset: 96 Size: 8
	char pad_104_1 : 7;  // Offset: 104 Size: 1
	bool bUseWorldBox : 1;  // Offset: 104 Size: 1
	char pad_105[7];  // Offset: 105 Size: 7



 // Functions 
 public:
	void Top(); // Function MeshModelingTools.EditPivotToolActionPropertySet.Top
	void Right(); // Function MeshModelingTools.EditPivotToolActionPropertySet.Right
	void Left(); // Function MeshModelingTools.EditPivotToolActionPropertySet.Left
	void Front(); // Function MeshModelingTools.EditPivotToolActionPropertySet.Front
	void Center(); // Function MeshModelingTools.EditPivotToolActionPropertySet.Center
	void Bottom(); // Function MeshModelingTools.EditPivotToolActionPropertySet.Bottom
	void Back(); // Function MeshModelingTools.EditPivotToolActionPropertySet.Back
}; 
 
 


//Class MeshModelingTools.EditPivotTool Size 512
// Inherited 144 bytes 
class UEditPivotTool : public UMultiSelectionTool
{

 public: 
	char pad_144[8];  // Offset: 144 Size: 8
	struct UEditPivotToolProperties* TransformProps;  // Offset: 152 Size: 8
	struct UEditPivotToolActionPropertySet* EditPivotActions;  // Offset: 160 Size: 8
	char pad_168[208];  // Offset: 168 Size: 208
	struct TArray<struct FEditPivotTarget> ActiveGizmos;  // Offset: 376 Size: 16
	char pad_392[120];  // Offset: 392 Size: 120



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.WeldMeshEdgesToolBuilder Size 40
// Inherited 40 bytes 
class UWeldMeshEdgesToolBuilder : public UInteractiveToolBuilder
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.EditUVIslandsToolBuilder Size 48
// Inherited 48 bytes 
class UEditUVIslandsToolBuilder : public UMeshSurfacePointToolBuilder
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.ExtractCollisionGeometryToolBuilder Size 48
// Inherited 40 bytes 
class UExtractCollisionGeometryToolBuilder : public UInteractiveToolBuilder
{

 public: 
	char pad_40[8];  // Offset: 40 Size: 8



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.MeshSelectionToolBuilder Size 56
// Inherited 48 bytes 
class UMeshSelectionToolBuilder : public UMeshSurfacePointToolBuilder
{

 public: 
	char pad_48[8];  // Offset: 48 Size: 8



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.ExtractCollisionGeometryTool Size 816
// Inherited 136 bytes 
class UExtractCollisionGeometryTool : public USingleSelectionTool
{

 public: 
	struct UCollisionGeometryVisualizationProperties* VizSettings;  // Offset: 136 Size: 8
	struct UPhysicsObjectToolPropertySet* ObjectProps;  // Offset: 144 Size: 8
	struct UPreviewGeometry* PreviewElements;  // Offset: 152 Size: 8
	struct UPreviewMesh* PreviewMesh;  // Offset: 160 Size: 8
	char pad_168[648];  // Offset: 168 Size: 648



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.GroupEdgeInsertionProperties Size 112
// Inherited 96 bytes 
class UGroupEdgeInsertionProperties : public UInteractiveToolPropertySet
{

 public: 
	enum class EGroupEdgeInsertionMode InsertionMode;  // Offset: 96 Size: 4
	char pad_100_1 : 7;  // Offset: 100 Size: 1
	bool bWireframe : 1;  // Offset: 100 Size: 1
	char pad_101[3];  // Offset: 101 Size: 3
	double VertexTolerance;  // Offset: 104 Size: 8



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.HoleFillStatisticsProperties Size 176
// Inherited 96 bytes 
class UHoleFillStatisticsProperties : public UInteractiveToolPropertySet
{

 public: 
	struct FString InitialHoles;  // Offset: 96 Size: 16
	struct FString SelectedHoles;  // Offset: 112 Size: 16
	struct FString SuccessfulFills;  // Offset: 128 Size: 16
	struct FString FailedFills;  // Offset: 144 Size: 16
	struct FString RemainingHoles;  // Offset: 160 Size: 16



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.GroupEdgeInsertionOperatorFactory Size 56
// Inherited 40 bytes 
class UGroupEdgeInsertionOperatorFactory : public UObject
{

 public: 
	char pad_40[8];  // Offset: 40 Size: 8
	struct UGroupEdgeInsertionTool* Tool;  // Offset: 48 Size: 8



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.HoleFillToolProperties Size 104
// Inherited 96 bytes 
class UHoleFillToolProperties : public UInteractiveToolPropertySet
{

 public: 
	enum class EHoleFillOpFillType FillType;  // Offset: 96 Size: 1
	char pad_97_1 : 7;  // Offset: 97 Size: 1
	bool bRemoveIsolatedTriangles : 1;  // Offset: 97 Size: 1
	char pad_98[6];  // Offset: 98 Size: 6



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.GroupEdgeInsertionTool Size 1360
// Inherited 136 bytes 
class UGroupEdgeInsertionTool : public USingleSelectionTool
{

 public: 
	char pad_136[16];  // Offset: 136 Size: 16
	struct UGroupEdgeInsertionProperties* Settings;  // Offset: 152 Size: 8
	struct UMeshOpPreviewWithBackgroundCompute* preview;  // Offset: 160 Size: 8
	char pad_168[1192];  // Offset: 168 Size: 1192



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.SmoothHoleFillProperties Size 136
// Inherited 96 bytes 
class USmoothHoleFillProperties : public UInteractiveToolPropertySet
{

 public: 
	char pad_96_1 : 7;  // Offset: 96 Size: 1
	bool bConstrainToHoleInterior : 1;  // Offset: 96 Size: 1
	char pad_97[3];  // Offset: 97 Size: 3
	int32_t RemeshingExteriorRegionWidth;  // Offset: 100 Size: 4
	int32_t SmoothingExteriorRegionWidth;  // Offset: 104 Size: 4
	int32_t SmoothingInteriorRegionWidth;  // Offset: 108 Size: 4
	float InteriorSmoothness;  // Offset: 112 Size: 4
	char pad_116[4];  // Offset: 116 Size: 4
	double FillDensityScalar;  // Offset: 120 Size: 8
	char pad_128_1 : 7;  // Offset: 128 Size: 1
	bool bProjectDuringRemesh : 1;  // Offset: 128 Size: 1
	char pad_129[7];  // Offset: 129 Size: 7



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.HoleFillToolActions Size 104
// Inherited 96 bytes 
class UHoleFillToolActions : public UInteractiveToolPropertySet
{

 public: 
	char pad_96[8];  // Offset: 96 Size: 8



 // Functions 
 public:
	void SelectAll(); // Function MeshModelingTools.HoleFillToolActions.SelectAll
	void Clear(); // Function MeshModelingTools.HoleFillToolActions.Clear
}; 
 
 


//Class MeshModelingTools.HoleFillOperatorFactory Size 56
// Inherited 40 bytes 
class UHoleFillOperatorFactory : public UObject
{

 public: 
	char pad_40[8];  // Offset: 40 Size: 8
	struct UHoleFillTool* FillTool;  // Offset: 48 Size: 8



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.HoleFillTool Size 480
// Inherited 136 bytes 
class UHoleFillTool : public USingleSelectionTool
{

 public: 
	char pad_136[16];  // Offset: 136 Size: 16
	struct USmoothHoleFillProperties* SmoothHoleFillProperties;  // Offset: 152 Size: 8
	struct UHoleFillToolProperties* Properties;  // Offset: 160 Size: 8
	struct UHoleFillToolActions* Actions;  // Offset: 168 Size: 8
	struct UHoleFillStatisticsProperties* Statistics;  // Offset: 176 Size: 8
	struct UMeshOpPreviewWithBackgroundCompute* preview;  // Offset: 184 Size: 8
	struct UPolygonSelectionMechanic* SelectionMechanic;  // Offset: 192 Size: 8
	char pad_200[280];  // Offset: 200 Size: 280



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.MeshSculptBrushOpProps Size 96
// Inherited 96 bytes 
class UMeshSculptBrushOpProps : public UInteractiveToolPropertySet
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.RemeshMeshToolProperties Size 144
// Inherited 112 bytes 
class URemeshMeshToolProperties : public URemeshProperties
{

 public: 
	int32_t TargetTriangleCount;  // Offset: 112 Size: 4
	enum class ERemeshSmoothingType SmoothingType;  // Offset: 116 Size: 1
	char pad_117_1 : 7;  // Offset: 117 Size: 1
	bool bDiscardAttributes : 1;  // Offset: 117 Size: 1
	char pad_118_1 : 7;  // Offset: 118 Size: 1
	bool bShowWireframe : 1;  // Offset: 118 Size: 1
	char pad_119_1 : 7;  // Offset: 119 Size: 1
	bool bShowGroupColors : 1;  // Offset: 119 Size: 1
	enum class ERemeshType RemeshType;  // Offset: 120 Size: 1
	char pad_121[3];  // Offset: 121 Size: 3
	int32_t RemeshIterations;  // Offset: 124 Size: 4
	char pad_128_1 : 7;  // Offset: 128 Size: 1
	bool bUseTargetEdgeLength : 1;  // Offset: 128 Size: 1
	char pad_129[3];  // Offset: 129 Size: 3
	float TargetEdgeLength;  // Offset: 132 Size: 4
	char pad_136_1 : 7;  // Offset: 136 Size: 1
	bool bReproject : 1;  // Offset: 136 Size: 1
	char pad_137[7];  // Offset: 137 Size: 7



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.BaseKelvinletBrushOpProps Size 112
// Inherited 96 bytes 
class UBaseKelvinletBrushOpProps : public UMeshSculptBrushOpProps
{

 public: 
	float Stiffness;  // Offset: 96 Size: 4
	float Incompressiblity;  // Offset: 100 Size: 4
	int32_t BrushSteps;  // Offset: 104 Size: 4
	char pad_108[4];  // Offset: 108 Size: 4



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.ScaleKelvinletBrushOpProps Size 120
// Inherited 112 bytes 
class UScaleKelvinletBrushOpProps : public UBaseKelvinletBrushOpProps
{

 public: 
	float Strength;  // Offset: 112 Size: 4
	float Falloff;  // Offset: 116 Size: 4



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.SharpPullKelvinletBrushOpProps Size 120
// Inherited 112 bytes 
class USharpPullKelvinletBrushOpProps : public UBaseKelvinletBrushOpProps
{

 public: 
	float Falloff;  // Offset: 112 Size: 4
	float Depth;  // Offset: 116 Size: 4



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.TwistKelvinletBrushOpProps Size 120
// Inherited 112 bytes 
class UTwistKelvinletBrushOpProps : public UBaseKelvinletBrushOpProps
{

 public: 
	float Strength;  // Offset: 112 Size: 4
	float Falloff;  // Offset: 116 Size: 4



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.MeshAnalysisProperties Size 128
// Inherited 96 bytes 
class UMeshAnalysisProperties : public UInteractiveToolPropertySet
{

 public: 
	struct FString SurfaceArea;  // Offset: 96 Size: 16
	struct FString Volume;  // Offset: 112 Size: 16



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.MeshAttributePaintToolBuilder Size 128
// Inherited 48 bytes 
class UMeshAttributePaintToolBuilder : public UMeshSurfacePointToolBuilder
{

 public: 
	char pad_48[80];  // Offset: 48 Size: 80



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.UVProjectionOperatorFactory Size 64
// Inherited 40 bytes 
class UUVProjectionOperatorFactory : public UObject
{

 public: 
	char pad_40[8];  // Offset: 40 Size: 8
	struct UUVProjectionTool* Tool;  // Offset: 48 Size: 8
	char pad_56[8];  // Offset: 56 Size: 8



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.ProjectToTargetToolBuilder Size 48
// Inherited 40 bytes 
class UProjectToTargetToolBuilder : public UInteractiveToolBuilder
{

 public: 
	char pad_40[8];  // Offset: 40 Size: 8



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.MeshAttributePaintToolProperties Size 136
// Inherited 96 bytes 
class UMeshAttributePaintToolProperties : public UInteractiveToolPropertySet
{

 public: 
	struct TArray<struct FName> Attributes;  // Offset: 96 Size: 16
	int32_t SelectedAttribute;  // Offset: 112 Size: 4
	char pad_116[4];  // Offset: 116 Size: 4
	struct FString AttributeName;  // Offset: 120 Size: 16



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.PositionPlaneGizmo Size 1312
// Inherited 56 bytes 
class UPositionPlaneGizmo : public UInteractiveGizmo
{

 public: 
	char pad_56[80];  // Offset: 56 Size: 80
	struct UPreviewMesh* CenterBallShape;  // Offset: 136 Size: 8
	struct UMaterialInstance* CenterBallMaterial;  // Offset: 144 Size: 8
	char pad_152[1160];  // Offset: 152 Size: 1160



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.MeshAttributePaintTool Size 1552
// Inherited 504 bytes 
class UMeshAttributePaintTool : public UDynamicMeshBrushTool
{

 public: 
	struct UMeshAttributePaintToolProperties* AttribProps;  // Offset: 504 Size: 8
	char pad_512[1040];  // Offset: 512 Size: 1040



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.MeshBoundaryToolBase Size 336
// Inherited 136 bytes 
class UMeshBoundaryToolBase : public USingleSelectionTool
{

 public: 
	char pad_136[176];  // Offset: 136 Size: 176
	struct UPolygonSelectionMechanic* SelectionMechanic;  // Offset: 312 Size: 8
	struct USingleClickInputBehavior* LoopSelectClickBehavior;  // Offset: 320 Size: 8
	char pad_328[8];  // Offset: 328 Size: 8



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.ImplicitSmoothProperties Size 112
// Inherited 96 bytes 
class UImplicitSmoothProperties : public UInteractiveToolPropertySet
{

 public: 
	float SmoothSpeed;  // Offset: 96 Size: 4
	float Smoothness;  // Offset: 100 Size: 4
	char pad_104_1 : 7;  // Offset: 104 Size: 1
	bool bPreserveUVs : 1;  // Offset: 104 Size: 1
	char pad_105[3];  // Offset: 105 Size: 3
	float VolumeCorrection;  // Offset: 108 Size: 4



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.InflateBrushOpProps Size 104
// Inherited 96 bytes 
class UInflateBrushOpProps : public UMeshSculptBrushOpProps
{

 public: 
	float Strength;  // Offset: 96 Size: 4
	float Falloff;  // Offset: 100 Size: 4



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.MeshInspectorToolBuilder Size 40
// Inherited 40 bytes 
class UMeshInspectorToolBuilder : public UInteractiveToolBuilder
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.MeshInspectorTool Size 296
// Inherited 136 bytes 
class UMeshInspectorTool : public USingleSelectionTool
{

 public: 
	struct UMeshInspectorProperties* Settings;  // Offset: 136 Size: 8
	struct UExistingMeshMaterialProperties* MaterialSettings;  // Offset: 144 Size: 8
	char pad_152[8];  // Offset: 152 Size: 8
	struct UPreviewMesh* PreviewMesh;  // Offset: 160 Size: 8
	struct ULineSetComponent* DrawnLineSet;  // Offset: 168 Size: 8
	struct UMaterialInterface* DefaultMaterial;  // Offset: 176 Size: 8
	char pad_184[112];  // Offset: 184 Size: 112



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.NewMeshMaterialProperties Size 112
// Inherited 96 bytes 
class UNewMeshMaterialProperties : public UInteractiveToolPropertySet
{

 public: 
	struct TWeakObjectPtr<UMaterialInterface> Material;  // Offset: 96 Size: 8
	float UVScale;  // Offset: 104 Size: 4
	char pad_108_1 : 7;  // Offset: 108 Size: 1
	bool bWorldSpaceUVScale : 1;  // Offset: 108 Size: 1
	char pad_109_1 : 7;  // Offset: 109 Size: 1
	bool bWireframe : 1;  // Offset: 109 Size: 1
	char pad_110_1 : 7;  // Offset: 110 Size: 1
	bool bShowExtendedOptions : 1;  // Offset: 110 Size: 1
	char pad_111[1];  // Offset: 111 Size: 1



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.ExistingMeshMaterialProperties Size 120
// Inherited 96 bytes 
class UExistingMeshMaterialProperties : public UInteractiveToolPropertySet
{

 public: 
	enum class ESetMeshMaterialMode MaterialMode;  // Offset: 96 Size: 1
	char pad_97[3];  // Offset: 97 Size: 3
	float CheckerDensity;  // Offset: 100 Size: 4
	struct UMaterialInterface* OverrideMaterial;  // Offset: 104 Size: 8
	struct UMaterialInstanceDynamic* CheckerMaterial;  // Offset: 112 Size: 8



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.MeshSelectionEditActions Size 104
// Inherited 104 bytes 
class UMeshSelectionEditActions : public UMeshSelectionToolActionPropertySet
{

 public: 



 // Functions 
 public:
	void Shrink(); // Function MeshModelingTools.MeshSelectionEditActions.Shrink
	void SelectLargestComponentByTriCount(); // Function MeshModelingTools.MeshSelectionEditActions.SelectLargestComponentByTriCount
	void SelectLargestComponentByArea(); // Function MeshModelingTools.MeshSelectionEditActions.SelectLargestComponentByArea
	void SelectAll(); // Function MeshModelingTools.MeshSelectionEditActions.SelectAll
	void OptimizeSelection(); // Function MeshModelingTools.MeshSelectionEditActions.OptimizeSelection
	void Invert(); // Function MeshModelingTools.MeshSelectionEditActions.Invert
	void Grow(); // Function MeshModelingTools.MeshSelectionEditActions.Grow
	void ExpandToConnected(); // Function MeshModelingTools.MeshSelectionEditActions.ExpandToConnected
	void Clear(); // Function MeshModelingTools.MeshSelectionEditActions.Clear
}; 
 
 


//Class MeshModelingTools.MeshEditingViewProperties Size 136
// Inherited 96 bytes 
class UMeshEditingViewProperties : public UInteractiveToolPropertySet
{

 public: 
	char pad_96_1 : 7;  // Offset: 96 Size: 1
	bool bShowWireframe : 1;  // Offset: 96 Size: 1
	char pad_97[3];  // Offset: 97 Size: 3
	enum class EMeshEditingMaterialModes MaterialMode;  // Offset: 100 Size: 4
	char pad_104_1 : 7;  // Offset: 104 Size: 1
	bool bFlatShading : 1;  // Offset: 104 Size: 1
	char pad_105[3];  // Offset: 105 Size: 3
	struct FLinearColor Color;  // Offset: 108 Size: 16
	char pad_124[4];  // Offset: 124 Size: 4
	struct UTexture2D* Image;  // Offset: 128 Size: 8



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.MoveBrushOpProps Size 112
// Inherited 96 bytes 
class UMoveBrushOpProps : public UMeshSculptBrushOpProps
{

 public: 
	float Strength;  // Offset: 96 Size: 4
	float Falloff;  // Offset: 100 Size: 4
	float Depth;  // Offset: 104 Size: 4
	char pad_108[4];  // Offset: 108 Size: 4



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.PinchBrushOpProps Size 112
// Inherited 96 bytes 
class UPinchBrushOpProps : public UMeshSculptBrushOpProps
{

 public: 
	float Strength;  // Offset: 96 Size: 4
	float Falloff;  // Offset: 100 Size: 4
	float Depth;  // Offset: 104 Size: 4
	char pad_108_1 : 7;  // Offset: 108 Size: 1
	bool bPerpDamping : 1;  // Offset: 108 Size: 1
	char pad_109[3];  // Offset: 109 Size: 3



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.ViewAlignedPlaneBrushOpProps Size 112
// Inherited 96 bytes 
class UViewAlignedPlaneBrushOpProps : public UBasePlaneBrushOpProps
{

 public: 
	float Strength;  // Offset: 96 Size: 4
	float Falloff;  // Offset: 100 Size: 4
	float Depth;  // Offset: 104 Size: 4
	enum class EPlaneBrushSideMode WhichSide;  // Offset: 108 Size: 1
	char pad_109[3];  // Offset: 109 Size: 3



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.FixedPlaneBrushOpProps Size 112
// Inherited 96 bytes 
class UFixedPlaneBrushOpProps : public UBasePlaneBrushOpProps
{

 public: 
	float Strength;  // Offset: 96 Size: 4
	float Falloff;  // Offset: 100 Size: 4
	float Depth;  // Offset: 104 Size: 4
	enum class EPlaneBrushSideMode WhichSide;  // Offset: 108 Size: 1
	char pad_109[3];  // Offset: 109 Size: 3



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.StandardSculptBrushOpProps Size 104
// Inherited 96 bytes 
class UStandardSculptBrushOpProps : public UMeshSculptBrushOpProps
{

 public: 
	float Strength;  // Offset: 96 Size: 4
	float Falloff;  // Offset: 100 Size: 4



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.ViewAlignedSculptBrushOpProps Size 104
// Inherited 96 bytes 
class UViewAlignedSculptBrushOpProps : public UMeshSculptBrushOpProps
{

 public: 
	float Strength;  // Offset: 96 Size: 4
	float Falloff;  // Offset: 100 Size: 4



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.SculptBrushProperties Size 136
// Inherited 120 bytes 
class USculptBrushProperties : public UBrushBaseProperties
{

 public: 
	float Depth;  // Offset: 120 Size: 4
	char pad_124_1 : 7;  // Offset: 124 Size: 1
	bool bHitBackFaces : 1;  // Offset: 124 Size: 1
	char pad_125[3];  // Offset: 125 Size: 3
	float Lazyness;  // Offset: 128 Size: 4
	char pad_132_1 : 7;  // Offset: 132 Size: 1
	bool bShowPerBrushProps : 1;  // Offset: 132 Size: 1
	char pad_133[3];  // Offset: 133 Size: 3



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.KelvinBrushProperties Size 112
// Inherited 96 bytes 
class UKelvinBrushProperties : public UInteractiveToolPropertySet
{

 public: 
	float FalloffDistance;  // Offset: 96 Size: 4
	float Stiffness;  // Offset: 100 Size: 4
	float Incompressiblity;  // Offset: 104 Size: 4
	int32_t BrushSteps;  // Offset: 108 Size: 4



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.WorkPlaneProperties Size 128
// Inherited 96 bytes 
class UWorkPlaneProperties : public UInteractiveToolPropertySet
{

 public: 
	char pad_96_1 : 7;  // Offset: 96 Size: 1
	bool bPropertySetEnabled : 1;  // Offset: 96 Size: 1
	char pad_97_1 : 7;  // Offset: 97 Size: 1
	bool bShowGizmo : 1;  // Offset: 97 Size: 1
	char pad_98_1 : 7;  // Offset: 98 Size: 1
	bool bSnapToGrid : 1;  // Offset: 98 Size: 1
	char pad_99[1];  // Offset: 99 Size: 1
	struct FVector position;  // Offset: 100 Size: 12
	struct FQuat Rotation;  // Offset: 112 Size: 16



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.SculptMaxBrushProperties Size 104
// Inherited 96 bytes 
class USculptMaxBrushProperties : public UInteractiveToolPropertySet
{

 public: 
	float MaxHeight;  // Offset: 96 Size: 4
	char pad_100_1 : 7;  // Offset: 100 Size: 1
	bool bFreezeCurrentHeight : 1;  // Offset: 100 Size: 1
	char pad_101[3];  // Offset: 101 Size: 3



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.SeamSculptTool Size 728
// Inherited 504 bytes 
class USeamSculptTool : public UDynamicMeshBrushTool
{

 public: 
	struct USeamSculptToolProperties* Settings;  // Offset: 504 Size: 8
	struct UPreviewGeometry* PreviewGeom;  // Offset: 512 Size: 8
	char pad_520[208];  // Offset: 520 Size: 208



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.MeshSculptToolBase Size 2528
// Inherited 192 bytes 
class UMeshSculptToolBase : public UMeshSurfacePointTool
{

 public: 
	struct USculptBrushProperties* BrushProperties;  // Offset: 192 Size: 8
	struct UWorkPlaneProperties* GizmoProperties;  // Offset: 200 Size: 8
	char pad_208[224];  // Offset: 208 Size: 224
	struct TMap<int32_t, struct UMeshSculptBrushOpProps*> BrushOpPropSets;  // Offset: 432 Size: 80
	char pad_512[80];  // Offset: 512 Size: 80
	struct TMap<int32_t, struct UMeshSculptBrushOpProps*> SecondaryBrushOpPropSets;  // Offset: 592 Size: 80
	char pad_672[1488];  // Offset: 672 Size: 1488
	struct UMeshEditingViewProperties* ViewProperties;  // Offset: 2160 Size: 8
	struct UMaterialInstanceDynamic* ActiveOverrideMaterial;  // Offset: 2168 Size: 8
	struct UBrushStampIndicator* BrushIndicator;  // Offset: 2176 Size: 8
	struct UMaterialInstanceDynamic* BrushIndicatorMaterial;  // Offset: 2184 Size: 8
	struct UPreviewMesh* BrushIndicatorMesh;  // Offset: 2192 Size: 8
	struct UTransformGizmo* PlaneTransformGizmo;  // Offset: 2200 Size: 8
	struct UTransformProxy* PlaneTransformProxy;  // Offset: 2208 Size: 8
	char pad_2216[312];  // Offset: 2216 Size: 312



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.MeshSelectionMeshEditActions Size 104
// Inherited 104 bytes 
class UMeshSelectionMeshEditActions : public UMeshSelectionToolActionPropertySet
{

 public: 



 // Functions 
 public:
	void SeparateTriangles(); // Function MeshModelingTools.MeshSelectionMeshEditActions.SeparateTriangles
	void FlipNormals(); // Function MeshModelingTools.MeshSelectionMeshEditActions.FlipNormals
	void DisconnectTriangles(); // Function MeshModelingTools.MeshSelectionMeshEditActions.DisconnectTriangles
	void DeleteTriangles(); // Function MeshModelingTools.MeshSelectionMeshEditActions.DeleteTriangles
	void CreatePolygroup(); // Function MeshModelingTools.MeshSelectionMeshEditActions.CreatePolygroup
}; 
 
 


//Class MeshModelingTools.BaseSmoothBrushOpProps Size 96
// Inherited 96 bytes 
class UBaseSmoothBrushOpProps : public UMeshSculptBrushOpProps
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.RemoveOccludedTrianglesTool Size 336
// Inherited 144 bytes 
class URemoveOccludedTrianglesTool : public UMultiSelectionTool
{

 public: 
	struct URemoveOccludedTrianglesToolProperties* BasicProperties;  // Offset: 144 Size: 8
	struct URemoveOccludedTrianglesAdvancedProperties* AdvancedProperties;  // Offset: 152 Size: 8
	struct TArray<struct UMeshOpPreviewWithBackgroundCompute*> Previews;  // Offset: 160 Size: 16
	struct TArray<struct UPreviewMesh*> PreviewCopies;  // Offset: 176 Size: 16
	char pad_192[144];  // Offset: 192 Size: 144



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.SmoothBrushOpProps Size 112
// Inherited 96 bytes 
class USmoothBrushOpProps : public UBaseSmoothBrushOpProps
{

 public: 
	float Strength;  // Offset: 96 Size: 4
	float Falloff;  // Offset: 100 Size: 4
	char pad_104_1 : 7;  // Offset: 104 Size: 1
	bool bPreserveUVFlow : 1;  // Offset: 104 Size: 1
	char pad_105[7];  // Offset: 105 Size: 7



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.SecondarySmoothBrushOpProps Size 112
// Inherited 96 bytes 
class USecondarySmoothBrushOpProps : public UBaseSmoothBrushOpProps
{

 public: 
	float Strength;  // Offset: 96 Size: 4
	float Falloff;  // Offset: 100 Size: 4
	char pad_104_1 : 7;  // Offset: 104 Size: 1
	bool bPreserveUVFlow : 1;  // Offset: 104 Size: 1
	char pad_105[7];  // Offset: 105 Size: 7



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.SmoothFillBrushOpProps Size 112
// Inherited 96 bytes 
class USmoothFillBrushOpProps : public UBaseSmoothBrushOpProps
{

 public: 
	float Strength;  // Offset: 96 Size: 4
	float Falloff;  // Offset: 100 Size: 4
	char pad_104_1 : 7;  // Offset: 104 Size: 1
	bool bPreserveUVFlow : 1;  // Offset: 104 Size: 1
	char pad_105[7];  // Offset: 105 Size: 7



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.VoxelBlendMeshesToolProperties Size 128
// Inherited 96 bytes 
class UVoxelBlendMeshesToolProperties : public UInteractiveToolPropertySet
{

 public: 
	double BlendPower;  // Offset: 96 Size: 8
	double BlendFalloff;  // Offset: 104 Size: 8
	char pad_112_1 : 7;  // Offset: 112 Size: 1
	bool bSolidifyInput : 1;  // Offset: 112 Size: 1
	char pad_113_1 : 7;  // Offset: 113 Size: 1
	bool bRemoveInternalsAfterSolidify : 1;  // Offset: 113 Size: 1
	char pad_114[6];  // Offset: 114 Size: 6
	double OffsetSolidifySurface;  // Offset: 120 Size: 8



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.EraseBrushOpProps Size 104
// Inherited 96 bytes 
class UEraseBrushOpProps : public UMeshSculptBrushOpProps
{

 public: 
	float Strength;  // Offset: 96 Size: 4
	float Falloff;  // Offset: 100 Size: 4



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.MeshSpaceDeformerToolBuilder Size 48
// Inherited 48 bytes 
class UMeshSpaceDeformerToolBuilder : public UMeshSurfacePointToolBuilder
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.MeshSpaceDeformerTool Size 448
// Inherited 192 bytes 
class UMeshSpaceDeformerTool : public UMeshSurfacePointTool
{

 public: 
	enum class ENonlinearOperationType SelectedOperationType;  // Offset: 192 Size: 1
	char pad_193[3];  // Offset: 193 Size: 3
	float UpperBoundsInterval;  // Offset: 196 Size: 4
	float LowerBoundsInterval;  // Offset: 200 Size: 4
	float ModifierPercent;  // Offset: 204 Size: 4
	char pad_208_1 : 7;  // Offset: 208 Size: 1
	bool bSnapToWorldGrid : 1;  // Offset: 208 Size: 1
	char pad_209[7];  // Offset: 209 Size: 7
	struct UGizmoTransformChangeStateTarget* StateTarget;  // Offset: 216 Size: 8
	char pad_224[8];  // Offset: 224 Size: 8
	struct UMeshOpPreviewWithBackgroundCompute* preview;  // Offset: 232 Size: 8
	char pad_240[32];  // Offset: 240 Size: 32
	struct FVector GizmoCenter;  // Offset: 272 Size: 12
	char pad_284[4];  // Offset: 284 Size: 4
	struct FQuat GizmoOrientation;  // Offset: 288 Size: 16
	struct UIntervalGizmo* IntervalGizmo;  // Offset: 304 Size: 8
	struct UTransformGizmo* TransformGizmo;  // Offset: 312 Size: 8
	struct UTransformProxy* TransformProxy;  // Offset: 320 Size: 8
	struct UGizmoLocalFloatParameterSource* UpIntervalSource;  // Offset: 328 Size: 8
	struct UGizmoLocalFloatParameterSource* DownIntervalSource;  // Offset: 336 Size: 8
	struct UGizmoLocalFloatParameterSource* ForwardIntervalSource;  // Offset: 344 Size: 8
	char pad_352[96];  // Offset: 352 Size: 96



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.MeshStatisticsProperties Size 144
// Inherited 96 bytes 
class UMeshStatisticsProperties : public UInteractiveToolPropertySet
{

 public: 
	struct FString Mesh;  // Offset: 96 Size: 16
	struct FString UV;  // Offset: 112 Size: 16
	struct FString Attributes;  // Offset: 128 Size: 16



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.VertexBrushSculptProperties Size 104
// Inherited 96 bytes 
class UVertexBrushSculptProperties : public UInteractiveToolPropertySet
{

 public: 
	enum class EMeshVertexSculptBrushType PrimaryBrushType;  // Offset: 96 Size: 1
	enum class EMeshSculptFalloffType PrimaryFalloffType;  // Offset: 97 Size: 1
	char pad_98_1 : 7;  // Offset: 98 Size: 1
	bool bFreezeTarget : 1;  // Offset: 98 Size: 1
	char pad_99_1 : 7;  // Offset: 99 Size: 1
	bool bSmoothErases : 1;  // Offset: 99 Size: 1
	char pad_100[4];  // Offset: 100 Size: 4



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.MeshVertexSculptTool Size 4656
// Inherited 2528 bytes 
class UMeshVertexSculptTool : public UMeshSculptToolBase
{

 public: 
	struct UVertexBrushSculptProperties* SculptProperties;  // Offset: 2520 Size: 8
	struct USimpleDynamicMeshComponent* DynamicMeshComponent;  // Offset: 2528 Size: 8
	char pad_2544[2112];  // Offset: 2544 Size: 2112



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.MirrorToolProperties Size 112
// Inherited 96 bytes 
class UMirrorToolProperties : public UInteractiveToolPropertySet
{

 public: 
	enum class EMirrorOperationMode OperationMode;  // Offset: 96 Size: 1
	char pad_97_1 : 7;  // Offset: 97 Size: 1
	bool bCropAlongMirrorPlaneFirst : 1;  // Offset: 97 Size: 1
	char pad_98_1 : 7;  // Offset: 98 Size: 1
	bool bWeldVerticesOnMirrorPlane : 1;  // Offset: 98 Size: 1
	char pad_99_1 : 7;  // Offset: 99 Size: 1
	bool bAllowBowtieVertexCreation : 1;  // Offset: 99 Size: 1
	char pad_100_1 : 7;  // Offset: 100 Size: 1
	bool bSnapToWorldGrid : 1;  // Offset: 100 Size: 1
	enum class EMirrorCtrlClickBehavior CtrlClickBehavior;  // Offset: 101 Size: 1
	char pad_102_1 : 7;  // Offset: 102 Size: 1
	bool bButtonsOnlyChangeOrientation : 1;  // Offset: 102 Size: 1
	char pad_103_1 : 7;  // Offset: 103 Size: 1
	bool bShowPreview : 1;  // Offset: 103 Size: 1
	enum class EMirrorSaveMode SaveMode;  // Offset: 104 Size: 1
	char pad_105[7];  // Offset: 105 Size: 7



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.MirrorToolActionPropertySet Size 104
// Inherited 96 bytes 
class UMirrorToolActionPropertySet : public UInteractiveToolPropertySet
{

 public: 
	char pad_96[8];  // Offset: 96 Size: 8



 // Functions 
 public:
	void Up(); // Function MeshModelingTools.MirrorToolActionPropertySet.Up
	void ShiftToCenter(); // Function MeshModelingTools.MirrorToolActionPropertySet.ShiftToCenter
	void Right(); // Function MeshModelingTools.MirrorToolActionPropertySet.Right
	void Left(); // Function MeshModelingTools.MirrorToolActionPropertySet.Left
	void Forward(); // Function MeshModelingTools.MirrorToolActionPropertySet.Forward
	void Down(); // Function MeshModelingTools.MirrorToolActionPropertySet.Down
	void Backward(); // Function MeshModelingTools.MirrorToolActionPropertySet.Backward
}; 
 
 


//Class MeshModelingTools.MirrorTool Size 312
// Inherited 144 bytes 
class UMirrorTool : public UMultiSelectionTool
{

 public: 
	char pad_144[8];  // Offset: 144 Size: 8
	struct UMirrorToolProperties* Settings;  // Offset: 152 Size: 8
	struct UMirrorToolActionPropertySet* ToolActions;  // Offset: 160 Size: 8
	struct TArray<struct UDynamicMeshReplacementChangeTarget*> MeshesToMirror;  // Offset: 168 Size: 16
	struct TArray<struct UMeshOpPreviewWithBackgroundCompute*> Previews;  // Offset: 184 Size: 16
	char pad_200[72];  // Offset: 200 Size: 72
	struct UConstructionPlaneMechanic* PlaneMechanic;  // Offset: 272 Size: 8
	char pad_280[32];  // Offset: 280 Size: 32



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.OffsetMeshToolProperties Size 112
// Inherited 96 bytes 
class UOffsetMeshToolProperties : public UInteractiveToolPropertySet
{

 public: 
	enum class EOffsetMeshToolOffsetType OffsetType;  // Offset: 96 Size: 1
	char pad_97[3];  // Offset: 97 Size: 3
	float Distance;  // Offset: 100 Size: 4
	char pad_104_1 : 7;  // Offset: 104 Size: 1
	bool bCreateShell : 1;  // Offset: 104 Size: 1
	char pad_105[7];  // Offset: 105 Size: 7



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.OffsetWeightMapSetProperties Size 136
// Inherited 128 bytes 
class UOffsetWeightMapSetProperties : public UWeightMapSetProperties
{

 public: 
	float MinDistance;  // Offset: 128 Size: 4
	char pad_132[4];  // Offset: 132 Size: 4



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.OffsetMeshToolBuilder Size 40
// Inherited 40 bytes 
class UOffsetMeshToolBuilder : public UBaseMeshProcessingToolBuilder
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.PhysicsInspectorTool Size 216
// Inherited 144 bytes 
class UPhysicsInspectorTool : public UMultiSelectionTool
{

 public: 
	struct UCollisionGeometryVisualizationProperties* VizSettings;  // Offset: 144 Size: 8
	struct TArray<struct UPhysicsObjectToolPropertySet*> ObjectData;  // Offset: 152 Size: 16
	struct UMaterialInterface* LineMaterial;  // Offset: 168 Size: 8
	struct TArray<struct UPreviewGeometry*> PreviewElements;  // Offset: 176 Size: 16
	char pad_192[24];  // Offset: 192 Size: 24



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.PlaneCutToolBuilder Size 48
// Inherited 40 bytes 
class UPlaneCutToolBuilder : public UInteractiveToolBuilder
{

 public: 
	char pad_40[8];  // Offset: 40 Size: 8



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.PlaneCutToolProperties Size 112
// Inherited 96 bytes 
class UPlaneCutToolProperties : public UInteractiveToolPropertySet
{

 public: 
	char pad_96_1 : 7;  // Offset: 96 Size: 1
	bool bSnapToWorldGrid : 1;  // Offset: 96 Size: 1
	char pad_97_1 : 7;  // Offset: 97 Size: 1
	bool bKeepBothHalves : 1;  // Offset: 97 Size: 1
	char pad_98[2];  // Offset: 98 Size: 2
	float SpacingBetweenHalves;  // Offset: 100 Size: 4
	char pad_104_1 : 7;  // Offset: 104 Size: 1
	bool bFillCutHole : 1;  // Offset: 104 Size: 1
	char pad_105_1 : 7;  // Offset: 105 Size: 1
	bool bShowPreview : 1;  // Offset: 105 Size: 1
	char pad_106_1 : 7;  // Offset: 106 Size: 1
	bool bFillSpans : 1;  // Offset: 106 Size: 1
	char pad_107[5];  // Offset: 107 Size: 5



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.PlaneCutOperatorFactory Size 64
// Inherited 40 bytes 
class UPlaneCutOperatorFactory : public UObject
{

 public: 
	char pad_40[8];  // Offset: 40 Size: 8
	struct UPlaneCutTool* CutTool;  // Offset: 48 Size: 8
	char pad_56[8];  // Offset: 56 Size: 8



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.PositionPlaneOnSceneInputBehavior Size 176
// Inherited 128 bytes 
class UPositionPlaneOnSceneInputBehavior : public UAnyButtonInputBehavior
{

 public: 
	char pad_128[48];  // Offset: 128 Size: 48



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.ProjectToTargetToolProperties Size 144
// Inherited 144 bytes 
class UProjectToTargetToolProperties : public URemeshMeshToolProperties
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.RemeshMeshTool Size 232
// Inherited 144 bytes 
class URemeshMeshTool : public UMultiSelectionTool
{

 public: 
	char pad_144[8];  // Offset: 144 Size: 8
	struct URemeshMeshToolProperties* BasicProperties;  // Offset: 152 Size: 8
	struct UMeshStatisticsProperties* MeshStatisticsProperties;  // Offset: 160 Size: 8
	struct UMeshOpPreviewWithBackgroundCompute* preview;  // Offset: 168 Size: 8
	char pad_176[56];  // Offset: 176 Size: 56



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.ProjectToTargetTool Size 248
// Inherited 232 bytes 
class UProjectToTargetTool : public URemeshMeshTool
{

 public: 
	char pad_232[16];  // Offset: 232 Size: 16



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.RemoveOccludedTrianglesToolBuilder Size 48
// Inherited 40 bytes 
class URemoveOccludedTrianglesToolBuilder : public UInteractiveToolBuilder
{

 public: 
	char pad_40[8];  // Offset: 40 Size: 8



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.RemoveOccludedTrianglesToolProperties Size 128
// Inherited 96 bytes 
class URemoveOccludedTrianglesToolProperties : public UInteractiveToolPropertySet
{

 public: 
	enum class EOcclusionCalculationUIMode OcclusionTestMethod;  // Offset: 96 Size: 1
	enum class EOcclusionTriangleSamplingUIMode TriangleSampling;  // Offset: 97 Size: 1
	char pad_98[6];  // Offset: 98 Size: 6
	double WindingIsoValue;  // Offset: 104 Size: 8
	int32_t AddRandomRays;  // Offset: 112 Size: 4
	int32_t AddTriangleSamples;  // Offset: 116 Size: 4
	char pad_120_1 : 7;  // Offset: 120 Size: 1
	bool bOnlySelfOcclude : 1;  // Offset: 120 Size: 1
	char pad_121[7];  // Offset: 121 Size: 7



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.VoxelSolidifyMeshesToolProperties Size 128
// Inherited 96 bytes 
class UVoxelSolidifyMeshesToolProperties : public UInteractiveToolPropertySet
{

 public: 
	double WindingThreshold;  // Offset: 96 Size: 8
	double ExtendBounds;  // Offset: 104 Size: 8
	int32_t SurfaceSearchSteps;  // Offset: 112 Size: 4
	char pad_116_1 : 7;  // Offset: 116 Size: 1
	bool bSolidAtBoundaries : 1;  // Offset: 116 Size: 1
	char pad_117_1 : 7;  // Offset: 117 Size: 1
	bool bMakeOffsetSurfaces : 1;  // Offset: 117 Size: 1
	char pad_118[2];  // Offset: 118 Size: 2
	double OffsetThickness;  // Offset: 120 Size: 8



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.RemoveOccludedTrianglesAdvancedProperties Size 104
// Inherited 96 bytes 
class URemoveOccludedTrianglesAdvancedProperties : public UInteractiveToolPropertySet
{

 public: 
	char pad_96[8];  // Offset: 96 Size: 8



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.RemoveOccludedTrianglesOperatorFactory Size 64
// Inherited 40 bytes 
class URemoveOccludedTrianglesOperatorFactory : public UObject
{

 public: 
	char pad_40[8];  // Offset: 40 Size: 8
	struct URemoveOccludedTrianglesTool* Tool;  // Offset: 48 Size: 8
	char pad_56[8];  // Offset: 56 Size: 8



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.RevolveBoundaryOperatorFactory Size 56
// Inherited 40 bytes 
class URevolveBoundaryOperatorFactory : public UObject
{

 public: 
	char pad_40[8];  // Offset: 40 Size: 8
	struct URevolveBoundaryTool* RevolveBoundaryTool;  // Offset: 48 Size: 8



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.RevolveBoundaryToolProperties Size 208
// Inherited 176 bytes 
class URevolveBoundaryToolProperties : public URevolveProperties
{

 public: 
	char pad_176_1 : 7;  // Offset: 176 Size: 1
	bool bDisplayOriginalMesh : 1;  // Offset: 176 Size: 1
	char pad_177[3];  // Offset: 177 Size: 3
	struct FVector AxisOrigin;  // Offset: 180 Size: 12
	float AxisYaw;  // Offset: 192 Size: 4
	float AxisPitch;  // Offset: 196 Size: 4
	char pad_200_1 : 7;  // Offset: 200 Size: 1
	bool bSnapToWorldGrid : 1;  // Offset: 200 Size: 1
	char pad_201[7];  // Offset: 201 Size: 7



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.RevolveBoundaryTool Size 432
// Inherited 336 bytes 
class URevolveBoundaryTool : public UMeshBoundaryToolBase
{

 public: 
	char pad_336[16];  // Offset: 336 Size: 16
	struct URevolveBoundaryToolProperties* Settings;  // Offset: 352 Size: 8
	struct UNewMeshMaterialProperties* MaterialProperties;  // Offset: 360 Size: 8
	struct UConstructionPlaneMechanic* PlaneMechanic;  // Offset: 368 Size: 8
	struct UMeshOpPreviewWithBackgroundCompute* preview;  // Offset: 376 Size: 8
	char pad_384[48];  // Offset: 384 Size: 48



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.SeamSculptToolBuilder Size 48
// Inherited 48 bytes 
class USeamSculptToolBuilder : public UMeshSurfacePointToolBuilder
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.SelfUnionMeshesToolProperties Size 120
// Inherited 96 bytes 
class USelfUnionMeshesToolProperties : public UInteractiveToolPropertySet
{

 public: 
	char pad_96_1 : 7;  // Offset: 96 Size: 1
	bool bAttemptFixHoles : 1;  // Offset: 96 Size: 1
	char pad_97_1 : 7;  // Offset: 97 Size: 1
	bool bShowNewBoundaryEdges : 1;  // Offset: 97 Size: 1
	char pad_98_1 : 7;  // Offset: 98 Size: 1
	bool bTrimFlaps : 1;  // Offset: 98 Size: 1
	char pad_99[5];  // Offset: 99 Size: 5
	double WindingNumberThreshold;  // Offset: 104 Size: 8
	char pad_112_1 : 7;  // Offset: 112 Size: 1
	bool bOnlyUseFirstMeshMaterials : 1;  // Offset: 112 Size: 1
	char pad_113[7];  // Offset: 113 Size: 7



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.SelfUnionMeshesTool Size 288
// Inherited 240 bytes 
class USelfUnionMeshesTool : public UBaseCreateFromSelectedTool
{

 public: 
	struct USelfUnionMeshesToolProperties* Properties;  // Offset: 240 Size: 8
	struct ULineSetComponent* DrawnLineSet;  // Offset: 248 Size: 8
	char pad_256[32];  // Offset: 256 Size: 32



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.SelfUnionMeshesToolBuilder Size 48
// Inherited 48 bytes 
class USelfUnionMeshesToolBuilder : public UBaseCreateFromSelectedToolBuilder
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.SetCollisionGeometryToolBuilder Size 40
// Inherited 40 bytes 
class USetCollisionGeometryToolBuilder : public UInteractiveToolBuilder
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.SetCollisionGeometryToolProperties Size 144
// Inherited 96 bytes 
class USetCollisionGeometryToolProperties : public UInteractiveToolPropertySet
{

 public: 
	enum class ECollisionGeometryType GeometryType;  // Offset: 96 Size: 4
	enum class ESetCollisionGeometryInputMode InputMode;  // Offset: 100 Size: 4
	char pad_104_1 : 7;  // Offset: 104 Size: 1
	bool bUseWorldSpace : 1;  // Offset: 104 Size: 1
	char pad_105_1 : 7;  // Offset: 105 Size: 1
	bool bRemoveContained : 1;  // Offset: 105 Size: 1
	char pad_106_1 : 7;  // Offset: 106 Size: 1
	bool bEnableMaxCount : 1;  // Offset: 106 Size: 1
	char pad_107[1];  // Offset: 107 Size: 1
	int32_t MaxCount;  // Offset: 108 Size: 4
	float MinThickness;  // Offset: 112 Size: 4
	char pad_116_1 : 7;  // Offset: 116 Size: 1
	bool bDetectBoxes : 1;  // Offset: 116 Size: 1
	char pad_117_1 : 7;  // Offset: 117 Size: 1
	bool bDetectSpheres : 1;  // Offset: 117 Size: 1
	char pad_118_1 : 7;  // Offset: 118 Size: 1
	bool bDetectCapsules : 1;  // Offset: 118 Size: 1
	char pad_119_1 : 7;  // Offset: 119 Size: 1
	bool bSimplifyHulls : 1;  // Offset: 119 Size: 1
	int32_t HullTargetFaceCount;  // Offset: 120 Size: 4
	char pad_124_1 : 7;  // Offset: 124 Size: 1
	bool bSimplifyPolygons : 1;  // Offset: 124 Size: 1
	char pad_125[3];  // Offset: 125 Size: 3
	float HullTolerance;  // Offset: 128 Size: 4
	enum class EProjectedHullAxis SweepAxis;  // Offset: 132 Size: 4
	char pad_136_1 : 7;  // Offset: 136 Size: 1
	bool bAppendToExisting : 1;  // Offset: 136 Size: 1
	char pad_137[3];  // Offset: 137 Size: 3
	enum class ECollisionGeometryMode SetCollisionType;  // Offset: 140 Size: 4



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.SmoothMeshToolProperties Size 104
// Inherited 96 bytes 
class USmoothMeshToolProperties : public UInteractiveToolPropertySet
{

 public: 
	enum class ESmoothMeshToolSmoothType SmoothingType;  // Offset: 96 Size: 1
	char pad_97[7];  // Offset: 97 Size: 7



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.IterativeSmoothProperties Size 112
// Inherited 96 bytes 
class UIterativeSmoothProperties : public UInteractiveToolPropertySet
{

 public: 
	float SmoothingPerStep;  // Offset: 96 Size: 4
	int32_t steps;  // Offset: 100 Size: 4
	char pad_104_1 : 7;  // Offset: 104 Size: 1
	bool bSmoothBoundary : 1;  // Offset: 104 Size: 1
	char pad_105[7];  // Offset: 105 Size: 7



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.DiffusionSmoothProperties Size 112
// Inherited 96 bytes 
class UDiffusionSmoothProperties : public UInteractiveToolPropertySet
{

 public: 
	float SmoothingPerStep;  // Offset: 96 Size: 4
	int32_t steps;  // Offset: 100 Size: 4
	char pad_104_1 : 7;  // Offset: 104 Size: 1
	bool bPreserveUVs : 1;  // Offset: 104 Size: 1
	char pad_105[7];  // Offset: 105 Size: 7



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.SmoothWeightMapSetProperties Size 136
// Inherited 128 bytes 
class USmoothWeightMapSetProperties : public UWeightMapSetProperties
{

 public: 
	float MinSmoothMultiplier;  // Offset: 128 Size: 4
	char pad_132[4];  // Offset: 132 Size: 4



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.SmoothMeshTool Size 1072
// Inherited 1024 bytes 
class USmoothMeshTool : public UBaseMeshProcessingTool
{

 public: 
	struct USmoothMeshToolProperties* SmoothProperties;  // Offset: 1024 Size: 8
	struct UIterativeSmoothProperties* IterativeProperties;  // Offset: 1032 Size: 8
	struct UDiffusionSmoothProperties* DiffusionProperties;  // Offset: 1040 Size: 8
	struct UImplicitSmoothProperties* ImplicitProperties;  // Offset: 1048 Size: 8
	struct USmoothWeightMapSetProperties* WeightMapProperties;  // Offset: 1056 Size: 8
	char pad_1064[8];  // Offset: 1064 Size: 8



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.SmoothMeshToolBuilder Size 40
// Inherited 40 bytes 
class USmoothMeshToolBuilder : public UBaseMeshProcessingToolBuilder
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.TransformMeshesToolBuilder Size 40
// Inherited 40 bytes 
class UTransformMeshesToolBuilder : public UInteractiveToolBuilder
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.TransformMeshesToolProperties Size 104
// Inherited 96 bytes 
class UTransformMeshesToolProperties : public UInteractiveToolPropertySet
{

 public: 
	enum class ETransformMeshesTransformMode TransformMode;  // Offset: 96 Size: 1
	char pad_97_1 : 7;  // Offset: 97 Size: 1
	bool bSetPivot : 1;  // Offset: 97 Size: 1
	char pad_98_1 : 7;  // Offset: 98 Size: 1
	bool bEnableSnapDragging : 1;  // Offset: 98 Size: 1
	enum class ETransformMeshesSnapDragSource SnapDragSource;  // Offset: 99 Size: 1
	enum class ETransformMeshesSnapDragRotationMode RotationMode;  // Offset: 100 Size: 1
	char pad_101[3];  // Offset: 101 Size: 3



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.TransformMeshesTool Size 320
// Inherited 144 bytes 
class UTransformMeshesTool : public UMultiSelectionTool
{

 public: 
	char pad_144[8];  // Offset: 144 Size: 8
	struct UTransformMeshesToolProperties* TransformProps;  // Offset: 152 Size: 8
	char pad_160[16];  // Offset: 160 Size: 16
	struct TArray<struct FTransformMeshesTarget> ActiveGizmos;  // Offset: 176 Size: 16
	char pad_192[128];  // Offset: 192 Size: 128



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.UVProjectionToolBuilder Size 48
// Inherited 40 bytes 
class UUVProjectionToolBuilder : public UInteractiveToolBuilder
{

 public: 
	char pad_40[8];  // Offset: 40 Size: 8



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.UVProjectionToolProperties Size 136
// Inherited 96 bytes 
class UUVProjectionToolProperties : public UInteractiveToolPropertySet
{

 public: 
	enum class EUVProjectionMethod UVProjectionMethod;  // Offset: 96 Size: 1
	char pad_97[3];  // Offset: 97 Size: 3
	struct FVector ProjectionPrimitiveScale;  // Offset: 100 Size: 12
	float CylinderProjectToTopOrBottomAngleThreshold;  // Offset: 112 Size: 4
	struct FVector2D UVScale;  // Offset: 116 Size: 8
	struct FVector2D UVOffset;  // Offset: 124 Size: 8
	char pad_132_1 : 7;  // Offset: 132 Size: 1
	bool bWorldSpaceUVScale : 1;  // Offset: 132 Size: 1
	char pad_133[3];  // Offset: 133 Size: 3



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.UVProjectionAdvancedProperties Size 96
// Inherited 96 bytes 
class UUVProjectionAdvancedProperties : public UInteractiveToolPropertySet
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.VoxelMorphologyMeshesToolProperties Size 128
// Inherited 96 bytes 
class UVoxelMorphologyMeshesToolProperties : public UInteractiveToolPropertySet
{

 public: 
	enum class EMorphologyOperation Operation;  // Offset: 96 Size: 1
	char pad_97[7];  // Offset: 97 Size: 7
	double Distance;  // Offset: 104 Size: 8
	char pad_112_1 : 7;  // Offset: 112 Size: 1
	bool bSolidifyInput : 1;  // Offset: 112 Size: 1
	char pad_113_1 : 7;  // Offset: 113 Size: 1
	bool bRemoveInternalsAfterSolidify : 1;  // Offset: 113 Size: 1
	char pad_114[6];  // Offset: 114 Size: 6
	double OffsetSolidifySurface;  // Offset: 120 Size: 8



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.VoxelBlendMeshesTool Size 272
// Inherited 264 bytes 
class UVoxelBlendMeshesTool : public UBaseVoxelTool
{

 public: 
	struct UVoxelBlendMeshesToolProperties* BlendProperties;  // Offset: 264 Size: 8



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.VoxelMorphologyMeshesTool Size 272
// Inherited 264 bytes 
class UVoxelMorphologyMeshesTool : public UBaseVoxelTool
{

 public: 
	struct UVoxelMorphologyMeshesToolProperties* MorphologyProperties;  // Offset: 264 Size: 8



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.VoxelMorphologyMeshesToolBuilder Size 48
// Inherited 48 bytes 
class UVoxelMorphologyMeshesToolBuilder : public UBaseCreateFromSelectedToolBuilder
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.VoxelSolidifyMeshesTool Size 272
// Inherited 264 bytes 
class UVoxelSolidifyMeshesTool : public UBaseVoxelTool
{

 public: 
	struct UVoxelSolidifyMeshesToolProperties* SolidifyProperties;  // Offset: 264 Size: 8



 // Functions 
 public:
}; 
 
 


//Class MeshModelingTools.WeldMeshEdgesTool Size 768
// Inherited 136 bytes 
class UWeldMeshEdgesTool : public USingleSelectionTool
{

 public: 
	float Tolerance;  // Offset: 136 Size: 4
	char pad_140_1 : 7;  // Offset: 140 Size: 1
	bool bOnlyUnique : 1;  // Offset: 140 Size: 1
	char pad_141[627];  // Offset: 141 Size: 627



 // Functions 
 public:
}; 
 
 


