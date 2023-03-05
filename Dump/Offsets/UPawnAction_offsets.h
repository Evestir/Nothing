namespace offsets
{
	namespace UPawnAction
	{
			constexpr auto ChildAction = 0x28; // Size: 8, Type: struct UPawnAction*
			constexpr auto ParentAction = 0x30; // Size: 8, Type: struct UPawnAction*
			constexpr auto OwnerComponent = 0x38; // Size: 8, Type: struct UPawnActionsComponent*
			constexpr auto Instigator = 0x40; // Size: 8, Type: struct UObject*
			constexpr auto BrainComp = 0x48; // Size: 8, Type: struct UBrainComponent*
			constexpr auto bAllowNewSameClassInstance = 0x80; // Size: 1, Type: char
			constexpr auto bReplaceActiveSameClassInstance = 0x80; // Size: 1, Type: char
			constexpr auto bShouldPauseMovement = 0x80; // Size: 1, Type: char
			constexpr auto bAlwaysNotifyOnFinished = 0x80; // Size: 1, Type: char
	}
} 
