#pragma once 
#include <BP_FX_ButterFlyPt_Structs.h>
 
 
 
class ABP_FX_ButterFlyPt_C
{
public:
	ABP_FX_ButterFlyPt_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 544);
	}
	struct UParticleSystemComponent GetPS_BG_ButterFlyPt() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 552);
		return struct UParticleSystemComponent(ptr_addr);
	}
	struct UTextRenderComponent GetTextRender() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 560);
		return struct UTextRenderComponent(ptr_addr);
	}
	struct USphereComponent GetSphere() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 568);
		return struct USphereComponent(ptr_addr);
	}
	struct USceneComponent GetDefaultSceneRoot() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 576);
		return struct USceneComponent(ptr_addr);
	}
	struct UMaterialInstanceDynamic GetMat_ButterFlyA() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 584);
		return struct UMaterialInstanceDynamic(ptr_addr);
	}
	float GetButterFly_Str() {
		return memory.read<float>(m_addr + 592);
	}
	float GetButterFly_Pow() {
		return memory.read<float>(m_addr + 596);
	}
	struct UTexture GetButterFlyTex() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 600);
		return struct UTexture(ptr_addr);
	}
	struct FLinearColor GetButterFly_12XYAdd() {
		return memory.read<struct FLinearColor>(m_addr + 608);
	}
	float GetButterFlyTex_Rot() {
		return memory.read<float>(m_addr + 624);
	}
	float GetWPO_YScale() {
		return memory.read<float>(m_addr + 628);
	}
	float GetWPO_ZScale() {
		return memory.read<float>(m_addr + 632);
	}
	float GetButterFlySpawn() {
		return memory.read<float>(m_addr + 636);
	}
	float GetButterFlySizeScale() {
		return memory.read<float>(m_addr + 640);
	}
	float GetButterFlyRadius() {
		return memory.read<float>(m_addr + 644);
	}
	float GetButterFly_AttractorStr() {
		return memory.read<float>(m_addr + 648);
	}
	struct FLinearColor GetButterFly_Color() {
		return memory.read<struct FLinearColor>(m_addr + 652);
	}

private:
	std::uint64_t m_addr = 0;
};


