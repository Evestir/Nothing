#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FSetAllowSpatialDatabase
{
public:
	FSetAllowSpatialDatabase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbInAllowSpatialDatabase() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FComputeBoundingBoxAndSphere
{
public:
	FComputeBoundingBoxAndSphere(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FBoxSphereBounds GetReturnValue() {
		return memory.read<struct FBoxSphereBounds>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FPolygonGroupToCreate
{
public:
	FPolygonGroupToCreate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMeshElementAttributeList GetPolygonGroupAttributes() {
		return memory.read<struct FMeshElementAttributeList>(m_addr + 0);
	}
	struct FPolygonGroupID GetOriginalPolygonGroupID() {
		return memory.read<struct FPolygonGroupID>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FAdaptorTriangleID
{
public:
	FAdaptorTriangleID(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FFlipPolygons
{
public:
	FFlipPolygons(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FPolygonID> GetPolygonIDs() {
		return memory.read<struct TArray<struct FPolygonID>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FInsetPolygons
{
public:
	FInsetPolygons(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FPolygonID> GetPolygonIDs() {
		return memory.read<struct TArray<struct FPolygonID>>(m_addr + 0);
	}
	float GetInsetFixedDistance() {
		return memory.read<float>(m_addr + 16);
	}
	float GetInsetProgressTowardCenter() {
		return memory.read<float>(m_addr + 20);
	}
	enum class EInsetPolygonsMode GetMode() {
		return memory.read<enum class EInsetPolygonsMode>(m_addr + 24);
	}
	struct TArray<struct FPolygonID> GetOutNewCenterPolygonIDs() {
		return memory.read<struct TArray<struct FPolygonID>>(m_addr + 32);
	}
	struct TArray<struct FPolygonID> GetOutNewSidePolygonIDs() {
		return memory.read<struct TArray<struct FPolygonID>>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FAdaptorPolygon2Group
{
public:
	FAdaptorPolygon2Group(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint32_t GetRenderingSectionIndex() {
		return memory.read<uint32_t>(m_addr + 0);
	}
	int32_t GetMaterialIndex() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t GetMaxTriangles() {
		return memory.read<int32_t>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetVertexConnectedEdgeCount
{
public:
	FGetVertexConnectedEdgeCount(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVertexID GetVertexID() {
		return memory.read<struct FVertexID>(m_addr + 0);
	}
	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPolygonPerimeterVertex
{
public:
	FGetPolygonPerimeterVertex(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPolygonID GetPolygonID() {
		return memory.read<struct FPolygonID>(m_addr + 0);
	}
	int32_t GetPolygonVertexNumber() {
		return memory.read<int32_t>(m_addr + 4);
	}
	struct FVertexID GetReturnValue() {
		return memory.read<struct FVertexID>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FDeleteVertexInstances
{
public:
	FDeleteVertexInstances(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FVertexInstanceID> GetVertexInstanceIDsToDelete() {
		return memory.read<struct TArray<struct FVertexInstanceID>>(m_addr + 0);
	}
	bool GetbDeleteOrphanedVertices() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FAdaptorPolygon
{
public:
	FAdaptorPolygon(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPolygonGroupID GetPolygonGroupID() {
		return memory.read<struct FPolygonGroupID>(m_addr + 0);
	}
	struct TArray<struct FAdaptorTriangleID> GetTriangulatedPolygonTriangleIndices() {
		return memory.read<struct TArray<struct FAdaptorTriangleID>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FPolygonGroupForPolygon
{
public:
	FPolygonGroupForPolygon(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPolygonID GetPolygonID() {
		return memory.read<struct FPolygonID>(m_addr + 0);
	}
	struct FPolygonGroupID GetPolygonGroupID() {
		return memory.read<struct FPolygonGroupID>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FMeshElementAttributeList
{
public:
	FMeshElementAttributeList(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FMeshElementAttributeData> GetAttributes() {
		return memory.read<struct TArray<struct FMeshElementAttributeData>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMakeVertexID
{
public:
	FMakeVertexID(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetVertexIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FVertexID GetReturnValue() {
		return memory.read<struct FVertexID>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FMeshElementAttributeData
{
public:
	FMeshElementAttributeData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetAttributeName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	int32_t GetAttributeIndex() {
		return memory.read<int32_t>(m_addr + 8);
	}
	struct FMeshElementAttributeValue GetAttributeValue() {
		return memory.read<struct FMeshElementAttributeValue>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FDeletePolygons
{
public:
	FDeletePolygons(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FPolygonID> GetPolygonIDsToDelete() {
		return memory.read<struct TArray<struct FPolygonID>>(m_addr + 0);
	}
	bool GetbDeleteOrphanedEdges() {
		return memory.read<bool>(m_addr + 16);
	}
	bool GetbDeleteOrphanedVertices() {
		return memory.read<bool>(m_addr + 17);
	}
	bool GetbDeleteOrphanedVertexInstances() {
		return memory.read<bool>(m_addr + 18);
	}
	bool GetbDeleteEmptyPolygonGroups() {
		return memory.read<bool>(m_addr + 19);
	}

private:
	std::uint64_t m_addr = 0;
};class FCreateEdges
{
public:
	FCreateEdges(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FEdgeToCreate> GetEdgesToCreate() {
		return memory.read<struct TArray<struct FEdgeToCreate>>(m_addr + 0);
	}
	struct TArray<struct FEdgeID> GetOutNewEdgeIDs() {
		return memory.read<struct TArray<struct FEdgeID>>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FEdgeToCreate
{
public:
	FEdgeToCreate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVertexID GetVertexID0() {
		return memory.read<struct FVertexID>(m_addr + 0);
	}
	struct FVertexID GetVertexID1() {
		return memory.read<struct FVertexID>(m_addr + 4);
	}
	struct FMeshElementAttributeList GetEdgeAttributes() {
		return memory.read<struct FMeshElementAttributeList>(m_addr + 8);
	}
	struct FEdgeID GetOriginalEdgeID() {
		return memory.read<struct FEdgeID>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FMeshElementAttributeValue
{
public:
	FMeshElementAttributeValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FVertexToMove
{
public:
	FVertexToMove(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVertexID GetVertexID() {
		return memory.read<struct FVertexID>(m_addr + 0);
	}
	struct FVector GetNewVertexPosition() {
		return memory.read<struct FVector>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FChangeVertexInstancesForPolygon
{
public:
	FChangeVertexInstancesForPolygon(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPolygonID GetPolygonID() {
		return memory.read<struct FPolygonID>(m_addr + 0);
	}
	struct TArray<struct FVertexIndexAndInstanceID> GetPerimeterVertexIndicesAndInstanceIDs() {
		return memory.read<struct TArray<struct FVertexIndexAndInstanceID>>(m_addr + 8);
	}
	struct TArray<struct FVertexInstancesForPolygonHole> GetVertexIndicesAndInstanceIDsForEachHole() {
		return memory.read<struct TArray<struct FVertexInstancesForPolygonHole>>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FDeletePolygonGroups
{
public:
	FDeletePolygonGroups(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FPolygonGroupID> GetPolygonGroupIDs() {
		return memory.read<struct TArray<struct FPolygonGroupID>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FChangePolygonsVertexInstances
{
public:
	FChangePolygonsVertexInstances(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FChangeVertexInstancesForPolygon> GetVertexInstancesForPolygons() {
		return memory.read<struct TArray<struct FChangeVertexInstancesForPolygon>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FVertexInstancesForPolygonHole
{
public:
	FVertexInstancesForPolygonHole(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FVertexIndexAndInstanceID> GetVertexIndicesAndInstanceIDs() {
		return memory.read<struct TArray<struct FVertexIndexAndInstanceID>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetVertexAdjacentVertices
{
public:
	FGetVertexAdjacentVertices(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVertexID GetVertexID() {
		return memory.read<struct FVertexID>(m_addr + 0);
	}
	struct TArray<struct FVertexID> GetOutAdjacentVertexIDs() {
		return memory.read<struct TArray<struct FVertexID>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FVertexIndexAndInstanceID
{
public:
	FVertexIndexAndInstanceID(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetContourIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FVertexInstanceID GetVertexInstanceID() {
		return memory.read<struct FVertexInstanceID>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FVertexInstanceToCreate
{
public:
	FVertexInstanceToCreate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVertexID GetVertexID() {
		return memory.read<struct FVertexID>(m_addr + 0);
	}
	struct FMeshElementAttributeList GetVertexInstanceAttributes() {
		return memory.read<struct FMeshElementAttributeList>(m_addr + 8);
	}
	struct FVertexInstanceID GetOriginalVertexInstanceID() {
		return memory.read<struct FVertexInstanceID>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FVertexAttributesForPolygon
{
public:
	FVertexAttributesForPolygon(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPolygonID GetPolygonID() {
		return memory.read<struct FPolygonID>(m_addr + 0);
	}
	struct TArray<struct FMeshElementAttributeList> GetPerimeterVertexAttributeLists() {
		return memory.read<struct TArray<struct FMeshElementAttributeList>>(m_addr + 8);
	}
	struct TArray<struct FVertexAttributesForPolygonHole> GetVertexAttributeListsForEachHole() {
		return memory.read<struct TArray<struct FVertexAttributesForPolygonHole>>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FVertexAttributesForPolygonHole
{
public:
	FVertexAttributesForPolygonHole(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FMeshElementAttributeList> GetVertexAttributeList() {
		return memory.read<struct TArray<struct FMeshElementAttributeList>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAttributesForEdge
{
public:
	FAttributesForEdge(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FEdgeID GetEdgeID() {
		return memory.read<struct FEdgeID>(m_addr + 0);
	}
	struct FMeshElementAttributeList GetEdgeAttributes() {
		return memory.read<struct FMeshElementAttributeList>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FAttributesForVertexInstance
{
public:
	FAttributesForVertexInstance(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVertexInstanceID GetVertexInstanceID() {
		return memory.read<struct FVertexInstanceID>(m_addr + 0);
	}
	struct FMeshElementAttributeList GetVertexInstanceAttributes() {
		return memory.read<struct FMeshElementAttributeList>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FExtrudePolygons
{
public:
	FExtrudePolygons(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FPolygonID> GetPolygons() {
		return memory.read<struct TArray<struct FPolygonID>>(m_addr + 0);
	}
	float GetExtrudeDistance() {
		return memory.read<float>(m_addr + 16);
	}
	bool GetbKeepNeighborsTogether() {
		return memory.read<bool>(m_addr + 20);
	}
	struct TArray<struct FPolygonID> GetOutNewExtrudedFrontPolygons() {
		return memory.read<struct TArray<struct FPolygonID>>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FAttributesForVertex
{
public:
	FAttributesForVertex(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVertexID GetVertexID() {
		return memory.read<struct FVertexID>(m_addr + 0);
	}
	struct FMeshElementAttributeList GetVertexAttributes() {
		return memory.read<struct FMeshElementAttributeList>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FPolygonToSplit
{
public:
	FPolygonToSplit(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPolygonID GetPolygonID() {
		return memory.read<struct FPolygonID>(m_addr + 0);
	}
	struct TArray<struct FVertexPair> GetVertexPairsToSplitAt() {
		return memory.read<struct TArray<struct FVertexPair>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FVertexPair
{
public:
	FVertexPair(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVertexID GetVertexID0() {
		return memory.read<struct FVertexID>(m_addr + 0);
	}
	struct FVertexID GetVertexID1() {
		return memory.read<struct FVertexID>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FPolygonToCreate
{
public:
	FPolygonToCreate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPolygonGroupID GetPolygonGroupID() {
		return memory.read<struct FPolygonGroupID>(m_addr + 0);
	}
	struct TArray<struct FVertexAndAttributes> GetPerimeterVertices() {
		return memory.read<struct TArray<struct FVertexAndAttributes>>(m_addr + 8);
	}
	struct FPolygonID GetOriginalPolygonID() {
		return memory.read<struct FPolygonID>(m_addr + 24);
	}
	enum class EPolygonEdgeHardness GetPolygonEdgeHardness() {
		return memory.read<enum class EPolygonEdgeHardness>(m_addr + 28);
	}

private:
	std::uint64_t m_addr = 0;
};class FVertexAndAttributes
{
public:
	FVertexAndAttributes(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVertexInstanceID GetVertexInstanceID() {
		return memory.read<struct FVertexInstanceID>(m_addr + 0);
	}
	struct FVertexID GetVertexID() {
		return memory.read<struct FVertexID>(m_addr + 4);
	}
	struct FMeshElementAttributeList GetPolygonVertexAttributes() {
		return memory.read<struct FMeshElementAttributeList>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FVertexToCreate
{
public:
	FVertexToCreate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMeshElementAttributeList GetVertexAttributes() {
		return memory.read<struct FMeshElementAttributeList>(m_addr + 0);
	}
	struct FVertexID GetOriginalVertexID() {
		return memory.read<struct FVertexID>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FSubdividedQuadVertex
{
public:
	FSubdividedQuadVertex(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetVertexPositionIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FVector2D GetTextureCoordinate0() {
		return memory.read<struct FVector2D>(m_addr + 4);
	}
	struct FVector2D GetTextureCoordinate1() {
		return memory.read<struct FVector2D>(m_addr + 12);
	}
	struct FColor GetVertexColor() {
		return memory.read<struct FColor>(m_addr + 20);
	}
	struct FVector GetVertexNormal() {
		return memory.read<struct FVector>(m_addr + 24);
	}
	struct FVector GetVertexTangent() {
		return memory.read<struct FVector>(m_addr + 36);
	}
	float GetVertexBinormalSign() {
		return memory.read<float>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FSubdivisionLimitData
{
public:
	FSubdivisionLimitData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FVector> GetVertexPositions() {
		return memory.read<struct TArray<struct FVector>>(m_addr + 0);
	}
	struct TArray<struct FSubdivisionLimitSection> GetSections() {
		return memory.read<struct TArray<struct FSubdivisionLimitSection>>(m_addr + 16);
	}
	struct TArray<struct FSubdividedWireEdge> GetSubdividedWireEdges() {
		return memory.read<struct TArray<struct FSubdividedWireEdge>>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FDeleteEdges
{
public:
	FDeleteEdges(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FEdgeID> GetEdgeIDsToDelete() {
		return memory.read<struct TArray<struct FEdgeID>>(m_addr + 0);
	}
	bool GetbDeleteOrphanedVertices() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FSubdividedWireEdge
{
public:
	FSubdividedWireEdge(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetEdgeVertex0PositionIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetEdgeVertex1PositionIndex() {
		return memory.read<int32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FSubdivisionLimitSection
{
public:
	FSubdivisionLimitSection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FSubdividedQuad> GetSubdividedQuads() {
		return memory.read<struct TArray<struct FSubdividedQuad>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMoveVertices
{
public:
	FMoveVertices(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FVertexToMove> GetVerticesToMove() {
		return memory.read<struct TArray<struct FVertexToMove>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSubdividedQuad
{
public:
	FSubdividedQuad(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSubdividedQuadVertex GetQuadVertex0() {
		return memory.read<struct FSubdividedQuadVertex>(m_addr + 0);
	}
	struct FSubdividedQuadVertex GetQuadVertex1() {
		return memory.read<struct FSubdividedQuadVertex>(m_addr + 52);
	}
	struct FSubdividedQuadVertex GetQuadVertex2() {
		return memory.read<struct FSubdividedQuadVertex>(m_addr + 104);
	}
	struct FSubdividedQuadVertex GetQuadVertex3() {
		return memory.read<struct FSubdividedQuadVertex>(m_addr + 156);
	}

private:
	std::uint64_t m_addr = 0;
};class FRenderingPolygonGroup
{
public:
	FRenderingPolygonGroup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint32_t GetRenderingSectionIndex() {
		return memory.read<uint32_t>(m_addr + 0);
	}
	int32_t GetMaterialIndex() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t GetMaxTriangles() {
		return memory.read<int32_t>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FRenderingPolygon
{
public:
	FRenderingPolygon(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPolygonGroupID GetPolygonGroupID() {
		return memory.read<struct FPolygonGroupID>(m_addr + 0);
	}
	struct TArray<struct FTriangleID> GetTriangulatedPolygonTriangleIndices() {
		return memory.read<struct TArray<struct FTriangleID>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetEdgesHardness
{
public:
	FSetEdgesHardness(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FEdgeID> GetEdgeIDs() {
		return memory.read<struct TArray<struct FEdgeID>>(m_addr + 0);
	}
	struct TArray<bool> GetEdgesNewIsHard() {
		return memory.read<struct TArray<bool>>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FAnyChangesToUndo
{
public:
	FAnyChangesToUndo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAssignPolygonsToPolygonGroups
{
public:
	FAssignPolygonsToPolygonGroups(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FPolygonGroupForPolygon> GetPolygonGroupForPolygons() {
		return memory.read<struct TArray<struct FPolygonGroupForPolygon>>(m_addr + 0);
	}
	bool GetbDeleteOrphanedPolygonGroups() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsOrphanedVertex
{
public:
	FIsOrphanedVertex(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVertexID GetVertexID() {
		return memory.read<struct FVertexID>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FBevelPolygons
{
public:
	FBevelPolygons(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FPolygonID> GetPolygonIDs() {
		return memory.read<struct TArray<struct FPolygonID>>(m_addr + 0);
	}
	float GetBevelFixedDistance() {
		return memory.read<float>(m_addr + 16);
	}
	float GetBevelProgressTowardCenter() {
		return memory.read<float>(m_addr + 20);
	}
	struct TArray<struct FPolygonID> GetOutNewCenterPolygonIDs() {
		return memory.read<struct TArray<struct FPolygonID>>(m_addr + 24);
	}
	struct TArray<struct FPolygonID> GetOutNewSidePolygonIDs() {
		return memory.read<struct TArray<struct FPolygonID>>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsBeingModified
{
public:
	FIsBeingModified(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FCommitInstance
{
public:
	FCommitInstance(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPrimitiveComponent GetComponentToInstanceTo() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UPrimitiveComponent(ptr_addr);
	}
	struct UEditableMesh GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UEditableMesh(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FMakePolygonGroupID
{
public:
	FMakePolygonGroupID(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetPolygonGroupIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FPolygonGroupID GetReturnValue() {
		return memory.read<struct FPolygonGroupID>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FDeleteOrphanVertices
{
public:
	FDeleteOrphanVertices(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FVertexID> GetVertexIDsToDelete() {
		return memory.read<struct TArray<struct FVertexID>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment
{
public:
	FSearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetLineSegmentStart() {
		return memory.read<struct FVector>(m_addr + 0);
	}
	struct FVector GetLineSegmentEnd() {
		return memory.read<struct FVector>(m_addr + 12);
	}
	struct TArray<struct FPolygonID> GetOutPolygons() {
		return memory.read<struct TArray<struct FPolygonID>>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FComputeBoundingBox
{
public:
	FComputeBoundingBox(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FBox GetReturnValue() {
		return memory.read<struct FBox>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FComputePolygonCenter
{
public:
	FComputePolygonCenter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPolygonID GetPolygonID() {
		return memory.read<struct FPolygonID>(m_addr + 0);
	}
	struct FVector GetReturnValue() {
		return memory.read<struct FVector>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FComputePolygonNormal
{
public:
	FComputePolygonNormal(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPolygonID GetPolygonID() {
		return memory.read<struct FPolygonID>(m_addr + 0);
	}
	struct FVector GetReturnValue() {
		return memory.read<struct FVector>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FComputePolygonPlane
{
public:
	FComputePolygonPlane(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPolygonID GetPolygonID() {
		return memory.read<struct FPolygonID>(m_addr + 0);
	}
	struct FPlane GetReturnValue() {
		return memory.read<struct FPlane>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FComputePolygonsSharedEdges
{
public:
	FComputePolygonsSharedEdges(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FPolygonID> GetPolygonIDs() {
		return memory.read<struct TArray<struct FPolygonID>>(m_addr + 0);
	}
	struct TArray<struct FEdgeID> GetOutSharedEdgeIDs() {
		return memory.read<struct TArray<struct FEdgeID>>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FCreateEmptyVertexRange
{
public:
	FCreateEmptyVertexRange(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetNumVerticesToCreate() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct TArray<struct FVertexID> GetOutNewVertexIDs() {
		return memory.read<struct TArray<struct FVertexID>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FDeleteEdgeAndConnectedPolygons
{
public:
	FDeleteEdgeAndConnectedPolygons(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FEdgeID GetEdgeID() {
		return memory.read<struct FEdgeID>(m_addr + 0);
	}
	bool GetbDeleteOrphanedEdges() {
		return memory.read<bool>(m_addr + 4);
	}
	bool GetbDeleteOrphanedVertices() {
		return memory.read<bool>(m_addr + 5);
	}
	bool GetbDeleteOrphanedVertexInstances() {
		return memory.read<bool>(m_addr + 6);
	}
	bool GetbDeleteEmptyPolygonGroups() {
		return memory.read<bool>(m_addr + 7);
	}

private:
	std::uint64_t m_addr = 0;
};class FCreateMissingPolygonPerimeterEdges
{
public:
	FCreateMissingPolygonPerimeterEdges(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPolygonID GetPolygonID() {
		return memory.read<struct FPolygonID>(m_addr + 0);
	}
	struct TArray<struct FEdgeID> GetOutNewEdgeIDs() {
		return memory.read<struct TArray<struct FEdgeID>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FCreatePolygonGroups
{
public:
	FCreatePolygonGroups(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FPolygonGroupToCreate> GetPolygonGroupsToCreate() {
		return memory.read<struct TArray<struct FPolygonGroupToCreate>>(m_addr + 0);
	}
	struct TArray<struct FPolygonGroupID> GetOutNewPolygonGroupIDs() {
		return memory.read<struct TArray<struct FPolygonGroupID>>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FCreatePolygons
{
public:
	FCreatePolygons(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FPolygonToCreate> GetPolygonsToCreate() {
		return memory.read<struct TArray<struct FPolygonToCreate>>(m_addr + 0);
	}
	struct TArray<struct FPolygonID> GetOutNewPolygonIDs() {
		return memory.read<struct TArray<struct FPolygonID>>(m_addr + 16);
	}
	struct TArray<struct FEdgeID> GetOutNewEdgeIDs() {
		return memory.read<struct TArray<struct FEdgeID>>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FFindPolygonPerimeterVertexNumberForVertex
{
public:
	FFindPolygonPerimeterVertexNumberForVertex(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPolygonID GetPolygonID() {
		return memory.read<struct FPolygonID>(m_addr + 0);
	}
	struct FVertexID GetVertexID() {
		return memory.read<struct FVertexID>(m_addr + 4);
	}
	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FCreateVertexInstances
{
public:
	FCreateVertexInstances(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FVertexInstanceToCreate> GetVertexInstancesToCreate() {
		return memory.read<struct TArray<struct FVertexInstanceToCreate>>(m_addr + 0);
	}
	struct TArray<struct FVertexInstanceID> GetOutNewVertexInstanceIDs() {
		return memory.read<struct TArray<struct FVertexInstanceID>>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FCreateVertices
{
public:
	FCreateVertices(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FVertexToCreate> GetVerticesToCreate() {
		return memory.read<struct TArray<struct FVertexToCreate>>(m_addr + 0);
	}
	struct TArray<struct FVertexID> GetOutNewVertexIDs() {
		return memory.read<struct TArray<struct FVertexID>>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FDeleteVertexAndConnectedEdgesAndPolygons
{
public:
	FDeleteVertexAndConnectedEdgesAndPolygons(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVertexID GetVertexID() {
		return memory.read<struct FVertexID>(m_addr + 0);
	}
	bool GetbDeleteOrphanedEdges() {
		return memory.read<bool>(m_addr + 4);
	}
	bool GetbDeleteOrphanedVertices() {
		return memory.read<bool>(m_addr + 5);
	}
	bool GetbDeleteOrphanedVertexInstances() {
		return memory.read<bool>(m_addr + 6);
	}
	bool GetbDeleteEmptyPolygonGroups() {
		return memory.read<bool>(m_addr + 7);
	}

private:
	std::uint64_t m_addr = 0;
};class FEndModification
{
public:
	FEndModification(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbFromUndo() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FFindPolygonPerimeterEdgeNumberForVertices
{
public:
	FFindPolygonPerimeterEdgeNumberForVertices(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPolygonID GetPolygonID() {
		return memory.read<struct FPolygonID>(m_addr + 0);
	}
	struct FVertexID GetEdgeVertexID0() {
		return memory.read<struct FVertexID>(m_addr + 4);
	}
	struct FVertexID GetEdgeVertexID1() {
		return memory.read<struct FVertexID>(m_addr + 8);
	}
	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FExtendEdges
{
public:
	FExtendEdges(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FEdgeID> GetEdgeIDs() {
		return memory.read<struct TArray<struct FEdgeID>>(m_addr + 0);
	}
	bool GetbWeldNeighbors() {
		return memory.read<bool>(m_addr + 16);
	}
	struct TArray<struct FEdgeID> GetOutNewExtendedEdgeIDs() {
		return memory.read<struct TArray<struct FEdgeID>>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FExtendVertices
{
public:
	FExtendVertices(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FVertexID> GetVertexIDs() {
		return memory.read<struct TArray<struct FVertexID>>(m_addr + 0);
	}
	bool GetbOnlyExtendClosestEdge() {
		return memory.read<bool>(m_addr + 16);
	}
	struct FVector GetReferencePosition() {
		return memory.read<struct FVector>(m_addr + 20);
	}
	struct TArray<struct FVertexID> GetOutNewExtendedVertexIDs() {
		return memory.read<struct TArray<struct FVertexID>>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FFindPolygonLoop
{
public:
	FFindPolygonLoop(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FEdgeID GetEdgeID() {
		return memory.read<struct FEdgeID>(m_addr + 0);
	}
	struct TArray<struct FEdgeID> GetOutEdgeLoopEdgeIDs() {
		return memory.read<struct TArray<struct FEdgeID>>(m_addr + 8);
	}
	struct TArray<struct FEdgeID> GetOutFlippedEdgeIDs() {
		return memory.read<struct TArray<struct FEdgeID>>(m_addr + 24);
	}
	struct TArray<struct FEdgeID> GetOutReversedEdgeIDPathToTake() {
		return memory.read<struct TArray<struct FEdgeID>>(m_addr + 40);
	}
	struct TArray<struct FPolygonID> GetOutPolygonIDsToSplit() {
		return memory.read<struct TArray<struct FPolygonID>>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FGeneratePolygonTangentsAndNormals
{
public:
	FGeneratePolygonTangentsAndNormals(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FPolygonID> GetPolygonIDs() {
		return memory.read<struct TArray<struct FPolygonID>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetEdgeConnectedPolygon
{
public:
	FGetEdgeConnectedPolygon(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FEdgeID GetEdgeID() {
		return memory.read<struct FEdgeID>(m_addr + 0);
	}
	int32_t GetConnectedPolygonNumber() {
		return memory.read<int32_t>(m_addr + 4);
	}
	struct FPolygonID GetReturnValue() {
		return memory.read<struct FPolygonID>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetEdgeConnectedPolygonCount
{
public:
	FGetEdgeConnectedPolygonCount(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FEdgeID GetEdgeID() {
		return memory.read<struct FEdgeID>(m_addr + 0);
	}
	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetEdgeConnectedPolygons
{
public:
	FGetEdgeConnectedPolygons(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FEdgeID GetEdgeID() {
		return memory.read<struct FEdgeID>(m_addr + 0);
	}
	struct TArray<struct FPolygonID> GetOutConnectedPolygonIDs() {
		return memory.read<struct TArray<struct FPolygonID>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetEdgeCount
{
public:
	FGetEdgeCount(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetEdgeLoopElements
{
public:
	FGetEdgeLoopElements(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FEdgeID GetEdgeID() {
		return memory.read<struct FEdgeID>(m_addr + 0);
	}
	struct TArray<struct FEdgeID> GetEdgeLoopIDs() {
		return memory.read<struct TArray<struct FEdgeID>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetEdgeThatConnectsVertices
{
public:
	FGetEdgeThatConnectsVertices(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVertexID GetVertexID0() {
		return memory.read<struct FVertexID>(m_addr + 0);
	}
	struct FVertexID GetVertexID1() {
		return memory.read<struct FVertexID>(m_addr + 4);
	}
	struct FEdgeID GetReturnValue() {
		return memory.read<struct FEdgeID>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetEdgeVertex
{
public:
	FGetEdgeVertex(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FEdgeID GetEdgeID() {
		return memory.read<struct FEdgeID>(m_addr + 0);
	}
	int32_t GetEdgeVertexNumber() {
		return memory.read<int32_t>(m_addr + 4);
	}
	struct FVertexID GetReturnValue() {
		return memory.read<struct FVertexID>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetEdgeVertices
{
public:
	FGetEdgeVertices(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FEdgeID GetEdgeID() {
		return memory.read<struct FEdgeID>(m_addr + 0);
	}
	struct FVertexID GetOutEdgeVertexID0() {
		return memory.read<struct FVertexID>(m_addr + 4);
	}
	struct FVertexID GetOutEdgeVertexID1() {
		return memory.read<struct FVertexID>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetFirstValidPolygonGroup
{
public:
	FGetFirstValidPolygonGroup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPolygonGroupID GetReturnValue() {
		return memory.read<struct FPolygonGroupID>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetGroupForPolygon
{
public:
	FGetGroupForPolygon(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPolygonID GetPolygonID() {
		return memory.read<struct FPolygonID>(m_addr + 0);
	}
	struct FPolygonGroupID GetReturnValue() {
		return memory.read<struct FPolygonGroupID>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPolygonAdjacentPolygons
{
public:
	FGetPolygonAdjacentPolygons(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPolygonID GetPolygonID() {
		return memory.read<struct FPolygonID>(m_addr + 0);
	}
	struct TArray<struct FPolygonID> GetOutAdjacentPolygons() {
		return memory.read<struct TArray<struct FPolygonID>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPolygonCount
{
public:
	FGetPolygonCount(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPolygonCountInGroup
{
public:
	FGetPolygonCountInGroup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPolygonGroupID GetPolygonGroupID() {
		return memory.read<struct FPolygonGroupID>(m_addr + 0);
	}
	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPolygonGroupCount
{
public:
	FGetPolygonGroupCount(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPolygonInGroup
{
public:
	FGetPolygonInGroup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPolygonGroupID GetPolygonGroupID() {
		return memory.read<struct FPolygonGroupID>(m_addr + 0);
	}
	int32_t GetPolygonNumber() {
		return memory.read<int32_t>(m_addr + 4);
	}
	struct FPolygonID GetReturnValue() {
		return memory.read<struct FPolygonID>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPolygonPerimeterEdge
{
public:
	FGetPolygonPerimeterEdge(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPolygonID GetPolygonID() {
		return memory.read<struct FPolygonID>(m_addr + 0);
	}
	int32_t GetPerimeterEdgeNumber() {
		return memory.read<int32_t>(m_addr + 4);
	}
	bool GetbOutEdgeWindingIsReversedForPolygon() {
		return memory.read<bool>(m_addr + 8);
	}
	struct FEdgeID GetReturnValue() {
		return memory.read<struct FEdgeID>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPolygonPerimeterEdgeCount
{
public:
	FGetPolygonPerimeterEdgeCount(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPolygonID GetPolygonID() {
		return memory.read<struct FPolygonID>(m_addr + 0);
	}
	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPolygonPerimeterEdges
{
public:
	FGetPolygonPerimeterEdges(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPolygonID GetPolygonID() {
		return memory.read<struct FPolygonID>(m_addr + 0);
	}
	struct TArray<struct FEdgeID> GetOutPolygonPerimeterEdgeIDs() {
		return memory.read<struct TArray<struct FEdgeID>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPolygonPerimeterVertexCount
{
public:
	FGetPolygonPerimeterVertexCount(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPolygonID GetPolygonID() {
		return memory.read<struct FPolygonID>(m_addr + 0);
	}
	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPolygonPerimeterVertexInstance
{
public:
	FGetPolygonPerimeterVertexInstance(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPolygonID GetPolygonID() {
		return memory.read<struct FPolygonID>(m_addr + 0);
	}
	int32_t GetPolygonVertexNumber() {
		return memory.read<int32_t>(m_addr + 4);
	}
	struct FVertexInstanceID GetReturnValue() {
		return memory.read<struct FVertexInstanceID>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPolygonPerimeterVertexInstances
{
public:
	FGetPolygonPerimeterVertexInstances(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPolygonID GetPolygonID() {
		return memory.read<struct FPolygonID>(m_addr + 0);
	}
	struct TArray<struct FVertexInstanceID> GetOutPolygonPerimeterVertexInstanceIDs() {
		return memory.read<struct TArray<struct FVertexInstanceID>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPolygonPerimeterVertices
{
public:
	FGetPolygonPerimeterVertices(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPolygonID GetPolygonID() {
		return memory.read<struct FPolygonID>(m_addr + 0);
	}
	struct TArray<struct FVertexID> GetOutPolygonPerimeterVertexIDs() {
		return memory.read<struct TArray<struct FVertexID>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPolygonTriangulatedTriangle
{
public:
	FGetPolygonTriangulatedTriangle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPolygonID GetPolygonID() {
		return memory.read<struct FPolygonID>(m_addr + 0);
	}
	int32_t GetPolygonTriangleNumber() {
		return memory.read<int32_t>(m_addr + 4);
	}
	struct FTriangleID GetReturnValue() {
		return memory.read<struct FTriangleID>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPolygonTriangulatedTriangleCount
{
public:
	FGetPolygonTriangulatedTriangleCount(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPolygonID GetPolygonID() {
		return memory.read<struct FPolygonID>(m_addr + 0);
	}
	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSubdivisionCount
{
public:
	FGetSubdivisionCount(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSubdivisionLimitData
{
public:
	FGetSubdivisionLimitData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSubdivisionLimitData GetReturnValue() {
		return memory.read<struct FSubdivisionLimitData>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTextureCoordinateCount
{
public:
	FGetTextureCoordinateCount(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetVertexConnectedEdge
{
public:
	FGetVertexConnectedEdge(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVertexID GetVertexID() {
		return memory.read<struct FVertexID>(m_addr + 0);
	}
	int32_t GetConnectedEdgeNumber() {
		return memory.read<int32_t>(m_addr + 4);
	}
	struct FEdgeID GetReturnValue() {
		return memory.read<struct FEdgeID>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetVertexConnectedEdges
{
public:
	FGetVertexConnectedEdges(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVertexID GetVertexID() {
		return memory.read<struct FVertexID>(m_addr + 0);
	}
	struct TArray<struct FEdgeID> GetOutConnectedEdgeIDs() {
		return memory.read<struct TArray<struct FEdgeID>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetVertexConnectedPolygons
{
public:
	FGetVertexConnectedPolygons(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVertexID GetVertexID() {
		return memory.read<struct FVertexID>(m_addr + 0);
	}
	struct TArray<struct FPolygonID> GetOutConnectedPolygonIDs() {
		return memory.read<struct TArray<struct FPolygonID>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetVertexInstanceConnectedPolygonCount
{
public:
	FGetVertexInstanceConnectedPolygonCount(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVertexInstanceID GetVertexInstanceID() {
		return memory.read<struct FVertexInstanceID>(m_addr + 0);
	}
	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetVertexCount
{
public:
	FGetVertexCount(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetVertexInstanceConnectedPolygon
{
public:
	FGetVertexInstanceConnectedPolygon(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVertexInstanceID GetVertexInstanceID() {
		return memory.read<struct FVertexInstanceID>(m_addr + 0);
	}
	int32_t GetConnectedPolygonNumber() {
		return memory.read<int32_t>(m_addr + 4);
	}
	struct FPolygonID GetReturnValue() {
		return memory.read<struct FPolygonID>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetVertexInstanceConnectedPolygons
{
public:
	FGetVertexInstanceConnectedPolygons(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVertexInstanceID GetVertexInstanceID() {
		return memory.read<struct FVertexInstanceID>(m_addr + 0);
	}
	struct TArray<struct FPolygonID> GetOutConnectedPolygonIDs() {
		return memory.read<struct TArray<struct FPolygonID>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetVertexInstanceCount
{
public:
	FGetVertexInstanceCount(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetVertexInstanceVertex
{
public:
	FGetVertexInstanceVertex(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVertexInstanceID GetVertexInstanceID() {
		return memory.read<struct FVertexInstanceID>(m_addr + 0);
	}
	struct FVertexID GetReturnValue() {
		return memory.read<struct FVertexID>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetVertexPairEdge
{
public:
	FGetVertexPairEdge(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVertexID GetVertexID() {
		return memory.read<struct FVertexID>(m_addr + 0);
	}
	struct FVertexID GetNextVertexID() {
		return memory.read<struct FVertexID>(m_addr + 4);
	}
	bool GetbOutEdgeWindingIsReversed() {
		return memory.read<bool>(m_addr + 8);
	}
	struct FEdgeID GetReturnValue() {
		return memory.read<struct FEdgeID>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FInsertEdgeLoop
{
public:
	FInsertEdgeLoop(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FEdgeID GetEdgeID() {
		return memory.read<struct FEdgeID>(m_addr + 0);
	}
	struct TArray<float> GetSplits() {
		return memory.read<struct TArray<float>>(m_addr + 8);
	}
	struct TArray<struct FEdgeID> GetOutNewEdgeIDs() {
		return memory.read<struct TArray<struct FEdgeID>>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FInvalidEdgeID
{
public:
	FInvalidEdgeID(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FEdgeID GetReturnValue() {
		return memory.read<struct FEdgeID>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FInvalidPolygonGroupID
{
public:
	FInvalidPolygonGroupID(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPolygonGroupID GetReturnValue() {
		return memory.read<struct FPolygonGroupID>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FInvalidPolygonID
{
public:
	FInvalidPolygonID(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPolygonID GetReturnValue() {
		return memory.read<struct FPolygonID>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FInvalidVertexID
{
public:
	FInvalidVertexID(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVertexID GetReturnValue() {
		return memory.read<struct FVertexID>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsCommitted
{
public:
	FIsCommitted(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsCommittedAsInstance
{
public:
	FIsCommittedAsInstance(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsCompactAllowed
{
public:
	FIsCompactAllowed(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetTextureCoordinateCount
{
public:
	FSetTextureCoordinateCount(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetNumTexCoords() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsPreviewingSubdivisions
{
public:
	FIsPreviewingSubdivisions(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsSpatialDatabaseAllowed
{
public:
	FIsSpatialDatabaseAllowed(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsUndoAllowed
{
public:
	FIsUndoAllowed(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsValidEdge
{
public:
	FIsValidEdge(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FEdgeID GetEdgeID() {
		return memory.read<struct FEdgeID>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsValidPolygon
{
public:
	FIsValidPolygon(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPolygonID GetPolygonID() {
		return memory.read<struct FPolygonID>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsValidPolygonGroup
{
public:
	FIsValidPolygonGroup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPolygonGroupID GetPolygonGroupID() {
		return memory.read<struct FPolygonGroupID>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsValidVertex
{
public:
	FIsValidVertex(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVertexID GetVertexID() {
		return memory.read<struct FVertexID>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FMakeEdgeID
{
public:
	FMakeEdgeID(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetEdgeIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FEdgeID GetReturnValue() {
		return memory.read<struct FEdgeID>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FMakePolygonID
{
public:
	FMakePolygonID(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetPolygonIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FPolygonID GetReturnValue() {
		return memory.read<struct FPolygonID>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FQuadrangulateMesh
{
public:
	FQuadrangulateMesh(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FPolygonID> GetOutNewPolygonIDs() {
		return memory.read<struct TArray<struct FPolygonID>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FRevertInstance
{
public:
	FRevertInstance(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UEditableMesh GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UEditableMesh(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSearchSpatialDatabaseForPolygonsInVolume
{
public:
	FSearchSpatialDatabaseForPolygonsInVolume(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FPlane> GetPlanes() {
		return memory.read<struct TArray<struct FPlane>>(m_addr + 0);
	}
	struct TArray<struct FPolygonID> GetOutPolygons() {
		return memory.read<struct TArray<struct FPolygonID>>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FSearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane
{
public:
	FSearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPlane GetInPlane() {
		return memory.read<struct FPlane>(m_addr + 0);
	}
	struct TArray<struct FPolygonID> GetOutPolygons() {
		return memory.read<struct TArray<struct FPolygonID>>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetAllowCompact
{
public:
	FSetAllowCompact(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbInAllowCompact() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetAllowUndo
{
public:
	FSetAllowUndo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbInAllowUndo() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetEdgesAttributes
{
public:
	FSetEdgesAttributes(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FAttributesForEdge> GetAttributesForEdges() {
		return memory.read<struct TArray<struct FAttributesForEdge>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetEdgesCreaseSharpness
{
public:
	FSetEdgesCreaseSharpness(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FEdgeID> GetEdgeIDs() {
		return memory.read<struct TArray<struct FEdgeID>>(m_addr + 0);
	}
	struct TArray<float> GetEdgesNewCreaseSharpness() {
		return memory.read<struct TArray<float>>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetEdgesHardnessAutomatically
{
public:
	FSetEdgesHardnessAutomatically(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FEdgeID> GetEdgeIDs() {
		return memory.read<struct TArray<struct FEdgeID>>(m_addr + 0);
	}
	float GetMaxDotProductForSoftEdge() {
		return memory.read<float>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetPolygonsVertexAttributes
{
public:
	FSetPolygonsVertexAttributes(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FVertexAttributesForPolygon> GetVertexAttributesForPolygons() {
		return memory.read<struct TArray<struct FVertexAttributesForPolygon>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSplitPolygonalMesh
{
public:
	FSplitPolygonalMesh(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPlane GetInPlane() {
		return memory.read<struct FPlane>(m_addr + 0);
	}
	struct TArray<struct FPolygonID> GetPolygonIDs1() {
		return memory.read<struct TArray<struct FPolygonID>>(m_addr + 16);
	}
	struct TArray<struct FPolygonID> GetPolygonIDs2() {
		return memory.read<struct TArray<struct FPolygonID>>(m_addr + 32);
	}
	struct TArray<struct FEdgeID> GetBoundaryIDs() {
		return memory.read<struct TArray<struct FEdgeID>>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetSubdivisionCount
{
public:
	FSetSubdivisionCount(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetNewSubdivisionCount() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetVertexInstancesAttributes
{
public:
	FSetVertexInstancesAttributes(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FAttributesForVertexInstance> GetAttributesForVertexInstances() {
		return memory.read<struct TArray<struct FAttributesForVertexInstance>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetVerticesAttributes
{
public:
	FSetVerticesAttributes(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FAttributesForVertex> GetAttributesForVertices() {
		return memory.read<struct TArray<struct FAttributesForVertex>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetVerticesCornerSharpness
{
public:
	FSetVerticesCornerSharpness(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FVertexID> GetVertexIDs() {
		return memory.read<struct TArray<struct FVertexID>>(m_addr + 0);
	}
	struct TArray<float> GetVerticesNewCornerSharpness() {
		return memory.read<struct TArray<float>>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FSplitEdge
{
public:
	FSplitEdge(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FEdgeID GetEdgeID() {
		return memory.read<struct FEdgeID>(m_addr + 0);
	}
	struct TArray<float> GetSplits() {
		return memory.read<struct TArray<float>>(m_addr + 8);
	}
	struct TArray<struct FVertexID> GetOutNewVertexIDs() {
		return memory.read<struct TArray<struct FVertexID>>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FSplitPolygons
{
public:
	FSplitPolygons(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FPolygonToSplit> GetPolygonsToSplit() {
		return memory.read<struct TArray<struct FPolygonToSplit>>(m_addr + 0);
	}
	struct TArray<struct FEdgeID> GetOutNewEdgeIDs() {
		return memory.read<struct TArray<struct FEdgeID>>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FStartModification
{
public:
	FStartModification(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EMeshModificationType GetMeshModificationType() {
		return memory.read<enum class EMeshModificationType>(m_addr + 0);
	}
	enum class EMeshTopologyChange GetMeshTopologyChange() {
		return memory.read<enum class EMeshTopologyChange>(m_addr + 1);
	}

private:
	std::uint64_t m_addr = 0;
};class FTessellatePolygons
{
public:
	FTessellatePolygons(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FPolygonID> GetPolygonIDs() {
		return memory.read<struct TArray<struct FPolygonID>>(m_addr + 0);
	}
	enum class ETriangleTessellationMode GetTriangleTessellationMode() {
		return memory.read<enum class ETriangleTessellationMode>(m_addr + 16);
	}
	struct TArray<struct FPolygonID> GetOutNewPolygonIDs() {
		return memory.read<struct TArray<struct FPolygonID>>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FTryToRemovePolygonEdge
{
public:
	FTryToRemovePolygonEdge(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FEdgeID GetEdgeID() {
		return memory.read<struct FEdgeID>(m_addr + 0);
	}
	bool GetbOutWasEdgeRemoved() {
		return memory.read<bool>(m_addr + 4);
	}
	struct FPolygonID GetOutNewPolygonID() {
		return memory.read<struct FPolygonID>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FTriangulatePolygons
{
public:
	FTriangulatePolygons(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FPolygonID> GetPolygonIDs() {
		return memory.read<struct TArray<struct FPolygonID>>(m_addr + 0);
	}
	struct TArray<struct FPolygonID> GetOutNewTrianglePolygons() {
		return memory.read<struct TArray<struct FPolygonID>>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FTryToRemoveVertex
{
public:
	FTryToRemoveVertex(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVertexID GetVertexID() {
		return memory.read<struct FVertexID>(m_addr + 0);
	}
	bool GetbOutWasVertexRemoved() {
		return memory.read<bool>(m_addr + 4);
	}
	struct FEdgeID GetOutNewEdgeID() {
		return memory.read<struct FEdgeID>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FWeldVertices
{
public:
	FWeldVertices(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FVertexID> GetVertexIDs() {
		return memory.read<struct TArray<struct FVertexID>>(m_addr + 0);
	}
	struct FVertexID GetOutNewVertexID() {
		return memory.read<struct FVertexID>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FMakeEditableMesh
{
public:
	FMakeEditableMesh(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPrimitiveComponent GetPrimitiveComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UPrimitiveComponent(ptr_addr);
	}
	int32_t GetLODIndex() {
		return memory.read<int32_t>(m_addr + 8);
	}
	struct UEditableMesh GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UEditableMesh(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};