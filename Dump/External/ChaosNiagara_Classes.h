#pragma once 
#include <ChaosNiagara_Structs.h>
 
 
 
class UNiagaraDataInterfaceChaosDestruction
{
public:
	UNiagaraDataInterfaceChaosDestruction(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TSet<struct AChaosSolverActor> GetChaosSolverActorSet() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct TSet<struct AChaosSolverActor>(ptr_addr);
	}
	enum class EDataSourceTypeEnum GetDataSourceType() {
		return memory.read<enum class EDataSourceTypeEnum>(m_addr + 136);
	}
	int32_t GetDataProcessFrequency() {
		return memory.read<int32_t>(m_addr + 140);
	}
	int32_t GetMaxNumberOfDataEntriesToSpawn() {
		return memory.read<int32_t>(m_addr + 144);
	}
	bool GetDoSpawn() {
		return memory.read<bool>(m_addr + 148);
	}
	struct FVector2D GetSpawnMultiplierMinMax() {
		return memory.read<struct FVector2D>(m_addr + 152);
	}
	float GetSpawnChance() {
		return memory.read<float>(m_addr + 160);
	}
	struct FVector2D GetImpulseToSpawnMinMax() {
		return memory.read<struct FVector2D>(m_addr + 164);
	}
	struct FVector2D GetSpeedToSpawnMinMax() {
		return memory.read<struct FVector2D>(m_addr + 172);
	}
	struct FVector2D GetMassToSpawnMinMax() {
		return memory.read<struct FVector2D>(m_addr + 180);
	}
	struct FVector2D GetExtentMinToSpawnMinMax() {
		return memory.read<struct FVector2D>(m_addr + 188);
	}
	struct FVector2D GetExtentMaxToSpawnMinMax() {
		return memory.read<struct FVector2D>(m_addr + 196);
	}
	struct FVector2D GetVolumeToSpawnMinMax() {
		return memory.read<struct FVector2D>(m_addr + 204);
	}
	struct FVector2D GetSolverTimeToSpawnMinMax() {
		return memory.read<struct FVector2D>(m_addr + 212);
	}
	int32_t GetSurfaceTypeToSpawn() {
		return memory.read<int32_t>(m_addr + 220);
	}
	enum class ELocationFilteringModeEnum GetLocationFilteringMode() {
		return memory.read<enum class ELocationFilteringModeEnum>(m_addr + 224);
	}
	enum class ELocationXToSpawnEnum GetLocationXToSpawn() {
		return memory.read<enum class ELocationXToSpawnEnum>(m_addr + 225);
	}
	struct FVector2D GetLocationXToSpawnMinMax() {
		return memory.read<struct FVector2D>(m_addr + 228);
	}
	enum class ELocationYToSpawnEnum GetLocationYToSpawn() {
		return memory.read<enum class ELocationYToSpawnEnum>(m_addr + 236);
	}
	struct FVector2D GetLocationYToSpawnMinMax() {
		return memory.read<struct FVector2D>(m_addr + 240);
	}
	enum class ELocationZToSpawnEnum GetLocationZToSpawn() {
		return memory.read<enum class ELocationZToSpawnEnum>(m_addr + 248);
	}
	struct FVector2D GetLocationZToSpawnMinMax() {
		return memory.read<struct FVector2D>(m_addr + 252);
	}
	enum class EDataSortTypeEnum GetDataSortingType() {
		return memory.read<enum class EDataSortTypeEnum>(m_addr + 260);
	}
	bool GetbGetExternalCollisionData() {
		return memory.read<bool>(m_addr + 261);
	}
	bool GetDoSpatialHash() {
		return memory.read<bool>(m_addr + 262);
	}
	struct FVector GetSpatialHashVolumeMin() {
		return memory.read<struct FVector>(m_addr + 264);
	}
	struct FVector GetSpatialHashVolumeMax() {
		return memory.read<struct FVector>(m_addr + 276);
	}
	struct FVector GetSpatialHashVolumeCellSize() {
		return memory.read<struct FVector>(m_addr + 288);
	}
	int32_t GetMaxDataPerCell() {
		return memory.read<int32_t>(m_addr + 300);
	}
	bool GetbApplyMaterialsFilter() {
		return memory.read<bool>(m_addr + 304);
	}
	struct TSet<struct UPhysicalMaterial> GetChaosBreakingMaterialSet() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 312);
		return struct TSet<struct UPhysicalMaterial>(ptr_addr);
	}
	bool GetbGetExternalBreakingData() {
		return memory.read<bool>(m_addr + 392);
	}
	bool GetbGetExternalTrailingData() {
		return memory.read<bool>(m_addr + 393);
	}
	struct FVector2D GetRandomPositionMagnitudeMinMax() {
		return memory.read<struct FVector2D>(m_addr + 396);
	}
	float GetInheritedVelocityMultiplier() {
		return memory.read<float>(m_addr + 404);
	}
	enum class ERandomVelocityGenerationTypeEnum GetRandomVelocityGenerationType() {
		return memory.read<enum class ERandomVelocityGenerationTypeEnum>(m_addr + 408);
	}
	struct FVector2D GetRandomVelocityMagnitudeMinMax() {
		return memory.read<struct FVector2D>(m_addr + 412);
	}
	float GetSpreadAngleMax() {
		return memory.read<float>(m_addr + 420);
	}
	struct FVector GetVelocityOffsetMin() {
		return memory.read<struct FVector>(m_addr + 424);
	}
	struct FVector GetVelocityOffsetMax() {
		return memory.read<struct FVector>(m_addr + 436);
	}
	struct FVector2D GetFinalVelocityMagnitudeMinMax() {
		return memory.read<struct FVector2D>(m_addr + 448);
	}
	float GetMaxLatency() {
		return memory.read<float>(m_addr + 456);
	}
	enum class EDebugTypeEnum GetDebugType() {
		return memory.read<enum class EDebugTypeEnum>(m_addr + 460);
	}
	int32_t GetLastSpawnedPointID() {
		return memory.read<int32_t>(m_addr + 464);
	}
	float GetLastSpawnTime() {
		return memory.read<float>(m_addr + 468);
	}
	float GetSolverTime() {
		return memory.read<float>(m_addr + 488);
	}
	float GetTimeStampOfLastProcessedData() {
		return memory.read<float>(m_addr + 492);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNiagaraDataInterfacePhysicsField
{
public:
	UNiagaraDataInterfacePhysicsField(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


