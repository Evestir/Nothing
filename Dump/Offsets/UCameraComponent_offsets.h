namespace offsets
{
	namespace UCameraComponent
	{
			constexpr auto FieldOfView = 0x208; // Size: 4, Type: float
			constexpr auto OrthoWidth = 0x20c; // Size: 4, Type: float
			constexpr auto OrthoNearClipPlane = 0x210; // Size: 4, Type: float
			constexpr auto OrthoFarClipPlane = 0x214; // Size: 4, Type: float
			constexpr auto AspectRatio = 0x218; // Size: 4, Type: float
			constexpr auto bConstrainAspectRatio = 0x21c; // Size: 1, Type: char
			constexpr auto bUseFieldOfViewForLOD = 0x21c; // Size: 1, Type: char
			constexpr auto bLockToHmd = 0x21c; // Size: 1, Type: char
			constexpr auto bUsePawnControlRotation = 0x21c; // Size: 1, Type: char
			constexpr auto bSkipDepthOfFieldTAA = 0x21c; // Size: 1, Type: char
			constexpr auto MotionBlurMode = 0x21d; // Size: 1, Type: enum class ECameraMotionBlurMode
			constexpr auto SkipMaxCascade = 0x21e; // Size: 1, Type: bool
			constexpr auto ProjectionMode = 0x220; // Size: 1, Type: enum class ECameraProjectionMode
			constexpr auto PostProcessBlendWeight = 0x260; // Size: 4, Type: float
			constexpr auto PostProcessSettings = 0x290; // Size: 1488, Type: struct FPostProcessSettings
	}
} 
