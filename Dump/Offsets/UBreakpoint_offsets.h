namespace offsets
{
	namespace UBreakpoint
	{
			constexpr auto bEnabled = 0x28; // Size: 1, Type: char
			constexpr auto Node = 0x30; // Size: 8, Type: struct UEdGraphNode*
			constexpr auto bStepOnce = 0x38; // Size: 1, Type: char
			constexpr auto bStepOnce_WasPreviouslyDisabled = 0x38; // Size: 1, Type: char
			constexpr auto bStepOnce_RemoveAfterHit = 0x38; // Size: 1, Type: char
	}
} 
