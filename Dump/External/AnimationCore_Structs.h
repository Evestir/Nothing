#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FCCDIKChainLink
{
public:
	FCCDIKChainLink(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FAimConstraintDescription
{
public:
	FAimConstraintDescription(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAxis GetLookAt_Axis() {
		return memory.read<struct FAxis>(m_addr + 16);
	}
	struct FAxis GetLookUp_Axis() {
		return memory.read<struct FAxis>(m_addr + 32);
	}
	bool GetbUseLookUp() {
		return memory.read<bool>(m_addr + 48);
	}
	struct FVector GetLookUpTarget() {
		return memory.read<struct FVector>(m_addr + 52);
	}

private:
	std::uint64_t m_addr = 0;
};class FAxis
{
public:
	FAxis(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetAxis() {
		return memory.read<struct FVector>(m_addr + 0);
	}
	bool GetbInLocalSpace() {
		return memory.read<bool>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FConstraintData
{
public:
	FConstraintData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FConstraintDescriptor GetConstraint() {
		return memory.read<struct FConstraintDescriptor>(m_addr + 0);
	}
	float Getweight() {
		return memory.read<float>(m_addr + 16);
	}
	bool GetbMaintainOffset() {
		return memory.read<bool>(m_addr + 20);
	}
	struct FTransform GetOffset() {
		return memory.read<struct FTransform>(m_addr + 32);
	}
	struct FTransform GetCurrentTransform() {
		return memory.read<struct FTransform>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};class FTransformConstraintDescription
{
public:
	FTransformConstraintDescription(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ETransformConstraintType GetTransformType() {
		return memory.read<enum class ETransformConstraintType>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FConstraintDescriptor
{
public:
	FConstraintDescriptor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EConstraintType GetType() {
		return memory.read<enum class EConstraintType>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FConstraintDescriptionEx
{
public:
	FConstraintDescriptionEx(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FFilterOptionPerAxis GetAxesFilterOption() {
		return memory.read<struct FFilterOptionPerAxis>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FFilterOptionPerAxis
{
public:
	FFilterOptionPerAxis(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbX() {
		return memory.read<bool>(m_addr + 0);
	}
	bool GetbY() {
		return memory.read<bool>(m_addr + 1);
	}
	bool GetbZ() {
		return memory.read<bool>(m_addr + 2);
	}

private:
	std::uint64_t m_addr = 0;
};class FTransformConstraint
{
public:
	FTransformConstraint(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FConstraintDescription GetOperator() {
		return memory.read<struct FConstraintDescription>(m_addr + 0);
	}
	struct FName GetSourceNode() {
		return memory.read<struct FName>(m_addr + 16);
	}
	struct FName GetTargetNode() {
		return memory.read<struct FName>(m_addr + 24);
	}
	float Getweight() {
		return memory.read<float>(m_addr + 32);
	}
	bool GetbMaintainOffset() {
		return memory.read<bool>(m_addr + 36);
	}

private:
	std::uint64_t m_addr = 0;
};class FConstraintDescription
{
public:
	FConstraintDescription(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbTranslation() {
		return memory.read<bool>(m_addr + 0);
	}
	bool GetbRotation() {
		return memory.read<bool>(m_addr + 1);
	}
	bool GetbScale() {
		return memory.read<bool>(m_addr + 2);
	}
	bool GetbParent() {
		return memory.read<bool>(m_addr + 3);
	}
	struct FFilterOptionPerAxis GetTranslationAxes() {
		return memory.read<struct FFilterOptionPerAxis>(m_addr + 4);
	}
	struct FFilterOptionPerAxis GetRotationAxes() {
		return memory.read<struct FFilterOptionPerAxis>(m_addr + 7);
	}
	struct FFilterOptionPerAxis GetScaleAxes() {
		return memory.read<struct FFilterOptionPerAxis>(m_addr + 10);
	}

private:
	std::uint64_t m_addr = 0;
};class FConstraintOffset
{
public:
	FConstraintOffset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetTranslation() {
		return memory.read<struct FVector>(m_addr + 0);
	}
	struct FQuat GetRotation() {
		return memory.read<struct FQuat>(m_addr + 16);
	}
	struct FVector GetScale() {
		return memory.read<struct FVector>(m_addr + 32);
	}
	struct FTransform GetParent() {
		return memory.read<struct FTransform>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FTransformFilter
{
public:
	FTransformFilter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FFilterOptionPerAxis GetTranslationFilter() {
		return memory.read<struct FFilterOptionPerAxis>(m_addr + 0);
	}
	struct FFilterOptionPerAxis GetRotationFilter() {
		return memory.read<struct FFilterOptionPerAxis>(m_addr + 3);
	}
	struct FFilterOptionPerAxis GetScaleFilter() {
		return memory.read<struct FFilterOptionPerAxis>(m_addr + 6);
	}

private:
	std::uint64_t m_addr = 0;
};class FEulerTransform
{
public:
	FEulerTransform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetLocation() {
		return memory.read<struct FVector>(m_addr + 0);
	}
	struct FRotator GetRotation() {
		return memory.read<struct FRotator>(m_addr + 12);
	}
	struct FVector GetScale() {
		return memory.read<struct FVector>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FFABRIKChainLink
{
public:
	FFABRIKChainLink(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FNodeChain
{
public:
	FNodeChain(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FName> Getnodes() {
		return memory.read<struct TArray<struct FName>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FNodeHierarchyWithUserData
{
public:
	FNodeHierarchyWithUserData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FNodeHierarchyData GetHierarchy() {
		return memory.read<struct FNodeHierarchyData>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FNodeHierarchyData
{
public:
	FNodeHierarchyData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FNodeObject> Getnodes() {
		return memory.read<struct TArray<struct FNodeObject>>(m_addr + 0);
	}
	struct TArray<struct FTransform> GetTransforms() {
		return memory.read<struct TArray<struct FTransform>>(m_addr + 16);
	}
	struct TMap<struct FName, int32_t> GetNodeNameToIndexMapping() {
		return memory.read<struct TMap<struct FName, int32_t>>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FNodeObject
{
public:
	FNodeObject(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FName GetParentName() {
		return memory.read<struct FName>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FTransformNoScale
{
public:
	FTransformNoScale(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetLocation() {
		return memory.read<struct FVector>(m_addr + 0);
	}
	struct FQuat GetRotation() {
		return memory.read<struct FQuat>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};