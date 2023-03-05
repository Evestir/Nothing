namespace offsets
{
	namespace ADriftGuide
	{
			constexpr auto ForceUpdate = 0x221; // Size: 1, Type: bool
			constexpr auto DriftStartIndex = 0x224; // Size: 4, Type: int32_t
			constexpr auto DriftEndIndex = 0x228; // Size: 4, Type: int32_t
			constexpr auto DecalInterval = 0x22c; // Size: 4, Type: int32_t
			constexpr auto LineWidth = 0x230; // Size: 4, Type: int32_t
			constexpr auto StartDecalOffset = 0x234; // Size: 4, Type: float
			constexpr auto EndDecalOffset = 0x238; // Size: 4, Type: float
			constexpr auto SplineGuideComponent = 0x240; // Size: 8, Type: struct USplineComponent*
			constexpr auto SplineGuideComponent_Left = 0x248; // Size: 8, Type: struct USplineComponent*
			constexpr auto SplineGuideComponent_Right = 0x250; // Size: 8, Type: struct USplineComponent*
			constexpr auto SplineMeshComponentArray = 0x258; // Size: 16, Type: struct TArray<struct USplineMeshComponent*>
			constexpr auto DecalComponentArray = 0x268; // Size: 16, Type: struct TArray<struct UDecalComponent*>
			constexpr auto DecalMaterial = 0x2f0; // Size: 40, Type: struct TSoftObjectPtr<UMaterialInstance>
			constexpr auto StartDecalMaterial = 0x318; // Size: 40, Type: struct TSoftObjectPtr<UMaterialInstance>
			constexpr auto EndDecalMaterial = 0x340; // Size: 40, Type: struct TSoftObjectPtr<UMaterialInstance>
			constexpr auto SideStaticMeshLeft = 0x368; // Size: 40, Type: struct TSoftObjectPtr<UStaticMesh>
			constexpr auto SideStaticMeshRight = 0x390; // Size: 40, Type: struct TSoftObjectPtr<UStaticMesh>
			constexpr auto LeftDirectionArrowMaterial = 0x3b8; // Size: 120, Type: struct FDriftAngleInfo
			constexpr auto RightDirectionArrowMaterial = 0x430; // Size: 120, Type: struct FDriftAngleInfo
			constexpr auto DriftDirectionArrowBillboard = 0x4a8; // Size: 8, Type: struct UMaterialBillboardComponent*
			constexpr auto DistanceToOpacityCurve = 0x4b0; // Size: 40, Type: struct TSoftObjectPtr<UCurveFloat>
			constexpr auto BillboardDriftDirectionArrowSize = 0x4d8; // Size: 8, Type: struct FVector2D
			constexpr auto DistanceToSizeCurve = 0x4e0; // Size: 40, Type: struct TSoftObjectPtr<UCurveFloat>
			constexpr auto BillboardDriftDirectionArrowOffset = 0x508; // Size: 12, Type: struct FVector
			constexpr auto AngleRangeMax45 = 0x514; // Size: 4, Type: int32_t
			constexpr auto AngleRangeMax90 = 0x518; // Size: 4, Type: int32_t
			constexpr auto MergedMesh = 0x520; // Size: 8, Type: struct UStaticMesh*
			constexpr auto MergedMeshComponent = 0x528; // Size: 8, Type: struct UStaticMeshComponent*
	}
} 
