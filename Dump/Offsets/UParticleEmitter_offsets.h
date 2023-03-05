namespace offsets
{
	namespace UParticleEmitter
	{
			constexpr auto EmitterName = 0x28; // Size: 8, Type: struct FName
			constexpr auto SubUVDataOffset = 0x30; // Size: 4, Type: int32_t
			constexpr auto EmitterRenderMode = 0x34; // Size: 1, Type: enum class EEmitterRenderMode
			constexpr auto SignificanceLevel = 0x35; // Size: 1, Type: enum class EParticleSignificanceLevel
			constexpr auto bUseLegacySpawningBehavior = 0x37; // Size: 1, Type: char
			constexpr auto ConvertedModules = 0x37; // Size: 1, Type: char
			constexpr auto bIsSoloing = 0x37; // Size: 1, Type: char
			constexpr auto bCookedOut = 0x37; // Size: 1, Type: char
			constexpr auto bDisabledLODsKeepEmitterAlive = 0x37; // Size: 1, Type: char
			constexpr auto bDisableWhenInsignficant = 0x38; // Size: 1, Type: char
			constexpr auto LODLevels = 0x40; // Size: 16, Type: struct TArray<struct UParticleLODLevel*>
			constexpr auto PeakActiveParticles = 0x50; // Size: 4, Type: int32_t
			constexpr auto InitialAllocationCount = 0x54; // Size: 4, Type: int32_t
			constexpr auto QualityLevelSpawnRateScale = 0x58; // Size: 4, Type: float
			constexpr auto DetailModeBitmask = 0x5c; // Size: 4, Type: uint32_t
	}
} 
