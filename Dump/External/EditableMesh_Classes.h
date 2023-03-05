#pragma once 
#include <EditableMesh_Structs.h>
 
 
 
class UEditableGeometryCollectionAdapter
{
public:
	UEditableGeometryCollectionAdapter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UGeometryCollection GetGeometryCollection() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct UGeometryCollection(ptr_addr);
	}
	struct UGeometryCollection GetOriginalGeometryCollection() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UGeometryCollection(ptr_addr);
	}
	int32_t GetGeometryCollectionLODIndex() {
		return memory.read<int32_t>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};


class UEditableMeshAdapter
{
public:
	UEditableMeshAdapter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UEditableMeshFactory
{
public:
	UEditableMeshFactory(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UEditableMesh
{
public:
	UEditableMesh(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UEditableMeshAdapter> GetAdapters() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 952);
		return struct TArray<struct UEditableMeshAdapter>(ptr_addr);
	}
	int32_t GetTextureCoordinateCount() {
		return memory.read<int32_t>(m_addr + 976);
	}
	int32_t GetPendingCompactCounter() {
		return memory.read<int32_t>(m_addr + 1308);
	}
	int32_t GetSubdivisionCount() {
		return memory.read<int32_t>(m_addr + 1312);
	}

private:
	std::uint64_t m_addr = 0;
};


class UEditableStaticMeshAdapter
{
public:
	UEditableStaticMeshAdapter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UStaticMesh GetStaticMesh() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct UStaticMesh(ptr_addr);
	}
	struct UStaticMesh GetOriginalStaticMesh() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UStaticMesh(ptr_addr);
	}
	int32_t GetStaticMeshLODIndex() {
		return memory.read<int32_t>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};


