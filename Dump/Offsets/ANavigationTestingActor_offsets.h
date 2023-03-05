namespace offsets
{
	namespace ANavigationTestingActor
	{
			constexpr auto CapsuleComponent = 0x230; // Size: 8, Type: struct UCapsuleComponent*
			constexpr auto InvokerComponent = 0x238; // Size: 8, Type: struct UNavigationInvokerComponent*
			constexpr auto bActAsNavigationInvoker = 0x240; // Size: 1, Type: char
			constexpr auto NavAgentProps = 0x248; // Size: 48, Type: struct FNavAgentProperties
			constexpr auto QueryingExtent = 0x278; // Size: 12, Type: struct FVector
			constexpr auto MyNavData = 0x288; // Size: 8, Type: struct ANavigationData*
			constexpr auto ProjectedLocation = 0x290; // Size: 12, Type: struct FVector
			constexpr auto bProjectedLocationValid = 0x29c; // Size: 1, Type: char
			constexpr auto bSearchStart = 0x29c; // Size: 1, Type: char
			constexpr auto CostLimitFactor = 0x2a0; // Size: 4, Type: float
			constexpr auto MinimumCostLimit = 0x2a4; // Size: 4, Type: float
			constexpr auto bBacktracking = 0x2a8; // Size: 1, Type: char
			constexpr auto bUseHierarchicalPathfinding = 0x2a8; // Size: 1, Type: char
			constexpr auto bGatherDetailedInfo = 0x2a8; // Size: 1, Type: char
			constexpr auto bDrawDistanceToWall = 0x2a8; // Size: 1, Type: char
			constexpr auto bShowNodePool = 0x2a8; // Size: 1, Type: char
			constexpr auto bShowBestPath = 0x2a8; // Size: 1, Type: char
			constexpr auto bShowDiffWithPreviousStep = 0x2a8; // Size: 1, Type: char
			constexpr auto bShouldBeVisibleInGame = 0x2a8; // Size: 1, Type: char
			constexpr auto CostDisplayMode = 0x2ac; // Size: 1, Type: enum class ENavCostDisplay
			constexpr auto TextCanvasOffset = 0x2b0; // Size: 8, Type: struct FVector2D
			constexpr auto bPathExist = 0x2b8; // Size: 1, Type: char
			constexpr auto bPathIsPartial = 0x2b8; // Size: 1, Type: char
			constexpr auto bPathSearchOutOfNodes = 0x2b8; // Size: 1, Type: char
			constexpr auto PathfindingTime = 0x2bc; // Size: 4, Type: float
			constexpr auto PathCost = 0x2c0; // Size: 4, Type: float
			constexpr auto PathfindingSteps = 0x2c4; // Size: 4, Type: int32_t
			constexpr auto OtherActor = 0x2c8; // Size: 8, Type: struct ANavigationTestingActor*
			constexpr auto FilterClass = 0x2d0; // Size: 8, Type: UNavigationQueryFilter*
			constexpr auto ShowStepIndex = 0x2d8; // Size: 4, Type: int32_t
			constexpr auto OffsetFromCornersDistance = 0x2dc; // Size: 4, Type: float
	}
} 
