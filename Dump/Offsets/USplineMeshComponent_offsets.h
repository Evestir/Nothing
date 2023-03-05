namespace offsets
{
	namespace USplineMeshComponent
	{
			constexpr auto SplineParams = 0x520; // Size: 88, Type: struct FSplineMeshParams
			constexpr auto SplineUpDir = 0x578; // Size: 12, Type: struct FVector
			constexpr auto SplineBoundaryMin = 0x584; // Size: 4, Type: float
			constexpr auto CachedMeshBodySetupGuid = 0x588; // Size: 16, Type: struct FGuid
			constexpr auto BodySetup = 0x598; // Size: 8, Type: struct UBodySetup*
			constexpr auto SplineBoundaryMax = 0x5a0; // Size: 4, Type: float
			constexpr auto bAllowSplineEditingPerInstance = 0x5a4; // Size: 1, Type: char
			constexpr auto bSmoothInterpRollScale = 0x5a4; // Size: 1, Type: char
			constexpr auto bMeshDirty = 0x5a4; // Size: 1, Type: char
			constexpr auto ForwardAxis = 0x5a5; // Size: 1, Type: enum class ESplineMeshAxis
			constexpr auto VirtualTextureMainPassMaxDrawDistance = 0x5a8; // Size: 4, Type: float
	}
} 
