namespace offsets
{
	namespace UParticleModuleEventReceiverSpawn
	{
			constexpr auto SpawnCount = 0x40; // Size: 48, Type: struct FRawDistributionFloat
			constexpr auto bUseParticleTime = 0x70; // Size: 1, Type: char
			constexpr auto bUsePSysLocation = 0x70; // Size: 1, Type: char
			constexpr auto bInheritVelocity = 0x70; // Size: 1, Type: char
			constexpr auto InheritVelocityScale = 0x78; // Size: 72, Type: struct FRawDistributionVector
			constexpr auto PhysicalMaterials = 0xc0; // Size: 16, Type: struct TArray<struct UPhysicalMaterial*>
			constexpr auto bBanPhysicalMaterials = 0xd0; // Size: 1, Type: char
	}
} 
