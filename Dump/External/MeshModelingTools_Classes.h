#pragma once 
#include <MeshModelingTools_Structs.h>
 
 
 
class UAcceptOutputProperties
{
public:
	UAcceptOutputProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbExportSeparatedPiecesAsNewMeshAssets() {
		return memory.read<bool>(m_addr + 96);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAddPatchToolBuilder
{
public:
	UAddPatchToolBuilder(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UEdgeLoopInsertionOperatorFactory
{
public:
	UEdgeLoopInsertionOperatorFactory(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UEdgeLoopInsertionTool GetTool() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UEdgeLoopInsertionTool(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UProceduralRoundedRectangleToolProperties
{
public:
	UProceduralRoundedRectangleToolProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetCornerRadius() {
		return memory.read<float>(m_addr + 128);
	}
	int32_t GetCornerSlices() {
		return memory.read<int32_t>(m_addr + 132);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBakeTransformToolBuilder
{
public:
	UBakeTransformToolBuilder(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UOffsetMeshTool
{
public:
	UOffsetMeshTool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UOffsetMeshToolProperties GetOffsetProperties() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1024);
		return struct UOffsetMeshToolProperties(ptr_addr);
	}
	struct UIterativeOffsetProperties GetIterativeProperties() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1032);
		return struct UIterativeOffsetProperties(ptr_addr);
	}
	struct UImplicitOffsetProperties GetImplicitProperties() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1040);
		return struct UImplicitOffsetProperties(ptr_addr);
	}
	struct UOffsetWeightMapSetProperties GetWeightMapProperties() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1048);
		return struct UOffsetWeightMapSetProperties(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMeshAttributePaintEditActions
{
public:
	UMeshAttributePaintEditActions(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAddPatchToolProperties
{
public:
	UAddPatchToolProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetWidth() {
		return memory.read<float>(m_addr + 96);
	}
	float GetRotation() {
		return memory.read<float>(m_addr + 100);
	}
	int32_t GetSubdivisions() {
		return memory.read<int32_t>(m_addr + 104);
	}
	float Getshift() {
		return memory.read<float>(m_addr + 108);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAddTorusPrimitiveTool
{
public:
	UAddTorusPrimitiveTool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UDrawPolyPathToolBuilder
{
public:
	UDrawPolyPathToolBuilder(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAddPatchTool
{
public:
	UAddPatchTool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAddPatchToolProperties GetShapeSettings() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 144);
		return struct UAddPatchToolProperties(ptr_addr);
	}
	struct UNewMeshMaterialProperties GetMaterialProperties() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 152);
		return struct UNewMeshMaterialProperties(ptr_addr);
	}
	struct UPreviewMesh GetPreviewMesh() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 160);
		return struct UPreviewMesh(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UProceduralPuncturedDiscToolProperties
{
public:
	UProceduralPuncturedDiscToolProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetHoleRadius() {
		return memory.read<float>(m_addr + 128);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAddPrimitiveToolBuilder
{
public:
	UAddPrimitiveToolBuilder(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UProceduralShapeToolProperties
{
public:
	UProceduralShapeToolProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbInstanceIfPossible() {
		return memory.read<bool>(m_addr + 96);
	}
	enum class EMakeMeshPolygroupMode GetPolygroupMode() {
		return memory.read<enum class EMakeMeshPolygroupMode>(m_addr + 97);
	}
	enum class EMakeMeshPlacementType GetPlaceMode() {
		return memory.read<enum class EMakeMeshPlacementType>(m_addr + 98);
	}
	bool GetbSnapToGrid() {
		return memory.read<bool>(m_addr + 99);
	}
	enum class EMakeMeshPivotLocation GetPivotLocation() {
		return memory.read<enum class EMakeMeshPivotLocation>(m_addr + 100);
	}
	float GetRotation() {
		return memory.read<float>(m_addr + 104);
	}
	bool GetbAlignShapeToPlacementSurface() {
		return memory.read<bool>(m_addr + 108);
	}

private:
	std::uint64_t m_addr = 0;
};


class UEditNormalsAdvancedProperties
{
public:
	UEditNormalsAdvancedProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UBakedOcclusionMapVisualizationProperties
{
public:
	UBakedOcclusionMapVisualizationProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetBaseGrayLevel() {
		return memory.read<float>(m_addr + 96);
	}
	float GetOcclusionMultiplier() {
		return memory.read<float>(m_addr + 100);
	}

private:
	std::uint64_t m_addr = 0;
};


class UProceduralBoxToolProperties
{
public:
	UProceduralBoxToolProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetHeight() {
		return memory.read<float>(m_addr + 128);
	}
	int32_t GetHeightSubdivisions() {
		return memory.read<int32_t>(m_addr + 132);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMeshInspectorProperties
{
public:
	UMeshInspectorProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbWireframe() {
		return memory.read<bool>(m_addr + 96);
	}
	bool GetbBoundaryEdges() {
		return memory.read<bool>(m_addr + 97);
	}
	bool GetbBowtieVertices() {
		return memory.read<bool>(m_addr + 98);
	}
	bool GetbPolygonBorders() {
		return memory.read<bool>(m_addr + 99);
	}
	bool GetbUVSeams() {
		return memory.read<bool>(m_addr + 100);
	}
	bool GetbUVBowties() {
		return memory.read<bool>(m_addr + 101);
	}
	bool GetbNormalSeams() {
		return memory.read<bool>(m_addr + 102);
	}
	bool GetbNormalVectors() {
		return memory.read<bool>(m_addr + 103);
	}
	bool GetbTangentVectors() {
		return memory.read<bool>(m_addr + 104);
	}
	float GetNormalLength() {
		return memory.read<float>(m_addr + 108);
	}
	float GetTangentLength() {
		return memory.read<float>(m_addr + 112);
	}

private:
	std::uint64_t m_addr = 0;
};


class UDrawAndRevolveToolBuilder
{
public:
	UDrawAndRevolveToolBuilder(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UBakeTransformTool
{
public:
	UBakeTransformTool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UBakeTransformToolProperties GetBasicProperties() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 144);
		return struct UBakeTransformToolProperties(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class ULastActorInfo
{
public:
	ULastActorInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AActor GetActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct AActor(ptr_addr);
	}
	struct UStaticMesh GetStaticMesh() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 64);
		return struct UStaticMesh(ptr_addr);
	}
	struct UProceduralShapeToolProperties GetShapeSettings() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 72);
		return struct UProceduralShapeToolProperties(ptr_addr);
	}
	struct UNewMeshMaterialProperties GetMaterialProperties() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 80);
		return struct UNewMeshMaterialProperties(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UProceduralRectangleToolProperties
{
public:
	UProceduralRectangleToolProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetWidth() {
		return memory.read<float>(m_addr + 112);
	}
	float GetDepth() {
		return memory.read<float>(m_addr + 116);
	}
	int32_t GetWidthSubdivisions() {
		return memory.read<int32_t>(m_addr + 120);
	}
	int32_t GetDepthSubdivisions() {
		return memory.read<int32_t>(m_addr + 124);
	}

private:
	std::uint64_t m_addr = 0;
};


class UCSGMeshesTool
{
public:
	UCSGMeshesTool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UCSGMeshesToolProperties GetCSGProperties() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 240);
		return struct UCSGMeshesToolProperties(ptr_addr);
	}
	struct ULineSetComponent GetDrawnLineSet() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 264);
		return struct ULineSetComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UProceduralDiscToolProperties
{
public:
	UProceduralDiscToolProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetRadius() {
		return memory.read<float>(m_addr + 112);
	}
	int32_t GetRadialSlices() {
		return memory.read<int32_t>(m_addr + 116);
	}
	int32_t GetRadialSubdivisions() {
		return memory.read<int32_t>(m_addr + 120);
	}

private:
	std::uint64_t m_addr = 0;
};


class UDisplaceMeshPerlinNoiseProperties
{
public:
	UDisplaceMeshPerlinNoiseProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FPerlinLayerProperties> GetPerlinLayerProperties() {
		return memory.read<struct TArray<struct FPerlinLayerProperties>>(m_addr + 96);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAddPrimitiveTool
{
public:
	UAddPrimitiveTool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UProceduralShapeToolProperties GetShapeSettings() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 144);
		return struct UProceduralShapeToolProperties(ptr_addr);
	}
	struct UNewMeshMaterialProperties GetMaterialProperties() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 152);
		return struct UNewMeshMaterialProperties(ptr_addr);
	}
	struct UPreviewMesh GetPreviewMesh() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 160);
		return struct UPreviewMesh(ptr_addr);
	}
	struct ULastActorInfo GetLastGenerated() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 168);
		return struct ULastActorInfo(ptr_addr);
	}
	struct FString GetAssetName() {
		return memory.read<struct FString>(m_addr + 176);
	}

private:
	std::uint64_t m_addr = 0;
};


class UProceduralTorusToolProperties
{
public:
	UProceduralTorusToolProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetMajorRadius() {
		return memory.read<float>(m_addr + 112);
	}
	float GetMinorRadius() {
		return memory.read<float>(m_addr + 116);
	}
	int32_t GetTubeSlices() {
		return memory.read<int32_t>(m_addr + 120);
	}
	int32_t GetCrossSectionSlices() {
		return memory.read<int32_t>(m_addr + 124);
	}

private:
	std::uint64_t m_addr = 0;
};


class UProceduralCylinderToolProperties
{
public:
	UProceduralCylinderToolProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetRadius() {
		return memory.read<float>(m_addr + 112);
	}
	float GetHeight() {
		return memory.read<float>(m_addr + 116);
	}
	int32_t GetRadialSlices() {
		return memory.read<int32_t>(m_addr + 120);
	}
	int32_t GetHeightSubdivisions() {
		return memory.read<int32_t>(m_addr + 124);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBakeTransformToolProperties
{
public:
	UBakeTransformToolProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbBakeRotation() {
		return memory.read<bool>(m_addr + 96);
	}
	enum class EBakeScaleMethod GetBakeScale() {
		return memory.read<enum class EBakeScaleMethod>(m_addr + 97);
	}
	bool GetbRecenterPivot() {
		return memory.read<bool>(m_addr + 98);
	}

private:
	std::uint64_t m_addr = 0;
};


class UPhysicsObjectToolPropertySet
{
public:
	UPhysicsObjectToolPropertySet(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetObjectName() {
		return memory.read<struct FString>(m_addr + 96);
	}
	enum class ECollisionGeometryMode GetCollisionType() {
		return memory.read<enum class ECollisionGeometryMode>(m_addr + 112);
	}
	struct TArray<struct FPhysicsSphereData> GetSpheres() {
		return memory.read<struct TArray<struct FPhysicsSphereData>>(m_addr + 120);
	}
	struct TArray<struct FPhysicsBoxData> GetBoxes() {
		return memory.read<struct TArray<struct FPhysicsBoxData>>(m_addr + 136);
	}
	struct TArray<struct FPhysicsCapsuleData> GetCapsules() {
		return memory.read<struct TArray<struct FPhysicsCapsuleData>>(m_addr + 152);
	}
	struct TArray<struct FPhysicsConvexData> GetConvexes() {
		return memory.read<struct TArray<struct FPhysicsConvexData>>(m_addr + 168);
	}

private:
	std::uint64_t m_addr = 0;
};


class UProceduralConeToolProperties
{
public:
	UProceduralConeToolProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetRadius() {
		return memory.read<float>(m_addr + 112);
	}
	float GetHeight() {
		return memory.read<float>(m_addr + 116);
	}
	int32_t GetRadialSlices() {
		return memory.read<int32_t>(m_addr + 120);
	}
	int32_t GetHeightSubdivisions() {
		return memory.read<int32_t>(m_addr + 124);
	}

private:
	std::uint64_t m_addr = 0;
};


class UProceduralArrowToolProperties
{
public:
	UProceduralArrowToolProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetShaftRadius() {
		return memory.read<float>(m_addr + 112);
	}
	float GetShaftHeight() {
		return memory.read<float>(m_addr + 116);
	}
	float GetHeadRadius() {
		return memory.read<float>(m_addr + 120);
	}
	float GetHeadHeight() {
		return memory.read<float>(m_addr + 124);
	}
	int32_t GetRadialSlices() {
		return memory.read<int32_t>(m_addr + 128);
	}
	int32_t GetTotalSubdivisions() {
		return memory.read<int32_t>(m_addr + 132);
	}

private:
	std::uint64_t m_addr = 0;
};


class UEditMeshPolygonsToolActionPropertySet
{
public:
	UEditMeshPolygonsToolActionPropertySet(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UProceduralSphereToolProperties
{
public:
	UProceduralSphereToolProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetRadius() {
		return memory.read<float>(m_addr + 112);
	}
	int32_t GetLatitudeSlices() {
		return memory.read<int32_t>(m_addr + 116);
	}
	int32_t GetLongitudeSlices() {
		return memory.read<int32_t>(m_addr + 120);
	}

private:
	std::uint64_t m_addr = 0;
};


class UProceduralSphericalBoxToolProperties
{
public:
	UProceduralSphericalBoxToolProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetRadius() {
		return memory.read<float>(m_addr + 112);
	}
	int32_t GetSubdivisions() {
		return memory.read<int32_t>(m_addr + 116);
	}

private:
	std::uint64_t m_addr = 0;
};


class UPositionPlaneGizmoBuilder
{
public:
	UPositionPlaneGizmoBuilder(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAddBoxPrimitiveTool
{
public:
	UAddBoxPrimitiveTool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAddCylinderPrimitiveTool
{
public:
	UAddCylinderPrimitiveTool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UCSGMeshesToolBuilder
{
public:
	UCSGMeshesToolBuilder(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMeshSelectionToolProperties
{
public:
	UMeshSelectionToolProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EMeshSelectionToolPrimaryMode GetSelectionMode() {
		return memory.read<enum class EMeshSelectionToolPrimaryMode>(m_addr + 96);
	}
	float GetAngleTolerance() {
		return memory.read<float>(m_addr + 100);
	}
	bool GetbHitBackFaces() {
		return memory.read<bool>(m_addr + 104);
	}
	bool GetbShowWireframe() {
		return memory.read<bool>(m_addr + 105);
	}
	enum class EMeshFacesColorMode GetFaceColorMode() {
		return memory.read<enum class EMeshFacesColorMode>(m_addr + 108);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAddConePrimitiveTool
{
public:
	UAddConePrimitiveTool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UDeformMeshPolygonsTool
{
public:
	UDeformMeshPolygonsTool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USimpleDynamicMeshComponent GetDynamicMeshComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 200);
		return struct USimpleDynamicMeshComponent(ptr_addr);
	}
	struct UDeformMeshPolygonsTransformProperties GetTransformProps() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 208);
		return struct UDeformMeshPolygonsTransformProperties(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UDeformMeshPolygonsToolBuilder
{
public:
	UDeformMeshPolygonsToolBuilder(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAddRectanglePrimitiveTool
{
public:
	UAddRectanglePrimitiveTool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UCollisionGeometryVisualizationProperties
{
public:
	UCollisionGeometryVisualizationProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetLineThickness() {
		return memory.read<float>(m_addr + 96);
	}
	bool GetbShowHidden() {
		return memory.read<bool>(m_addr + 100);
	}
	struct FColor GetColor() {
		return memory.read<struct FColor>(m_addr + 104);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAddRoundedRectanglePrimitiveTool
{
public:
	UAddRoundedRectanglePrimitiveTool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAddDiscPrimitiveTool
{
public:
	UAddDiscPrimitiveTool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UGroupEdgeInsertionToolBuilder
{
public:
	UGroupEdgeInsertionToolBuilder(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAddPuncturedDiscPrimitiveTool
{
public:
	UAddPuncturedDiscPrimitiveTool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAddArrowPrimitiveTool
{
public:
	UAddArrowPrimitiveTool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UConvertToPolygonsTool
{
public:
	UConvertToPolygonsTool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UConvertToPolygonsToolProperties GetSettings() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 136);
		return struct UConvertToPolygonsToolProperties(ptr_addr);
	}
	struct UPreviewMesh GetPreviewMesh() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 144);
		return struct UPreviewMesh(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAddSpherePrimitiveTool
{
public:
	UAddSpherePrimitiveTool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UCombineMeshesToolProperties
{
public:
	UCombineMeshesToolProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbIsDuplicateMode() {
		return memory.read<bool>(m_addr + 96);
	}
	enum class ECombineTargetType GetWriteOutputTo() {
		return memory.read<enum class ECombineTargetType>(m_addr + 100);
	}
	struct FString GetOutputName() {
		return memory.read<struct FString>(m_addr + 104);
	}
	struct FString GetOutputAsset() {
		return memory.read<struct FString>(m_addr + 120);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAlignObjectsTool
{
public:
	UAlignObjectsTool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAlignObjectsToolProperties GetAlignProps() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 152);
		return struct UAlignObjectsToolProperties(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAddSphericalBoxPrimitiveTool
{
public:
	UAddSphericalBoxPrimitiveTool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UDisplaceMeshTextureMapProperties
{
public:
	UDisplaceMeshTextureMapProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTexture2D GetDisplacementMap() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 96);
		return struct UTexture2D(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class USculptMaxBrushOpProps
{
public:
	USculptMaxBrushOpProps(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetStrength() {
		return memory.read<float>(m_addr + 96);
	}
	float GetFalloff() {
		return memory.read<float>(m_addr + 100);
	}
	float GetMaxHeight() {
		return memory.read<float>(m_addr + 104);
	}
	bool GetbUseFixedHeight() {
		return memory.read<bool>(m_addr + 108);
	}
	float GetFixedHeight() {
		return memory.read<float>(m_addr + 112);
	}

private:
	std::uint64_t m_addr = 0;
};


class UDeformMeshPolygonsTransformProperties
{
public:
	UDeformMeshPolygonsTransformProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EGroupTopologyDeformationStrategy GetDeformationStrategy() {
		return memory.read<enum class EGroupTopologyDeformationStrategy>(m_addr + 96);
	}
	enum class EQuickTransformerMode GetTransformMode() {
		return memory.read<enum class EQuickTransformerMode>(m_addr + 97);
	}
	bool GetbSelectFaces() {
		return memory.read<bool>(m_addr + 98);
	}
	bool GetbSelectEdges() {
		return memory.read<bool>(m_addr + 99);
	}
	bool GetbSelectVertices() {
		return memory.read<bool>(m_addr + 100);
	}
	bool GetbSnapToWorldGrid() {
		return memory.read<bool>(m_addr + 101);
	}
	bool GetbShowWireframe() {
		return memory.read<bool>(m_addr + 102);
	}
	enum class EWeightScheme GetSelectedWeightScheme() {
		return memory.read<enum class EWeightScheme>(m_addr + 104);
	}
	double GetHandleWeight() {
		return memory.read<double>(m_addr + 112);
	}
	bool GetbPostFixHandles() {
		return memory.read<bool>(m_addr + 120);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAlignObjectsToolBuilder
{
public:
	UAlignObjectsToolBuilder(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class USpaceDeformerOperatorFactory
{
public:
	USpaceDeformerOperatorFactory(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMeshSpaceDeformerTool GetSpaceDeformerTool() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UMeshSpaceDeformerTool(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAlignObjectsToolProperties
{
public:
	UAlignObjectsToolProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EAlignObjectsAlignTypes GetAlignType() {
		return memory.read<enum class EAlignObjectsAlignTypes>(m_addr + 96);
	}
	enum class EAlignObjectsAlignToOptions GetAlignTo() {
		return memory.read<enum class EAlignObjectsAlignToOptions>(m_addr + 100);
	}
	enum class EAlignObjectsBoxPoint GetBoxPosition() {
		return memory.read<enum class EAlignObjectsBoxPoint>(m_addr + 104);
	}
	bool GetbAlignX() {
		return memory.read<bool>(m_addr + 108);
	}
	bool GetbAlignY() {
		return memory.read<bool>(m_addr + 109);
	}
	bool GetbAlignZ() {
		return memory.read<bool>(m_addr + 110);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBakeMeshAttributeMapsToolBuilder
{
public:
	UBakeMeshAttributeMapsToolBuilder(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UCombineMeshesTool
{
public:
	UCombineMeshesTool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UCombineMeshesToolProperties GetBasicProperties() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 144);
		return struct UCombineMeshesToolProperties(ptr_addr);
	}
	struct UOnAcceptHandleSourcesProperties GetHandleSourceProperties() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 152);
		return struct UOnAcceptHandleSourcesProperties(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBakeMeshAttributeMapsToolProperties
{
public:
	UBakeMeshAttributeMapsToolProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EBakeMapType GetMapType() {
		return memory.read<enum class EBakeMapType>(m_addr + 96);
	}
	enum class EBakeTextureResolution GetResolution() {
		return memory.read<enum class EBakeTextureResolution>(m_addr + 100);
	}
	bool GetbUseWorldSpace() {
		return memory.read<bool>(m_addr + 104);
	}
	float GetThickness() {
		return memory.read<float>(m_addr + 108);
	}
	struct FString GetUVLayer() {
		return memory.read<struct FString>(m_addr + 112);
	}
	struct TArray<struct FString> GetUVLayerNamesList() {
		return memory.read<struct TArray<struct FString>>(m_addr + 128);
	}
	struct TArray<struct UTexture2D> GetResult() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 144);
		return struct TArray<struct UTexture2D>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBakedCurvatureMapToolProperties
{
public:
	UBakedCurvatureMapToolProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EBakedCurvatureTypeMode GetCurvatureType() {
		return memory.read<enum class EBakedCurvatureTypeMode>(m_addr + 96);
	}
	enum class EBakedCurvatureColorMode GetColorMode() {
		return memory.read<enum class EBakedCurvatureColorMode>(m_addr + 100);
	}
	float GetRangeMultiplier() {
		return memory.read<float>(m_addr + 104);
	}
	float GetMinRangeMultiplier() {
		return memory.read<float>(m_addr + 108);
	}
	enum class EBakedCurvatureClampMode GetClamping() {
		return memory.read<enum class EBakedCurvatureClampMode>(m_addr + 112);
	}
	bool GetbGaussianBlur() {
		return memory.read<bool>(m_addr + 116);
	}
	float GetBlurRadius() {
		return memory.read<float>(m_addr + 120);
	}

private:
	std::uint64_t m_addr = 0;
};


class UImplicitOffsetProperties
{
public:
	UImplicitOffsetProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetSmoothness() {
		return memory.read<float>(m_addr + 96);
	}
	bool GetbPreserveUVs() {
		return memory.read<bool>(m_addr + 100);
	}

private:
	std::uint64_t m_addr = 0;
};


class UEdgeLoopInsertionTool
{
public:
	UEdgeLoopInsertionTool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UEdgeLoopInsertionProperties GetSettings() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 152);
		return struct UEdgeLoopInsertionProperties(ptr_addr);
	}
	struct UMeshOpPreviewWithBackgroundCompute Getpreview() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 768);
		return struct UMeshOpPreviewWithBackgroundCompute(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBakedNormalMapToolProperties
{
public:
	UBakedNormalMapToolProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UBrushRemeshProperties
{
public:
	UBrushRemeshProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbEnableRemeshing() {
		return memory.read<bool>(m_addr + 112);
	}
	int32_t GetTriangleSize() {
		return memory.read<int32_t>(m_addr + 116);
	}
	int32_t GetPreserveDetail() {
		return memory.read<int32_t>(m_addr + 120);
	}
	int32_t GetIterations() {
		return memory.read<int32_t>(m_addr + 124);
	}

private:
	std::uint64_t m_addr = 0;
};


class UCombineMeshesToolBuilder
{
public:
	UCombineMeshesToolBuilder(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UBakedOcclusionMapToolProperties
{
public:
	UBakedOcclusionMapToolProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EOcclusionMapPreview Getpreview() {
		return memory.read<enum class EOcclusionMapPreview>(m_addr + 96);
	}
	int32_t GetOcclusionRays() {
		return memory.read<int32_t>(m_addr + 100);
	}
	float GetMaxDistance() {
		return memory.read<float>(m_addr + 104);
	}
	float GetSpreadAngle() {
		return memory.read<float>(m_addr + 108);
	}
	enum class EOcclusionMapDistribution GetDistribution() {
		return memory.read<enum class EOcclusionMapDistribution>(m_addr + 112);
	}
	bool GetbGaussianBlur() {
		return memory.read<bool>(m_addr + 116);
	}
	float GetBlurRadius() {
		return memory.read<float>(m_addr + 120);
	}
	float GetBiasAngle() {
		return memory.read<float>(m_addr + 124);
	}
	enum class ENormalMapSpace GetNormalSpace() {
		return memory.read<enum class ENormalMapSpace>(m_addr + 128);
	}

private:
	std::uint64_t m_addr = 0;
};


class USetCollisionGeometryTool
{
public:
	USetCollisionGeometryTool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USetCollisionGeometryToolProperties GetSettings() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 144);
		return struct USetCollisionGeometryToolProperties(ptr_addr);
	}
	struct UCollisionGeometryVisualizationProperties GetVizSettings() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 152);
		return struct UCollisionGeometryVisualizationProperties(ptr_addr);
	}
	struct UPhysicsObjectToolPropertySet GetCollisionProps() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 160);
		return struct UPhysicsObjectToolPropertySet(ptr_addr);
	}
	struct UMaterialInterface GetLineMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 168);
		return struct UMaterialInterface(ptr_addr);
	}
	struct UPreviewGeometry GetPreviewGeom() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 176);
		return struct UPreviewGeometry(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMirrorToolBuilder
{
public:
	UMirrorToolBuilder(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UBakedTexture2DImageProperties
{
public:
	UBakedTexture2DImageProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTexture2D GetSourceTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 96);
		return struct UTexture2D(ptr_addr);
	}
	int32_t GetUVLayer() {
		return memory.read<int32_t>(m_addr + 104);
	}

private:
	std::uint64_t m_addr = 0;
};


class UPhysicsInspectorToolBuilder
{
public:
	UPhysicsInspectorToolBuilder(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UBakeMeshAttributeMapsTool
{
public:
	UBakeMeshAttributeMapsTool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UBakeMeshAttributeMapsToolProperties GetSettings() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 144);
		return struct UBakeMeshAttributeMapsToolProperties(ptr_addr);
	}
	struct UBakedNormalMapToolProperties GetNormalMapProps() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 152);
		return struct UBakedNormalMapToolProperties(ptr_addr);
	}
	struct UBakedOcclusionMapToolProperties GetOcclusionMapProps() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 160);
		return struct UBakedOcclusionMapToolProperties(ptr_addr);
	}
	struct UBakedCurvatureMapToolProperties GetCurvatureMapProps() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 168);
		return struct UBakedCurvatureMapToolProperties(ptr_addr);
	}
	struct UBakedTexture2DImageProperties GetTexture2DProps() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 176);
		return struct UBakedTexture2DImageProperties(ptr_addr);
	}
	struct UBakedOcclusionMapVisualizationProperties GetVisualizationProps() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 184);
		return struct UBakedOcclusionMapVisualizationProperties(ptr_addr);
	}
	struct UMaterialInstanceDynamic GetPreviewMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 208);
		return struct UMaterialInstanceDynamic(ptr_addr);
	}
	struct UMaterialInstanceDynamic GetBentNormalPreviewMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 216);
		return struct UMaterialInstanceDynamic(ptr_addr);
	}
	struct UTexture2D GetCachedNormalMap() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1088);
		return struct UTexture2D(ptr_addr);
	}
	struct UTexture2D GetCachedOcclusionMap() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1136);
		return struct UTexture2D(ptr_addr);
	}
	struct UTexture2D GetCachedBentNormalMap() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1144);
		return struct UTexture2D(ptr_addr);
	}
	struct UTexture2D GetCachedCurvatureMap() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1192);
		return struct UTexture2D(ptr_addr);
	}
	struct UTexture2D GetCachedMeshPropertyMap() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1216);
		return struct UTexture2D(ptr_addr);
	}
	struct UTexture2D GetCachedTexture2DImageMap() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1240);
		return struct UTexture2D(ptr_addr);
	}
	struct UTexture2D GetEmptyNormalMap() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1248);
		return struct UTexture2D(ptr_addr);
	}
	struct UTexture2D GetEmptyColorMapBlack() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1256);
		return struct UTexture2D(ptr_addr);
	}
	struct UTexture2D GetEmptyColorMapWhite() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1264);
		return struct UTexture2D(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UConvertToPolygonsToolBuilder
{
public:
	UConvertToPolygonsToolBuilder(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UConvertToPolygonsToolProperties
{
public:
	UConvertToPolygonsToolProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EConvertToPolygonsMode GetConversionMode() {
		return memory.read<enum class EConvertToPolygonsMode>(m_addr + 96);
	}
	float GetAngleTolerance() {
		return memory.read<float>(m_addr + 100);
	}
	bool GetbCalculateNormals() {
		return memory.read<bool>(m_addr + 104);
	}
	bool GetbShowGroupColors() {
		return memory.read<bool>(m_addr + 105);
	}

private:
	std::uint64_t m_addr = 0;
};


class UCSGMeshesToolProperties
{
public:
	UCSGMeshesToolProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ECSGOperation GetOperation() {
		return memory.read<enum class ECSGOperation>(m_addr + 96);
	}
	bool GetbShowNewBoundaryEdges() {
		return memory.read<bool>(m_addr + 97);
	}
	bool GetbAttemptFixHoles() {
		return memory.read<bool>(m_addr + 98);
	}
	bool GetbOnlyUseFirstMeshMaterials() {
		return memory.read<bool>(m_addr + 99);
	}

private:
	std::uint64_t m_addr = 0;
};


class UDisplaceMeshCommonProperties
{
public:
	UDisplaceMeshCommonProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EDisplaceMeshToolDisplaceType GetDisplacementType() {
		return memory.read<enum class EDisplaceMeshToolDisplaceType>(m_addr + 96);
	}
	float GetDisplaceIntensity() {
		return memory.read<float>(m_addr + 100);
	}
	int32_t GetRandomSeed() {
		return memory.read<int32_t>(m_addr + 104);
	}
	int32_t GetSubdivisions() {
		return memory.read<int32_t>(m_addr + 108);
	}
	struct FName GetWeightMap() {
		return memory.read<struct FName>(m_addr + 112);
	}
	struct TArray<struct FString> GetWeightMapsList() {
		return memory.read<struct TArray<struct FString>>(m_addr + 120);
	}
	bool GetbInvertWeightMap() {
		return memory.read<bool>(m_addr + 136);
	}
	bool GetbDisableSizeWarning() {
		return memory.read<bool>(m_addr + 137);
	}

private:
	std::uint64_t m_addr = 0;
};


class UDisplaceMeshDirectionalFilterProperties
{
public:
	UDisplaceMeshDirectionalFilterProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbEnableFilter() {
		return memory.read<bool>(m_addr + 96);
	}
	struct FVector GetFilterDirection() {
		return memory.read<struct FVector>(m_addr + 100);
	}
	float GetFilterWidth() {
		return memory.read<float>(m_addr + 112);
	}

private:
	std::uint64_t m_addr = 0;
};


class UDisplaceMeshToolBuilder
{
public:
	UDisplaceMeshToolBuilder(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UDisplaceMeshSineWaveProperties
{
public:
	UDisplaceMeshSineWaveProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetSineWaveFrequency() {
		return memory.read<float>(m_addr + 96);
	}
	float GetSineWavePhaseShift() {
		return memory.read<float>(m_addr + 100);
	}
	struct FVector GetSineWaveDirection() {
		return memory.read<struct FVector>(m_addr + 104);
	}

private:
	std::uint64_t m_addr = 0;
};


class UDisplaceMeshTool
{
public:
	UDisplaceMeshTool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UDisplaceMeshCommonProperties GetCommonProperties() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 136);
		return struct UDisplaceMeshCommonProperties(ptr_addr);
	}
	struct UDisplaceMeshDirectionalFilterProperties GetDirectionalFilterProperties() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 144);
		return struct UDisplaceMeshDirectionalFilterProperties(ptr_addr);
	}
	struct UDisplaceMeshTextureMapProperties GetTextureMapProperties() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 152);
		return struct UDisplaceMeshTextureMapProperties(ptr_addr);
	}
	struct UDisplaceMeshPerlinNoiseProperties GetNoiseProperties() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 160);
		return struct UDisplaceMeshPerlinNoiseProperties(ptr_addr);
	}
	struct UDisplaceMeshSineWaveProperties GetSineWaveProperties() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 168);
		return struct UDisplaceMeshSineWaveProperties(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class URemeshMeshToolBuilder
{
public:
	URemeshMeshToolBuilder(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class URevolveProperties
{
public:
	URevolveProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	double GetRevolutionDegrees() {
		return memory.read<double>(m_addr + 96);
	}
	double GetRevolutionDegreesOffset() {
		return memory.read<double>(m_addr + 104);
	}
	int32_t Getsteps() {
		return memory.read<int32_t>(m_addr + 112);
	}
	bool GetbReverseRevolutionDirection() {
		return memory.read<bool>(m_addr + 116);
	}
	bool GetbFlipMesh() {
		return memory.read<bool>(m_addr + 117);
	}
	bool GetbProfileIsCrossSectionOfSide() {
		return memory.read<bool>(m_addr + 118);
	}
	enum class ERevolvePropertiesPolygroupMode GetPolygroupMode() {
		return memory.read<enum class ERevolvePropertiesPolygroupMode>(m_addr + 119);
	}
	enum class ERevolvePropertiesQuadSplit GetQuadSplitMode() {
		return memory.read<enum class ERevolvePropertiesQuadSplit>(m_addr + 120);
	}
	double GetDiagonalProportionTolerance() {
		return memory.read<double>(m_addr + 128);
	}
	enum class ERevolvePropertiesCapFillMode GetCapFillMode() {
		return memory.read<enum class ERevolvePropertiesCapFillMode>(m_addr + 136);
	}
	bool GetbWeldFullRevolution() {
		return memory.read<bool>(m_addr + 137);
	}
	bool GetbWeldVertsOnAxis() {
		return memory.read<bool>(m_addr + 138);
	}
	double GetAxisWeldTolerance() {
		return memory.read<double>(m_addr + 144);
	}
	bool GetbSharpNormals() {
		return memory.read<bool>(m_addr + 152);
	}
	double GetSharpNormalAngleTolerance() {
		return memory.read<double>(m_addr + 160);
	}
	bool GetbFlipVs() {
		return memory.read<bool>(m_addr + 168);
	}
	bool GetbUVsSkipFullyWeldedEdges() {
		return memory.read<bool>(m_addr + 169);
	}

private:
	std::uint64_t m_addr = 0;
};


class UVoxelSolidifyMeshesToolBuilder
{
public:
	UVoxelSolidifyMeshesToolBuilder(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class URevolveToolProperties
{
public:
	URevolveToolProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbConnectOpenProfileToAxis() {
		return memory.read<bool>(m_addr + 176);
	}
	bool GetbSnapToWorldGrid() {
		return memory.read<bool>(m_addr + 177);
	}
	struct FVector GetDrawPlaneOrigin() {
		return memory.read<struct FVector>(m_addr + 180);
	}
	struct FRotator GetDrawPlaneOrientation() {
		return memory.read<struct FRotator>(m_addr + 192);
	}
	bool GetbEnableSnapping() {
		return memory.read<bool>(m_addr + 204);
	}
	bool GetbAllowedToEditDrawPlane() {
		return memory.read<bool>(m_addr + 205);
	}

private:
	std::uint64_t m_addr = 0;
};


class URevolveOperatorFactory
{
public:
	URevolveOperatorFactory(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UDrawAndRevolveTool GetRevolveTool() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UDrawAndRevolveTool(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMirrorOperatorFactory
{
public:
	UMirrorOperatorFactory(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMirrorTool GetMirrorTool() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UMirrorTool(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMeshVertexSculptToolBuilder
{
public:
	UMeshVertexSculptToolBuilder(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UEdgeLoopInsertionToolBuilder
{
public:
	UEdgeLoopInsertionToolBuilder(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UDrawAndRevolveTool
{
public:
	UDrawAndRevolveTool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UCurveControlPointsMechanic GetControlPointsMechanic() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 248);
		return struct UCurveControlPointsMechanic(ptr_addr);
	}
	struct UConstructionPlaneMechanic GetPlaneMechanic() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 256);
		return struct UConstructionPlaneMechanic(ptr_addr);
	}
	struct URevolveToolProperties GetSettings() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 264);
		return struct URevolveToolProperties(ptr_addr);
	}
	struct UNewMeshMaterialProperties GetMaterialProperties() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 272);
		return struct UNewMeshMaterialProperties(ptr_addr);
	}
	struct UMeshOpPreviewWithBackgroundCompute Getpreview() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 280);
		return struct UMeshOpPreviewWithBackgroundCompute(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UDrawPolygonToolBuilder
{
public:
	UDrawPolygonToolBuilder(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UUVProjectionTool
{
public:
	UUVProjectionTool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UUVProjectionToolProperties GetBasicProperties() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 144);
		return struct UUVProjectionToolProperties(ptr_addr);
	}
	struct UUVProjectionAdvancedProperties GetAdvancedProperties() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 152);
		return struct UUVProjectionAdvancedProperties(ptr_addr);
	}
	struct UExistingMeshMaterialProperties GetMaterialSettings() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 160);
		return struct UExistingMeshMaterialProperties(ptr_addr);
	}
	struct TArray<struct UMeshOpPreviewWithBackgroundCompute> GetPreviews() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 168);
		return struct TArray<struct UMeshOpPreviewWithBackgroundCompute>(ptr_addr);
	}
	struct UMaterialInstanceDynamic GetCheckerMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 184);
		return struct UMaterialInstanceDynamic(ptr_addr);
	}
	struct TArray<struct UTransformGizmo> GetTransformGizmos() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 192);
		return struct TArray<struct UTransformGizmo>(ptr_addr);
	}
	struct TArray<struct UTransformProxy> GetTransformProxies() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 208);
		return struct TArray<struct UTransformProxy>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBasePlaneBrushOpProps
{
public:
	UBasePlaneBrushOpProps(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UEditUVIslandsTool
{
public:
	UEditUVIslandsTool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UExistingMeshMaterialProperties GetMaterialSettings() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 200);
		return struct UExistingMeshMaterialProperties(ptr_addr);
	}
	struct UMaterialInstanceDynamic GetCheckerMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 208);
		return struct UMaterialInstanceDynamic(ptr_addr);
	}
	struct USimpleDynamicMeshComponent GetDynamicMeshComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 216);
		return struct USimpleDynamicMeshComponent(ptr_addr);
	}
	struct UPolygonSelectionMechanic GetSelectionMechanic() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 224);
		return struct UPolygonSelectionMechanic(ptr_addr);
	}
	struct UMultiTransformer GetMultiTransformer() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 240);
		return struct UMultiTransformer(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UDrawPolygonToolStandardProperties
{
public:
	UDrawPolygonToolStandardProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EDrawPolygonDrawMode GetPolygonType() {
		return memory.read<enum class EDrawPolygonDrawMode>(m_addr + 96);
	}
	enum class EDrawPolygonOutputMode GetOutputMode() {
		return memory.read<enum class EDrawPolygonOutputMode>(m_addr + 97);
	}
	float GetFeatureSizeRatio() {
		return memory.read<float>(m_addr + 100);
	}
	float GetExtrudeHeight() {
		return memory.read<float>(m_addr + 104);
	}
	int32_t Getsteps() {
		return memory.read<int32_t>(m_addr + 108);
	}
	bool GetbAllowSelfIntersections() {
		return memory.read<bool>(m_addr + 112);
	}
	bool GetbShowGizmo() {
		return memory.read<bool>(m_addr + 113);
	}

private:
	std::uint64_t m_addr = 0;
};


class UDrawPolygonToolSnapProperties
{
public:
	UDrawPolygonToolSnapProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbEnableSnapping() {
		return memory.read<bool>(m_addr + 96);
	}
	bool GetbSnapToWorldGrid() {
		return memory.read<bool>(m_addr + 97);
	}
	bool GetbSnapToVertices() {
		return memory.read<bool>(m_addr + 98);
	}
	bool GetbSnapToEdges() {
		return memory.read<bool>(m_addr + 99);
	}
	bool GetbSnapToAngles() {
		return memory.read<bool>(m_addr + 100);
	}
	bool GetbSnapToLengths() {
		return memory.read<bool>(m_addr + 101);
	}
	float GetSegmentLength() {
		return memory.read<float>(m_addr + 104);
	}
	bool GetbHitSceneObjects() {
		return memory.read<bool>(m_addr + 108);
	}
	float GetHitNormalOffset() {
		return memory.read<float>(m_addr + 112);
	}

private:
	std::uint64_t m_addr = 0;
};


class UDrawPolygonTool
{
public:
	UDrawPolygonTool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UDrawPolygonToolStandardProperties GetPolygonProperties() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 136);
		return struct UDrawPolygonToolStandardProperties(ptr_addr);
	}
	struct UDrawPolygonToolSnapProperties GetSnapProperties() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 144);
		return struct UDrawPolygonToolSnapProperties(ptr_addr);
	}
	struct UNewMeshMaterialProperties GetMaterialProperties() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 152);
		return struct UNewMeshMaterialProperties(ptr_addr);
	}
	struct UPreviewMesh GetPreviewMesh() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 336);
		return struct UPreviewMesh(ptr_addr);
	}
	struct UTransformGizmo GetPlaneTransformGizmo() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 344);
		return struct UTransformGizmo(ptr_addr);
	}
	struct UTransformProxy GetPlaneTransformProxy() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 352);
		return struct UTransformProxy(ptr_addr);
	}
	struct UPlaneDistanceFromHitMechanic GetHeightMechanic() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1344);
		return struct UPlaneDistanceFromHitMechanic(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBrushSculptProperties
{
public:
	UBrushSculptProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbIsRemeshingEnabled() {
		return memory.read<bool>(m_addr + 96);
	}
	enum class EDynamicMeshSculptBrushType GetPrimaryBrushType() {
		return memory.read<enum class EDynamicMeshSculptBrushType>(m_addr + 97);
	}
	float GetPrimaryBrushSpeed() {
		return memory.read<float>(m_addr + 100);
	}
	bool GetbPreserveUVFlow() {
		return memory.read<bool>(m_addr + 104);
	}
	bool GetbFreezeTarget() {
		return memory.read<bool>(m_addr + 105);
	}
	float GetSmoothBrushSpeed() {
		return memory.read<float>(m_addr + 108);
	}
	bool GetbDetailPreservingSmooth() {
		return memory.read<bool>(m_addr + 112);
	}

private:
	std::uint64_t m_addr = 0;
};


class UDrawPolyPathProperties
{
public:
	UDrawPolyPathProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EDrawPolyPathOutputMode GetOutputType() {
		return memory.read<enum class EDrawPolyPathOutputMode>(m_addr + 96);
	}
	enum class EDrawPolyPathWidthMode GetWidthMode() {
		return memory.read<enum class EDrawPolyPathWidthMode>(m_addr + 100);
	}
	float GetWidth() {
		return memory.read<float>(m_addr + 104);
	}
	enum class EDrawPolyPathHeightMode GetHeightMode() {
		return memory.read<enum class EDrawPolyPathHeightMode>(m_addr + 108);
	}
	float GetHeight() {
		return memory.read<float>(m_addr + 112);
	}
	float GetRampStartRatio() {
		return memory.read<float>(m_addr + 116);
	}
	bool GetbSnapToWorldGrid() {
		return memory.read<bool>(m_addr + 120);
	}

private:
	std::uint64_t m_addr = 0;
};


class UFlattenBrushOpProps
{
public:
	UFlattenBrushOpProps(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetStrength() {
		return memory.read<float>(m_addr + 96);
	}
	float GetFalloff() {
		return memory.read<float>(m_addr + 100);
	}
	float GetDepth() {
		return memory.read<float>(m_addr + 104);
	}
	enum class EPlaneBrushSideMode GetWhichSide() {
		return memory.read<enum class EPlaneBrushSideMode>(m_addr + 108);
	}

private:
	std::uint64_t m_addr = 0;
};


class UDrawPolyPathExtrudeProperties
{
public:
	UDrawPolyPathExtrudeProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EDrawPolyPathExtrudeDirection GetDirection() {
		return memory.read<enum class EDrawPolyPathExtrudeDirection>(m_addr + 96);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMeshSelectionTool
{
public:
	UMeshSelectionTool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMeshSelectionToolProperties GetSelectionProps() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 504);
		return struct UMeshSelectionToolProperties(ptr_addr);
	}
	struct UMeshSelectionEditActions GetSelectionActions() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 512);
		return struct UMeshSelectionEditActions(ptr_addr);
	}
	struct UMeshSelectionToolActionPropertySet GetEditActions() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 520);
		return struct UMeshSelectionToolActionPropertySet(ptr_addr);
	}
	struct UMeshSelectionSet GetSelection() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 528);
		return struct UMeshSelectionSet(ptr_addr);
	}
	struct TArray<struct AActor> GetSpawnedActors() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 536);
		return struct TArray<struct AActor>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UDrawPolyPathTool
{
public:
	UDrawPolyPathTool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UDrawPolyPathProperties GetTransformProps() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 160);
		return struct UDrawPolyPathProperties(ptr_addr);
	}
	struct UDrawPolyPathExtrudeProperties GetExtrudeProperties() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 168);
		return struct UDrawPolyPathExtrudeProperties(ptr_addr);
	}
	struct UNewMeshMaterialProperties GetMaterialProperties() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 176);
		return struct UNewMeshMaterialProperties(ptr_addr);
	}
	struct UConstructionPlaneMechanic GetPlaneMechanic() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 320);
		return struct UConstructionPlaneMechanic(ptr_addr);
	}
	struct UPolyEditPreviewMesh GetEditPreview() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 488);
		return struct UPolyEditPreviewMesh(ptr_addr);
	}
	struct UPlaneDistanceFromHitMechanic GetExtrudeHeightMechanic() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 496);
		return struct UPlaneDistanceFromHitMechanic(ptr_addr);
	}
	struct USpatialCurveDistanceMechanic GetCurveDistMechanic() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 504);
		return struct USpatialCurveDistanceMechanic(ptr_addr);
	}
	struct UCollectSurfacePathMechanic GetSurfacePathMechanic() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 512);
		return struct UCollectSurfacePathMechanic(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UPlaneBrushOpProps
{
public:
	UPlaneBrushOpProps(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetStrength() {
		return memory.read<float>(m_addr + 96);
	}
	float GetFalloff() {
		return memory.read<float>(m_addr + 100);
	}
	float GetDepth() {
		return memory.read<float>(m_addr + 104);
	}
	enum class EPlaneBrushSideMode GetWhichSide() {
		return memory.read<enum class EPlaneBrushSideMode>(m_addr + 108);
	}

private:
	std::uint64_t m_addr = 0;
};


class UDynamicMeshBrushTool
{
public:
	UDynamicMeshBrushTool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPreviewMesh GetPreviewMesh() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 440);
		return struct UPreviewMesh(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class USeamSculptToolProperties
{
public:
	USeamSculptToolProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbShowWireframe() {
		return memory.read<bool>(m_addr + 96);
	}
	bool GetbHitBackFaces() {
		return memory.read<bool>(m_addr + 97);
	}

private:
	std::uint64_t m_addr = 0;
};


class UDynamicMeshSculptToolBuilder
{
public:
	UDynamicMeshSculptToolBuilder(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UDynamicSculptToolActions
{
public:
	UDynamicSculptToolActions(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMeshConstraintProperties
{
public:
	UMeshConstraintProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbPreserveSharpEdges() {
		return memory.read<bool>(m_addr + 96);
	}
	enum class EMeshBoundaryConstraint GetMeshBoundaryConstraint() {
		return memory.read<enum class EMeshBoundaryConstraint>(m_addr + 97);
	}
	enum class EGroupBoundaryConstraint GetGroupBoundaryConstraint() {
		return memory.read<enum class EGroupBoundaryConstraint>(m_addr + 98);
	}
	enum class EMaterialBoundaryConstraint GetMaterialBoundaryConstraint() {
		return memory.read<enum class EMaterialBoundaryConstraint>(m_addr + 99);
	}
	bool GetbPreventNormalFlips() {
		return memory.read<bool>(m_addr + 100);
	}

private:
	std::uint64_t m_addr = 0;
};


class URemeshProperties
{
public:
	URemeshProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetSmoothingStrength() {
		return memory.read<float>(m_addr + 104);
	}
	bool GetbFlips() {
		return memory.read<bool>(m_addr + 108);
	}
	bool GetbSplits() {
		return memory.read<bool>(m_addr + 109);
	}
	bool GetbCollapses() {
		return memory.read<bool>(m_addr + 110);
	}

private:
	std::uint64_t m_addr = 0;
};


class UFixedPlaneBrushProperties
{
public:
	UFixedPlaneBrushProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbPropertySetEnabled() {
		return memory.read<bool>(m_addr + 96);
	}
	bool GetbShowGizmo() {
		return memory.read<bool>(m_addr + 97);
	}
	bool GetbSnapToGrid() {
		return memory.read<bool>(m_addr + 98);
	}
	struct FVector Getposition() {
		return memory.read<struct FVector>(m_addr + 100);
	}
	struct FQuat GetRotation() {
		return memory.read<struct FQuat>(m_addr + 112);
	}

private:
	std::uint64_t m_addr = 0;
};


class URevolveBoundaryToolBuilder
{
public:
	URevolveBoundaryToolBuilder(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UPolyEditCommonProperties
{
public:
	UPolyEditCommonProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbShowWireframe() {
		return memory.read<bool>(m_addr + 96);
	}
	enum class ELocalFrameMode GetLocalFrameMode() {
		return memory.read<enum class ELocalFrameMode>(m_addr + 100);
	}
	bool GetbLockRotation() {
		return memory.read<bool>(m_addr + 104);
	}
	bool GetbSnapToWorldGrid() {
		return memory.read<bool>(m_addr + 105);
	}

private:
	std::uint64_t m_addr = 0;
};


class UDynamicMeshSculptTool
{
public:
	UDynamicMeshSculptTool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USculptBrushProperties GetBrushProperties() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 192);
		return struct USculptBrushProperties(ptr_addr);
	}
	struct UBrushSculptProperties GetSculptProperties() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 200);
		return struct UBrushSculptProperties(ptr_addr);
	}
	struct USculptMaxBrushProperties GetSculptMaxBrushProperties() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 208);
		return struct USculptMaxBrushProperties(ptr_addr);
	}
	struct UKelvinBrushProperties GetKelvinBrushProperties() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 216);
		return struct UKelvinBrushProperties(ptr_addr);
	}
	struct UBrushRemeshProperties GetRemeshProperties() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 224);
		return struct UBrushRemeshProperties(ptr_addr);
	}
	struct UFixedPlaneBrushProperties GetGizmoProperties() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 232);
		return struct UFixedPlaneBrushProperties(ptr_addr);
	}
	struct UMeshEditingViewProperties GetViewProperties() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 240);
		return struct UMeshEditingViewProperties(ptr_addr);
	}
	struct UDynamicSculptToolActions GetSculptToolActions() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 248);
		return struct UDynamicSculptToolActions(ptr_addr);
	}
	struct UBrushStampIndicator GetBrushIndicator() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 320);
		return struct UBrushStampIndicator(ptr_addr);
	}
	struct UMaterialInstanceDynamic GetBrushIndicatorMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 328);
		return struct UMaterialInstanceDynamic(ptr_addr);
	}
	struct UPreviewMesh GetBrushIndicatorMesh() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 336);
		return struct UPreviewMesh(ptr_addr);
	}
	struct UOctreeDynamicMeshComponent GetDynamicMeshComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 344);
		return struct UOctreeDynamicMeshComponent(ptr_addr);
	}
	struct UMaterialInstanceDynamic GetActiveOverrideMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 352);
		return struct UMaterialInstanceDynamic(ptr_addr);
	}
	struct UTransformGizmo GetPlaneTransformGizmo() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 3336);
		return struct UTransformGizmo(ptr_addr);
	}
	struct UTransformProxy GetPlaneTransformProxy() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 3344);
		return struct UTransformProxy(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UIterativeOffsetProperties
{
public:
	UIterativeOffsetProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t Getsteps() {
		return memory.read<int32_t>(m_addr + 96);
	}
	bool GetbOffsetBoundaries() {
		return memory.read<bool>(m_addr + 100);
	}
	float GetSmoothingPerStep() {
		return memory.read<float>(m_addr + 104);
	}
	bool GetbReprojectSmooth() {
		return memory.read<bool>(m_addr + 108);
	}

private:
	std::uint64_t m_addr = 0;
};


class UPullKelvinletBrushOpProps
{
public:
	UPullKelvinletBrushOpProps(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetFalloff() {
		return memory.read<float>(m_addr + 112);
	}
	float GetDepth() {
		return memory.read<float>(m_addr + 116);
	}

private:
	std::uint64_t m_addr = 0;
};


class UEdgeLoopInsertionProperties
{
public:
	UEdgeLoopInsertionProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EEdgeLoopPositioningMode GetPositionMode() {
		return memory.read<enum class EEdgeLoopPositioningMode>(m_addr + 96);
	}
	enum class EEdgeLoopInsertionMode GetInsertionMode() {
		return memory.read<enum class EEdgeLoopInsertionMode>(m_addr + 100);
	}
	int32_t GetNumLoops() {
		return memory.read<int32_t>(m_addr + 104);
	}
	double GetProportionOffset() {
		return memory.read<double>(m_addr + 112);
	}
	double GetDistanceOffset() {
		return memory.read<double>(m_addr + 120);
	}
	bool GetbInteractive() {
		return memory.read<bool>(m_addr + 128);
	}
	bool GetbFlipOffsetDirection() {
		return memory.read<bool>(m_addr + 129);
	}
	bool GetbWireframe() {
		return memory.read<bool>(m_addr + 130);
	}
	double GetVertexTolerance() {
		return memory.read<double>(m_addr + 136);
	}

private:
	std::uint64_t m_addr = 0;
};


class UEditMeshPolygonsToolBuilder
{
public:
	UEditMeshPolygonsToolBuilder(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UVoxelBlendMeshesToolBuilder
{
public:
	UVoxelBlendMeshesToolBuilder(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UEditMeshPolygonsToolActions
{
public:
	UEditMeshPolygonsToolActions(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UEditPivotToolProperties
{
public:
	UEditPivotToolProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbEnableSnapDragging() {
		return memory.read<bool>(m_addr + 96);
	}
	enum class EEditPivotSnapDragRotationMode GetRotationMode() {
		return memory.read<enum class EEditPivotSnapDragRotationMode>(m_addr + 97);
	}

private:
	std::uint64_t m_addr = 0;
};


class UEditMeshPolygonsToolActions_Triangles
{
public:
	UEditMeshPolygonsToolActions_Triangles(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UEditMeshPolygonsToolUVActions
{
public:
	UEditMeshPolygonsToolUVActions(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UEditMeshPolygonsToolEdgeActions
{
public:
	UEditMeshPolygonsToolEdgeActions(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UPlaneCutTool
{
public:
	UPlaneCutTool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPlaneCutToolProperties GetBasicProperties() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 152);
		return struct UPlaneCutToolProperties(ptr_addr);
	}
	struct UAcceptOutputProperties GetAcceptProperties() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 160);
		return struct UAcceptOutputProperties(ptr_addr);
	}
	struct FVector GetCutPlaneOrigin() {
		return memory.read<struct FVector>(m_addr + 168);
	}
	struct FQuat GetCutPlaneOrientation() {
		return memory.read<struct FQuat>(m_addr + 192);
	}
	struct TArray<struct UMeshOpPreviewWithBackgroundCompute> GetPreviews() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 208);
		return struct TArray<struct UMeshOpPreviewWithBackgroundCompute>(ptr_addr);
	}
	struct TArray<struct UDynamicMeshReplacementChangeTarget> GetMeshesToCut() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 224);
		return struct TArray<struct UDynamicMeshReplacementChangeTarget>(ptr_addr);
	}
	struct UTransformGizmo GetPlaneTransformGizmo() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 328);
		return struct UTransformGizmo(ptr_addr);
	}
	struct UTransformProxy GetPlaneTransformProxy() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 336);
		return struct UTransformProxy(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UEditMeshPolygonsToolEdgeActions_Triangles
{
public:
	UEditMeshPolygonsToolEdgeActions_Triangles(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UPolyEditExtrudeProperties
{
public:
	UPolyEditExtrudeProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EPolyEditExtrudeDirection GetDirection() {
		return memory.read<enum class EPolyEditExtrudeDirection>(m_addr + 96);
	}
	bool GetbShellsToSolids() {
		return memory.read<bool>(m_addr + 100);
	}

private:
	std::uint64_t m_addr = 0;
};


class UHoleFillToolBuilder
{
public:
	UHoleFillToolBuilder(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UPolyEditOffsetProperties
{
public:
	UPolyEditOffsetProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbUseFaceNormals() {
		return memory.read<bool>(m_addr + 96);
	}

private:
	std::uint64_t m_addr = 0;
};


class UPolyEditInsetProperties
{
public:
	UPolyEditInsetProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbReproject() {
		return memory.read<bool>(m_addr + 96);
	}
	float GetSoftness() {
		return memory.read<float>(m_addr + 100);
	}
	bool GetbBoundaryOnly() {
		return memory.read<bool>(m_addr + 104);
	}
	float GetAreaScale() {
		return memory.read<float>(m_addr + 108);
	}

private:
	std::uint64_t m_addr = 0;
};


class UPolyEditOutsetProperties
{
public:
	UPolyEditOutsetProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetSoftness() {
		return memory.read<float>(m_addr + 96);
	}
	bool GetbBoundaryOnly() {
		return memory.read<bool>(m_addr + 100);
	}
	float GetAreaScale() {
		return memory.read<float>(m_addr + 104);
	}

private:
	std::uint64_t m_addr = 0;
};


class UPolyEditCutProperties
{
public:
	UPolyEditCutProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EPolyEditCutPlaneOrientation GetOrientation() {
		return memory.read<enum class EPolyEditCutPlaneOrientation>(m_addr + 96);
	}
	bool GetbSnapToVertices() {
		return memory.read<bool>(m_addr + 100);
	}

private:
	std::uint64_t m_addr = 0;
};


class UPolyEditSetUVProperties
{
public:
	UPolyEditSetUVProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbShowMaterial() {
		return memory.read<bool>(m_addr + 96);
	}

private:
	std::uint64_t m_addr = 0;
};


class UEditMeshPolygonsTool
{
public:
	UEditMeshPolygonsTool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USimpleDynamicMeshComponent GetDynamicMeshComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 208);
		return struct USimpleDynamicMeshComponent(ptr_addr);
	}
	struct UPolyEditCommonProperties GetCommonProps() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 216);
		return struct UPolyEditCommonProperties(ptr_addr);
	}
	struct UEditMeshPolygonsToolActions GetEditActions() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 224);
		return struct UEditMeshPolygonsToolActions(ptr_addr);
	}
	struct UEditMeshPolygonsToolActions_Triangles GetEditActions_Triangles() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 232);
		return struct UEditMeshPolygonsToolActions_Triangles(ptr_addr);
	}
	struct UEditMeshPolygonsToolEdgeActions GetEditEdgeActions() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 240);
		return struct UEditMeshPolygonsToolEdgeActions(ptr_addr);
	}
	struct UEditMeshPolygonsToolEdgeActions_Triangles GetEditEdgeActions_Triangles() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 248);
		return struct UEditMeshPolygonsToolEdgeActions_Triangles(ptr_addr);
	}
	struct UEditMeshPolygonsToolUVActions GetEditUVActions() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 256);
		return struct UEditMeshPolygonsToolUVActions(ptr_addr);
	}
	struct UPolyEditExtrudeProperties GetExtrudeProperties() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 264);
		return struct UPolyEditExtrudeProperties(ptr_addr);
	}
	struct UPolyEditOffsetProperties GetOffsetProperties() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 272);
		return struct UPolyEditOffsetProperties(ptr_addr);
	}
	struct UPolyEditInsetProperties GetInsetProperties() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 280);
		return struct UPolyEditInsetProperties(ptr_addr);
	}
	struct UPolyEditOutsetProperties GetOutsetProperties() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 288);
		return struct UPolyEditOutsetProperties(ptr_addr);
	}
	struct UPolyEditCutProperties GetCutProperties() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 296);
		return struct UPolyEditCutProperties(ptr_addr);
	}
	struct UPolyEditSetUVProperties GetSetUVProperties() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 304);
		return struct UPolyEditSetUVProperties(ptr_addr);
	}
	struct UPolygonSelectionMechanic GetSelectionMechanic() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 312);
		return struct UPolygonSelectionMechanic(ptr_addr);
	}
	struct UMultiTransformer GetMultiTransformer() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 328);
		return struct UMultiTransformer(ptr_addr);
	}
	struct UPolyEditPreviewMesh GetEditPreview() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1184);
		return struct UPolyEditPreviewMesh(ptr_addr);
	}
	struct UPlaneDistanceFromHitMechanic GetExtrudeHeightMechanic() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1200);
		return struct UPlaneDistanceFromHitMechanic(ptr_addr);
	}
	struct USpatialCurveDistanceMechanic GetCurveDistMechanic() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1208);
		return struct USpatialCurveDistanceMechanic(ptr_addr);
	}
	struct UCollectSurfacePathMechanic GetSurfacePathMechanic() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1216);
		return struct UCollectSurfacePathMechanic(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UEditNormalsToolBuilder
{
public:
	UEditNormalsToolBuilder(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UEditNormalsToolProperties
{
public:
	UEditNormalsToolProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbRecomputeNormals() {
		return memory.read<bool>(m_addr + 96);
	}
	enum class ENormalCalculationMethod GetNormalCalculationMethod() {
		return memory.read<enum class ENormalCalculationMethod>(m_addr + 97);
	}
	bool GetbFixInconsistentNormals() {
		return memory.read<bool>(m_addr + 98);
	}
	bool GetbInvertNormals() {
		return memory.read<bool>(m_addr + 99);
	}
	enum class ESplitNormalMethod GetSplitNormalMethod() {
		return memory.read<enum class ESplitNormalMethod>(m_addr + 100);
	}
	float GetSharpEdgeAngleThreshold() {
		return memory.read<float>(m_addr + 104);
	}
	bool GetbAllowSharpVertices() {
		return memory.read<bool>(m_addr + 108);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMeshSelectionToolActionPropertySet
{
public:
	UMeshSelectionToolActionPropertySet(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UEditNormalsOperatorFactory
{
public:
	UEditNormalsOperatorFactory(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UEditNormalsTool GetTool() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UEditNormalsTool(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UEditNormalsTool
{
public:
	UEditNormalsTool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UEditNormalsToolProperties GetBasicProperties() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 144);
		return struct UEditNormalsToolProperties(ptr_addr);
	}
	struct UEditNormalsAdvancedProperties GetAdvancedProperties() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 152);
		return struct UEditNormalsAdvancedProperties(ptr_addr);
	}
	struct TArray<struct UMeshOpPreviewWithBackgroundCompute> GetPreviews() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 160);
		return struct TArray<struct UMeshOpPreviewWithBackgroundCompute>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UEditPivotToolBuilder
{
public:
	UEditPivotToolBuilder(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UEditPivotToolActionPropertySet
{
public:
	UEditPivotToolActionPropertySet(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbUseWorldBox() {
		return memory.read<bool>(m_addr + 104);
	}

private:
	std::uint64_t m_addr = 0;
};


class UEditPivotTool
{
public:
	UEditPivotTool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UEditPivotToolProperties GetTransformProps() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 152);
		return struct UEditPivotToolProperties(ptr_addr);
	}
	struct UEditPivotToolActionPropertySet GetEditPivotActions() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 160);
		return struct UEditPivotToolActionPropertySet(ptr_addr);
	}
	struct TArray<struct FEditPivotTarget> GetActiveGizmos() {
		return memory.read<struct TArray<struct FEditPivotTarget>>(m_addr + 376);
	}

private:
	std::uint64_t m_addr = 0;
};


class UWeldMeshEdgesToolBuilder
{
public:
	UWeldMeshEdgesToolBuilder(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UEditUVIslandsToolBuilder
{
public:
	UEditUVIslandsToolBuilder(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UExtractCollisionGeometryToolBuilder
{
public:
	UExtractCollisionGeometryToolBuilder(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMeshSelectionToolBuilder
{
public:
	UMeshSelectionToolBuilder(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UExtractCollisionGeometryTool
{
public:
	UExtractCollisionGeometryTool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UCollisionGeometryVisualizationProperties GetVizSettings() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 136);
		return struct UCollisionGeometryVisualizationProperties(ptr_addr);
	}
	struct UPhysicsObjectToolPropertySet GetObjectProps() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 144);
		return struct UPhysicsObjectToolPropertySet(ptr_addr);
	}
	struct UPreviewGeometry GetPreviewElements() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 152);
		return struct UPreviewGeometry(ptr_addr);
	}
	struct UPreviewMesh GetPreviewMesh() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 160);
		return struct UPreviewMesh(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UGroupEdgeInsertionProperties
{
public:
	UGroupEdgeInsertionProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EGroupEdgeInsertionMode GetInsertionMode() {
		return memory.read<enum class EGroupEdgeInsertionMode>(m_addr + 96);
	}
	bool GetbWireframe() {
		return memory.read<bool>(m_addr + 100);
	}
	double GetVertexTolerance() {
		return memory.read<double>(m_addr + 104);
	}

private:
	std::uint64_t m_addr = 0;
};


class UHoleFillStatisticsProperties
{
public:
	UHoleFillStatisticsProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInitialHoles() {
		return memory.read<struct FString>(m_addr + 96);
	}
	struct FString GetSelectedHoles() {
		return memory.read<struct FString>(m_addr + 112);
	}
	struct FString GetSuccessfulFills() {
		return memory.read<struct FString>(m_addr + 128);
	}
	struct FString GetFailedFills() {
		return memory.read<struct FString>(m_addr + 144);
	}
	struct FString GetRemainingHoles() {
		return memory.read<struct FString>(m_addr + 160);
	}

private:
	std::uint64_t m_addr = 0;
};


class UGroupEdgeInsertionOperatorFactory
{
public:
	UGroupEdgeInsertionOperatorFactory(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UGroupEdgeInsertionTool GetTool() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UGroupEdgeInsertionTool(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UHoleFillToolProperties
{
public:
	UHoleFillToolProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EHoleFillOpFillType GetFillType() {
		return memory.read<enum class EHoleFillOpFillType>(m_addr + 96);
	}
	bool GetbRemoveIsolatedTriangles() {
		return memory.read<bool>(m_addr + 97);
	}

private:
	std::uint64_t m_addr = 0;
};


class UGroupEdgeInsertionTool
{
public:
	UGroupEdgeInsertionTool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UGroupEdgeInsertionProperties GetSettings() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 152);
		return struct UGroupEdgeInsertionProperties(ptr_addr);
	}
	struct UMeshOpPreviewWithBackgroundCompute Getpreview() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 160);
		return struct UMeshOpPreviewWithBackgroundCompute(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class USmoothHoleFillProperties
{
public:
	USmoothHoleFillProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbConstrainToHoleInterior() {
		return memory.read<bool>(m_addr + 96);
	}
	int32_t GetRemeshingExteriorRegionWidth() {
		return memory.read<int32_t>(m_addr + 100);
	}
	int32_t GetSmoothingExteriorRegionWidth() {
		return memory.read<int32_t>(m_addr + 104);
	}
	int32_t GetSmoothingInteriorRegionWidth() {
		return memory.read<int32_t>(m_addr + 108);
	}
	float GetInteriorSmoothness() {
		return memory.read<float>(m_addr + 112);
	}
	double GetFillDensityScalar() {
		return memory.read<double>(m_addr + 120);
	}
	bool GetbProjectDuringRemesh() {
		return memory.read<bool>(m_addr + 128);
	}

private:
	std::uint64_t m_addr = 0;
};


class UHoleFillToolActions
{
public:
	UHoleFillToolActions(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UHoleFillOperatorFactory
{
public:
	UHoleFillOperatorFactory(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UHoleFillTool GetFillTool() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UHoleFillTool(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UHoleFillTool
{
public:
	UHoleFillTool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USmoothHoleFillProperties GetSmoothHoleFillProperties() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 152);
		return struct USmoothHoleFillProperties(ptr_addr);
	}
	struct UHoleFillToolProperties GetProperties() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 160);
		return struct UHoleFillToolProperties(ptr_addr);
	}
	struct UHoleFillToolActions GetActions() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 168);
		return struct UHoleFillToolActions(ptr_addr);
	}
	struct UHoleFillStatisticsProperties GetStatistics() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 176);
		return struct UHoleFillStatisticsProperties(ptr_addr);
	}
	struct UMeshOpPreviewWithBackgroundCompute Getpreview() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 184);
		return struct UMeshOpPreviewWithBackgroundCompute(ptr_addr);
	}
	struct UPolygonSelectionMechanic GetSelectionMechanic() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 192);
		return struct UPolygonSelectionMechanic(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMeshSculptBrushOpProps
{
public:
	UMeshSculptBrushOpProps(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class URemeshMeshToolProperties
{
public:
	URemeshMeshToolProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetTargetTriangleCount() {
		return memory.read<int32_t>(m_addr + 112);
	}
	enum class ERemeshSmoothingType GetSmoothingType() {
		return memory.read<enum class ERemeshSmoothingType>(m_addr + 116);
	}
	bool GetbDiscardAttributes() {
		return memory.read<bool>(m_addr + 117);
	}
	bool GetbShowWireframe() {
		return memory.read<bool>(m_addr + 118);
	}
	bool GetbShowGroupColors() {
		return memory.read<bool>(m_addr + 119);
	}
	enum class ERemeshType GetRemeshType() {
		return memory.read<enum class ERemeshType>(m_addr + 120);
	}
	int32_t GetRemeshIterations() {
		return memory.read<int32_t>(m_addr + 124);
	}
	bool GetbUseTargetEdgeLength() {
		return memory.read<bool>(m_addr + 128);
	}
	float GetTargetEdgeLength() {
		return memory.read<float>(m_addr + 132);
	}
	bool GetbReproject() {
		return memory.read<bool>(m_addr + 136);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBaseKelvinletBrushOpProps
{
public:
	UBaseKelvinletBrushOpProps(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetStiffness() {
		return memory.read<float>(m_addr + 96);
	}
	float GetIncompressiblity() {
		return memory.read<float>(m_addr + 100);
	}
	int32_t GetBrushSteps() {
		return memory.read<int32_t>(m_addr + 104);
	}

private:
	std::uint64_t m_addr = 0;
};


class UScaleKelvinletBrushOpProps
{
public:
	UScaleKelvinletBrushOpProps(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetStrength() {
		return memory.read<float>(m_addr + 112);
	}
	float GetFalloff() {
		return memory.read<float>(m_addr + 116);
	}

private:
	std::uint64_t m_addr = 0;
};


class USharpPullKelvinletBrushOpProps
{
public:
	USharpPullKelvinletBrushOpProps(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetFalloff() {
		return memory.read<float>(m_addr + 112);
	}
	float GetDepth() {
		return memory.read<float>(m_addr + 116);
	}

private:
	std::uint64_t m_addr = 0;
};


class UTwistKelvinletBrushOpProps
{
public:
	UTwistKelvinletBrushOpProps(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetStrength() {
		return memory.read<float>(m_addr + 112);
	}
	float GetFalloff() {
		return memory.read<float>(m_addr + 116);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMeshAnalysisProperties
{
public:
	UMeshAnalysisProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetSurfaceArea() {
		return memory.read<struct FString>(m_addr + 96);
	}
	struct FString GetVolume() {
		return memory.read<struct FString>(m_addr + 112);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMeshAttributePaintToolBuilder
{
public:
	UMeshAttributePaintToolBuilder(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UUVProjectionOperatorFactory
{
public:
	UUVProjectionOperatorFactory(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UUVProjectionTool GetTool() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UUVProjectionTool(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UProjectToTargetToolBuilder
{
public:
	UProjectToTargetToolBuilder(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMeshAttributePaintToolProperties
{
public:
	UMeshAttributePaintToolProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FName> GetAttributes() {
		return memory.read<struct TArray<struct FName>>(m_addr + 96);
	}
	int32_t GetSelectedAttribute() {
		return memory.read<int32_t>(m_addr + 112);
	}
	struct FString GetAttributeName() {
		return memory.read<struct FString>(m_addr + 120);
	}

private:
	std::uint64_t m_addr = 0;
};


class UPositionPlaneGizmo
{
public:
	UPositionPlaneGizmo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPreviewMesh GetCenterBallShape() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 136);
		return struct UPreviewMesh(ptr_addr);
	}
	struct UMaterialInstance GetCenterBallMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 144);
		return struct UMaterialInstance(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMeshAttributePaintTool
{
public:
	UMeshAttributePaintTool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMeshAttributePaintToolProperties GetAttribProps() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 504);
		return struct UMeshAttributePaintToolProperties(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMeshBoundaryToolBase
{
public:
	UMeshBoundaryToolBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPolygonSelectionMechanic GetSelectionMechanic() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 312);
		return struct UPolygonSelectionMechanic(ptr_addr);
	}
	struct USingleClickInputBehavior GetLoopSelectClickBehavior() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 320);
		return struct USingleClickInputBehavior(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UImplicitSmoothProperties
{
public:
	UImplicitSmoothProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetSmoothSpeed() {
		return memory.read<float>(m_addr + 96);
	}
	float GetSmoothness() {
		return memory.read<float>(m_addr + 100);
	}
	bool GetbPreserveUVs() {
		return memory.read<bool>(m_addr + 104);
	}
	float GetVolumeCorrection() {
		return memory.read<float>(m_addr + 108);
	}

private:
	std::uint64_t m_addr = 0;
};


class UInflateBrushOpProps
{
public:
	UInflateBrushOpProps(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetStrength() {
		return memory.read<float>(m_addr + 96);
	}
	float GetFalloff() {
		return memory.read<float>(m_addr + 100);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMeshInspectorToolBuilder
{
public:
	UMeshInspectorToolBuilder(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMeshInspectorTool
{
public:
	UMeshInspectorTool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMeshInspectorProperties GetSettings() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 136);
		return struct UMeshInspectorProperties(ptr_addr);
	}
	struct UExistingMeshMaterialProperties GetMaterialSettings() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 144);
		return struct UExistingMeshMaterialProperties(ptr_addr);
	}
	struct UPreviewMesh GetPreviewMesh() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 160);
		return struct UPreviewMesh(ptr_addr);
	}
	struct ULineSetComponent GetDrawnLineSet() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 168);
		return struct ULineSetComponent(ptr_addr);
	}
	struct UMaterialInterface GetDefaultMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 176);
		return struct UMaterialInterface(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNewMeshMaterialProperties
{
public:
	UNewMeshMaterialProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TWeakObjectPtr<UMaterialInterface> GetMaterial() {
		return memory.read<struct TWeakObjectPtr<UMaterialInterface>>(m_addr + 96);
	}
	float GetUVScale() {
		return memory.read<float>(m_addr + 104);
	}
	bool GetbWorldSpaceUVScale() {
		return memory.read<bool>(m_addr + 108);
	}
	bool GetbWireframe() {
		return memory.read<bool>(m_addr + 109);
	}
	bool GetbShowExtendedOptions() {
		return memory.read<bool>(m_addr + 110);
	}

private:
	std::uint64_t m_addr = 0;
};


class UExistingMeshMaterialProperties
{
public:
	UExistingMeshMaterialProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ESetMeshMaterialMode GetMaterialMode() {
		return memory.read<enum class ESetMeshMaterialMode>(m_addr + 96);
	}
	float GetCheckerDensity() {
		return memory.read<float>(m_addr + 100);
	}
	struct UMaterialInterface GetOverrideMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 104);
		return struct UMaterialInterface(ptr_addr);
	}
	struct UMaterialInstanceDynamic GetCheckerMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 112);
		return struct UMaterialInstanceDynamic(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMeshSelectionEditActions
{
public:
	UMeshSelectionEditActions(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMeshEditingViewProperties
{
public:
	UMeshEditingViewProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbShowWireframe() {
		return memory.read<bool>(m_addr + 96);
	}
	enum class EMeshEditingMaterialModes GetMaterialMode() {
		return memory.read<enum class EMeshEditingMaterialModes>(m_addr + 100);
	}
	bool GetbFlatShading() {
		return memory.read<bool>(m_addr + 104);
	}
	struct FLinearColor GetColor() {
		return memory.read<struct FLinearColor>(m_addr + 108);
	}
	struct UTexture2D GetImage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 128);
		return struct UTexture2D(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMoveBrushOpProps
{
public:
	UMoveBrushOpProps(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetStrength() {
		return memory.read<float>(m_addr + 96);
	}
	float GetFalloff() {
		return memory.read<float>(m_addr + 100);
	}
	float GetDepth() {
		return memory.read<float>(m_addr + 104);
	}

private:
	std::uint64_t m_addr = 0;
};


class UPinchBrushOpProps
{
public:
	UPinchBrushOpProps(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetStrength() {
		return memory.read<float>(m_addr + 96);
	}
	float GetFalloff() {
		return memory.read<float>(m_addr + 100);
	}
	float GetDepth() {
		return memory.read<float>(m_addr + 104);
	}
	bool GetbPerpDamping() {
		return memory.read<bool>(m_addr + 108);
	}

private:
	std::uint64_t m_addr = 0;
};


class UViewAlignedPlaneBrushOpProps
{
public:
	UViewAlignedPlaneBrushOpProps(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetStrength() {
		return memory.read<float>(m_addr + 96);
	}
	float GetFalloff() {
		return memory.read<float>(m_addr + 100);
	}
	float GetDepth() {
		return memory.read<float>(m_addr + 104);
	}
	enum class EPlaneBrushSideMode GetWhichSide() {
		return memory.read<enum class EPlaneBrushSideMode>(m_addr + 108);
	}

private:
	std::uint64_t m_addr = 0;
};


class UFixedPlaneBrushOpProps
{
public:
	UFixedPlaneBrushOpProps(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetStrength() {
		return memory.read<float>(m_addr + 96);
	}
	float GetFalloff() {
		return memory.read<float>(m_addr + 100);
	}
	float GetDepth() {
		return memory.read<float>(m_addr + 104);
	}
	enum class EPlaneBrushSideMode GetWhichSide() {
		return memory.read<enum class EPlaneBrushSideMode>(m_addr + 108);
	}

private:
	std::uint64_t m_addr = 0;
};


class UStandardSculptBrushOpProps
{
public:
	UStandardSculptBrushOpProps(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetStrength() {
		return memory.read<float>(m_addr + 96);
	}
	float GetFalloff() {
		return memory.read<float>(m_addr + 100);
	}

private:
	std::uint64_t m_addr = 0;
};


class UViewAlignedSculptBrushOpProps
{
public:
	UViewAlignedSculptBrushOpProps(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetStrength() {
		return memory.read<float>(m_addr + 96);
	}
	float GetFalloff() {
		return memory.read<float>(m_addr + 100);
	}

private:
	std::uint64_t m_addr = 0;
};


class USculptBrushProperties
{
public:
	USculptBrushProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetDepth() {
		return memory.read<float>(m_addr + 120);
	}
	bool GetbHitBackFaces() {
		return memory.read<bool>(m_addr + 124);
	}
	float GetLazyness() {
		return memory.read<float>(m_addr + 128);
	}
	bool GetbShowPerBrushProps() {
		return memory.read<bool>(m_addr + 132);
	}

private:
	std::uint64_t m_addr = 0;
};


class UKelvinBrushProperties
{
public:
	UKelvinBrushProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetFalloffDistance() {
		return memory.read<float>(m_addr + 96);
	}
	float GetStiffness() {
		return memory.read<float>(m_addr + 100);
	}
	float GetIncompressiblity() {
		return memory.read<float>(m_addr + 104);
	}
	int32_t GetBrushSteps() {
		return memory.read<int32_t>(m_addr + 108);
	}

private:
	std::uint64_t m_addr = 0;
};


class UWorkPlaneProperties
{
public:
	UWorkPlaneProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbPropertySetEnabled() {
		return memory.read<bool>(m_addr + 96);
	}
	bool GetbShowGizmo() {
		return memory.read<bool>(m_addr + 97);
	}
	bool GetbSnapToGrid() {
		return memory.read<bool>(m_addr + 98);
	}
	struct FVector Getposition() {
		return memory.read<struct FVector>(m_addr + 100);
	}
	struct FQuat GetRotation() {
		return memory.read<struct FQuat>(m_addr + 112);
	}

private:
	std::uint64_t m_addr = 0;
};


class USculptMaxBrushProperties
{
public:
	USculptMaxBrushProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetMaxHeight() {
		return memory.read<float>(m_addr + 96);
	}
	bool GetbFreezeCurrentHeight() {
		return memory.read<bool>(m_addr + 100);
	}

private:
	std::uint64_t m_addr = 0;
};


class USeamSculptTool
{
public:
	USeamSculptTool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USeamSculptToolProperties GetSettings() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 504);
		return struct USeamSculptToolProperties(ptr_addr);
	}
	struct UPreviewGeometry GetPreviewGeom() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 512);
		return struct UPreviewGeometry(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMeshSculptToolBase
{
public:
	UMeshSculptToolBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USculptBrushProperties GetBrushProperties() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 192);
		return struct USculptBrushProperties(ptr_addr);
	}
	struct UWorkPlaneProperties GetGizmoProperties() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 200);
		return struct UWorkPlaneProperties(ptr_addr);
	}
	struct TMap<int32_t, struct UMeshSculptBrushOpProps> GetBrushOpPropSets() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 432);
		return struct TMap<int32_t, struct UMeshSculptBrushOpProps>(ptr_addr);
	}
	struct TMap<int32_t, struct UMeshSculptBrushOpProps> GetSecondaryBrushOpPropSets() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 592);
		return struct TMap<int32_t, struct UMeshSculptBrushOpProps>(ptr_addr);
	}
	struct UMeshEditingViewProperties GetViewProperties() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2160);
		return struct UMeshEditingViewProperties(ptr_addr);
	}
	struct UMaterialInstanceDynamic GetActiveOverrideMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2168);
		return struct UMaterialInstanceDynamic(ptr_addr);
	}
	struct UBrushStampIndicator GetBrushIndicator() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2176);
		return struct UBrushStampIndicator(ptr_addr);
	}
	struct UMaterialInstanceDynamic GetBrushIndicatorMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2184);
		return struct UMaterialInstanceDynamic(ptr_addr);
	}
	struct UPreviewMesh GetBrushIndicatorMesh() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2192);
		return struct UPreviewMesh(ptr_addr);
	}
	struct UTransformGizmo GetPlaneTransformGizmo() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2200);
		return struct UTransformGizmo(ptr_addr);
	}
	struct UTransformProxy GetPlaneTransformProxy() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2208);
		return struct UTransformProxy(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMeshSelectionMeshEditActions
{
public:
	UMeshSelectionMeshEditActions(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UBaseSmoothBrushOpProps
{
public:
	UBaseSmoothBrushOpProps(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class URemoveOccludedTrianglesTool
{
public:
	URemoveOccludedTrianglesTool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct URemoveOccludedTrianglesToolProperties GetBasicProperties() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 144);
		return struct URemoveOccludedTrianglesToolProperties(ptr_addr);
	}
	struct URemoveOccludedTrianglesAdvancedProperties GetAdvancedProperties() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 152);
		return struct URemoveOccludedTrianglesAdvancedProperties(ptr_addr);
	}
	struct TArray<struct UMeshOpPreviewWithBackgroundCompute> GetPreviews() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 160);
		return struct TArray<struct UMeshOpPreviewWithBackgroundCompute>(ptr_addr);
	}
	struct TArray<struct UPreviewMesh> GetPreviewCopies() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 176);
		return struct TArray<struct UPreviewMesh>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class USmoothBrushOpProps
{
public:
	USmoothBrushOpProps(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetStrength() {
		return memory.read<float>(m_addr + 96);
	}
	float GetFalloff() {
		return memory.read<float>(m_addr + 100);
	}
	bool GetbPreserveUVFlow() {
		return memory.read<bool>(m_addr + 104);
	}

private:
	std::uint64_t m_addr = 0;
};


class USecondarySmoothBrushOpProps
{
public:
	USecondarySmoothBrushOpProps(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetStrength() {
		return memory.read<float>(m_addr + 96);
	}
	float GetFalloff() {
		return memory.read<float>(m_addr + 100);
	}
	bool GetbPreserveUVFlow() {
		return memory.read<bool>(m_addr + 104);
	}

private:
	std::uint64_t m_addr = 0;
};


class USmoothFillBrushOpProps
{
public:
	USmoothFillBrushOpProps(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetStrength() {
		return memory.read<float>(m_addr + 96);
	}
	float GetFalloff() {
		return memory.read<float>(m_addr + 100);
	}
	bool GetbPreserveUVFlow() {
		return memory.read<bool>(m_addr + 104);
	}

private:
	std::uint64_t m_addr = 0;
};


class UVoxelBlendMeshesToolProperties
{
public:
	UVoxelBlendMeshesToolProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	double GetBlendPower() {
		return memory.read<double>(m_addr + 96);
	}
	double GetBlendFalloff() {
		return memory.read<double>(m_addr + 104);
	}
	bool GetbSolidifyInput() {
		return memory.read<bool>(m_addr + 112);
	}
	bool GetbRemoveInternalsAfterSolidify() {
		return memory.read<bool>(m_addr + 113);
	}
	double GetOffsetSolidifySurface() {
		return memory.read<double>(m_addr + 120);
	}

private:
	std::uint64_t m_addr = 0;
};


class UEraseBrushOpProps
{
public:
	UEraseBrushOpProps(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetStrength() {
		return memory.read<float>(m_addr + 96);
	}
	float GetFalloff() {
		return memory.read<float>(m_addr + 100);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMeshSpaceDeformerToolBuilder
{
public:
	UMeshSpaceDeformerToolBuilder(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMeshSpaceDeformerTool
{
public:
	UMeshSpaceDeformerTool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ENonlinearOperationType GetSelectedOperationType() {
		return memory.read<enum class ENonlinearOperationType>(m_addr + 192);
	}
	float GetUpperBoundsInterval() {
		return memory.read<float>(m_addr + 196);
	}
	float GetLowerBoundsInterval() {
		return memory.read<float>(m_addr + 200);
	}
	float GetModifierPercent() {
		return memory.read<float>(m_addr + 204);
	}
	bool GetbSnapToWorldGrid() {
		return memory.read<bool>(m_addr + 208);
	}
	struct UGizmoTransformChangeStateTarget GetStateTarget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 216);
		return struct UGizmoTransformChangeStateTarget(ptr_addr);
	}
	struct UMeshOpPreviewWithBackgroundCompute Getpreview() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 232);
		return struct UMeshOpPreviewWithBackgroundCompute(ptr_addr);
	}
	struct FVector GetGizmoCenter() {
		return memory.read<struct FVector>(m_addr + 272);
	}
	struct FQuat GetGizmoOrientation() {
		return memory.read<struct FQuat>(m_addr + 288);
	}
	struct UIntervalGizmo GetIntervalGizmo() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 304);
		return struct UIntervalGizmo(ptr_addr);
	}
	struct UTransformGizmo GetTransformGizmo() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 312);
		return struct UTransformGizmo(ptr_addr);
	}
	struct UTransformProxy GetTransformProxy() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 320);
		return struct UTransformProxy(ptr_addr);
	}
	struct UGizmoLocalFloatParameterSource GetUpIntervalSource() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 328);
		return struct UGizmoLocalFloatParameterSource(ptr_addr);
	}
	struct UGizmoLocalFloatParameterSource GetDownIntervalSource() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 336);
		return struct UGizmoLocalFloatParameterSource(ptr_addr);
	}
	struct UGizmoLocalFloatParameterSource GetForwardIntervalSource() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 344);
		return struct UGizmoLocalFloatParameterSource(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMeshStatisticsProperties
{
public:
	UMeshStatisticsProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetMesh() {
		return memory.read<struct FString>(m_addr + 96);
	}
	struct FString GetUV() {
		return memory.read<struct FString>(m_addr + 112);
	}
	struct FString GetAttributes() {
		return memory.read<struct FString>(m_addr + 128);
	}

private:
	std::uint64_t m_addr = 0;
};


class UVertexBrushSculptProperties
{
public:
	UVertexBrushSculptProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EMeshVertexSculptBrushType GetPrimaryBrushType() {
		return memory.read<enum class EMeshVertexSculptBrushType>(m_addr + 96);
	}
	enum class EMeshSculptFalloffType GetPrimaryFalloffType() {
		return memory.read<enum class EMeshSculptFalloffType>(m_addr + 97);
	}
	bool GetbFreezeTarget() {
		return memory.read<bool>(m_addr + 98);
	}
	bool GetbSmoothErases() {
		return memory.read<bool>(m_addr + 99);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMeshVertexSculptTool
{
public:
	UMeshVertexSculptTool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UVertexBrushSculptProperties GetSculptProperties() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2520);
		return struct UVertexBrushSculptProperties(ptr_addr);
	}
	struct USimpleDynamicMeshComponent GetDynamicMeshComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2528);
		return struct USimpleDynamicMeshComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMirrorToolProperties
{
public:
	UMirrorToolProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EMirrorOperationMode GetOperationMode() {
		return memory.read<enum class EMirrorOperationMode>(m_addr + 96);
	}
	bool GetbCropAlongMirrorPlaneFirst() {
		return memory.read<bool>(m_addr + 97);
	}
	bool GetbWeldVerticesOnMirrorPlane() {
		return memory.read<bool>(m_addr + 98);
	}
	bool GetbAllowBowtieVertexCreation() {
		return memory.read<bool>(m_addr + 99);
	}
	bool GetbSnapToWorldGrid() {
		return memory.read<bool>(m_addr + 100);
	}
	enum class EMirrorCtrlClickBehavior GetCtrlClickBehavior() {
		return memory.read<enum class EMirrorCtrlClickBehavior>(m_addr + 101);
	}
	bool GetbButtonsOnlyChangeOrientation() {
		return memory.read<bool>(m_addr + 102);
	}
	bool GetbShowPreview() {
		return memory.read<bool>(m_addr + 103);
	}
	enum class EMirrorSaveMode GetSaveMode() {
		return memory.read<enum class EMirrorSaveMode>(m_addr + 104);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMirrorToolActionPropertySet
{
public:
	UMirrorToolActionPropertySet(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMirrorTool
{
public:
	UMirrorTool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMirrorToolProperties GetSettings() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 152);
		return struct UMirrorToolProperties(ptr_addr);
	}
	struct UMirrorToolActionPropertySet GetToolActions() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 160);
		return struct UMirrorToolActionPropertySet(ptr_addr);
	}
	struct TArray<struct UDynamicMeshReplacementChangeTarget> GetMeshesToMirror() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 168);
		return struct TArray<struct UDynamicMeshReplacementChangeTarget>(ptr_addr);
	}
	struct TArray<struct UMeshOpPreviewWithBackgroundCompute> GetPreviews() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 184);
		return struct TArray<struct UMeshOpPreviewWithBackgroundCompute>(ptr_addr);
	}
	struct UConstructionPlaneMechanic GetPlaneMechanic() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 272);
		return struct UConstructionPlaneMechanic(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UOffsetMeshToolProperties
{
public:
	UOffsetMeshToolProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EOffsetMeshToolOffsetType GetOffsetType() {
		return memory.read<enum class EOffsetMeshToolOffsetType>(m_addr + 96);
	}
	float GetDistance() {
		return memory.read<float>(m_addr + 100);
	}
	bool GetbCreateShell() {
		return memory.read<bool>(m_addr + 104);
	}

private:
	std::uint64_t m_addr = 0;
};


class UOffsetWeightMapSetProperties
{
public:
	UOffsetWeightMapSetProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetMinDistance() {
		return memory.read<float>(m_addr + 128);
	}

private:
	std::uint64_t m_addr = 0;
};


class UOffsetMeshToolBuilder
{
public:
	UOffsetMeshToolBuilder(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UPhysicsInspectorTool
{
public:
	UPhysicsInspectorTool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UCollisionGeometryVisualizationProperties GetVizSettings() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 144);
		return struct UCollisionGeometryVisualizationProperties(ptr_addr);
	}
	struct TArray<struct UPhysicsObjectToolPropertySet> GetObjectData() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 152);
		return struct TArray<struct UPhysicsObjectToolPropertySet>(ptr_addr);
	}
	struct UMaterialInterface GetLineMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 168);
		return struct UMaterialInterface(ptr_addr);
	}
	struct TArray<struct UPreviewGeometry> GetPreviewElements() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 176);
		return struct TArray<struct UPreviewGeometry>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UPlaneCutToolBuilder
{
public:
	UPlaneCutToolBuilder(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UPlaneCutToolProperties
{
public:
	UPlaneCutToolProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbSnapToWorldGrid() {
		return memory.read<bool>(m_addr + 96);
	}
	bool GetbKeepBothHalves() {
		return memory.read<bool>(m_addr + 97);
	}
	float GetSpacingBetweenHalves() {
		return memory.read<float>(m_addr + 100);
	}
	bool GetbFillCutHole() {
		return memory.read<bool>(m_addr + 104);
	}
	bool GetbShowPreview() {
		return memory.read<bool>(m_addr + 105);
	}
	bool GetbFillSpans() {
		return memory.read<bool>(m_addr + 106);
	}

private:
	std::uint64_t m_addr = 0;
};


class UPlaneCutOperatorFactory
{
public:
	UPlaneCutOperatorFactory(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPlaneCutTool GetCutTool() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UPlaneCutTool(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UPositionPlaneOnSceneInputBehavior
{
public:
	UPositionPlaneOnSceneInputBehavior(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UProjectToTargetToolProperties
{
public:
	UProjectToTargetToolProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class URemeshMeshTool
{
public:
	URemeshMeshTool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct URemeshMeshToolProperties GetBasicProperties() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 152);
		return struct URemeshMeshToolProperties(ptr_addr);
	}
	struct UMeshStatisticsProperties GetMeshStatisticsProperties() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 160);
		return struct UMeshStatisticsProperties(ptr_addr);
	}
	struct UMeshOpPreviewWithBackgroundCompute Getpreview() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 168);
		return struct UMeshOpPreviewWithBackgroundCompute(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UProjectToTargetTool
{
public:
	UProjectToTargetTool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class URemoveOccludedTrianglesToolBuilder
{
public:
	URemoveOccludedTrianglesToolBuilder(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class URemoveOccludedTrianglesToolProperties
{
public:
	URemoveOccludedTrianglesToolProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EOcclusionCalculationUIMode GetOcclusionTestMethod() {
		return memory.read<enum class EOcclusionCalculationUIMode>(m_addr + 96);
	}
	enum class EOcclusionTriangleSamplingUIMode GetTriangleSampling() {
		return memory.read<enum class EOcclusionTriangleSamplingUIMode>(m_addr + 97);
	}
	double GetWindingIsoValue() {
		return memory.read<double>(m_addr + 104);
	}
	int32_t GetAddRandomRays() {
		return memory.read<int32_t>(m_addr + 112);
	}
	int32_t GetAddTriangleSamples() {
		return memory.read<int32_t>(m_addr + 116);
	}
	bool GetbOnlySelfOcclude() {
		return memory.read<bool>(m_addr + 120);
	}

private:
	std::uint64_t m_addr = 0;
};


class UVoxelSolidifyMeshesToolProperties
{
public:
	UVoxelSolidifyMeshesToolProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	double GetWindingThreshold() {
		return memory.read<double>(m_addr + 96);
	}
	double GetExtendBounds() {
		return memory.read<double>(m_addr + 104);
	}
	int32_t GetSurfaceSearchSteps() {
		return memory.read<int32_t>(m_addr + 112);
	}
	bool GetbSolidAtBoundaries() {
		return memory.read<bool>(m_addr + 116);
	}
	bool GetbMakeOffsetSurfaces() {
		return memory.read<bool>(m_addr + 117);
	}
	double GetOffsetThickness() {
		return memory.read<double>(m_addr + 120);
	}

private:
	std::uint64_t m_addr = 0;
};


class URemoveOccludedTrianglesAdvancedProperties
{
public:
	URemoveOccludedTrianglesAdvancedProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class URemoveOccludedTrianglesOperatorFactory
{
public:
	URemoveOccludedTrianglesOperatorFactory(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct URemoveOccludedTrianglesTool GetTool() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct URemoveOccludedTrianglesTool(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class URevolveBoundaryOperatorFactory
{
public:
	URevolveBoundaryOperatorFactory(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct URevolveBoundaryTool GetRevolveBoundaryTool() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct URevolveBoundaryTool(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class URevolveBoundaryToolProperties
{
public:
	URevolveBoundaryToolProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbDisplayOriginalMesh() {
		return memory.read<bool>(m_addr + 176);
	}
	struct FVector GetAxisOrigin() {
		return memory.read<struct FVector>(m_addr + 180);
	}
	float GetAxisYaw() {
		return memory.read<float>(m_addr + 192);
	}
	float GetAxisPitch() {
		return memory.read<float>(m_addr + 196);
	}
	bool GetbSnapToWorldGrid() {
		return memory.read<bool>(m_addr + 200);
	}

private:
	std::uint64_t m_addr = 0;
};


class URevolveBoundaryTool
{
public:
	URevolveBoundaryTool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct URevolveBoundaryToolProperties GetSettings() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 352);
		return struct URevolveBoundaryToolProperties(ptr_addr);
	}
	struct UNewMeshMaterialProperties GetMaterialProperties() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 360);
		return struct UNewMeshMaterialProperties(ptr_addr);
	}
	struct UConstructionPlaneMechanic GetPlaneMechanic() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 368);
		return struct UConstructionPlaneMechanic(ptr_addr);
	}
	struct UMeshOpPreviewWithBackgroundCompute Getpreview() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 376);
		return struct UMeshOpPreviewWithBackgroundCompute(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class USeamSculptToolBuilder
{
public:
	USeamSculptToolBuilder(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class USelfUnionMeshesToolProperties
{
public:
	USelfUnionMeshesToolProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbAttemptFixHoles() {
		return memory.read<bool>(m_addr + 96);
	}
	bool GetbShowNewBoundaryEdges() {
		return memory.read<bool>(m_addr + 97);
	}
	bool GetbTrimFlaps() {
		return memory.read<bool>(m_addr + 98);
	}
	double GetWindingNumberThreshold() {
		return memory.read<double>(m_addr + 104);
	}
	bool GetbOnlyUseFirstMeshMaterials() {
		return memory.read<bool>(m_addr + 112);
	}

private:
	std::uint64_t m_addr = 0;
};


class USelfUnionMeshesTool
{
public:
	USelfUnionMeshesTool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USelfUnionMeshesToolProperties GetProperties() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 240);
		return struct USelfUnionMeshesToolProperties(ptr_addr);
	}
	struct ULineSetComponent GetDrawnLineSet() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 248);
		return struct ULineSetComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class USelfUnionMeshesToolBuilder
{
public:
	USelfUnionMeshesToolBuilder(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class USetCollisionGeometryToolBuilder
{
public:
	USetCollisionGeometryToolBuilder(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class USetCollisionGeometryToolProperties
{
public:
	USetCollisionGeometryToolProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ECollisionGeometryType GetGeometryType() {
		return memory.read<enum class ECollisionGeometryType>(m_addr + 96);
	}
	enum class ESetCollisionGeometryInputMode GetInputMode() {
		return memory.read<enum class ESetCollisionGeometryInputMode>(m_addr + 100);
	}
	bool GetbUseWorldSpace() {
		return memory.read<bool>(m_addr + 104);
	}
	bool GetbRemoveContained() {
		return memory.read<bool>(m_addr + 105);
	}
	bool GetbEnableMaxCount() {
		return memory.read<bool>(m_addr + 106);
	}
	int32_t GetMaxCount() {
		return memory.read<int32_t>(m_addr + 108);
	}
	float GetMinThickness() {
		return memory.read<float>(m_addr + 112);
	}
	bool GetbDetectBoxes() {
		return memory.read<bool>(m_addr + 116);
	}
	bool GetbDetectSpheres() {
		return memory.read<bool>(m_addr + 117);
	}
	bool GetbDetectCapsules() {
		return memory.read<bool>(m_addr + 118);
	}
	bool GetbSimplifyHulls() {
		return memory.read<bool>(m_addr + 119);
	}
	int32_t GetHullTargetFaceCount() {
		return memory.read<int32_t>(m_addr + 120);
	}
	bool GetbSimplifyPolygons() {
		return memory.read<bool>(m_addr + 124);
	}
	float GetHullTolerance() {
		return memory.read<float>(m_addr + 128);
	}
	enum class EProjectedHullAxis GetSweepAxis() {
		return memory.read<enum class EProjectedHullAxis>(m_addr + 132);
	}
	bool GetbAppendToExisting() {
		return memory.read<bool>(m_addr + 136);
	}
	enum class ECollisionGeometryMode GetSetCollisionType() {
		return memory.read<enum class ECollisionGeometryMode>(m_addr + 140);
	}

private:
	std::uint64_t m_addr = 0;
};


class USmoothMeshToolProperties
{
public:
	USmoothMeshToolProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ESmoothMeshToolSmoothType GetSmoothingType() {
		return memory.read<enum class ESmoothMeshToolSmoothType>(m_addr + 96);
	}

private:
	std::uint64_t m_addr = 0;
};


class UIterativeSmoothProperties
{
public:
	UIterativeSmoothProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetSmoothingPerStep() {
		return memory.read<float>(m_addr + 96);
	}
	int32_t Getsteps() {
		return memory.read<int32_t>(m_addr + 100);
	}
	bool GetbSmoothBoundary() {
		return memory.read<bool>(m_addr + 104);
	}

private:
	std::uint64_t m_addr = 0;
};


class UDiffusionSmoothProperties
{
public:
	UDiffusionSmoothProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetSmoothingPerStep() {
		return memory.read<float>(m_addr + 96);
	}
	int32_t Getsteps() {
		return memory.read<int32_t>(m_addr + 100);
	}
	bool GetbPreserveUVs() {
		return memory.read<bool>(m_addr + 104);
	}

private:
	std::uint64_t m_addr = 0;
};


class USmoothWeightMapSetProperties
{
public:
	USmoothWeightMapSetProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetMinSmoothMultiplier() {
		return memory.read<float>(m_addr + 128);
	}

private:
	std::uint64_t m_addr = 0;
};


class USmoothMeshTool
{
public:
	USmoothMeshTool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USmoothMeshToolProperties GetSmoothProperties() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1024);
		return struct USmoothMeshToolProperties(ptr_addr);
	}
	struct UIterativeSmoothProperties GetIterativeProperties() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1032);
		return struct UIterativeSmoothProperties(ptr_addr);
	}
	struct UDiffusionSmoothProperties GetDiffusionProperties() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1040);
		return struct UDiffusionSmoothProperties(ptr_addr);
	}
	struct UImplicitSmoothProperties GetImplicitProperties() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1048);
		return struct UImplicitSmoothProperties(ptr_addr);
	}
	struct USmoothWeightMapSetProperties GetWeightMapProperties() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1056);
		return struct USmoothWeightMapSetProperties(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class USmoothMeshToolBuilder
{
public:
	USmoothMeshToolBuilder(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UTransformMeshesToolBuilder
{
public:
	UTransformMeshesToolBuilder(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UTransformMeshesToolProperties
{
public:
	UTransformMeshesToolProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ETransformMeshesTransformMode GetTransformMode() {
		return memory.read<enum class ETransformMeshesTransformMode>(m_addr + 96);
	}
	bool GetbSetPivot() {
		return memory.read<bool>(m_addr + 97);
	}
	bool GetbEnableSnapDragging() {
		return memory.read<bool>(m_addr + 98);
	}
	enum class ETransformMeshesSnapDragSource GetSnapDragSource() {
		return memory.read<enum class ETransformMeshesSnapDragSource>(m_addr + 99);
	}
	enum class ETransformMeshesSnapDragRotationMode GetRotationMode() {
		return memory.read<enum class ETransformMeshesSnapDragRotationMode>(m_addr + 100);
	}

private:
	std::uint64_t m_addr = 0;
};


class UTransformMeshesTool
{
public:
	UTransformMeshesTool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTransformMeshesToolProperties GetTransformProps() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 152);
		return struct UTransformMeshesToolProperties(ptr_addr);
	}
	struct TArray<struct FTransformMeshesTarget> GetActiveGizmos() {
		return memory.read<struct TArray<struct FTransformMeshesTarget>>(m_addr + 176);
	}

private:
	std::uint64_t m_addr = 0;
};


class UUVProjectionToolBuilder
{
public:
	UUVProjectionToolBuilder(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UUVProjectionToolProperties
{
public:
	UUVProjectionToolProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EUVProjectionMethod GetUVProjectionMethod() {
		return memory.read<enum class EUVProjectionMethod>(m_addr + 96);
	}
	struct FVector GetProjectionPrimitiveScale() {
		return memory.read<struct FVector>(m_addr + 100);
	}
	float GetCylinderProjectToTopOrBottomAngleThreshold() {
		return memory.read<float>(m_addr + 112);
	}
	struct FVector2D GetUVScale() {
		return memory.read<struct FVector2D>(m_addr + 116);
	}
	struct FVector2D GetUVOffset() {
		return memory.read<struct FVector2D>(m_addr + 124);
	}
	bool GetbWorldSpaceUVScale() {
		return memory.read<bool>(m_addr + 132);
	}

private:
	std::uint64_t m_addr = 0;
};


class UUVProjectionAdvancedProperties
{
public:
	UUVProjectionAdvancedProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UVoxelMorphologyMeshesToolProperties
{
public:
	UVoxelMorphologyMeshesToolProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EMorphologyOperation GetOperation() {
		return memory.read<enum class EMorphologyOperation>(m_addr + 96);
	}
	double GetDistance() {
		return memory.read<double>(m_addr + 104);
	}
	bool GetbSolidifyInput() {
		return memory.read<bool>(m_addr + 112);
	}
	bool GetbRemoveInternalsAfterSolidify() {
		return memory.read<bool>(m_addr + 113);
	}
	double GetOffsetSolidifySurface() {
		return memory.read<double>(m_addr + 120);
	}

private:
	std::uint64_t m_addr = 0;
};


class UVoxelBlendMeshesTool
{
public:
	UVoxelBlendMeshesTool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UVoxelBlendMeshesToolProperties GetBlendProperties() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 264);
		return struct UVoxelBlendMeshesToolProperties(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UVoxelMorphologyMeshesTool
{
public:
	UVoxelMorphologyMeshesTool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UVoxelMorphologyMeshesToolProperties GetMorphologyProperties() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 264);
		return struct UVoxelMorphologyMeshesToolProperties(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UVoxelMorphologyMeshesToolBuilder
{
public:
	UVoxelMorphologyMeshesToolBuilder(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UVoxelSolidifyMeshesTool
{
public:
	UVoxelSolidifyMeshesTool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UVoxelSolidifyMeshesToolProperties GetSolidifyProperties() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 264);
		return struct UVoxelSolidifyMeshesToolProperties(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UWeldMeshEdgesTool
{
public:
	UWeldMeshEdgesTool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetTolerance() {
		return memory.read<float>(m_addr + 136);
	}
	bool GetbOnlyUnique() {
		return memory.read<bool>(m_addr + 140);
	}

private:
	std::uint64_t m_addr = 0;
};


