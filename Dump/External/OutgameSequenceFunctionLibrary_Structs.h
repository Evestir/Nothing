#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FDeactivate
{
public:
	FDeactivate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject Get__WorldContext() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct TArray<struct ADirectionalLight> GetCallFunc_GetAllActorsOfClass_OutActors() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct TArray<struct ADirectionalLight>(ptr_addr);
	}
	int32_t Get___int_Array_Index_Variable() {
		return memory.read<int32_t>(m_addr + 24);
	}
	int32_t GetCallFunc_Array_Length_ReturnValue() {
		return memory.read<int32_t>(m_addr + 28);
	}
	struct ADirectionalLight GetCallFunc_Array_Get_Item() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 32);
		return struct ADirectionalLight(ptr_addr);
	}
	bool GetCallFunc_ActorHasTag_ReturnValue() {
		return memory.read<bool>(m_addr + 40);
	}
	int32_t Get___int_Loop_Counter_Variable() {
		return memory.read<int32_t>(m_addr + 44);
	}
	bool GetCallFunc_Not_PreBool_ReturnValue() {
		return memory.read<bool>(m_addr + 48);
	}
	bool GetCallFunc_Less_IntInt_ReturnValue() {
		return memory.read<bool>(m_addr + 49);
	}
	int32_t GetCallFunc_Add_IntInt_ReturnValue() {
		return memory.read<int32_t>(m_addr + 52);
	}

private:
	std::uint64_t m_addr = 0;
};class FActivatePlanarReflection
{
public:
	FActivatePlanarReflection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetPlanarReflectionTag() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct UObject Get__WorldContext() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UObject(ptr_addr);
	}
	struct TArray<struct APlanarReflection> GetCallFunc_GetAllActorsOfClass_OutActors() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct TArray<struct APlanarReflection>(ptr_addr);
	}
	int32_t Get___int_Array_Index_Variable() {
		return memory.read<int32_t>(m_addr + 32);
	}
	int32_t GetCallFunc_Array_Length_ReturnValue() {
		return memory.read<int32_t>(m_addr + 36);
	}
	struct APlanarReflection GetCallFunc_Array_Get_Item() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct APlanarReflection(ptr_addr);
	}
	int32_t Get___int_Loop_Counter_Variable() {
		return memory.read<int32_t>(m_addr + 48);
	}
	bool GetCallFunc_ComponentHasTag_ReturnValue() {
		return memory.read<bool>(m_addr + 52);
	}
	bool GetCallFunc_Not_PreBool_ReturnValue() {
		return memory.read<bool>(m_addr + 53);
	}
	bool GetCallFunc_Less_IntInt_ReturnValue() {
		return memory.read<bool>(m_addr + 54);
	}
	int32_t GetCallFunc_Add_IntInt_ReturnValue() {
		return memory.read<int32_t>(m_addr + 56);
	}
	bool GetCallFunc_GetConsoleVariableBoolValue_ReturnValue() {
		return memory.read<bool>(m_addr + 60);
	}

private:
	std::uint64_t m_addr = 0;
};class FDeactivatePlanarReflection
{
public:
	FDeactivatePlanarReflection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject Get__WorldContext() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct TArray<struct APlanarReflection> GetCallFunc_GetAllActorsOfClass_OutActors() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct TArray<struct APlanarReflection>(ptr_addr);
	}
	int32_t Get___int_Array_Index_Variable() {
		return memory.read<int32_t>(m_addr + 24);
	}
	int32_t GetCallFunc_Array_Length_ReturnValue() {
		return memory.read<int32_t>(m_addr + 28);
	}
	struct APlanarReflection GetCallFunc_Array_Get_Item() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 32);
		return struct APlanarReflection(ptr_addr);
	}
	int32_t Get___int_Loop_Counter_Variable() {
		return memory.read<int32_t>(m_addr + 40);
	}
	bool GetCallFunc_GetConsoleVariableBoolValue_ReturnValue() {
		return memory.read<bool>(m_addr + 44);
	}
	bool GetCallFunc_Less_IntInt_ReturnValue() {
		return memory.read<bool>(m_addr + 45);
	}
	int32_t GetCallFunc_Add_IntInt_ReturnValue() {
		return memory.read<int32_t>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FPlay
{
public:
	FPlay(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EOutGamePawnType GetPawnType() {
		return memory.read<enum class EOutGamePawnType>(m_addr + 0);
	}
	bool GetbOn() {
		return memory.read<bool>(m_addr + 1);
	}
	struct UObject Get__WorldContext() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UObject(ptr_addr);
	}
	struct APlayerController GetCallFunc_GetPlayerController_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct APlayerController(ptr_addr);
	}
	struct UPawnManageComponent GetCallFunc_GetComponentByClass_ReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct UPawnManageComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FActivate
{
public:
	FActivate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject Get__WorldContext() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct TArray<struct ADirectionalLight> GetCallFunc_GetAllActorsOfClass_OutActors() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct TArray<struct ADirectionalLight>(ptr_addr);
	}
	int32_t Get___int_Array_Index_Variable() {
		return memory.read<int32_t>(m_addr + 24);
	}
	int32_t GetCallFunc_Array_Length_ReturnValue() {
		return memory.read<int32_t>(m_addr + 28);
	}
	struct ADirectionalLight GetCallFunc_Array_Get_Item() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 32);
		return struct ADirectionalLight(ptr_addr);
	}
	bool GetCallFunc_ActorHasTag_ReturnValue() {
		return memory.read<bool>(m_addr + 40);
	}
	int32_t Get___int_Loop_Counter_Variable() {
		return memory.read<int32_t>(m_addr + 44);
	}
	bool GetCallFunc_Less_IntInt_ReturnValue() {
		return memory.read<bool>(m_addr + 48);
	}
	int32_t GetCallFunc_Add_IntInt_ReturnValue() {
		return memory.read<int32_t>(m_addr + 52);
	}

private:
	std::uint64_t m_addr = 0;
};