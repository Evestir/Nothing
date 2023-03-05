namespace offsets
{
	namespace UNiagaraDataInterfaceChaosDestruction
	{
			constexpr auto ChaosSolverActorSet = 0x38; // Size: 80, Type: struct TSet<struct AChaosSolverActor*>
			constexpr auto DataSourceType = 0x88; // Size: 1, Type: enum class EDataSourceTypeEnum
			constexpr auto DataProcessFrequency = 0x8c; // Size: 4, Type: int32_t
			constexpr auto MaxNumberOfDataEntriesToSpawn = 0x90; // Size: 4, Type: int32_t
			constexpr auto DoSpawn = 0x94; // Size: 1, Type: bool
			constexpr auto SpawnMultiplierMinMax = 0x98; // Size: 8, Type: struct FVector2D
			constexpr auto SpawnChance = 0xa0; // Size: 4, Type: float
			constexpr auto ImpulseToSpawnMinMax = 0xa4; // Size: 8, Type: struct FVector2D
			constexpr auto SpeedToSpawnMinMax = 0xac; // Size: 8, Type: struct FVector2D
			constexpr auto MassToSpawnMinMax = 0xb4; // Size: 8, Type: struct FVector2D
			constexpr auto ExtentMinToSpawnMinMax = 0xbc; // Size: 8, Type: struct FVector2D
			constexpr auto ExtentMaxToSpawnMinMax = 0xc4; // Size: 8, Type: struct FVector2D
			constexpr auto VolumeToSpawnMinMax = 0xcc; // Size: 8, Type: struct FVector2D
			constexpr auto SolverTimeToSpawnMinMax = 0xd4; // Size: 8, Type: struct FVector2D
			constexpr auto SurfaceTypeToSpawn = 0xdc; // Size: 4, Type: int32_t
			constexpr auto LocationFilteringMode = 0xe0; // Size: 1, Type: enum class ELocationFilteringModeEnum
			constexpr auto LocationXToSpawn = 0xe1; // Size: 1, Type: enum class ELocationXToSpawnEnum
			constexpr auto LocationXToSpawnMinMax = 0xe4; // Size: 8, Type: struct FVector2D
			constexpr auto LocationYToSpawn = 0xec; // Size: 1, Type: enum class ELocationYToSpawnEnum
			constexpr auto LocationYToSpawnMinMax = 0xf0; // Size: 8, Type: struct FVector2D
			constexpr auto LocationZToSpawn = 0xf8; // Size: 1, Type: enum class ELocationZToSpawnEnum
			constexpr auto LocationZToSpawnMinMax = 0xfc; // Size: 8, Type: struct FVector2D
			constexpr auto DataSortingType = 0x104; // Size: 1, Type: enum class EDataSortTypeEnum
			constexpr auto bGetExternalCollisionData = 0x105; // Size: 1, Type: bool
			constexpr auto DoSpatialHash = 0x106; // Size: 1, Type: bool
			constexpr auto SpatialHashVolumeMin = 0x108; // Size: 12, Type: struct FVector
			constexpr auto SpatialHashVolumeMax = 0x114; // Size: 12, Type: struct FVector
			constexpr auto SpatialHashVolumeCellSize = 0x120; // Size: 12, Type: struct FVector
			constexpr auto MaxDataPerCell = 0x12c; // Size: 4, Type: int32_t
			constexpr auto bApplyMaterialsFilter = 0x130; // Size: 1, Type: bool
			constexpr auto ChaosBreakingMaterialSet = 0x138; // Size: 80, Type: struct TSet<struct UPhysicalMaterial*>
			constexpr auto bGetExternalBreakingData = 0x188; // Size: 1, Type: bool
			constexpr auto bGetExternalTrailingData = 0x189; // Size: 1, Type: bool
			constexpr auto RandomPositionMagnitudeMinMax = 0x18c; // Size: 8, Type: struct FVector2D
			constexpr auto InheritedVelocityMultiplier = 0x194; // Size: 4, Type: float
			constexpr auto RandomVelocityGenerationType = 0x198; // Size: 1, Type: enum class ERandomVelocityGenerationTypeEnum
			constexpr auto RandomVelocityMagnitudeMinMax = 0x19c; // Size: 8, Type: struct FVector2D
			constexpr auto SpreadAngleMax = 0x1a4; // Size: 4, Type: float
			constexpr auto VelocityOffsetMin = 0x1a8; // Size: 12, Type: struct FVector
			constexpr auto VelocityOffsetMax = 0x1b4; // Size: 12, Type: struct FVector
			constexpr auto FinalVelocityMagnitudeMinMax = 0x1c0; // Size: 8, Type: struct FVector2D
			constexpr auto MaxLatency = 0x1c8; // Size: 4, Type: float
			constexpr auto DebugType = 0x1cc; // Size: 1, Type: enum class EDebugTypeEnum
			constexpr auto LastSpawnedPointID = 0x1d0; // Size: 4, Type: int32_t
			constexpr auto LastSpawnTime = 0x1d4; // Size: 4, Type: float
			constexpr auto SolverTime = 0x1e8; // Size: 4, Type: float
			constexpr auto TimeStampOfLastProcessedData = 0x1ec; // Size: 4, Type: float
	}
} 
