#pragma once 
#include <MRMesh_Structs.h>
 
 
 
class UMeshReconstructorBase
{
public:
	UMeshReconstructorBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMRMeshComponent
{
public:
	UMRMeshComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMaterialInterface GetMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1152);
		return struct UMaterialInterface(ptr_addr);
	}
	struct UMaterialInterface GetWireframeMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1160);
		return struct UMaterialInterface(ptr_addr);
	}
	bool GetbCreateMeshProxySections() {
		return memory.read<bool>(m_addr + 1168);
	}
	bool GetbUpdateNavMeshOnMeshUpdate() {
		return memory.read<bool>(m_addr + 1169);
	}
	bool GetbNeverCreateCollisionMesh() {
		return memory.read<bool>(m_addr + 1170);
	}
	struct UBodySetup GetCachedBodySetup() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1176);
		return struct UBodySetup(ptr_addr);
	}
	struct TArray<struct UBodySetup> GetBodySetups() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1184);
		return struct TArray<struct UBodySetup>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMockDataMeshTrackerComponent
{
public:
	UMockDataMeshTrackerComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate GetOnMeshTrackerUpdated() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 520);
	}
	bool GetScanWorld() {
		return memory.read<bool>(m_addr + 536);
	}
	bool GetRequestNormals() {
		return memory.read<bool>(m_addr + 537);
	}
	bool GetRequestVertexConfidence() {
		return memory.read<bool>(m_addr + 538);
	}
	enum class EMeshTrackerVertexColorMode GetVertexColorMode() {
		return memory.read<enum class EMeshTrackerVertexColorMode>(m_addr + 539);
	}
	struct TArray<struct FColor> GetBlockVertexColors() {
		return memory.read<struct TArray<struct FColor>>(m_addr + 544);
	}
	struct FLinearColor GetVertexColorFromConfidenceZero() {
		return memory.read<struct FLinearColor>(m_addr + 560);
	}
	struct FLinearColor GetVertexColorFromConfidenceOne() {
		return memory.read<struct FLinearColor>(m_addr + 576);
	}
	float GetUpdateInterval() {
		return memory.read<float>(m_addr + 592);
	}
	struct UMRMeshComponent GetMRMesh() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 600);
		return struct UMRMeshComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


