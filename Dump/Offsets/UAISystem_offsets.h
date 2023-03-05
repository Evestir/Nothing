namespace offsets
{
	namespace UAISystem
	{
			constexpr auto PerceptionSystemClassName = 0x58; // Size: 24, Type: struct FSoftClassPath
			constexpr auto HotSpotManagerClassName = 0x70; // Size: 24, Type: struct FSoftClassPath
			constexpr auto AcceptanceRadius = 0x88; // Size: 4, Type: float
			constexpr auto PathfollowingRegularPathPointAcceptanceRadius = 0x8c; // Size: 4, Type: float
			constexpr auto PathfollowingNavLinkAcceptanceRadius = 0x90; // Size: 4, Type: float
			constexpr auto bFinishMoveOnGoalOverlap = 0x94; // Size: 1, Type: bool
			constexpr auto bAcceptPartialPaths = 0x95; // Size: 1, Type: bool
			constexpr auto bAllowStrafing = 0x96; // Size: 1, Type: bool
			constexpr auto bEnableBTAITasks = 0x97; // Size: 1, Type: bool
			constexpr auto bAllowControllersAsEQSQuerier = 0x98; // Size: 1, Type: bool
			constexpr auto bEnableDebuggerPlugin = 0x99; // Size: 1, Type: bool
			constexpr auto bForgetStaleActors = 0x9a; // Size: 1, Type: bool
			constexpr auto bAddBlackboardSelfKey = 0x9b; // Size: 1, Type: bool
			constexpr auto DefaultSightCollisionChannel = 0x9c; // Size: 1, Type: enum class ECollisionChannel
			constexpr auto BehaviorTreeManager = 0xa0; // Size: 8, Type: struct UBehaviorTreeManager*
			constexpr auto EnvironmentQueryManager = 0xa8; // Size: 8, Type: struct UEnvQueryManager*
			constexpr auto PerceptionSystem = 0xb0; // Size: 8, Type: struct UAIPerceptionSystem*
			constexpr auto AllProxyObjects = 0xb8; // Size: 16, Type: struct TArray<struct UAIAsyncTaskBlueprintProxy*>
			constexpr auto HotSpotManager = 0xc8; // Size: 8, Type: struct UAIHotSpotManager*
			constexpr auto NavLocalGrids = 0xd0; // Size: 8, Type: struct UNavLocalGridManager*
	}
} 
