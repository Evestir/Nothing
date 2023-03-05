#pragma once 
#include <BP_FogFX_camerafade_Structs.h>
 
 
 
class ABP_FogFX_camerafade_C
{
public:
	ABP_FogFX_camerafade_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UStaticMeshComponent GetbillboardFX() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 544);
		return struct UStaticMeshComponent(ptr_addr);
	}
	struct UMaterialInstanceDynamic GetMat_BillboardFX() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 552);
		return struct UMaterialInstanceDynamic(ptr_addr);
	}
	float GetLightColor_Intensity() {
		return memory.read<float>(m_addr + 560);
	}
	float GetMask_Range() {
		return memory.read<float>(m_addr + 564);
	}
	struct FLinearColor GetLightColor() {
		return memory.read<struct FLinearColor>(m_addr + 568);
	}
	float GetOpacity_Depth() {
		return memory.read<float>(m_addr + 584);
	}
	float GetDistance_Fade() {
		return memory.read<float>(m_addr + 588);
	}
	float GetDistance_Range() {
		return memory.read<float>(m_addr + 592);
	}
	struct UTexture GetLightMask() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 600);
		return struct UTexture(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


