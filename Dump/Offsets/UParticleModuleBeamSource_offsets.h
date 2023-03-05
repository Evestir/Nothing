namespace offsets
{
	namespace UParticleModuleBeamSource
	{
			constexpr auto SourceMethod = 0x30; // Size: 1, Type: enum class Beam2SourceTargetMethod
			constexpr auto SourceName = 0x34; // Size: 8, Type: struct FName
			constexpr auto bSourceAbsolute = 0x3c; // Size: 1, Type: char
			constexpr auto Source = 0x40; // Size: 72, Type: struct FRawDistributionVector
			constexpr auto bLockSource = 0x88; // Size: 1, Type: char
			constexpr auto SourceTangentMethod = 0x8c; // Size: 1, Type: enum class Beam2SourceTargetTangentMethod
			constexpr auto SourceTangent = 0x90; // Size: 72, Type: struct FRawDistributionVector
			constexpr auto bLockSourceTangent = 0xd8; // Size: 1, Type: char
			constexpr auto SourceStrength = 0xe0; // Size: 48, Type: struct FRawDistributionFloat
			constexpr auto bLockSourceStength = 0x110; // Size: 1, Type: char
	}
} 
