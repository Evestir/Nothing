namespace offsets
{
	namespace ALicenseObjectSpawnSpline
	{
			constexpr auto OptimizeSplineInterval = 0x220; // Size: 4, Type: float
			constexpr auto SplineComponent = 0x228; // Size: 8, Type: struct USplineComponent*
			constexpr auto bShowDebug = 0x230; // Size: 1, Type: bool
			constexpr auto CopyActorName = 0x238; // Size: 16, Type: struct FString
			constexpr auto Interval = 0x248; // Size: 4, Type: float
			constexpr auto ObjectMeshClass = 0x250; // Size: 40, Type: struct TSoftObjectPtr<UStaticMesh>
			constexpr auto ObjectScale = 0x278; // Size: 4, Type: float
			constexpr auto ObjectAddLocation = 0x27c; // Size: 12, Type: struct FVector
			constexpr auto ObjectAddRotation = 0x288; // Size: 12, Type: struct FRotator
			constexpr auto ObjectTransformArray = 0x298; // Size: 16, Type: struct TArray<struct FTransform>
	}
} 
