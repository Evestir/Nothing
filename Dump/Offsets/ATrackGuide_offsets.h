namespace offsets
{
	namespace ATrackGuide
	{
			constexpr auto SplineGuideComponent = 0x220; // Size: 8, Type: struct USplineComponent*
			constexpr auto ArrowInterval = 0x228; // Size: 4, Type: float
			constexpr auto IsClosedLoop = 0x22c; // Size: 1, Type: bool
			constexpr auto bShowAll = 0x22d; // Size: 1, Type: bool
			constexpr auto bUseClosestPoint = 0x22e; // Size: 1, Type: bool
			constexpr auto TrackGuideWidthScale = 0x230; // Size: 4, Type: float
			constexpr auto SplitStartIndex = 0x234; // Size: 4, Type: int32_t
			constexpr auto SplitIndex = 0x238; // Size: 4, Type: int32_t
			constexpr auto SubPathSpline = 0x240; // Size: 16, Type: struct TArray<struct FVector2D>
			constexpr auto SubPathSplineOffset = 0x250; // Size: 12, Type: struct FVector
			constexpr auto SplineMesh = 0x260; // Size: 40, Type: struct TSoftObjectPtr<UStaticMesh>
			constexpr auto SplineMeshMaterial = 0x288; // Size: 40, Type: struct TSoftObjectPtr<UMaterial>
			constexpr auto MergedSplineMesh = 0x2b0; // Size: 40, Type: struct TSoftObjectPtr<UStaticMesh>
			constexpr auto SplineMeshComponentArray = 0x2f0; // Size: 16, Type: struct TArray<struct USplineMeshComponent*>
			constexpr auto SplitSplines = 0x300; // Size: 16, Type: struct TArray<struct USplineComponent*>
			constexpr auto Spline_SubPath = 0x310; // Size: 16, Type: struct TArray<struct USplineComponent*>
			constexpr auto ShortCutSplines = 0x320; // Size: 80, Type: struct TMap<struct FString, struct USplineComponent*>
			constexpr auto Spline_RecordPath = 0x370; // Size: 8, Type: struct USplineComponent*
			constexpr auto LastSaveTrackGuideVersion = 0x378; // Size: 4, Type: int32_t
			constexpr auto LastPosition = 0x380; // Size: 12, Type: struct FVector
			constexpr auto MergedSplineMeshMaterialDynamic = 0x398; // Size: 8, Type: struct UMaterialInstanceDynamic*
	}
} 
