namespace offsets
{
	namespace ALicenseTrackLine
	{
			constexpr auto SplineComponent = 0x220; // Size: 8, Type: struct USplineComponent*
			constexpr auto bLicenseTrackGuide = 0x228; // Size: 1, Type: bool
			constexpr auto bClosedLoop = 0x229; // Size: 1, Type: bool
			constexpr auto bShowDebug = 0x22a; // Size: 1, Type: bool
			constexpr auto StartCheckPointName = 0x230; // Size: 16, Type: struct FString
			constexpr auto CopyActorName = 0x240; // Size: 16, Type: struct FString
			constexpr auto ArrowInterval = 0x250; // Size: 4, Type: float
			constexpr auto TrackLineWidthScale = 0x254; // Size: 4, Type: float
			constexpr auto SplineMesh = 0x258; // Size: 40, Type: struct TSoftObjectPtr<UStaticMesh>
			constexpr auto SplineMeshMaterial = 0x280; // Size: 40, Type: struct TSoftObjectPtr<UMaterialInterface>
			constexpr auto MergedSplineMesh = 0x2a8; // Size: 40, Type: struct TSoftObjectPtr<UStaticMesh>
			constexpr auto SplineMeshComponentArray = 0x2d0; // Size: 16, Type: struct TArray<struct USplineMeshComponent*>
			constexpr auto MergedSplineMeshMaterialDynamic = 0x2f0; // Size: 8, Type: struct UMaterialInstanceDynamic*
	}
} 
