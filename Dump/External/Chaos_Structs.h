#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FRecordedTransformTrack
{
public:
	FRecordedTransformTrack(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FRecordedFrame> GetRecords() {
		return memory.read<struct TArray<struct FRecordedFrame>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FChaosSolverConfiguration
{
public:
	FChaosSolverConfiguration(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetIterations() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetCollisionPairIterations() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t GetPushOutIterations() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetCollisionPushOutPairIterations() {
		return memory.read<int32_t>(m_addr + 12);
	}
	float GetCollisionMarginFraction() {
		return memory.read<float>(m_addr + 16);
	}
	float GetCollisionMarginMax() {
		return memory.read<float>(m_addr + 20);
	}
	float GetCollisionCullDistance() {
		return memory.read<float>(m_addr + 24);
	}
	int32_t GetJointPairIterations() {
		return memory.read<int32_t>(m_addr + 28);
	}
	int32_t GetJointPushOutPairIterations() {
		return memory.read<int32_t>(m_addr + 32);
	}
	float GetClusterConnectionFactor() {
		return memory.read<float>(m_addr + 36);
	}
	enum class EClusterUnionMethod GetClusterUnionConnectionType() {
		return memory.read<enum class EClusterUnionMethod>(m_addr + 40);
	}
	bool GetbGenerateCollisionData() {
		return memory.read<bool>(m_addr + 41);
	}
	struct FSolverCollisionFilterSettings GetCollisionFilterSettings() {
		return memory.read<struct FSolverCollisionFilterSettings>(m_addr + 44);
	}
	bool GetbGenerateBreakData() {
		return memory.read<bool>(m_addr + 60);
	}
	struct FSolverBreakingFilterSettings GetBreakingFilterSettings() {
		return memory.read<struct FSolverBreakingFilterSettings>(m_addr + 64);
	}
	bool GetbGenerateTrailingData() {
		return memory.read<bool>(m_addr + 80);
	}
	struct FSolverTrailingFilterSettings GetTrailingFilterSettings() {
		return memory.read<struct FSolverTrailingFilterSettings>(m_addr + 84);
	}
	bool GetbGenerateContactGraph() {
		return memory.read<bool>(m_addr + 100);
	}

private:
	std::uint64_t m_addr = 0;
};class FSolverCollisionFilterSettings
{
public:
	FSolverCollisionFilterSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetFilterEnabled() {
		return memory.read<bool>(m_addr + 0);
	}
	float GetMinMass() {
		return memory.read<float>(m_addr + 4);
	}
	float GetMinSpeed() {
		return memory.read<float>(m_addr + 8);
	}
	float GetMinImpulse() {
		return memory.read<float>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FSolverTrailingFilterSettings
{
public:
	FSolverTrailingFilterSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetFilterEnabled() {
		return memory.read<bool>(m_addr + 0);
	}
	float GetMinMass() {
		return memory.read<float>(m_addr + 4);
	}
	float GetMinSpeed() {
		return memory.read<float>(m_addr + 8);
	}
	float GetMinVolume() {
		return memory.read<float>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FSolverBreakingFilterSettings
{
public:
	FSolverBreakingFilterSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetFilterEnabled() {
		return memory.read<bool>(m_addr + 0);
	}
	float GetMinMass() {
		return memory.read<float>(m_addr + 4);
	}
	float GetMinSpeed() {
		return memory.read<float>(m_addr + 8);
	}
	float GetMinVolume() {
		return memory.read<float>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FSolverTrailingData
{
public:
	FSolverTrailingData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetLocation() {
		return memory.read<struct FVector>(m_addr + 0);
	}
	struct FVector GetVelocity() {
		return memory.read<struct FVector>(m_addr + 12);
	}
	struct FVector GetAngularVelocity() {
		return memory.read<struct FVector>(m_addr + 24);
	}
	float GetMass() {
		return memory.read<float>(m_addr + 36);
	}
	int32_t GetParticleIndex() {
		return memory.read<int32_t>(m_addr + 40);
	}
	int32_t GetParticleIndexMesh() {
		return memory.read<int32_t>(m_addr + 44);
	}

private:
	std::uint64_t m_addr = 0;
};class FRecordedFrame
{
public:
	FRecordedFrame(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FTransform> GetTransforms() {
		return memory.read<struct TArray<struct FTransform>>(m_addr + 0);
	}
	struct TArray<int32_t> GetTransformIndices() {
		return memory.read<struct TArray<int32_t>>(m_addr + 16);
	}
	struct TArray<int32_t> GetPreviousTransformIndices() {
		return memory.read<struct TArray<int32_t>>(m_addr + 32);
	}
	struct TArray<bool> GetDisabledFlags() {
		return memory.read<struct TArray<bool>>(m_addr + 48);
	}
	struct TArray<struct FSolverCollisionData> GetCollisions() {
		return memory.read<struct TArray<struct FSolverCollisionData>>(m_addr + 64);
	}
	struct TArray<struct FSolverBreakingData> GetBreakings() {
		return memory.read<struct TArray<struct FSolverBreakingData>>(m_addr + 80);
	}
	struct TSet<struct FSolverTrailingData> GetTrailings() {
		return memory.read<struct TSet<struct FSolverTrailingData>>(m_addr + 96);
	}
	float GetTimestamp() {
		return memory.read<float>(m_addr + 176);
	}

private:
	std::uint64_t m_addr = 0;
};class FSolverBreakingData
{
public:
	FSolverBreakingData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetLocation() {
		return memory.read<struct FVector>(m_addr + 0);
	}
	struct FVector GetVelocity() {
		return memory.read<struct FVector>(m_addr + 12);
	}
	struct FVector GetAngularVelocity() {
		return memory.read<struct FVector>(m_addr + 24);
	}
	float GetMass() {
		return memory.read<float>(m_addr + 36);
	}
	int32_t GetParticleIndex() {
		return memory.read<int32_t>(m_addr + 40);
	}
	int32_t GetParticleIndexMesh() {
		return memory.read<int32_t>(m_addr + 44);
	}

private:
	std::uint64_t m_addr = 0;
};class FSolverCollisionData
{
public:
	FSolverCollisionData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetLocation() {
		return memory.read<struct FVector>(m_addr + 0);
	}
	struct FVector GetAccumulatedImpulse() {
		return memory.read<struct FVector>(m_addr + 12);
	}
	struct FVector GetNormal() {
		return memory.read<struct FVector>(m_addr + 24);
	}
	struct FVector GetVelocity1() {
		return memory.read<struct FVector>(m_addr + 36);
	}
	struct FVector GetVelocity2() {
		return memory.read<struct FVector>(m_addr + 48);
	}
	struct FVector GetAngularVelocity1() {
		return memory.read<struct FVector>(m_addr + 60);
	}
	struct FVector GetAngularVelocity2() {
		return memory.read<struct FVector>(m_addr + 72);
	}
	float GetMass1() {
		return memory.read<float>(m_addr + 84);
	}
	float GetMass2() {
		return memory.read<float>(m_addr + 88);
	}
	int32_t GetParticleIndex() {
		return memory.read<int32_t>(m_addr + 92);
	}
	int32_t GetLevelsetIndex() {
		return memory.read<int32_t>(m_addr + 96);
	}
	int32_t GetParticleIndexMesh() {
		return memory.read<int32_t>(m_addr + 100);
	}
	int32_t GetLevelsetIndexMesh() {
		return memory.read<int32_t>(m_addr + 104);
	}

private:
	std::uint64_t m_addr = 0;
};