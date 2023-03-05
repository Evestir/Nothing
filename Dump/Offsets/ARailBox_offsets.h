namespace offsets
{
	namespace ARailBox
	{
			constexpr auto SplineComponent = 0x228; // Size: 8, Type: struct USplineComponent*
			constexpr auto StaticMeshComponentArray = 0x230; // Size: 16, Type: struct TArray<struct UStaticMeshComponent*>
			constexpr auto BeginNode = 0x240; // Size: 1, Type: bool
			constexpr auto GenerateSpline = 0x241; // Size: 1, Type: bool
			constexpr auto MinVelocity = 0x244; // Size: 4, Type: float
			constexpr auto MaxVelocity = 0x248; // Size: 4, Type: float
			constexpr auto AccelFactor = 0x24c; // Size: 4, Type: float
			constexpr auto ResistFactor = 0x250; // Size: 4, Type: float
			constexpr auto GravityFactor = 0x254; // Size: 4, Type: float
			constexpr auto TargetFov = 0x258; // Size: 4, Type: float
			constexpr auto TargetFallbackDistance = 0x25c; // Size: 4, Type: float
	}
} 
