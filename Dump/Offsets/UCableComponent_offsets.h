namespace offsets
{
	namespace UCableComponent
	{
			constexpr auto bAttachStart = 0x4a8; // Size: 1, Type: bool
			constexpr auto bAttachEnd = 0x4a9; // Size: 1, Type: bool
			constexpr auto AttachEndTo = 0x4b0; // Size: 40, Type: struct FComponentReference
			constexpr auto AttachEndToSocketName = 0x4d8; // Size: 8, Type: struct FName
			constexpr auto EndLocation = 0x4e0; // Size: 12, Type: struct FVector
			constexpr auto CableLength = 0x4ec; // Size: 4, Type: float
			constexpr auto NumSegments = 0x4f0; // Size: 4, Type: int32_t
			constexpr auto SubstepTime = 0x4f4; // Size: 4, Type: float
			constexpr auto SolverIterations = 0x4f8; // Size: 4, Type: int32_t
			constexpr auto bEnableStiffness = 0x4fc; // Size: 1, Type: bool
			constexpr auto bUseSubstepping = 0x4fd; // Size: 1, Type: bool
			constexpr auto bSkipCableUpdateWhenNotVisible = 0x4fe; // Size: 1, Type: bool
			constexpr auto bSkipCableUpdateWhenNotOwnerRecentlyRendered = 0x4ff; // Size: 1, Type: bool
			constexpr auto bEnableCollision = 0x500; // Size: 1, Type: bool
			constexpr auto CollisionFriction = 0x504; // Size: 4, Type: float
			constexpr auto CableForce = 0x508; // Size: 12, Type: struct FVector
			constexpr auto CableGravityScale = 0x514; // Size: 4, Type: float
			constexpr auto CableWidth = 0x518; // Size: 4, Type: float
			constexpr auto NumSides = 0x51c; // Size: 4, Type: int32_t
			constexpr auto TileMaterial = 0x520; // Size: 4, Type: float
	}
} 
