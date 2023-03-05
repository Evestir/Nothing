namespace offsets
{
	namespace UParticleModuleSpawnPerUnit
	{
			constexpr auto UnitScalar = 0x38; // Size: 4, Type: float
			constexpr auto MovementTolerance = 0x3c; // Size: 4, Type: float
			constexpr auto SpawnPerUnit = 0x40; // Size: 48, Type: struct FRawDistributionFloat
			constexpr auto MaxFrameDistance = 0x70; // Size: 4, Type: float
			constexpr auto bIgnoreSpawnRateWhenMoving = 0x74; // Size: 1, Type: char
			constexpr auto bIgnoreMovementAlongX = 0x74; // Size: 1, Type: char
			constexpr auto bIgnoreMovementAlongY = 0x74; // Size: 1, Type: char
			constexpr auto bIgnoreMovementAlongZ = 0x74; // Size: 1, Type: char
	}
} 
