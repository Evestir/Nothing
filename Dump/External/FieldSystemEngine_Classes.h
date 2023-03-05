#pragma once 
#include <FieldSystemEngine_Structs.h>
 
 
 
class UFieldSystemMetaDataIteration
{
public:
	UFieldSystemMetaDataIteration(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetIterations() {
		return memory.read<int32_t>(m_addr + 176);
	}

private:
	std::uint64_t m_addr = 0;
};


class AFieldSystemActor
{
public:
	AFieldSystemActor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UFieldSystemComponent GetFieldSystemComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 544);
		return struct UFieldSystemComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UFieldSystem
{
public:
	UFieldSystem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UFieldSystemComponent
{
public:
	UFieldSystemComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UFieldSystem GetFieldSystem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1136);
		return struct UFieldSystem(ptr_addr);
	}
	bool GetbIsWorldField() {
		return memory.read<bool>(m_addr + 1144);
	}
	bool GetbIsChaosField() {
		return memory.read<bool>(m_addr + 1145);
	}
	struct TArray<struct TSoftObjectPtr<AChaosSolverActor>> GetSupportedSolvers() {
		return memory.read<struct TArray<struct TSoftObjectPtr<AChaosSolverActor>>>(m_addr + 1152);
	}
	struct FFieldObjectCommands GetConstructionCommands() {
		return memory.read<struct FFieldObjectCommands>(m_addr + 1168);
	}
	struct FFieldObjectCommands GetBufferCommands() {
		return memory.read<struct FFieldObjectCommands>(m_addr + 1216);
	}

private:
	std::uint64_t m_addr = 0;
};


class UFieldSystemMetaData
{
public:
	UFieldSystemMetaData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UFieldSystemMetaDataProcessingResolution
{
public:
	UFieldSystemMetaDataProcessingResolution(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EFieldResolutionType GetResolutionType() {
		return memory.read<enum class EFieldResolutionType>(m_addr + 176);
	}

private:
	std::uint64_t m_addr = 0;
};


class UFieldSystemMetaDataFilter
{
public:
	UFieldSystemMetaDataFilter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EFieldFilterType GetFilterType() {
		return memory.read<enum class EFieldFilterType>(m_addr + 176);
	}

private:
	std::uint64_t m_addr = 0;
};


class UFieldNodeBase
{
public:
	UFieldNodeBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UUniformVector
{
public:
	UUniformVector(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetMagnitude() {
		return memory.read<float>(m_addr + 176);
	}
	struct FVector GetDirection() {
		return memory.read<struct FVector>(m_addr + 180);
	}

private:
	std::uint64_t m_addr = 0;
};


class UFieldNodeInt
{
public:
	UFieldNodeInt(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UFieldNodeFloat
{
public:
	UFieldNodeFloat(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UFieldNodeVector
{
public:
	UFieldNodeVector(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UUniformInteger
{
public:
	UUniformInteger(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetMagnitude() {
		return memory.read<int32_t>(m_addr + 176);
	}

private:
	std::uint64_t m_addr = 0;
};


class URadialIntMask
{
public:
	URadialIntMask(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetRadius() {
		return memory.read<float>(m_addr + 176);
	}
	struct FVector Getposition() {
		return memory.read<struct FVector>(m_addr + 180);
	}
	int32_t GetInteriorValue() {
		return memory.read<int32_t>(m_addr + 192);
	}
	int32_t GetExteriorValue() {
		return memory.read<int32_t>(m_addr + 196);
	}
	enum class ESetMaskConditionType GetSetMaskCondition() {
		return memory.read<enum class ESetMaskConditionType>(m_addr + 200);
	}

private:
	std::uint64_t m_addr = 0;
};


class UUniformScalar
{
public:
	UUniformScalar(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetMagnitude() {
		return memory.read<float>(m_addr + 176);
	}

private:
	std::uint64_t m_addr = 0;
};


class UWaveScalar
{
public:
	UWaveScalar(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetMagnitude() {
		return memory.read<float>(m_addr + 176);
	}
	struct FVector Getposition() {
		return memory.read<struct FVector>(m_addr + 180);
	}
	float GetWavelength() {
		return memory.read<float>(m_addr + 192);
	}
	float GetPeriod() {
		return memory.read<float>(m_addr + 196);
	}
	enum class EWaveFunctionType GetFunction() {
		return memory.read<enum class EWaveFunctionType>(m_addr + 200);
	}
	enum class EFieldFalloffType GetFalloff() {
		return memory.read<enum class EFieldFalloffType>(m_addr + 201);
	}

private:
	std::uint64_t m_addr = 0;
};


class URadialFalloff
{
public:
	URadialFalloff(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetMagnitude() {
		return memory.read<float>(m_addr + 176);
	}
	float GetMinRange() {
		return memory.read<float>(m_addr + 180);
	}
	float GetMaxRange() {
		return memory.read<float>(m_addr + 184);
	}
	float GetDefault() {
		return memory.read<float>(m_addr + 188);
	}
	float GetRadius() {
		return memory.read<float>(m_addr + 192);
	}
	struct FVector Getposition() {
		return memory.read<struct FVector>(m_addr + 196);
	}
	enum class EFieldFalloffType GetFalloff() {
		return memory.read<enum class EFieldFalloffType>(m_addr + 208);
	}

private:
	std::uint64_t m_addr = 0;
};


class UPlaneFalloff
{
public:
	UPlaneFalloff(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetMagnitude() {
		return memory.read<float>(m_addr + 176);
	}
	float GetMinRange() {
		return memory.read<float>(m_addr + 180);
	}
	float GetMaxRange() {
		return memory.read<float>(m_addr + 184);
	}
	float GetDefault() {
		return memory.read<float>(m_addr + 188);
	}
	float GetDistance() {
		return memory.read<float>(m_addr + 192);
	}
	struct FVector Getposition() {
		return memory.read<struct FVector>(m_addr + 196);
	}
	struct FVector GetNormal() {
		return memory.read<struct FVector>(m_addr + 208);
	}
	enum class EFieldFalloffType GetFalloff() {
		return memory.read<enum class EFieldFalloffType>(m_addr + 220);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBoxFalloff
{
public:
	UBoxFalloff(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetMagnitude() {
		return memory.read<float>(m_addr + 176);
	}
	float GetMinRange() {
		return memory.read<float>(m_addr + 180);
	}
	float GetMaxRange() {
		return memory.read<float>(m_addr + 184);
	}
	float GetDefault() {
		return memory.read<float>(m_addr + 188);
	}
	struct FTransform GetTransform() {
		return memory.read<struct FTransform>(m_addr + 192);
	}
	enum class EFieldFalloffType GetFalloff() {
		return memory.read<enum class EFieldFalloffType>(m_addr + 240);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNoiseField
{
public:
	UNoiseField(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetMinRange() {
		return memory.read<float>(m_addr + 176);
	}
	float GetMaxRange() {
		return memory.read<float>(m_addr + 180);
	}
	struct FTransform GetTransform() {
		return memory.read<struct FTransform>(m_addr + 192);
	}

private:
	std::uint64_t m_addr = 0;
};


class URadialVector
{
public:
	URadialVector(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetMagnitude() {
		return memory.read<float>(m_addr + 176);
	}
	struct FVector Getposition() {
		return memory.read<struct FVector>(m_addr + 180);
	}

private:
	std::uint64_t m_addr = 0;
};


class URandomVector
{
public:
	URandomVector(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetMagnitude() {
		return memory.read<float>(m_addr + 176);
	}

private:
	std::uint64_t m_addr = 0;
};


class UOperatorField
{
public:
	UOperatorField(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetMagnitude() {
		return memory.read<float>(m_addr + 176);
	}
	struct UFieldNodeBase GetRightField() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 184);
		return struct UFieldNodeBase(ptr_addr);
	}
	struct UFieldNodeBase GetLeftField() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 192);
		return struct UFieldNodeBase(ptr_addr);
	}
	enum class EFieldOperationType GetOperation() {
		return memory.read<enum class EFieldOperationType>(m_addr + 200);
	}

private:
	std::uint64_t m_addr = 0;
};


class UToIntegerField
{
public:
	UToIntegerField(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UFieldNodeFloat GetFloatField() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 176);
		return struct UFieldNodeFloat(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UToFloatField
{
public:
	UToFloatField(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UFieldNodeInt GetIntField() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 176);
		return struct UFieldNodeInt(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UCullingField
{
public:
	UCullingField(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UFieldNodeBase GetCulling() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 176);
		return struct UFieldNodeBase(ptr_addr);
	}
	struct UFieldNodeBase GetField() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 184);
		return struct UFieldNodeBase(ptr_addr);
	}
	enum class EFieldCullingOperationType GetOperation() {
		return memory.read<enum class EFieldCullingOperationType>(m_addr + 192);
	}

private:
	std::uint64_t m_addr = 0;
};


class UReturnResultsTerminal
{
public:
	UReturnResultsTerminal(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


