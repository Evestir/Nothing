#pragma once 
#include <BP_CubemapViewer_Structs.h>
 
 
 
class ABP_CubemapViewer_C
{
public:
	ABP_CubemapViewer_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 560);
	}
	struct UStaticMeshComponent GetSkyDome() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 568);
		return struct UStaticMeshComponent(ptr_addr);
	}
	struct USceneComponent GetSceneComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 576);
		return struct USceneComponent(ptr_addr);
	}
	struct UTextureCube GetCubemap() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 584);
		return struct UTextureCube(ptr_addr);
	}
	float GetIntensity() {
		return memory.read<float>(m_addr + 592);
	}
	float GetSize() {
		return memory.read<float>(m_addr + 596);
	}
	float GetLightingDistanceFactor() {
		return memory.read<float>(m_addr + 600);
	}
	bool GetUseCameraProjection() {
		return memory.read<bool>(m_addr + 604);
	}
	struct UStaticMesh GetMesh() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 608);
		return struct UStaticMesh(ptr_addr);
	}
	float GetHDR_Angle() {
		return memory.read<float>(m_addr + 616);
	}
	struct FLinearColor GetHDRI_Color() {
		return memory.read<struct FLinearColor>(m_addr + 620);
	}
	struct FVector GetProjectionCenter() {
		return memory.read<struct FVector>(m_addr + 636);
	}

private:
	std::uint64_t m_addr = 0;
};


