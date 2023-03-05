namespace offsets
{
	namespace ULandscapeSplineSegment
	{
			constexpr auto Connections[2] = 0x28; // Size: 48, Type: struct FLandscapeSplineSegmentConnection
			constexpr auto SplineInfo = 0x58; // Size: 24, Type: struct FInterpCurveVector
			constexpr auto Points = 0x70; // Size: 16, Type: struct TArray<struct FLandscapeSplineInterpPoint>
			constexpr auto Bounds = 0x80; // Size: 28, Type: struct FBox
			constexpr auto LocalMeshComponents = 0xa0; // Size: 16, Type: struct TArray<struct USplineMeshComponent*>
	}
} 
