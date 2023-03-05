#pragma once 
#include <ChaosCloth_Structs.h>
 
 
 
class UChaosClothConfig
{
public:
	UChaosClothConfig(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EClothMassMode GetMassMode() {
		return memory.read<enum class EClothMassMode>(m_addr + 40);
	}
	float GetUniformMass() {
		return memory.read<float>(m_addr + 44);
	}
	float GetTotalMass() {
		return memory.read<float>(m_addr + 48);
	}
	float GetDensity() {
		return memory.read<float>(m_addr + 52);
	}
	float GetMinPerParticleMass() {
		return memory.read<float>(m_addr + 56);
	}
	float GetEdgeStiffness() {
		return memory.read<float>(m_addr + 60);
	}
	float GetBendingStiffness() {
		return memory.read<float>(m_addr + 64);
	}
	bool GetbUseBendingElements() {
		return memory.read<bool>(m_addr + 68);
	}
	float GetAreaStiffness() {
		return memory.read<float>(m_addr + 72);
	}
	float GetVolumeStiffness() {
		return memory.read<float>(m_addr + 76);
	}
	struct FChaosClothWeightedValue GetTetherStiffness() {
		return memory.read<struct FChaosClothWeightedValue>(m_addr + 80);
	}
	float GetLimitScale() {
		return memory.read<float>(m_addr + 88);
	}
	bool GetbUseGeodesicDistance() {
		return memory.read<bool>(m_addr + 92);
	}
	float GetShapeTargetStiffness() {
		return memory.read<float>(m_addr + 96);
	}
	float GetCollisionThickness() {
		return memory.read<float>(m_addr + 100);
	}
	float GetFrictionCoefficient() {
		return memory.read<float>(m_addr + 104);
	}
	bool GetbUseCCD() {
		return memory.read<bool>(m_addr + 108);
	}
	bool GetbUseSelfCollisions() {
		return memory.read<bool>(m_addr + 109);
	}
	float GetSelfCollisionThickness() {
		return memory.read<float>(m_addr + 112);
	}
	bool GetbUseLegacyBackstop() {
		return memory.read<bool>(m_addr + 116);
	}
	float GetDampingCoefficient() {
		return memory.read<float>(m_addr + 120);
	}
	bool GetbUsePointBasedWindModel() {
		return memory.read<bool>(m_addr + 124);
	}
	float GetDragCoefficient() {
		return memory.read<float>(m_addr + 128);
	}
	float GetLiftCoefficient() {
		return memory.read<float>(m_addr + 132);
	}
	bool GetbUseGravityOverride() {
		return memory.read<bool>(m_addr + 136);
	}
	float GetGravityScale() {
		return memory.read<float>(m_addr + 140);
	}
	struct FVector GetGravity() {
		return memory.read<struct FVector>(m_addr + 144);
	}
	struct FChaosClothWeightedValue GetAnimDriveStiffness() {
		return memory.read<struct FChaosClothWeightedValue>(m_addr + 156);
	}
	struct FChaosClothWeightedValue GetAnimDriveDamping() {
		return memory.read<struct FChaosClothWeightedValue>(m_addr + 164);
	}
	struct FVector GetLinearVelocityScale() {
		return memory.read<struct FVector>(m_addr + 172);
	}
	float GetAngularVelocityScale() {
		return memory.read<float>(m_addr + 184);
	}
	float GetFictitiousAngularScale() {
		return memory.read<float>(m_addr + 188);
	}
	bool GetbUseTetrahedralConstraints() {
		return memory.read<bool>(m_addr + 192);
	}
	bool GetbUseThinShellVolumeConstraints() {
		return memory.read<bool>(m_addr + 193);
	}
	bool GetbUseContinuousCollisionDetection() {
		return memory.read<bool>(m_addr + 194);
	}

private:
	std::uint64_t m_addr = 0;
};


class UChaosClothingSimulationInteractor
{
public:
	UChaosClothingSimulationInteractor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UChaosClothingSimulationFactory
{
public:
	UChaosClothingSimulationFactory(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UChaosClothSharedSimConfig
{
public:
	UChaosClothSharedSimConfig(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetIterationCount() {
		return memory.read<int32_t>(m_addr + 40);
	}
	int32_t GetSubdivisionCount() {
		return memory.read<int32_t>(m_addr + 44);
	}
	bool GetbUseLocalSpaceSimulation() {
		return memory.read<bool>(m_addr + 48);
	}
	bool GetbUseXPBDConstraints() {
		return memory.read<bool>(m_addr + 49);
	}

private:
	std::uint64_t m_addr = 0;
};


class UChaosClothingInteractor
{
public:
	UChaosClothingInteractor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


