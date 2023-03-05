namespace offsets
{
	namespace UDistributionVectorUniform
	{
			constexpr auto Max = 0x38; // Size: 12, Type: struct FVector
			constexpr auto Min = 0x44; // Size: 12, Type: struct FVector
			constexpr auto bLockAxes = 0x50; // Size: 1, Type: char
			constexpr auto LockedAxes = 0x54; // Size: 1, Type: enum class EDistributionVectorLockFlags
			constexpr auto MirrorFlags[3] = 0x55; // Size: 3, Type: enum class EDistributionVectorMirrorFlags
			constexpr auto bUseExtremes = 0x58; // Size: 1, Type: char
	}
} 
