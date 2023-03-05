namespace offsets
{
	namespace UParticleModuleVectorFieldLocal
	{
			constexpr auto VectorField = 0x30; // Size: 8, Type: struct UVectorField*
			constexpr auto RelativeTranslation = 0x38; // Size: 12, Type: struct FVector
			constexpr auto RelativeRotation = 0x44; // Size: 12, Type: struct FRotator
			constexpr auto RelativeScale3D = 0x50; // Size: 12, Type: struct FVector
			constexpr auto Intensity = 0x5c; // Size: 4, Type: float
			constexpr auto Tightness = 0x60; // Size: 4, Type: float
			constexpr auto bIgnoreComponentTransform = 0x64; // Size: 1, Type: char
			constexpr auto bTileX = 0x64; // Size: 1, Type: char
			constexpr auto bTileY = 0x64; // Size: 1, Type: char
			constexpr auto bTileZ = 0x64; // Size: 1, Type: char
			constexpr auto bUseFixDT = 0x64; // Size: 1, Type: char
	}
} 
