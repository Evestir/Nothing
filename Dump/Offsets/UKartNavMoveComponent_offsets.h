namespace offsets
{
	namespace UKartNavMoveComponent
	{
			constexpr auto Movement = 0xc0; // Size: 8, Type: struct UKartMovementComponent*
			constexpr auto ItemComponent = 0xc8; // Size: 8, Type: struct UItemComponent*
			constexpr auto SplineGuide = 0xd0; // Size: 8, Type: struct USplineComponent*
			constexpr auto SplineList = 0xd8; // Size: 16, Type: struct TArray<struct USplineComponent*>
			constexpr auto Spline_SubPath = 0xe8; // Size: 16, Type: struct TArray<struct USplineComponent*>
			constexpr auto ShortCutSplineGuide = 0xf8; // Size: 80, Type: struct TMap<struct FString, struct USplineComponent*>
			constexpr auto CurrentShortCut = 0x148; // Size: 8, Type: struct USplineComponent*
			constexpr auto DriftSpline = 0x1b0; // Size: 8, Type: struct USplineComponent*
			constexpr auto RailEndDirection = 0x1c0; // Size: 12, Type: struct FVector
	}
} 
