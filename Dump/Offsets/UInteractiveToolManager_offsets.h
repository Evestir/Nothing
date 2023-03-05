namespace offsets
{
	namespace UInteractiveToolManager
	{
			constexpr auto ActiveLeftTool = 0x30; // Size: 8, Type: struct UInteractiveTool*
			constexpr auto ActiveRightTool = 0x38; // Size: 8, Type: struct UInteractiveTool*
			constexpr auto ToolBuilders = 0x90; // Size: 80, Type: struct TMap<struct FString, struct UInteractiveToolBuilder*>
	}
} 
