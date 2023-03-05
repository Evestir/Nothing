#pragma once 
#include <PhysicsCore_Structs.h>
 
 
 
class UChaosPhysicalMaterial
{
public:
	UChaosPhysicalMaterial(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetFriction() {
		return memory.read<float>(m_addr + 40);
	}
	float GetStaticFriction() {
		return memory.read<float>(m_addr + 44);
	}
	float GetRestitution() {
		return memory.read<float>(m_addr + 48);
	}
	float GetLinearEtherDrag() {
		return memory.read<float>(m_addr + 52);
	}
	float GetAngularEtherDrag() {
		return memory.read<float>(m_addr + 56);
	}
	float GetSleepingLinearVelocityThreshold() {
		return memory.read<float>(m_addr + 60);
	}
	float GetSleepingAngularVelocityThreshold() {
		return memory.read<float>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UPhysicalMaterial
{
public:
	UPhysicalMaterial(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetFriction() {
		return memory.read<float>(m_addr + 40);
	}
	float GetStaticFriction() {
		return memory.read<float>(m_addr + 44);
	}
	enum class EFrictionCombineMode GetFrictionCombineMode() {
		return memory.read<enum class EFrictionCombineMode>(m_addr + 48);
	}
	bool GetbOverrideFrictionCombineMode() {
		return memory.read<bool>(m_addr + 49);
	}
	float GetRestitution() {
		return memory.read<float>(m_addr + 52);
	}
	enum class EFrictionCombineMode GetRestitutionCombineMode() {
		return memory.read<enum class EFrictionCombineMode>(m_addr + 56);
	}
	bool GetbOverrideRestitutionCombineMode() {
		return memory.read<bool>(m_addr + 57);
	}
	float GetDensity() {
		return memory.read<float>(m_addr + 60);
	}
	float GetSleepLinearVelocityThreshold() {
		return memory.read<float>(m_addr + 64);
	}
	float GetSleepAngularVelocityThreshold() {
		return memory.read<float>(m_addr + 68);
	}
	int32_t GetSleepCounterThreshold() {
		return memory.read<int32_t>(m_addr + 72);
	}
	float GetRaiseMassToPower() {
		return memory.read<float>(m_addr + 76);
	}
	float GetDestructibleDamageThresholdScale() {
		return memory.read<float>(m_addr + 80);
	}
	struct UPhysicalMaterialPropertyBase GetPhysicalMaterialProperty() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 88);
		return struct UPhysicalMaterialPropertyBase(ptr_addr);
	}
	enum class EPhysicalSurface GetSurfaceType() {
		return memory.read<enum class EPhysicalSurface>(m_addr + 96);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBodySetupCore
{
public:
	UBodySetupCore(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetBoneName() {
		return memory.read<struct FName>(m_addr + 40);
	}
	enum class EPhysicsType GetPhysicsType() {
		return memory.read<enum class EPhysicsType>(m_addr + 48);
	}
	enum class ECollisionTraceFlag GetCollisionTraceFlag() {
		return memory.read<enum class ECollisionTraceFlag>(m_addr + 49);
	}
	enum class EBodyCollisionResponse GetCollisionReponse() {
		return memory.read<enum class EBodyCollisionResponse>(m_addr + 50);
	}

private:
	std::uint64_t m_addr = 0;
};


class UPhysicalMaterialPropertyBase
{
public:
	UPhysicalMaterialPropertyBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UPhysicsSettingsCore
{
public:
	UPhysicsSettingsCore(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetDefaultGravityZ() {
		return memory.read<float>(m_addr + 56);
	}
	float GetDefaultTerminalVelocity() {
		return memory.read<float>(m_addr + 60);
	}
	float GetDefaultFluidFriction() {
		return memory.read<float>(m_addr + 64);
	}
	int32_t GetSimulateScratchMemorySize() {
		return memory.read<int32_t>(m_addr + 68);
	}
	int32_t GetRagdollAggregateThreshold() {
		return memory.read<int32_t>(m_addr + 72);
	}
	float GetTriangleMeshTriangleMinAreaThreshold() {
		return memory.read<float>(m_addr + 76);
	}
	bool GetbEnableShapeSharing() {
		return memory.read<bool>(m_addr + 80);
	}
	bool GetbEnablePCM() {
		return memory.read<bool>(m_addr + 81);
	}
	bool GetbEnableStabilization() {
		return memory.read<bool>(m_addr + 82);
	}
	bool GetbWarnMissingLocks() {
		return memory.read<bool>(m_addr + 83);
	}
	bool GetbEnable2DPhysics() {
		return memory.read<bool>(m_addr + 84);
	}
	bool GetbDefaultHasComplexCollision() {
		return memory.read<bool>(m_addr + 85);
	}
	float GetBounceThresholdVelocity() {
		return memory.read<float>(m_addr + 88);
	}
	enum class EFrictionCombineMode GetFrictionCombineMode() {
		return memory.read<enum class EFrictionCombineMode>(m_addr + 92);
	}
	enum class EFrictionCombineMode GetRestitutionCombineMode() {
		return memory.read<enum class EFrictionCombineMode>(m_addr + 93);
	}
	float GetMaxAngularVelocity() {
		return memory.read<float>(m_addr + 96);
	}
	float GetMaxDepenetrationVelocity() {
		return memory.read<float>(m_addr + 100);
	}
	float GetContactOffsetMultiplier() {
		return memory.read<float>(m_addr + 104);
	}
	float GetMinContactOffset() {
		return memory.read<float>(m_addr + 108);
	}
	float GetMaxContactOffset() {
		return memory.read<float>(m_addr + 112);
	}
	bool GetbSimulateSkeletalMeshOnDedicatedServer() {
		return memory.read<bool>(m_addr + 116);
	}
	enum class ECollisionTraceFlag GetDefaultShapeComplexity() {
		return memory.read<enum class ECollisionTraceFlag>(m_addr + 117);
	}
	struct FChaosSolverConfiguration GetSolverOptions() {
		return memory.read<struct FChaosSolverConfiguration>(m_addr + 120);
	}

private:
	std::uint64_t m_addr = 0;
};


