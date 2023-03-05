namespace offsets
{
	namespace UInterpTrackMove
	{
			constexpr auto PosTrack = 0x70; // Size: 24, Type: struct FInterpCurveVector
			constexpr auto EulerTrack = 0x88; // Size: 24, Type: struct FInterpCurveVector
			constexpr auto LookupTrack = 0xa0; // Size: 16, Type: struct FInterpLookupTrack
			constexpr auto LookAtGroupName = 0xb0; // Size: 8, Type: struct FName
			constexpr auto LinCurveTension = 0xb8; // Size: 4, Type: float
			constexpr auto AngCurveTension = 0xbc; // Size: 4, Type: float
			constexpr auto bUseQuatInterpolation = 0xc0; // Size: 1, Type: char
			constexpr auto bShowArrowAtKeys = 0xc0; // Size: 1, Type: char
			constexpr auto bDisableMovement = 0xc0; // Size: 1, Type: char
			constexpr auto bShowTranslationOnCurveEd = 0xc0; // Size: 1, Type: char
			constexpr auto bShowRotationOnCurveEd = 0xc0; // Size: 1, Type: char
			constexpr auto bHide3DTrack = 0xc0; // Size: 1, Type: char
			constexpr auto RotMode = 0xc4; // Size: 1, Type: enum class EInterpTrackMoveRotMode
	}
} 
