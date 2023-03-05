namespace offsets
{
	namespace UPawnAction_Move
	{
			constexpr auto GoalActor = 0x90; // Size: 8, Type: struct AActor*
			constexpr auto GoalLocation = 0x98; // Size: 12, Type: struct FVector
			constexpr auto AcceptableRadius = 0xa4; // Size: 4, Type: float
			constexpr auto FilterClass = 0xa8; // Size: 8, Type: UNavigationQueryFilter*
			constexpr auto bAllowStrafe = 0xb0; // Size: 1, Type: char
			constexpr auto bFinishOnOverlap = 0xb0; // Size: 1, Type: char
			constexpr auto bUsePathfinding = 0xb0; // Size: 1, Type: char
			constexpr auto bAllowPartialPath = 0xb0; // Size: 1, Type: char
			constexpr auto bProjectGoalToNavigation = 0xb0; // Size: 1, Type: char
			constexpr auto bUpdatePathToGoal = 0xb0; // Size: 1, Type: char
			constexpr auto bAbortChildActionOnPathChange = 0xb0; // Size: 1, Type: char
	}
} 
