#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FUserConstructionScript
{
public:
	FUserConstructionScript(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetK2Node_SwitchEnum_CmpSuccess() {
		return memory.read<bool>(m_addr + 0);
	}
	struct UMaterialInstanceDynamic GetCallFunc_CreateDynamicMaterialInstance_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UMaterialInstanceDynamic(ptr_addr);
	}
	struct UMaterialInstanceDynamic GetCallFunc_CreateDynamicMaterialInstance_ReturnValue_2() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UMaterialInstanceDynamic(ptr_addr);
	}
	float GetCallFunc_RandomFloatInRange_ReturnValue() {
		return memory.read<float>(m_addr + 24);
	}
	float GetCallFunc_RandomFloatInRange_ReturnValue_2() {
		return memory.read<float>(m_addr + 28);
	}
	struct UMaterialInstanceDynamic GetCallFunc_CreateDynamicMaterialInstance_ReturnValue_3() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 32);
		return struct UMaterialInstanceDynamic(ptr_addr);
	}
	bool GetCallFunc_IsDedicatedServer_ReturnValue() {
		return memory.read<bool>(m_addr + 40);
	}
	bool GetK2Node_SwitchInteger_CmpSuccess() {
		return memory.read<bool>(m_addr + 41);
	}
	struct UMaterialInstanceDynamic GetCallFunc_CreateDynamicMaterialInstance_ReturnValue_4() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UMaterialInstanceDynamic(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FExecuteUbergraph_BP_BillboardLightShift_02
{
public:
	FExecuteUbergraph_BP_BillboardLightShift_02(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetEntryPoint() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};