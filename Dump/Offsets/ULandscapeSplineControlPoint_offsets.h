namespace offsets
{
	namespace ULandscapeSplineControlPoint
	{
			constexpr auto Location = 0x28; // Size: 12, Type: struct FVector
			constexpr auto Rotation = 0x34; // Size: 12, Type: struct FRotator
			constexpr auto Width = 0x40; // Size: 4, Type: float
			constexpr auto LayerWidthRatio = 0x44; // Size: 4, Type: float
			constexpr auto SideFalloff = 0x48; // Size: 4, Type: float
			constexpr auto LeftSideFalloffFactor = 0x4c; // Size: 4, Type: float
			constexpr auto RightSideFalloffFactor = 0x50; // Size: 4, Type: float
			constexpr auto LeftSideLayerFalloffFactor = 0x54; // Size: 4, Type: float
			constexpr auto RightSideLayerFalloffFactor = 0x58; // Size: 4, Type: float
			constexpr auto EndFalloff = 0x5c; // Size: 4, Type: float
			constexpr auto ConnectedSegments = 0x60; // Size: 16, Type: struct TArray<struct FLandscapeSplineConnection>
			constexpr auto Points = 0x70; // Size: 16, Type: struct TArray<struct FLandscapeSplineInterpPoint>
			constexpr auto Bounds = 0x80; // Size: 28, Type: struct FBox
			constexpr auto LocalMeshComponent = 0xa0; // Size: 8, Type: struct UControlPointMeshComponent*
	}
} 
