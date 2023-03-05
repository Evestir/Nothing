#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FExecuteUbergraph_BP_Vil_mesh_hotairballoon001
{
public:
	FExecuteUbergraph_BP_Vil_mesh_hotairballoon001(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetEntryPoint() {
		return memory.read<int32_t>(m_addr + 0);
	}
	float GetCallFunc_RandomFloatInRange_ReturnValue() {
		return memory.read<float>(m_addr + 4);
	}
	struct FVector GetCallFunc_Add_VectorVector_ReturnValue() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	struct FVector GetCallFunc_K2_GetActorLocation_ReturnValue() {
		return memory.read<struct FVector>(m_addr + 20);
	}
	struct FHitResult GetCallFunc_K2_SetActorLocation_SweepHitResult() {
		return memory.read<struct FHitResult>(m_addr + 32);
	}
	bool GetCallFunc_K2_SetActorLocation_ReturnValue() {
		return memory.read<bool>(m_addr + 168);
	}
	float GetCallFunc_RandomFloatInRange_ReturnValue_2() {
		return memory.read<float>(m_addr + 172);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue() {
		return memory.read<float>(m_addr + 176);
	}
	struct FRotator GetCallFunc_MakeRotator_ReturnValue() {
		return memory.read<struct FRotator>(m_addr + 180);
	}
	struct FHitResult GetCallFunc_K2_AddActorLocalRotation_SweepHitResult() {
		return memory.read<struct FHitResult>(m_addr + 192);
	}

private:
	std::uint64_t m_addr = 0;
};