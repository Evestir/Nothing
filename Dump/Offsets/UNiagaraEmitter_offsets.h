namespace offsets
{
	namespace UNiagaraEmitter
	{
			constexpr auto bLocalSpace = 0x28; // Size: 1, Type: bool
			constexpr auto bDeterminism = 0x29; // Size: 1, Type: bool
			constexpr auto RandomSeed = 0x2c; // Size: 4, Type: int32_t
			constexpr auto AllocationMode = 0x30; // Size: 1, Type: enum class EParticleAllocationMode
			constexpr auto PreAllocationCount = 0x34; // Size: 4, Type: int32_t
			constexpr auto UpdateScriptProps = 0x38; // Size: 40, Type: struct FNiagaraEmitterScriptProperties
			constexpr auto SpawnScriptProps = 0x60; // Size: 40, Type: struct FNiagaraEmitterScriptProperties
			constexpr auto SimTarget = 0x88; // Size: 1, Type: enum class ENiagaraSimTarget
			constexpr auto FixedBounds = 0x8c; // Size: 28, Type: struct FBox
			constexpr auto MinDetailLevel = 0xa8; // Size: 4, Type: int32_t
			constexpr auto MaxDetailLevel = 0xac; // Size: 4, Type: int32_t
			constexpr auto GlobalSpawnCountScaleOverrides = 0xb0; // Size: 20, Type: struct FNiagaraDetailsLevelScaleOverrides
			constexpr auto Platforms = 0xc8; // Size: 48, Type: struct FNiagaraPlatformSet
			constexpr auto ScalabilityOverrides = 0xf8; // Size: 16, Type: struct FNiagaraEmitterScalabilityOverrides
			constexpr auto bInterpolatedSpawning = 0x108; // Size: 1, Type: char
			constexpr auto bFixedBounds = 0x108; // Size: 1, Type: char
			constexpr auto bUseMinDetailLevel = 0x108; // Size: 1, Type: char
			constexpr auto bUseMaxDetailLevel = 0x108; // Size: 1, Type: char
			constexpr auto bOverrideGlobalSpawnCountScale = 0x108; // Size: 1, Type: char
			constexpr auto bRequiresPersistentIDs = 0x108; // Size: 1, Type: char
			constexpr auto bCombineEventSpawn = 0x108; // Size: 1, Type: char
			constexpr auto MaxDeltaTimePerTick = 0x10c; // Size: 4, Type: float
			constexpr auto DefaultShaderStageIndex = 0x110; // Size: 4, Type: uint32_t
			constexpr auto MaxUpdateIterations = 0x114; // Size: 4, Type: uint32_t
			constexpr auto SpawnStages = 0x118; // Size: 80, Type: struct TSet<uint32_t>
			constexpr auto bSimulationStagesEnabled = 0x168; // Size: 1, Type: char
			constexpr auto bDeprecatedShaderStagesEnabled = 0x168; // Size: 1, Type: char
			constexpr auto bLimitDeltaTime = 0x168; // Size: 1, Type: char
			constexpr auto UniqueEmitterName = 0x170; // Size: 16, Type: struct FString
			constexpr auto RendererProperties = 0x180; // Size: 16, Type: struct TArray<struct UNiagaraRendererProperties*>
			constexpr auto EventHandlerScriptProps = 0x190; // Size: 16, Type: struct TArray<struct FNiagaraEventScriptProperties>
			constexpr auto SimulationStages = 0x1a0; // Size: 16, Type: struct TArray<struct UNiagaraSimulationStageBase*>
			constexpr auto GPUComputeScript = 0x1b0; // Size: 8, Type: struct UNiagaraScript*
			constexpr auto SharedEventGeneratorIds = 0x1b8; // Size: 16, Type: struct TArray<struct FName>
	}
} 
