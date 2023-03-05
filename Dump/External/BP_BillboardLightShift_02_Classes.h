#pragma once 
#include <BP_BillboardLightShift_02_Structs.h>
 
 
 
class ABP_BillboardLightShift_02_C
{
public:
	ABP_BillboardLightShift_02_C(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

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
	struct USceneComponent GetDefaultSceneRoot1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 568);
		return struct USceneComponent(ptr_addr);
	}
	struct UStaticMeshComponent GetbillboardFX() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 576);
		return struct UStaticMeshComponent(ptr_addr);
	}
	bool GetBillboradType_Selet() {
		return memory.read<bool>(m_addr + 584);
	}
	float GetBase_Str() {
		return memory.read<float>(m_addr + 588);
	}
	struct FLinearColor GetBase_Color1() {
		return memory.read<struct FLinearColor>(m_addr + 592);
	}
	struct FLinearColor GetBase_Color2() {
		return memory.read<struct FLinearColor>(m_addr + 608);
	}
	float GetBase_DepthFade() {
		return memory.read<float>(m_addr + 624);
	}
	float GetLocationMask_Power() {
		return memory.read<float>(m_addr + 628);
	}
	float GetLocationMask_Range() {
		return memory.read<float>(m_addr + 632);
	}
	struct UTexture GetBase_Tex1() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct UTexture(ptr_addr);
	}
	struct UTexture GetBase_Tex2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 648);
		return struct UTexture(ptr_addr);
	}
	struct FLinearColor GetBaseTexPanner1,2() {
		return memory.read<struct FLinearColor>(m_addr + 656);
	}
	struct FLinearColor GetBaseTexScale1,2() {
		return memory.read<struct FLinearColor>(m_addr + 672);
	}
	float GetBase_Time() {
		return memory.read<float>(m_addr + 688);
	}
	float GetMask_Power() {
		return memory.read<float>(m_addr + 692);
	}
	float GetDistortion_Str() {
		return memory.read<float>(m_addr + 696);
	}
	struct UTexture GetDistortion_Tex() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 704);
		return struct UTexture(ptr_addr);
	}
	enum class BP_Enum_BillboardLightShift GetBillboard_Type2() {
		return memory.read<enum class BP_Enum_BillboardLightShift>(m_addr + 712);
	}
	struct FLinearColor GetDistortion_Scale_Speed() {
		return memory.read<struct FLinearColor>(m_addr + 716);
	}
	float GetDistortion_Time() {
		return memory.read<float>(m_addr + 732);
	}
	struct UTexture GetMaskTex() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 736);
		return struct UTexture(ptr_addr);
	}
	float GetSphereMask_Radius() {
		return memory.read<float>(m_addr + 744);
	}
	float GetSphereMask_Density() {
		return memory.read<float>(m_addr + 748);
	}
	float GetLocationMask_Max() {
		return memory.read<float>(m_addr + 752);
	}
	float GetMaskTex_Rot() {
		return memory.read<float>(m_addr + 756);
	}
	int32_t GetBillboard_Type() {
		return memory.read<int32_t>(m_addr + 760);
	}
	struct UMaterialInstanceDynamic GetMat_BillboardFX() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 768);
		return struct UMaterialInstanceDynamic(ptr_addr);
	}
	float GetBaseTex_Rot() {
		return memory.read<float>(m_addr + 776);
	}
	float GetBaseTex_UVAddOffset() {
		return memory.read<float>(m_addr + 780);
	}
	float GetFilcker_UnUse() {
		return memory.read<float>(m_addr + 784);
	}
	struct FLinearColor GetFilcker_SinRemap() {
		return memory.read<struct FLinearColor>(m_addr + 788);
	}
	float GetFlickerTime() {
		return memory.read<float>(m_addr + 804);
	}
	float GetDrawDistance() {
		return memory.read<float>(m_addr + 808);
	}

private:
	std::uint64_t m_addr = 0;
};


