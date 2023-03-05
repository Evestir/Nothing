namespace offsets
{
	namespace USequenceCameraShakeCameraStandIn
	{
			constexpr auto FieldOfView = 0x30; // Size: 4, Type: float
			constexpr auto bConstrainAspectRatio = 0x34; // Size: 1, Type: char
			constexpr auto AspectRatio = 0x38; // Size: 4, Type: float
			constexpr auto PostProcessSettings = 0x40; // Size: 1488, Type: struct FPostProcessSettings
			constexpr auto PostProcessBlendWeight = 0x610; // Size: 4, Type: float
			constexpr auto Filmback = 0x614; // Size: 12, Type: struct FCameraFilmbackSettings
			constexpr auto LensSettings = 0x620; // Size: 24, Type: struct FCameraLensSettings
			constexpr auto FocusSettings = 0x638; // Size: 88, Type: struct FCameraFocusSettings
			constexpr auto CurrentFocalLength = 0x690; // Size: 4, Type: float
			constexpr auto CurrentAperture = 0x694; // Size: 4, Type: float
			constexpr auto CurrentFocusDistance = 0x698; // Size: 4, Type: float
	}
} 
