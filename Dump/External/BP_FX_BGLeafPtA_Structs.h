#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FExecuteUbergraph_BP_FX_BGLeafPtA
{
public:
	FExecuteUbergraph_BP_FX_BGLeafPtA(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetEntryPoint() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FUserConstructionScript
{
public:
	FUserConstructionScript(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetCallFunc_MakeVector_ReturnValue() {
		return memory.read<struct FVector>(m_addr + 0);
	}
	float GetCallFunc_RandomFloat_ReturnValue() {
		return memory.read<float>(m_addr + 12);
	}
	struct UMaterialInstanceDynamic GetCallFunc_CreateDynamicMaterialInstance_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UMaterialInstanceDynamic(ptr_addr);
	}
	float GetCallFunc_Multiply_FloatFloat_ReturnValue() {
		return memory.read<float>(m_addr + 24);
	}
	float GetCallFunc_Lerp_ReturnValue() {
		return memory.read<float>(m_addr + 28);
	}
	bool GetCallFunc_IsDedicatedServer_ReturnValue() {
		return memory.read<bool>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};