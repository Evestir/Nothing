#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FFieldObjectCommands
{
public:
	FFieldObjectCommands(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FName> GetTargetNames() {
		return memory.read<struct TArray<struct FName>>(m_addr + 0);
	}
	struct TArray<struct UFieldNodeBase> GetRootNodes() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct TArray<struct UFieldNodeBase>(ptr_addr);
	}
	struct TArray<struct UFieldSystemMetaData> GetMetaDatas() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 32);
		return struct TArray<struct UFieldSystemMetaData>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetNoiseField
{
public:
	FSetNoiseField(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetMinRange() {
		return memory.read<float>(m_addr + 0);
	}
	float GetMaxRange() {
		return memory.read<float>(m_addr + 4);
	}
	struct FTransform GetTransform() {
		return memory.read<struct FTransform>(m_addr + 16);
	}
	struct UNoiseField GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 64);
		return struct UNoiseField(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddFieldCommand
{
public:
	FAddFieldCommand(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetEnabled() {
		return memory.read<bool>(m_addr + 0);
	}
	enum class EFieldPhysicsType GetTarget() {
		return memory.read<enum class EFieldPhysicsType>(m_addr + 1);
	}
	struct UFieldSystemMetaData GetMetaData() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UFieldSystemMetaData(ptr_addr);
	}
	struct UFieldNodeBase GetField() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UFieldNodeBase(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FApplyStayDynamicField
{
public:
	FApplyStayDynamicField(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetEnabled() {
		return memory.read<bool>(m_addr + 0);
	}
	struct FVector Getposition() {
		return memory.read<struct FVector>(m_addr + 4);
	}
	float GetRadius() {
		return memory.read<float>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FApplyRadialForce
{
public:
	FApplyRadialForce(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetEnabled() {
		return memory.read<bool>(m_addr + 0);
	}
	struct FVector Getposition() {
		return memory.read<struct FVector>(m_addr + 4);
	}
	float GetMagnitude() {
		return memory.read<float>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddPersistentField
{
public:
	FAddPersistentField(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetEnabled() {
		return memory.read<bool>(m_addr + 0);
	}
	enum class EFieldPhysicsType GetTarget() {
		return memory.read<enum class EFieldPhysicsType>(m_addr + 1);
	}
	struct UFieldSystemMetaData GetMetaData() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UFieldSystemMetaData(ptr_addr);
	}
	struct UFieldNodeBase GetField() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UFieldNodeBase(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetReturnResultsTerminal
{
public:
	FSetReturnResultsTerminal(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UReturnResultsTerminal GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UReturnResultsTerminal(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetUniformScalar
{
public:
	FSetUniformScalar(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetMagnitude() {
		return memory.read<float>(m_addr + 0);
	}
	struct UUniformScalar GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UUniformScalar(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FApplyLinearForce
{
public:
	FApplyLinearForce(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetEnabled() {
		return memory.read<bool>(m_addr + 0);
	}
	struct FVector GetDirection() {
		return memory.read<struct FVector>(m_addr + 4);
	}
	float GetMagnitude() {
		return memory.read<float>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FApplyPhysicsField
{
public:
	FApplyPhysicsField(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetEnabled() {
		return memory.read<bool>(m_addr + 0);
	}
	enum class EFieldPhysicsType GetTarget() {
		return memory.read<enum class EFieldPhysicsType>(m_addr + 1);
	}
	struct UFieldSystemMetaData GetMetaData() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UFieldSystemMetaData(ptr_addr);
	}
	struct UFieldNodeBase GetField() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UFieldNodeBase(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FApplyRadialVectorFalloffForce
{
public:
	FApplyRadialVectorFalloffForce(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetEnabled() {
		return memory.read<bool>(m_addr + 0);
	}
	struct FVector Getposition() {
		return memory.read<struct FVector>(m_addr + 4);
	}
	float GetRadius() {
		return memory.read<float>(m_addr + 16);
	}
	float GetMagnitude() {
		return memory.read<float>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetRadialFalloff
{
public:
	FSetRadialFalloff(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetMagnitude() {
		return memory.read<float>(m_addr + 0);
	}
	float GetMinRange() {
		return memory.read<float>(m_addr + 4);
	}
	float GetMaxRange() {
		return memory.read<float>(m_addr + 8);
	}
	float GetDefault() {
		return memory.read<float>(m_addr + 12);
	}
	float GetRadius() {
		return memory.read<float>(m_addr + 16);
	}
	struct FVector Getposition() {
		return memory.read<struct FVector>(m_addr + 20);
	}
	enum class EFieldFalloffType GetFalloff() {
		return memory.read<enum class EFieldFalloffType>(m_addr + 32);
	}
	struct URadialFalloff GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct URadialFalloff(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FApplyStrainField
{
public:
	FApplyStrainField(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetEnabled() {
		return memory.read<bool>(m_addr + 0);
	}
	struct FVector Getposition() {
		return memory.read<struct FVector>(m_addr + 4);
	}
	float GetRadius() {
		return memory.read<float>(m_addr + 16);
	}
	float GetMagnitude() {
		return memory.read<float>(m_addr + 20);
	}
	int32_t GetIterations() {
		return memory.read<int32_t>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FApplyUniformVectorFalloffForce
{
public:
	FApplyUniformVectorFalloffForce(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetEnabled() {
		return memory.read<bool>(m_addr + 0);
	}
	struct FVector Getposition() {
		return memory.read<struct FVector>(m_addr + 4);
	}
	struct FVector GetDirection() {
		return memory.read<struct FVector>(m_addr + 16);
	}
	float GetRadius() {
		return memory.read<float>(m_addr + 28);
	}
	float GetMagnitude() {
		return memory.read<float>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetMetaDataIteration
{
public:
	FSetMetaDataIteration(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetIterations() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct UFieldSystemMetaDataIteration GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UFieldSystemMetaDataIteration(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetMetaDataaProcessingResolutionType
{
public:
	FSetMetaDataaProcessingResolutionType(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EFieldResolutionType GetResolutionType() {
		return memory.read<enum class EFieldResolutionType>(m_addr + 0);
	}
	struct UFieldSystemMetaDataProcessingResolution GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UFieldSystemMetaDataProcessingResolution(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetMetaDataFilterType
{
public:
	FSetMetaDataFilterType(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EFieldFilterType GetFilterType() {
		return memory.read<enum class EFieldFilterType>(m_addr + 0);
	}
	struct UFieldSystemMetaDataFilter GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UFieldSystemMetaDataFilter(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetUniformInteger
{
public:
	FSetUniformInteger(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetMagnitude() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct UUniformInteger GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UUniformInteger(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetOperatorField
{
public:
	FSetOperatorField(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetMagnitude() {
		return memory.read<float>(m_addr + 0);
	}
	struct UFieldNodeBase GetLeftField() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UFieldNodeBase(ptr_addr);
	}
	struct UFieldNodeBase GetRightField() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UFieldNodeBase(ptr_addr);
	}
	enum class EFieldOperationType GetOperation() {
		return memory.read<enum class EFieldOperationType>(m_addr + 24);
	}
	struct UOperatorField GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 32);
		return struct UOperatorField(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetRadialIntMask
{
public:
	FSetRadialIntMask(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetRadius() {
		return memory.read<float>(m_addr + 0);
	}
	struct FVector Getposition() {
		return memory.read<struct FVector>(m_addr + 4);
	}
	int32_t GetInteriorValue() {
		return memory.read<int32_t>(m_addr + 16);
	}
	int32_t GetExteriorValue() {
		return memory.read<int32_t>(m_addr + 20);
	}
	enum class ESetMaskConditionType GetSetMaskConditionIn() {
		return memory.read<enum class ESetMaskConditionType>(m_addr + 24);
	}
	struct URadialIntMask GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 32);
		return struct URadialIntMask(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetBoxFalloff
{
public:
	FSetBoxFalloff(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetMagnitude() {
		return memory.read<float>(m_addr + 0);
	}
	float GetMinRange() {
		return memory.read<float>(m_addr + 4);
	}
	float GetMaxRange() {
		return memory.read<float>(m_addr + 8);
	}
	float GetDefault() {
		return memory.read<float>(m_addr + 12);
	}
	struct FTransform GetTransform() {
		return memory.read<struct FTransform>(m_addr + 16);
	}
	enum class EFieldFalloffType GetFalloff() {
		return memory.read<enum class EFieldFalloffType>(m_addr + 64);
	}
	struct UBoxFalloff GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 72);
		return struct UBoxFalloff(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetWaveScalar
{
public:
	FSetWaveScalar(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetMagnitude() {
		return memory.read<float>(m_addr + 0);
	}
	struct FVector Getposition() {
		return memory.read<struct FVector>(m_addr + 4);
	}
	float GetWavelength() {
		return memory.read<float>(m_addr + 16);
	}
	float GetPeriod() {
		return memory.read<float>(m_addr + 20);
	}
	float GetTime() {
		return memory.read<float>(m_addr + 24);
	}
	enum class EWaveFunctionType GetFunction() {
		return memory.read<enum class EWaveFunctionType>(m_addr + 28);
	}
	enum class EFieldFalloffType GetFalloff() {
		return memory.read<enum class EFieldFalloffType>(m_addr + 29);
	}
	struct UWaveScalar GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 32);
		return struct UWaveScalar(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetRadialVector
{
public:
	FSetRadialVector(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetMagnitude() {
		return memory.read<float>(m_addr + 0);
	}
	struct FVector Getposition() {
		return memory.read<struct FVector>(m_addr + 4);
	}
	struct URadialVector GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct URadialVector(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetPlaneFalloff
{
public:
	FSetPlaneFalloff(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetMagnitude() {
		return memory.read<float>(m_addr + 0);
	}
	float GetMinRange() {
		return memory.read<float>(m_addr + 4);
	}
	float GetMaxRange() {
		return memory.read<float>(m_addr + 8);
	}
	float GetDefault() {
		return memory.read<float>(m_addr + 12);
	}
	float GetDistance() {
		return memory.read<float>(m_addr + 16);
	}
	struct FVector Getposition() {
		return memory.read<struct FVector>(m_addr + 20);
	}
	struct FVector GetNormal() {
		return memory.read<struct FVector>(m_addr + 32);
	}
	enum class EFieldFalloffType GetFalloff() {
		return memory.read<enum class EFieldFalloffType>(m_addr + 44);
	}
	struct UPlaneFalloff GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UPlaneFalloff(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetUniformVector
{
public:
	FSetUniformVector(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetMagnitude() {
		return memory.read<float>(m_addr + 0);
	}
	struct FVector GetDirection() {
		return memory.read<struct FVector>(m_addr + 4);
	}
	struct UUniformVector GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UUniformVector(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetRandomVector
{
public:
	FSetRandomVector(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetMagnitude() {
		return memory.read<float>(m_addr + 0);
	}
	struct URandomVector GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct URandomVector(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetToIntegerField
{
public:
	FSetToIntegerField(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UFieldNodeFloat GetFloatField() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UFieldNodeFloat(ptr_addr);
	}
	struct UToIntegerField GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UToIntegerField(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetToFloatField
{
public:
	FSetToFloatField(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UFieldNodeInt GetIntegerField() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UFieldNodeInt(ptr_addr);
	}
	struct UToFloatField GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UToFloatField(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetCullingField
{
public:
	FSetCullingField(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UFieldNodeBase GetCulling() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UFieldNodeBase(ptr_addr);
	}
	struct UFieldNodeBase GetField() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UFieldNodeBase(ptr_addr);
	}
	enum class EFieldCullingOperationType GetOperation() {
		return memory.read<enum class EFieldCullingOperationType>(m_addr + 16);
	}
	struct UCullingField GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct UCullingField(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};