namespace offsets
{
	namespace UParticleLODLevel
	{
			constexpr auto Level = 0x28; // Size: 4, Type: int32_t
			constexpr auto bEnabled = 0x2c; // Size: 1, Type: char
			constexpr auto RequiredModule = 0x30; // Size: 8, Type: struct UParticleModuleRequired*
			constexpr auto Modules = 0x38; // Size: 16, Type: struct TArray<struct UParticleModule*>
			constexpr auto TypeDataModule = 0x48; // Size: 8, Type: struct UParticleModuleTypeDataBase*
			constexpr auto SpawnModule = 0x50; // Size: 8, Type: struct UParticleModuleSpawn*
			constexpr auto EventGenerator = 0x58; // Size: 8, Type: struct UParticleModuleEventGenerator*
			constexpr auto SpawningModules = 0x60; // Size: 16, Type: struct TArray<struct UParticleModuleSpawnBase*>
			constexpr auto SpawnModules = 0x70; // Size: 16, Type: struct TArray<struct UParticleModule*>
			constexpr auto UpdateModules = 0x80; // Size: 16, Type: struct TArray<struct UParticleModule*>
			constexpr auto OrbitModules = 0x90; // Size: 16, Type: struct TArray<struct UParticleModuleOrbit*>
			constexpr auto EventReceiverModules = 0xa0; // Size: 16, Type: struct TArray<struct UParticleModuleEventReceiverBase*>
			constexpr auto ConvertedModules = 0xb0; // Size: 1, Type: char
			constexpr auto PeakActiveParticles = 0xb4; // Size: 4, Type: int32_t
	}
} 
