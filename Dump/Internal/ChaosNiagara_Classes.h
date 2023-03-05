#pragma once 
#include <ChaosNiagara_Structs.h>
 
 
 
//Class ChaosNiagara.NiagaraDataInterfaceChaosDestruction Size 568
// Inherited 56 bytes 
class UNiagaraDataInterfaceChaosDestruction : public UNiagaraDataInterface
{

 public: 
	struct TSet<struct AChaosSolverActor*> ChaosSolverActorSet;  // Offset: 56 Size: 80
	enum class EDataSourceTypeEnum DataSourceType;  // Offset: 136 Size: 1
	char pad_137[3];  // Offset: 137 Size: 3
	int32_t DataProcessFrequency;  // Offset: 140 Size: 4
	int32_t MaxNumberOfDataEntriesToSpawn;  // Offset: 144 Size: 4
	char pad_148_1 : 7;  // Offset: 148 Size: 1
	bool DoSpawn : 1;  // Offset: 148 Size: 1
	char pad_149[3];  // Offset: 149 Size: 3
	struct FVector2D SpawnMultiplierMinMax;  // Offset: 152 Size: 8
	float SpawnChance;  // Offset: 160 Size: 4
	struct FVector2D ImpulseToSpawnMinMax;  // Offset: 164 Size: 8
	struct FVector2D SpeedToSpawnMinMax;  // Offset: 172 Size: 8
	struct FVector2D MassToSpawnMinMax;  // Offset: 180 Size: 8
	struct FVector2D ExtentMinToSpawnMinMax;  // Offset: 188 Size: 8
	struct FVector2D ExtentMaxToSpawnMinMax;  // Offset: 196 Size: 8
	struct FVector2D VolumeToSpawnMinMax;  // Offset: 204 Size: 8
	struct FVector2D SolverTimeToSpawnMinMax;  // Offset: 212 Size: 8
	int32_t SurfaceTypeToSpawn;  // Offset: 220 Size: 4
	enum class ELocationFilteringModeEnum LocationFilteringMode;  // Offset: 224 Size: 1
	enum class ELocationXToSpawnEnum LocationXToSpawn;  // Offset: 225 Size: 1
	char pad_226[2];  // Offset: 226 Size: 2
	struct FVector2D LocationXToSpawnMinMax;  // Offset: 228 Size: 8
	enum class ELocationYToSpawnEnum LocationYToSpawn;  // Offset: 236 Size: 1
	char pad_237[3];  // Offset: 237 Size: 3
	struct FVector2D LocationYToSpawnMinMax;  // Offset: 240 Size: 8
	enum class ELocationZToSpawnEnum LocationZToSpawn;  // Offset: 248 Size: 1
	char pad_249[3];  // Offset: 249 Size: 3
	struct FVector2D LocationZToSpawnMinMax;  // Offset: 252 Size: 8
	enum class EDataSortTypeEnum DataSortingType;  // Offset: 260 Size: 1
	char pad_261_1 : 7;  // Offset: 261 Size: 1
	bool bGetExternalCollisionData : 1;  // Offset: 261 Size: 1
	char pad_262_1 : 7;  // Offset: 262 Size: 1
	bool DoSpatialHash : 1;  // Offset: 262 Size: 1
	char pad_263[1];  // Offset: 263 Size: 1
	struct FVector SpatialHashVolumeMin;  // Offset: 264 Size: 12
	struct FVector SpatialHashVolumeMax;  // Offset: 276 Size: 12
	struct FVector SpatialHashVolumeCellSize;  // Offset: 288 Size: 12
	int32_t MaxDataPerCell;  // Offset: 300 Size: 4
	char pad_304_1 : 7;  // Offset: 304 Size: 1
	bool bApplyMaterialsFilter : 1;  // Offset: 304 Size: 1
	char pad_305[7];  // Offset: 305 Size: 7
	struct TSet<struct UPhysicalMaterial*> ChaosBreakingMaterialSet;  // Offset: 312 Size: 80
	char pad_392_1 : 7;  // Offset: 392 Size: 1
	bool bGetExternalBreakingData : 1;  // Offset: 392 Size: 1
	char pad_393_1 : 7;  // Offset: 393 Size: 1
	bool bGetExternalTrailingData : 1;  // Offset: 393 Size: 1
	char pad_394[2];  // Offset: 394 Size: 2
	struct FVector2D RandomPositionMagnitudeMinMax;  // Offset: 396 Size: 8
	float InheritedVelocityMultiplier;  // Offset: 404 Size: 4
	enum class ERandomVelocityGenerationTypeEnum RandomVelocityGenerationType;  // Offset: 408 Size: 1
	char pad_409[3];  // Offset: 409 Size: 3
	struct FVector2D RandomVelocityMagnitudeMinMax;  // Offset: 412 Size: 8
	float SpreadAngleMax;  // Offset: 420 Size: 4
	struct FVector VelocityOffsetMin;  // Offset: 424 Size: 12
	struct FVector VelocityOffsetMax;  // Offset: 436 Size: 12
	struct FVector2D FinalVelocityMagnitudeMinMax;  // Offset: 448 Size: 8
	float MaxLatency;  // Offset: 456 Size: 4
	enum class EDebugTypeEnum DebugType;  // Offset: 460 Size: 1
	char pad_461[3];  // Offset: 461 Size: 3
	int32_t LastSpawnedPointID;  // Offset: 464 Size: 4
	float LastSpawnTime;  // Offset: 468 Size: 4
	char pad_472[16];  // Offset: 472 Size: 16
	float SolverTime;  // Offset: 488 Size: 4
	float TimeStampOfLastProcessedData;  // Offset: 492 Size: 4
	char pad_496[72];  // Offset: 496 Size: 72



 // Functions 
 public:
}; 
 
 


//Class ChaosNiagara.NiagaraDataInterfacePhysicsField Size 56
// Inherited 56 bytes 
class UNiagaraDataInterfacePhysicsField : public UNiagaraDataInterface
{

 public: 



 // Functions 
 public:
}; 
 
 


