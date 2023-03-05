#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FSetVertexInstanceUV
{
public:
	FSetVertexInstanceUV(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVertexInstanceID GetVertexInstanceID() {
		return memory.read<struct FVertexInstanceID>(m_addr + 0);
	}
	struct FVector2D GetUV() {
		return memory.read<struct FVector2D>(m_addr + 4);
	}
	int32_t GetUVIndex() {
		return memory.read<int32_t>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FUVMapSettings
{
public:
	FUVMapSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetSize() {
		return memory.read<struct FVector>(m_addr + 0);
	}
	struct FVector2D GetUVTile() {
		return memory.read<struct FVector2D>(m_addr + 12);
	}
	struct FVector Getposition() {
		return memory.read<struct FVector>(m_addr + 20);
	}
	struct FRotator GetRotation() {
		return memory.read<struct FRotator>(m_addr + 32);
	}
	struct FVector GetScale() {
		return memory.read<struct FVector>(m_addr + 44);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetPolygonGroupMaterialSlotName
{
public:
	FSetPolygonGroupMaterialSlotName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPolygonGroupID GetPolygonGroupID() {
		return memory.read<struct FPolygonGroupID>(m_addr + 0);
	}
	struct FName GetSlotName() {
		return memory.read<struct FName>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FCreateCube
{
public:
	FCreateCube(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetCenter() {
		return memory.read<struct FVector>(m_addr + 0);
	}
	struct FVector GetHalfExtents() {
		return memory.read<struct FVector>(m_addr + 12);
	}
	struct FPolygonGroupID GetPolygonGroup() {
		return memory.read<struct FPolygonGroupID>(m_addr + 24);
	}
	struct FPolygonID GetPolygonID_PlusX() {
		return memory.read<struct FPolygonID>(m_addr + 28);
	}
	struct FPolygonID GetPolygonID_MinusX() {
		return memory.read<struct FPolygonID>(m_addr + 32);
	}
	struct FPolygonID GetPolygonID_PlusY() {
		return memory.read<struct FPolygonID>(m_addr + 36);
	}
	struct FPolygonID GetPolygonID_MinusY() {
		return memory.read<struct FPolygonID>(m_addr + 40);
	}
	struct FPolygonID GetPolygonID_PlusZ() {
		return memory.read<struct FPolygonID>(m_addr + 44);
	}
	struct FPolygonID GetPolygonID_MinusZ() {
		return memory.read<struct FPolygonID>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetVertexInstanceUV
{
public:
	FGetVertexInstanceUV(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVertexInstanceID GetVertexInstanceID() {
		return memory.read<struct FVertexInstanceID>(m_addr + 0);
	}
	int32_t GetUVIndex() {
		return memory.read<int32_t>(m_addr + 4);
	}
	struct FVector2D GetReturnValue() {
		return memory.read<struct FVector2D>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};