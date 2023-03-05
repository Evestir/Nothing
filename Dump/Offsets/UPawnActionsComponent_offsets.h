namespace offsets
{
	namespace UPawnActionsComponent
	{
			constexpr auto ControlledPawn = 0xb0; // Size: 8, Type: struct APawn*
			constexpr auto ActionStacks = 0xb8; // Size: 16, Type: struct TArray<struct FPawnActionStack>
			constexpr auto ActionEvents = 0xc8; // Size: 16, Type: struct TArray<struct FPawnActionEvent>
			constexpr auto CurrentAction = 0xd8; // Size: 8, Type: struct UPawnAction*
	}
} 
