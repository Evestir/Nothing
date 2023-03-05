namespace offsets
{
	namespace AAIController
	{
			constexpr auto bStartAILogicOnPossess = 0x2d0; // Size: 1, Type: char
			constexpr auto bStopAILogicOnUnposses = 0x2d0; // Size: 1, Type: char
			constexpr auto bLOSflag = 0x2d0; // Size: 1, Type: char
			constexpr auto bSkipExtraLOSChecks = 0x2d0; // Size: 1, Type: char
			constexpr auto bAllowStrafe = 0x2d0; // Size: 1, Type: char
			constexpr auto bWantsPlayerState = 0x2d0; // Size: 1, Type: char
			constexpr auto bSetControlRotationFromPawnOrientation = 0x2d0; // Size: 1, Type: char
			constexpr auto PathFollowingComponent = 0x2d8; // Size: 8, Type: struct UPathFollowingComponent*
			constexpr auto BrainComponent = 0x2e0; // Size: 8, Type: struct UBrainComponent*
			constexpr auto PerceptionComponent = 0x2e8; // Size: 8, Type: struct UAIPerceptionComponent*
			constexpr auto ActionsComp = 0x2f0; // Size: 8, Type: struct UPawnActionsComponent*
			constexpr auto Blackboard = 0x2f8; // Size: 8, Type: struct UBlackboardComponent*
			constexpr auto CachedGameplayTasksComponent = 0x300; // Size: 8, Type: struct UGameplayTasksComponent*
			constexpr auto DefaultNavigationFilterClass = 0x308; // Size: 8, Type: UNavigationQueryFilter*
			constexpr auto ReceiveMoveCompleted = 0x310; // Size: 16, Type: struct FMulticastInlineDelegate
	}
} 
