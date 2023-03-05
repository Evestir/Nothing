namespace offsets
{
	namespace UAnimStreamable
	{
			constexpr auto NumFrames = 0xa8; // Size: 4, Type: int32_t
			constexpr auto Interpolation = 0xac; // Size: 1, Type: enum class EAnimInterpolationType
			constexpr auto RetargetSource = 0xb0; // Size: 8, Type: struct FName
			constexpr auto BoneCompressionSettings = 0xc8; // Size: 8, Type: struct UAnimBoneCompressionSettings*
			constexpr auto CurveCompressionSettings = 0xd0; // Size: 8, Type: struct UAnimCurveCompressionSettings*
			constexpr auto bEnableRootMotion = 0xd8; // Size: 1, Type: bool
			constexpr auto RootMotionRootLock = 0xd9; // Size: 1, Type: enum class ERootMotionRootLock
			constexpr auto bForceRootLock = 0xda; // Size: 1, Type: bool
			constexpr auto bUseNormalizedRootMotionScale = 0xdb; // Size: 1, Type: bool
	}
} 
