namespace offsets
{
	namespace UParticleModuleBeamTarget
	{
			constexpr auto TargetMethod = 0x30; // Size: 1, Type: enum class Beam2SourceTargetMethod
			constexpr auto TargetName = 0x34; // Size: 8, Type: struct FName
			constexpr auto Target = 0x40; // Size: 72, Type: struct FRawDistributionVector
			constexpr auto bTargetAbsolute = 0x88; // Size: 1, Type: char
			constexpr auto bLockTarget = 0x88; // Size: 1, Type: char
			constexpr auto TargetTangentMethod = 0x8c; // Size: 1, Type: enum class Beam2SourceTargetTangentMethod
			constexpr auto TargetTangent = 0x90; // Size: 72, Type: struct FRawDistributionVector
			constexpr auto bLockTargetTangent = 0xd8; // Size: 1, Type: char
			constexpr auto TargetStrength = 0xe0; // Size: 48, Type: struct FRawDistributionFloat
			constexpr auto bLockTargetStength = 0x110; // Size: 1, Type: char
			constexpr auto LockRadius = 0x114; // Size: 4, Type: float
	}
} 
