#pragma once 
#include <BP_FX_BGLeafPtA_Structs.h>
 
 
 
class ABP_FX_BGLeafPtA_C
{
public:
	ABP_FX_BGLeafPtA_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerToUberGraphFrame GetUberGraphFrame() {
		return memory.read<struct FPointerToUberGraphFrame>(m_addr + 544);
	}
	struct UTextRenderComponent GetTextRender() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 552);
		return struct UTextRenderComponent(ptr_addr);
	}
	struct UArrowComponent GetArrow() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 560);
		return struct UArrowComponent(ptr_addr);
	}
	struct USphereComponent GetSphere() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 568);
		return struct USphereComponent(ptr_addr);
	}
	struct UParticleSystemComponent GetLeafPt() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 576);
		return struct UParticleSystemComponent(ptr_addr);
	}
	struct USceneComponent GetDefaultSceneRoot() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 584);
		return struct USceneComponent(ptr_addr);
	}
	struct UMaterialInstanceDynamic GetMat_LeafPt() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 592);
		return struct UMaterialInstanceDynamic(ptr_addr);
	}
	float GetLeafPt_Emissive() {
		return memory.read<float>(m_addr + 600);
	}
	struct UTexture GetLeafPtTex() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 608);
		return struct UTexture(ptr_addr);
	}
	float GetLeafPtSpawn() {
		return memory.read<float>(m_addr + 616);
	}
	float GetLeafPtLifeTime() {
		return memory.read<float>(m_addr + 620);
	}
	float GetLeafPtScaleAdd() {
		return memory.read<float>(m_addr + 624);
	}
	struct FVector GetLeafPtVAdd() {
		return memory.read<struct FVector>(m_addr + 628);
	}
	float GetLeafPtERadius() {
		return memory.read<float>(m_addr + 640);
	}
	float GetLeafPtZLocation() {
		return memory.read<float>(m_addr + 644);
	}
	struct FLinearColor GetLeafPtColor() {
		return memory.read<struct FLinearColor>(m_addr + 648);
	}

private:
	std::uint64_t m_addr = 0;
};


