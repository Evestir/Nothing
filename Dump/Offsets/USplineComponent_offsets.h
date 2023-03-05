namespace offsets
{
	namespace USplineComponent
	{
			constexpr auto SplineCurves = 0x470; // Size: 112, Type: struct FSplineCurves
			constexpr auto SplineInfo = 0x4e0; // Size: 24, Type: struct FInterpCurveVector
			constexpr auto SplineRotInfo = 0x4f8; // Size: 24, Type: struct FInterpCurveQuat
			constexpr auto SplineScaleInfo = 0x510; // Size: 24, Type: struct FInterpCurveVector
			constexpr auto SplineReparamTable = 0x528; // Size: 24, Type: struct FInterpCurveFloat
			constexpr auto bAllowSplineEditingPerInstance = 0x540; // Size: 1, Type: bool
			constexpr auto ReparamStepsPerSegment = 0x544; // Size: 4, Type: int32_t
			constexpr auto Duration = 0x548; // Size: 4, Type: float
			constexpr auto bStationaryEndpoints = 0x54c; // Size: 1, Type: bool
			constexpr auto bSplineHasBeenEdited = 0x54d; // Size: 1, Type: bool
			constexpr auto bModifiedByConstructionScript = 0x54e; // Size: 1, Type: bool
			constexpr auto bInputSplinePointsToConstructionScript = 0x54f; // Size: 1, Type: bool
			constexpr auto bDrawDebug = 0x550; // Size: 1, Type: bool
			constexpr auto bClosedLoop = 0x551; // Size: 1, Type: bool
			constexpr auto bLoopPositionOverride = 0x552; // Size: 1, Type: bool
			constexpr auto LoopPosition = 0x554; // Size: 4, Type: float
			constexpr auto DefaultUpVector = 0x558; // Size: 12, Type: struct FVector
	}
} 
