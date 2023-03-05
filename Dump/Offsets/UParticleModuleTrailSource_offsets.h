namespace offsets
{
	namespace UParticleModuleTrailSource
	{
			constexpr auto SourceMethod = 0x30; // Size: 1, Type: enum class ETrail2SourceMethod
			constexpr auto SourceName = 0x34; // Size: 8, Type: struct FName
			constexpr auto SourceStrength = 0x40; // Size: 48, Type: struct FRawDistributionFloat
			constexpr auto bLockSourceStength = 0x70; // Size: 1, Type: char
			constexpr auto SourceOffsetCount = 0x74; // Size: 4, Type: int32_t
			constexpr auto SourceOffsetDefaults = 0x78; // Size: 16, Type: struct TArray<struct FVector>
			constexpr auto SelectionMethod = 0x88; // Size: 1, Type: enum class EParticleSourceSelectionMethod
			constexpr auto bInheritRotation = 0x8c; // Size: 1, Type: char
	}
} 
