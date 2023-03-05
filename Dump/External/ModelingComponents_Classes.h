#pragma once 
#include <ModelingComponents_Structs.h>
 
 
 
class UCollectSurfacePathMechanic
{
public:
	UCollectSurfacePathMechanic(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UBaseCreateFromSelectedToolBuilder
{
public:
	UBaseCreateFromSelectedToolBuilder(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMultiTransformer
{
public:
	UMultiTransformer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UInteractiveGizmoManager GetGizmoManager() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 112);
		return struct UInteractiveGizmoManager(ptr_addr);
	}
	struct UTransformGizmo GetTransformGizmo() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 224);
		return struct UTransformGizmo(ptr_addr);
	}
	struct UTransformProxy GetTransformProxy() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 232);
		return struct UTransformProxy(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UOnAcceptHandleSourcesProperties
{
public:
	UOnAcceptHandleSourcesProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EHandleSourcesMethod GetOnToolAccept() {
		return memory.read<enum class EHandleSourcesMethod>(m_addr + 96);
	}

private:
	std::uint64_t m_addr = 0;
};


class UDynamicMeshReplacementChangeTarget
{
public:
	UDynamicMeshReplacementChangeTarget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UBaseCreateFromSelectedHandleSourceProperties
{
public:
	UBaseCreateFromSelectedHandleSourceProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EBaseCreateFromSelectedTargetType GetWriteOutputTo() {
		return memory.read<enum class EBaseCreateFromSelectedTargetType>(m_addr + 104);
	}
	struct FString GetOutputName() {
		return memory.read<struct FString>(m_addr + 112);
	}
	struct FString GetOutputAsset() {
		return memory.read<struct FString>(m_addr + 128);
	}

private:
	std::uint64_t m_addr = 0;
};


class UTransformInputsToolProperties
{
public:
	UTransformInputsToolProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbShowTransformUI() {
		return memory.read<bool>(m_addr + 96);
	}
	bool GetbSnapToWorldGrid() {
		return memory.read<bool>(m_addr + 97);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBaseVoxelTool
{
public:
	UBaseVoxelTool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UVoxelProperties GetVoxProperties() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 240);
		return struct UVoxelProperties(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBaseMeshProcessingTool
{
public:
	UBaseMeshProcessingTool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMeshOpPreviewWithBackgroundCompute Getpreview() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 176);
		return struct UMeshOpPreviewWithBackgroundCompute(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBaseMeshProcessingToolBuilder
{
public:
	UBaseMeshProcessingToolBuilder(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UOctreeDynamicMeshComponent
{
public:
	UOctreeDynamicMeshComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbExplicitShowWireframe() {
		return memory.read<bool>(m_addr + 1288);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBaseCreateFromSelectedTool
{
public:
	UBaseCreateFromSelectedTool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTransformInputsToolProperties GetTransformProperties() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 152);
		return struct UTransformInputsToolProperties(ptr_addr);
	}
	struct UBaseCreateFromSelectedHandleSourceProperties GetHandleSourcesProperties() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 160);
		return struct UBaseCreateFromSelectedHandleSourceProperties(ptr_addr);
	}
	struct UMeshOpPreviewWithBackgroundCompute Getpreview() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 168);
		return struct UMeshOpPreviewWithBackgroundCompute(ptr_addr);
	}
	struct TArray<struct UTransformProxy> GetTransformProxies() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 176);
		return struct TArray<struct UTransformProxy>(ptr_addr);
	}
	struct TArray<struct UTransformGizmo> GetTransformGizmos() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 192);
		return struct TArray<struct UTransformGizmo>(ptr_addr);
	}
	struct TArray<struct FVector> GetTransformInitialScales() {
		return memory.read<struct TArray<struct FVector>>(m_addr + 208);
	}

private:
	std::uint64_t m_addr = 0;
};


class UPlaneDistanceFromHitMechanic
{
public:
	UPlaneDistanceFromHitMechanic(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UBaseDynamicMeshComponent
{
public:
	UBaseDynamicMeshComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class USpaceCurveDeformationMechanic
{
public:
	USpaceCurveDeformationMechanic(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USingleClickInputBehavior GetClickBehavior() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 64);
		return struct USingleClickInputBehavior(ptr_addr);
	}
	struct UMouseHoverBehavior GetHoverBehavior() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 72);
		return struct UMouseHoverBehavior(ptr_addr);
	}
	struct USpaceCurveDeformationMechanicPropertySet GetTransformProperties() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 104);
		return struct USpaceCurveDeformationMechanicPropertySet(ptr_addr);
	}
	struct APreviewGeometryActor GetPreviewGeometryActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 360);
		return struct APreviewGeometryActor(ptr_addr);
	}
	struct UPointSetComponent GetRenderPoints() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 368);
		return struct UPointSetComponent(ptr_addr);
	}
	struct ULineSetComponent GetRenderSegments() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 376);
		return struct ULineSetComponent(ptr_addr);
	}
	struct UTransformProxy GetPointTransformProxy() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 440);
		return struct UTransformProxy(ptr_addr);
	}
	struct UTransformGizmo GetPointTransformGizmo() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 448);
		return struct UTransformGizmo(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UConstructionPlaneMechanic
{
public:
	UConstructionPlaneMechanic(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTransformGizmo GetPlaneTransformGizmo() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 200);
		return struct UTransformGizmo(ptr_addr);
	}
	struct UTransformProxy GetPlaneTransformProxy() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 208);
		return struct UTransformProxy(ptr_addr);
	}
	struct USingleClickInputBehavior GetClickToSetPlaneBehavior() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 232);
		return struct USingleClickInputBehavior(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class USpaceCurveDeformationMechanicPropertySet
{
public:
	USpaceCurveDeformationMechanicPropertySet(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ESpaceCurveControlPointTransformMode GetTransformMode() {
		return memory.read<enum class ESpaceCurveControlPointTransformMode>(m_addr + 96);
	}
	enum class ESpaceCurveControlPointOriginMode GetTransformOrigin() {
		return memory.read<enum class ESpaceCurveControlPointOriginMode>(m_addr + 100);
	}
	float GetSoftness() {
		return memory.read<float>(m_addr + 104);
	}
	enum class ESpaceCurveControlPointFalloffType GetSoftFalloff() {
		return memory.read<enum class ESpaceCurveControlPointFalloffType>(m_addr + 108);
	}

private:
	std::uint64_t m_addr = 0;
};


class UCurveControlPointsMechanic
{
public:
	UCurveControlPointsMechanic(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USingleClickInputBehavior GetClickBehavior() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 64);
		return struct USingleClickInputBehavior(ptr_addr);
	}
	struct UMouseHoverBehavior GetHoverBehavior() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 72);
		return struct UMouseHoverBehavior(ptr_addr);
	}
	struct APreviewGeometryActor GetPreviewGeometryActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1256);
		return struct APreviewGeometryActor(ptr_addr);
	}
	struct UPointSetComponent GetDrawnControlPoints() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1264);
		return struct UPointSetComponent(ptr_addr);
	}
	struct ULineSetComponent GetDrawnControlSegments() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1272);
		return struct ULineSetComponent(ptr_addr);
	}
	struct UPointSetComponent GetPreviewPoint() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1280);
		return struct UPointSetComponent(ptr_addr);
	}
	struct ULineSetComponent GetPreviewSegment() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1288);
		return struct ULineSetComponent(ptr_addr);
	}
	struct UTransformProxy GetPointTransformProxy() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1416);
		return struct UTransformProxy(ptr_addr);
	}
	struct UTransformGizmo GetPointTransformGizmo() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1424);
		return struct UTransformGizmo(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class ULineSetComponent
{
public:
	ULineSetComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMaterialInterface GetLineMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1192);
		return struct UMaterialInterface(ptr_addr);
	}
	struct FBoxSphereBounds GetBounds() {
		return memory.read<struct FBoxSphereBounds>(m_addr + 1200);
	}
	bool GetbBoundsDirty() {
		return memory.read<bool>(m_addr + 1228);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMeshCommandChangeTarget
{
public:
	UMeshCommandChangeTarget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMeshOpPreviewWithBackgroundCompute
{
public:
	UMeshOpPreviewWithBackgroundCompute(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPreviewMesh GetPreviewMesh() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 88);
		return struct UPreviewMesh(ptr_addr);
	}
	struct TArray<struct UMaterialInterface> GetStandardMaterials() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 96);
		return struct TArray<struct UMaterialInterface>(ptr_addr);
	}
	struct UMaterialInterface GetOverrideMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 112);
		return struct UMaterialInterface(ptr_addr);
	}
	struct UMaterialInterface GetWorkingMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 120);
		return struct UMaterialInterface(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UVoxelProperties
{
public:
	UVoxelProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetVoxelCount() {
		return memory.read<int32_t>(m_addr + 96);
	}
	bool GetbAutoSimplify() {
		return memory.read<bool>(m_addr + 100);
	}
	bool GetbRemoveInternalSurfaces() {
		return memory.read<bool>(m_addr + 101);
	}
	double GetSimplifyMaxErrorFactor() {
		return memory.read<double>(m_addr + 104);
	}
	double GetCubeRootMinComponentVolume() {
		return memory.read<double>(m_addr + 112);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMeshVertexCommandChangeTarget
{
public:
	UMeshVertexCommandChangeTarget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMeshReplacementCommandChangeTarget
{
public:
	UMeshReplacementCommandChangeTarget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UPointSetComponent
{
public:
	UPointSetComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMaterialInterface GetPointMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1192);
		return struct UMaterialInterface(ptr_addr);
	}
	struct FBoxSphereBounds GetBounds() {
		return memory.read<struct FBoxSphereBounds>(m_addr + 1200);
	}
	bool GetbBoundsDirty() {
		return memory.read<bool>(m_addr + 1228);
	}

private:
	std::uint64_t m_addr = 0;
};


class UWeightMapSetProperties
{
public:
	UWeightMapSetProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetWeightMap() {
		return memory.read<struct FName>(m_addr + 96);
	}
	struct TArray<struct FString> GetWeightMapsList() {
		return memory.read<struct TArray<struct FString>>(m_addr + 104);
	}
	bool GetbInvertWeightMap() {
		return memory.read<bool>(m_addr + 120);
	}

private:
	std::uint64_t m_addr = 0;
};


class UPreviewMesh
{
public:
	UPreviewMesh(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbBuildSpatialDataStructure() {
		return memory.read<bool>(m_addr + 64);
	}
	bool GetbDrawOnTop() {
		return memory.read<bool>(m_addr + 65);
	}
	struct USimpleDynamicMeshComponent GetDynamicMeshComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 80);
		return struct USimpleDynamicMeshComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UPolyEditPreviewMesh
{
public:
	UPolyEditPreviewMesh(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UPolygonSelectionMechanic
{
public:
	UPolygonSelectionMechanic(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPolygonSelectionMechanicProperties GetProperties() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 80);
		return struct UPolygonSelectionMechanicProperties(ptr_addr);
	}
	struct APreviewGeometryActor GetPreviewGeometryActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1312);
		return struct APreviewGeometryActor(ptr_addr);
	}
	struct UTriangleSetComponent GetDrawnTriangleSetComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1320);
		return struct UTriangleSetComponent(ptr_addr);
	}
	struct UMaterialInterface GetHighlightedFaceMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1408);
		return struct UMaterialInterface(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UPolygonSelectionMechanicProperties
{
public:
	UPolygonSelectionMechanicProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbSelectFaces() {
		return memory.read<bool>(m_addr + 96);
	}
	bool GetbSelectEdges() {
		return memory.read<bool>(m_addr + 97);
	}
	bool GetbSelectVertices() {
		return memory.read<bool>(m_addr + 98);
	}
	bool GetbSelectEdgeLoops() {
		return memory.read<bool>(m_addr + 99);
	}
	bool GetbSelectEdgeRings() {
		return memory.read<bool>(m_addr + 100);
	}
	bool GetbPreferProjectedElement() {
		return memory.read<bool>(m_addr + 101);
	}
	bool GetbSelectDownRay() {
		return memory.read<bool>(m_addr + 102);
	}
	bool GetbIgnoreOcclusion() {
		return memory.read<bool>(m_addr + 103);
	}

private:
	std::uint64_t m_addr = 0;
};


class APreviewGeometryActor
{
public:
	APreviewGeometryActor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UPreviewGeometry
{
public:
	UPreviewGeometry(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct APreviewGeometryActor GetParentActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct APreviewGeometryActor(ptr_addr);
	}
	struct TMap<struct FString, struct ULineSetComponent> GetLineSets() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct TMap<struct FString, struct ULineSetComponent>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class APreviewMeshActor
{
public:
	APreviewMeshActor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class USimpleDynamicMeshComponent
{
public:
	USimpleDynamicMeshComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EDynamicMeshTangentCalcType GetTangentsType() {
		return memory.read<enum class EDynamicMeshTangentCalcType>(m_addr + 1264);
	}
	bool GetbInvalidateProxyOnChange() {
		return memory.read<bool>(m_addr + 1265);
	}
	bool GetbExplicitShowWireframe() {
		return memory.read<bool>(m_addr + 1320);
	}
	bool GetbDrawOnTop() {
		return memory.read<bool>(m_addr + 1392);
	}

private:
	std::uint64_t m_addr = 0;
};


class USpatialCurveDistanceMechanic
{
public:
	USpatialCurveDistanceMechanic(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UTriangleSetComponent
{
public:
	UTriangleSetComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FBoxSphereBounds GetBounds() {
		return memory.read<struct FBoxSphereBounds>(m_addr + 1192);
	}
	bool GetbBoundsDirty() {
		return memory.read<bool>(m_addr + 1220);
	}

private:
	std::uint64_t m_addr = 0;
};


class UUVLayoutPreviewProperties
{
public:
	UUVLayoutPreviewProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbVisible() {
		return memory.read<bool>(m_addr + 96);
	}
	float GetScaleFactor() {
		return memory.read<float>(m_addr + 100);
	}
	enum class EUVLayoutPreviewSide GetWhichSide() {
		return memory.read<enum class EUVLayoutPreviewSide>(m_addr + 104);
	}
	bool GetbShowWireframe() {
		return memory.read<bool>(m_addr + 108);
	}
	struct FVector2D Getshift() {
		return memory.read<struct FVector2D>(m_addr + 112);
	}

private:
	std::uint64_t m_addr = 0;
};


class UUVLayoutPreview
{
public:
	UUVLayoutPreview(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UUVLayoutPreviewProperties GetSettings() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct UUVLayoutPreviewProperties(ptr_addr);
	}
	struct UPreviewMesh GetPreviewMesh() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UPreviewMesh(ptr_addr);
	}
	struct UTriangleSetComponent GetTriangleComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct UTriangleSetComponent(ptr_addr);
	}
	bool GetbShowBackingRectangle() {
		return memory.read<bool>(m_addr + 64);
	}
	struct UMaterialInterface GetBackingRectangleMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 72);
		return struct UMaterialInterface(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


