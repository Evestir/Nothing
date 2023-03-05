namespace offsets
{
	namespace UDistributionVectorUniformCurve
	{
			constexpr auto ConstantCurve = 0x38; // Size: 24, Type: struct FInterpCurveTwoVectors
			constexpr auto bLockAxes1 = 0x50; // Size: 1, Type: char
			constexpr auto bLockAxes2 = 0x50; // Size: 1, Type: char
			constexpr auto LockedAxes[2] = 0x54; // Size: 2, Type: enum class EDistributionVectorLockFlags
			constexpr auto MirrorFlags[3] = 0x56; // Size: 3, Type: enum class EDistributionVectorMirrorFlags
			constexpr auto bUseExtremes = 0x5c; // Size: 1, Type: char
	}
} 
