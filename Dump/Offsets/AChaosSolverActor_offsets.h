namespace offsets
{
	namespace AChaosSolverActor
	{
			constexpr auto Properties = 0x220; // Size: 104, Type: struct FChaosSolverConfiguration
			constexpr auto TimeStepMultiplier = 0x288; // Size: 4, Type: float
			constexpr auto CollisionIterations = 0x28c; // Size: 4, Type: int32_t
			constexpr auto PushOutIterations = 0x290; // Size: 4, Type: int32_t
			constexpr auto PushOutPairIterations = 0x294; // Size: 4, Type: int32_t
			constexpr auto ClusterConnectionFactor = 0x298; // Size: 4, Type: float
			constexpr auto ClusterUnionConnectionType = 0x29c; // Size: 1, Type: enum class EClusterConnectionTypeEnum
			constexpr auto DoGenerateCollisionData = 0x29d; // Size: 1, Type: bool
			constexpr auto CollisionFilterSettings = 0x2a0; // Size: 16, Type: struct FSolverCollisionFilterSettings
			constexpr auto DoGenerateBreakingData = 0x2b0; // Size: 1, Type: bool
			constexpr auto BreakingFilterSettings = 0x2b4; // Size: 16, Type: struct FSolverBreakingFilterSettings
			constexpr auto DoGenerateTrailingData = 0x2c4; // Size: 1, Type: bool
			constexpr auto TrailingFilterSettings = 0x2c8; // Size: 16, Type: struct FSolverTrailingFilterSettings
			constexpr auto MassScale = 0x2d8; // Size: 4, Type: float
			constexpr auto bGenerateContactGraph = 0x2dc; // Size: 1, Type: bool
			constexpr auto bHasFloor = 0x2dd; // Size: 1, Type: bool
			constexpr auto FloorHeight = 0x2e0; // Size: 4, Type: float
			constexpr auto ChaosDebugSubstepControl = 0x2e4; // Size: 3, Type: struct FChaosDebugSubstepControl
			constexpr auto SpriteComponent = 0x2e8; // Size: 8, Type: struct UBillboardComponent*
			constexpr auto GameplayEventDispatcherComponent = 0x308; // Size: 8, Type: struct UChaosGameplayEventDispatcher*
	}
} 
