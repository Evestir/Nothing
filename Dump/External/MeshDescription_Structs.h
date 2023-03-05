#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FTriangleID
{
public:
	FTriangleID(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FGetNumPolygonVertices
{
public:
	FGetNumPolygonVertices(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

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
};class FIsPolygonGroupValid
{
public:
	FIsPolygonGroupValid(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

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
};class FElementID
{
public:
	FElementID(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetIDValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FPolygonGroupID
{
public:
	FPolygonGroupID(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


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
};class FPolygonID
{
public:
	FPolygonID(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FGetPolygonTriangles
{
public:
	FGetPolygonTriangles(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPolygonID GetPolygonID() {
		return memory.read<struct FPolygonID>(m_addr + 0);
	}
	struct TArray<struct FTriangleID> GetOutTriangleIDs() {
		return memory.read<struct TArray<struct FTriangleID>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FVertexID
{
public:
	FVertexID(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FComputePolygonTriangulation
{
public:
	FComputePolygonTriangulation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPolygonID GetPolygonID() {
		return memory.read<struct FPolygonID>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetNumVertexConnectedTriangles
{
public:
	FGetNumVertexConnectedTriangles(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

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
};class FEdgeID
{
public:
	FEdgeID(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FGetVertexInstanceForPolygonVertex
{
public:
	FGetVertexInstanceForPolygonVertex(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPolygonID GetPolygonID() {
		return memory.read<struct FPolygonID>(m_addr + 0);
	}
	struct FVertexID GetVertexID() {
		return memory.read<struct FVertexID>(m_addr + 4);
	}
	struct FVertexInstanceID GetReturnValue() {
		return memory.read<struct FVertexInstanceID>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FVertexInstanceID
{
public:
	FVertexInstanceID(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FCreateEdge
{
public:
	FCreateEdge(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

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
};class FGetTriangleVertices
{
public:
	FGetTriangleVertices(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTriangleID GetTriangleID() {
		return memory.read<struct FTriangleID>(m_addr + 0);
	}
	struct TArray<struct FVertexID> GetOutVertexIDs() {
		return memory.read<struct TArray<struct FVertexID>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetNumVertexInstanceConnectedTriangles
{
public:
	FGetNumVertexInstanceConnectedTriangles(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

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
};class FDeletePolygon
{
public:
	FDeletePolygon(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPolygonID GetPolygonID() {
		return memory.read<struct FPolygonID>(m_addr + 0);
	}
	struct TArray<struct FEdgeID> GetOrphanedEdges() {
		return memory.read<struct TArray<struct FEdgeID>>(m_addr + 8);
	}
	struct TArray<struct FVertexInstanceID> GetOrphanedVertexInstances() {
		return memory.read<struct TArray<struct FVertexInstanceID>>(m_addr + 24);
	}
	struct TArray<struct FPolygonGroupID> GetOrphanedPolygonGroups() {
		return memory.read<struct TArray<struct FPolygonGroupID>>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FCreateEdgeWithID
{
public:
	FCreateEdgeWithID(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FEdgeID GetEdgeID() {
		return memory.read<struct FEdgeID>(m_addr + 0);
	}
	struct FVertexID GetVertexID0() {
		return memory.read<struct FVertexID>(m_addr + 4);
	}
	struct FVertexID GetVertexID1() {
		return memory.read<struct FVertexID>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetVertexConnectedTriangles
{
public:
	FGetVertexConnectedTriangles(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVertexID GetVertexID() {
		return memory.read<struct FVertexID>(m_addr + 0);
	}
	struct TArray<struct FTriangleID> GetOutConnectedTriangleIDs() {
		return memory.read<struct TArray<struct FTriangleID>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FCreatePolygon
{
public:
	FCreatePolygon(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPolygonGroupID GetPolygonGroupID() {
		return memory.read<struct FPolygonGroupID>(m_addr + 0);
	}
	struct TArray<struct FVertexInstanceID> GetVertexInstanceIDs() {
		return memory.read<struct TArray<struct FVertexInstanceID>>(m_addr + 8);
	}
	struct TArray<struct FEdgeID> GetNewEdgeIDs() {
		return memory.read<struct TArray<struct FEdgeID>>(m_addr + 24);
	}
	struct FPolygonID GetReturnValue() {
		return memory.read<struct FPolygonID>(m_addr + 40);
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
	int32_t GetVertexNumber() {
		return memory.read<int32_t>(m_addr + 4);
	}
	struct FVertexID GetReturnValue() {
		return memory.read<struct FVertexID>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FCreatePolygonGroup
{
public:
	FCreatePolygonGroup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPolygonGroupID GetReturnValue() {
		return memory.read<struct FPolygonGroupID>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FCreateTriangle
{
public:
	FCreateTriangle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPolygonGroupID GetPolygonGroupID() {
		return memory.read<struct FPolygonGroupID>(m_addr + 0);
	}
	struct TArray<struct FVertexInstanceID> GetVertexInstanceIDs() {
		return memory.read<struct TArray<struct FVertexInstanceID>>(m_addr + 8);
	}
	struct TArray<struct FEdgeID> GetNewEdgeIDs() {
		return memory.read<struct TArray<struct FEdgeID>>(m_addr + 24);
	}
	struct FTriangleID GetReturnValue() {
		return memory.read<struct FTriangleID>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FCreatePolygonGroupWithID
{
public:
	FCreatePolygonGroupWithID(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPolygonGroupID GetPolygonGroupID() {
		return memory.read<struct FPolygonGroupID>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPolygonVertices
{
public:
	FGetPolygonVertices(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPolygonID GetPolygonID() {
		return memory.read<struct FPolygonID>(m_addr + 0);
	}
	struct TArray<struct FVertexID> GetOutVertexIDs() {
		return memory.read<struct TArray<struct FVertexID>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FCreatePolygonWithID
{
public:
	FCreatePolygonWithID(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPolygonID GetPolygonID() {
		return memory.read<struct FPolygonID>(m_addr + 0);
	}
	struct FPolygonGroupID GetPolygonGroupID() {
		return memory.read<struct FPolygonGroupID>(m_addr + 4);
	}
	struct TArray<struct FVertexInstanceID> GetVertexInstanceIDs() {
		return memory.read<struct TArray<struct FVertexInstanceID>>(m_addr + 8);
	}
	struct TArray<struct FEdgeID> GetNewEdgeIDs() {
		return memory.read<struct TArray<struct FEdgeID>>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FCreateTriangleWithID
{
public:
	FCreateTriangleWithID(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTriangleID GetTriangleID() {
		return memory.read<struct FTriangleID>(m_addr + 0);
	}
	struct FPolygonGroupID GetPolygonGroupID() {
		return memory.read<struct FPolygonGroupID>(m_addr + 4);
	}
	struct TArray<struct FVertexInstanceID> GetVertexInstanceIDs() {
		return memory.read<struct TArray<struct FVertexInstanceID>>(m_addr + 8);
	}
	struct TArray<struct FEdgeID> GetNewEdgeIDs() {
		return memory.read<struct TArray<struct FEdgeID>>(m_addr + 24);
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
};class FGetPolygonVertexInstances
{
public:
	FGetPolygonVertexInstances(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPolygonID GetPolygonID() {
		return memory.read<struct FPolygonID>(m_addr + 0);
	}
	struct TArray<struct FVertexInstanceID> GetOutVertexInstanceIDs() {
		return memory.read<struct TArray<struct FVertexInstanceID>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetNumVertexVertexInstances
{
public:
	FGetNumVertexVertexInstances(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

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
};class FCreateVertex
{
public:
	FCreateVertex(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVertexID GetReturnValue() {
		return memory.read<struct FVertexID>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetNumPolygonGroupPolygons
{
public:
	FGetNumPolygonGroupPolygons(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

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
};class FCreateVertexInstance
{
public:
	FCreateVertexInstance(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVertexID GetVertexID() {
		return memory.read<struct FVertexID>(m_addr + 0);
	}
	struct FVertexInstanceID GetReturnValue() {
		return memory.read<struct FVertexInstanceID>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FCreateVertexInstanceWithID
{
public:
	FCreateVertexInstanceWithID(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVertexInstanceID GetVertexInstanceID() {
		return memory.read<struct FVertexInstanceID>(m_addr + 0);
	}
	struct FVertexID GetVertexID() {
		return memory.read<struct FVertexID>(m_addr + 4);
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
};class FCreateVertexWithID
{
public:
	FCreateVertexWithID(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVertexID GetVertexID() {
		return memory.read<struct FVertexID>(m_addr + 0);
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
};class FGetTrianglePolygon
{
public:
	FGetTrianglePolygon(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTriangleID GetTriangleID() {
		return memory.read<struct FTriangleID>(m_addr + 0);
	}
	struct FPolygonID GetReturnValue() {
		return memory.read<struct FPolygonID>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FDeleteEdge
{
public:
	FDeleteEdge(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FEdgeID GetEdgeID() {
		return memory.read<struct FEdgeID>(m_addr + 0);
	}
	struct TArray<struct FVertexID> GetOrphanedVertices() {
		return memory.read<struct TArray<struct FVertexID>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTriangleEdges
{
public:
	FGetTriangleEdges(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTriangleID GetTriangleID() {
		return memory.read<struct FTriangleID>(m_addr + 0);
	}
	struct TArray<struct FEdgeID> GetOutEdgeIDs() {
		return memory.read<struct TArray<struct FEdgeID>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetVertexInstanceForTriangleVertex
{
public:
	FGetVertexInstanceForTriangleVertex(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTriangleID GetTriangleID() {
		return memory.read<struct FTriangleID>(m_addr + 0);
	}
	struct FVertexID GetVertexID() {
		return memory.read<struct FVertexID>(m_addr + 4);
	}
	struct FVertexInstanceID GetReturnValue() {
		return memory.read<struct FVertexInstanceID>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FDeletePolygonGroup
{
public:
	FDeletePolygonGroup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPolygonGroupID GetPolygonGroupID() {
		return memory.read<struct FPolygonGroupID>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTrianglePolygonGroup
{
public:
	FGetTrianglePolygonGroup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTriangleID GetTriangleID() {
		return memory.read<struct FTriangleID>(m_addr + 0);
	}
	struct FPolygonGroupID GetReturnValue() {
		return memory.read<struct FPolygonGroupID>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FDeleteTriangle
{
public:
	FDeleteTriangle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTriangleID GetTriangleID() {
		return memory.read<struct FTriangleID>(m_addr + 0);
	}
	struct TArray<struct FEdgeID> GetOrphanedEdges() {
		return memory.read<struct TArray<struct FEdgeID>>(m_addr + 8);
	}
	struct TArray<struct FVertexInstanceID> GetOrphanedVertexInstances() {
		return memory.read<struct TArray<struct FVertexInstanceID>>(m_addr + 24);
	}
	struct TArray<struct FPolygonGroupID> GetOrphanedPolygonGroupsPtr() {
		return memory.read<struct TArray<struct FPolygonGroupID>>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FDeleteVertex
{
public:
	FDeleteVertex(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVertexID GetVertexID() {
		return memory.read<struct FVertexID>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDeleteVertexInstance
{
public:
	FDeleteVertexInstance(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVertexInstanceID GetVertexInstanceID() {
		return memory.read<struct FVertexInstanceID>(m_addr + 0);
	}
	struct TArray<struct FVertexID> GetOrphanedVertices() {
		return memory.read<struct TArray<struct FVertexID>>(m_addr + 8);
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
	struct TArray<struct FPolygonID> GetOutPolygonIDs() {
		return memory.read<struct TArray<struct FPolygonID>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetEdgeConnectedTriangles
{
public:
	FGetEdgeConnectedTriangles(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FEdgeID GetEdgeID() {
		return memory.read<struct FEdgeID>(m_addr + 0);
	}
	struct TArray<struct FTriangleID> GetOutConnectedTriangleIDs() {
		return memory.read<struct TArray<struct FTriangleID>>(m_addr + 8);
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
	struct TArray<struct FVertexID> GetOutVertexIDs() {
		return memory.read<struct TArray<struct FVertexID>>(m_addr + 8);
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
	struct TArray<struct FEdgeID> GetOutEdgeIDs() {
		return memory.read<struct TArray<struct FEdgeID>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetNumVertexConnectedEdges
{
public:
	FGetNumVertexConnectedEdges(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

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
};class FGetNumEdgeConnectedPolygons
{
public:
	FGetNumEdgeConnectedPolygons(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

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
};class FGetNumEdgeConnectedTriangles
{
public:
	FGetNumEdgeConnectedTriangles(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

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
};class FGetNumPolygonInternalEdges
{
public:
	FGetNumPolygonInternalEdges(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

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
};class FGetTriangleAdjacentTriangles
{
public:
	FGetTriangleAdjacentTriangles(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTriangleID GetTriangleID() {
		return memory.read<struct FTriangleID>(m_addr + 0);
	}
	struct TArray<struct FTriangleID> GetOutTriangleIDs() {
		return memory.read<struct TArray<struct FTriangleID>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetNumPolygonTriangles
{
public:
	FGetNumPolygonTriangles(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

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
};class FGetNumVertexConnectedPolygons
{
public:
	FGetNumVertexConnectedPolygons(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

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
};class FGetNumVertexInstanceConnectedPolygons
{
public:
	FGetNumVertexInstanceConnectedPolygons(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

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
};class FGetPolygonGroupPolygons
{
public:
	FGetPolygonGroupPolygons(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPolygonGroupID GetPolygonGroupID() {
		return memory.read<struct FPolygonGroupID>(m_addr + 0);
	}
	struct TArray<struct FPolygonID> GetOutPolygonIDs() {
		return memory.read<struct TArray<struct FPolygonID>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPolygonInternalEdges
{
public:
	FGetPolygonInternalEdges(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPolygonID GetPolygonID() {
		return memory.read<struct FPolygonID>(m_addr + 0);
	}
	struct TArray<struct FEdgeID> GetOutEdgeIDs() {
		return memory.read<struct TArray<struct FEdgeID>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPolygonPolygonGroup
{
public:
	FGetPolygonPolygonGroup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

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
};class FGetTriangleVertexInstance
{
public:
	FGetTriangleVertexInstance(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTriangleID GetTriangleID() {
		return memory.read<struct FTriangleID>(m_addr + 0);
	}
	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 4);
	}
	struct FVertexInstanceID GetReturnValue() {
		return memory.read<struct FVertexInstanceID>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTriangleVertexInstances
{
public:
	FGetTriangleVertexInstances(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTriangleID GetTriangleID() {
		return memory.read<struct FTriangleID>(m_addr + 0);
	}
	struct TArray<struct FVertexInstanceID> GetOutVertexInstanceIDs() {
		return memory.read<struct TArray<struct FVertexInstanceID>>(m_addr + 8);
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
	struct TArray<struct FEdgeID> GetOutEdgeIDs() {
		return memory.read<struct TArray<struct FEdgeID>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetVertexInstanceConnectedTriangles
{
public:
	FGetVertexInstanceConnectedTriangles(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVertexInstanceID GetVertexInstanceID() {
		return memory.read<struct FVertexInstanceID>(m_addr + 0);
	}
	struct TArray<struct FTriangleID> GetOutConnectedTriangleIDs() {
		return memory.read<struct TArray<struct FTriangleID>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FReserveNewEdges
{
public:
	FReserveNewEdges(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetNumberOfNewEdges() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetVertexInstancePairEdge
{
public:
	FGetVertexInstancePairEdge(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVertexInstanceID GetVertexInstanceID0() {
		return memory.read<struct FVertexInstanceID>(m_addr + 0);
	}
	struct FVertexInstanceID GetVertexInstanceID1() {
		return memory.read<struct FVertexInstanceID>(m_addr + 4);
	}
	struct FEdgeID GetReturnValue() {
		return memory.read<struct FEdgeID>(m_addr + 8);
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
};class FGetVertexPosition
{
public:
	FGetVertexPosition(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVertexID GetVertexID() {
		return memory.read<struct FVertexID>(m_addr + 0);
	}
	struct FVector GetReturnValue() {
		return memory.read<struct FVector>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetVertexVertexInstances
{
public:
	FGetVertexVertexInstances(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVertexID GetVertexID() {
		return memory.read<struct FVertexID>(m_addr + 0);
	}
	struct TArray<struct FVertexInstanceID> GetOutVertexInstanceIDs() {
		return memory.read<struct TArray<struct FVertexInstanceID>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsEdgeInternal
{
public:
	FIsEdgeInternal(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

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
};class FIsEdgeInternalToPolygon
{
public:
	FIsEdgeInternalToPolygon(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FEdgeID GetEdgeID() {
		return memory.read<struct FEdgeID>(m_addr + 0);
	}
	struct FPolygonID GetPolygonID() {
		return memory.read<struct FPolygonID>(m_addr + 4);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsEdgeValid
{
public:
	FIsEdgeValid(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

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
};class FIsEmpty
{
public:
	FIsEmpty(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsPolygonValid
{
public:
	FIsPolygonValid(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

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
};class FIsTrianglePartOfNgon
{
public:
	FIsTrianglePartOfNgon(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTriangleID GetTriangleID() {
		return memory.read<struct FTriangleID>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsTriangleValid
{
public:
	FIsTriangleValid(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTriangleID GetTriangleID() {
		return memory.read<struct FTriangleID>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsVertexInstanceValid
{
public:
	FIsVertexInstanceValid(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVertexInstanceID GetVertexInstanceID() {
		return memory.read<struct FVertexInstanceID>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsVertexOrphaned
{
public:
	FIsVertexOrphaned(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

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
};class FIsVertexValid
{
public:
	FIsVertexValid(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

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
};class FReserveNewPolygonGroups
{
public:
	FReserveNewPolygonGroups(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetNumberOfNewPolygonGroups() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FReserveNewPolygons
{
public:
	FReserveNewPolygons(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetNumberOfNewPolygons() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FReserveNewTriangles
{
public:
	FReserveNewTriangles(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetNumberOfNewTriangles() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FReserveNewVertexInstances
{
public:
	FReserveNewVertexInstances(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetNumberOfNewVertexInstances() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FReserveNewVertices
{
public:
	FReserveNewVertices(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetNumberOfNewVertices() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FReversePolygonFacing
{
public:
	FReversePolygonFacing(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPolygonID GetPolygonID() {
		return memory.read<struct FPolygonID>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetPolygonPolygonGroup
{
public:
	FSetPolygonPolygonGroup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

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
};class FSetPolygonVertexInstance
{
public:
	FSetPolygonVertexInstance(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPolygonID GetPolygonID() {
		return memory.read<struct FPolygonID>(m_addr + 0);
	}
	int32_t GetPerimeterIndex() {
		return memory.read<int32_t>(m_addr + 4);
	}
	struct FVertexInstanceID GetVertexInstanceID() {
		return memory.read<struct FVertexInstanceID>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetVertexPosition
{
public:
	FSetVertexPosition(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVertexID GetVertexID() {
		return memory.read<struct FVertexID>(m_addr + 0);
	}
	struct FVector Getposition() {
		return memory.read<struct FVector>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};