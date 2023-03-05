#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FPointWeightMap
{
public:
	FPointWeightMap(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<float> GetValues() {
		return memory.read<struct TArray<float>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FClothConfig_Legacy
{
public:
	FClothConfig_Legacy(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EClothingWindMethod_Legacy GetWindMethod() {
		return memory.read<enum class EClothingWindMethod_Legacy>(m_addr + 0);
	}
	struct FClothConstraintSetup_Legacy GetVerticalConstraintConfig() {
		return memory.read<struct FClothConstraintSetup_Legacy>(m_addr + 4);
	}
	struct FClothConstraintSetup_Legacy GetHorizontalConstraintConfig() {
		return memory.read<struct FClothConstraintSetup_Legacy>(m_addr + 20);
	}
	struct FClothConstraintSetup_Legacy GetBendConstraintConfig() {
		return memory.read<struct FClothConstraintSetup_Legacy>(m_addr + 36);
	}
	struct FClothConstraintSetup_Legacy GetShearConstraintConfig() {
		return memory.read<struct FClothConstraintSetup_Legacy>(m_addr + 52);
	}
	float GetSelfCollisionRadius() {
		return memory.read<float>(m_addr + 68);
	}
	float GetSelfCollisionStiffness() {
		return memory.read<float>(m_addr + 72);
	}
	float GetSelfCollisionCullScale() {
		return memory.read<float>(m_addr + 76);
	}
	struct FVector GetDamping() {
		return memory.read<struct FVector>(m_addr + 80);
	}
	float GetFriction() {
		return memory.read<float>(m_addr + 92);
	}
	float GetWindDragCoefficient() {
		return memory.read<float>(m_addr + 96);
	}
	float GetWindLiftCoefficient() {
		return memory.read<float>(m_addr + 100);
	}
	struct FVector GetLinearDrag() {
		return memory.read<struct FVector>(m_addr + 104);
	}
	struct FVector GetAngularDrag() {
		return memory.read<struct FVector>(m_addr + 116);
	}
	struct FVector GetLinearInertiaScale() {
		return memory.read<struct FVector>(m_addr + 128);
	}
	struct FVector GetAngularInertiaScale() {
		return memory.read<struct FVector>(m_addr + 140);
	}
	struct FVector GetCentrifugalInertiaScale() {
		return memory.read<struct FVector>(m_addr + 152);
	}
	float GetSolverFrequency() {
		return memory.read<float>(m_addr + 164);
	}
	float GetStiffnessFrequency() {
		return memory.read<float>(m_addr + 168);
	}
	float GetGravityScale() {
		return memory.read<float>(m_addr + 172);
	}
	struct FVector GetGravityOverride() {
		return memory.read<struct FVector>(m_addr + 176);
	}
	bool GetbUseGravityOverride() {
		return memory.read<bool>(m_addr + 188);
	}
	float GetTetherStiffness() {
		return memory.read<float>(m_addr + 192);
	}
	float GetTetherLimit() {
		return memory.read<float>(m_addr + 196);
	}
	float GetCollisionThickness() {
		return memory.read<float>(m_addr + 200);
	}
	float GetAnimDriveSpringStiffness() {
		return memory.read<float>(m_addr + 204);
	}
	float GetAnimDriveDamperStiffness() {
		return memory.read<float>(m_addr + 208);
	}

private:
	std::uint64_t m_addr = 0;
};class FClothConstraintSetup_Legacy
{
public:
	FClothConstraintSetup_Legacy(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetStiffness() {
		return memory.read<float>(m_addr + 0);
	}
	float GetStiffnessMultiplier() {
		return memory.read<float>(m_addr + 4);
	}
	float GetStretchLimit() {
		return memory.read<float>(m_addr + 8);
	}
	float GetCompressionLimit() {
		return memory.read<float>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FClothPhysicalMeshData
{
public:
	FClothPhysicalMeshData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FVector> GetVertices() {
		return memory.read<struct TArray<struct FVector>>(m_addr + 0);
	}
	struct TArray<struct FVector> GetNormals() {
		return memory.read<struct TArray<struct FVector>>(m_addr + 16);
	}
	struct TArray<uint32_t> GetIndices() {
		return memory.read<struct TArray<uint32_t>>(m_addr + 32);
	}
	struct TMap<uint32_t, struct FPointWeightMap> GetWeightMaps() {
		return memory.read<struct TMap<uint32_t, struct FPointWeightMap>>(m_addr + 48);
	}
	struct TArray<float> GetInverseMasses() {
		return memory.read<struct TArray<float>>(m_addr + 128);
	}
	struct TArray<struct FClothVertBoneData> GetBoneData() {
		return memory.read<struct TArray<struct FClothVertBoneData>>(m_addr + 144);
	}
	int32_t GetMaxBoneWeights() {
		return memory.read<int32_t>(m_addr + 160);
	}
	int32_t GetNumFixedVerts() {
		return memory.read<int32_t>(m_addr + 164);
	}
	struct TArray<uint32_t> GetSelfCollisionIndices() {
		return memory.read<struct TArray<uint32_t>>(m_addr + 168);
	}
	struct TArray<float> GetMaxDistances() {
		return memory.read<struct TArray<float>>(m_addr + 184);
	}
	struct TArray<float> GetBackstopDistances() {
		return memory.read<struct TArray<float>>(m_addr + 200);
	}
	struct TArray<float> GetBackstopRadiuses() {
		return memory.read<struct TArray<float>>(m_addr + 216);
	}
	struct TArray<float> GetAnimDriveMultipliers() {
		return memory.read<struct TArray<float>>(m_addr + 232);
	}

private:
	std::uint64_t m_addr = 0;
};class FClothLODDataCommon
{
public:
	FClothLODDataCommon(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FClothPhysicalMeshData GetPhysicalMeshData() {
		return memory.read<struct FClothPhysicalMeshData>(m_addr + 0);
	}
	struct FClothCollisionData GetCollisionData() {
		return memory.read<struct FClothCollisionData>(m_addr + 248);
	}
	bool GetbUseMultipleInfluences() {
		return memory.read<bool>(m_addr + 312);
	}
	float GetSkinningKernelRadius() {
		return memory.read<float>(m_addr + 316);
	}

private:
	std::uint64_t m_addr = 0;
};class FClothParameterMask_Legacy
{
public:
	FClothParameterMask_Legacy(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetMaskName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	enum class EWeightMapTargetCommon GetCurrentTarget() {
		return memory.read<enum class EWeightMapTargetCommon>(m_addr + 8);
	}
	float GetMaxValue() {
		return memory.read<float>(m_addr + 12);
	}
	float GetMinValue() {
		return memory.read<float>(m_addr + 16);
	}
	struct TArray<float> GetValues() {
		return memory.read<struct TArray<float>>(m_addr + 24);
	}
	bool GetbEnabled() {
		return memory.read<bool>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};