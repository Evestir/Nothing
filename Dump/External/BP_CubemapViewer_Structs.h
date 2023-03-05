#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FUserConstructionScript
{
public:
	FUserConstructionScript(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetCallFunc_GetComponentBounds_Origin() {
		return memory.read<struct FVector>(m_addr + 0);
	}
	struct FVector GetCallFunc_GetComponentBounds_BoxExtent() {
		return memory.read<struct FVector>(m_addr + 12);
	}
	float GetCallFunc_GetComponentBounds_SphereRadius() {
		return memory.read<float>(m_addr + 24);
	}
	float GetCallFunc_Divide_FloatFloat_ReturnValue() {
		return memory.read<float>(m_addr + 28);
	}
	bool GetCallFunc_SetStaticMesh_ReturnValue() {
		return memory.read<bool>(m_addr + 32);
	}
	float GetCallFunc_Divide_FloatFloat_ReturnValue_2() {
		return memory.read<float>(m_addr + 36);
	}
	struct FVector GetCallFunc_Conv_FloatToVector_ReturnValue() {
		return memory.read<struct FVector>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FCreateMaterial
{
public:
	FCreateMaterial(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRotator GetCallFunc_K2_GetComponentRotation_ReturnValue() {
		return memory.read<struct FRotator>(m_addr + 0);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue() {
		return memory.read<float>(m_addr + 12);
	}
	struct FVector GetCallFunc_MakeVector_ReturnValue() {
		return memory.read<struct FVector>(m_addr + 16);
	}
	struct FVector GetCallFunc_Add_VectorVector_ReturnValue() {
		return memory.read<struct FVector>(m_addr + 28);
	}
	struct FVector GetCallFunc_GreaterGreater_VectorRotator_ReturnValue() {
		return memory.read<struct FVector>(m_addr + 40);
	}
	float GetCallFunc_BreakVector_X() {
		return memory.read<float>(m_addr + 52);
	}
	float GetCallFunc_BreakVector_Y() {
		return memory.read<float>(m_addr + 56);
	}
	float GetCallFunc_BreakVector_Z() {
		return memory.read<float>(m_addr + 60);
	}
	struct FLinearColor GetK2Node_MakeStruct_LinearColor() {
		return memory.read<struct FLinearColor>(m_addr + 64);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue_2() {
		return memory.read<float>(m_addr + 80);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue_3() {
		return memory.read<float>(m_addr + 84);
	}
	struct FRotator GetCallFunc_K2_GetComponentRotation_ReturnValue_2() {
		return memory.read<struct FRotator>(m_addr + 88);
	}
	float GetCallFunc_BreakRotator_Roll() {
		return memory.read<float>(m_addr + 100);
	}
	float GetCallFunc_BreakRotator_Pitch() {
		return memory.read<float>(m_addr + 104);
	}
	float GetCallFunc_BreakRotator_Yaw() {
		return memory.read<float>(m_addr + 108);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue_4() {
		return memory.read<float>(m_addr + 112);
	}
	struct UMaterialInstanceDynamic GetCallFunc_CreateDynamicMaterialInstance_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 120);
		return struct UMaterialInstanceDynamic(ptr_addr);
	}
	struct UMaterialInstanceDynamic GetCallFunc_CreateDynamicMaterialInstance_ReturnValue_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 128);
		return struct UMaterialInstanceDynamic(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FExecuteUbergraph_BP_CubemapViewer
{
public:
	FExecuteUbergraph_BP_CubemapViewer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetEntryPoint() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};