namespace offsets
{
	namespace UEdGraphNode
	{
			constexpr auto DeprecatedPins = 0x38; // Size: 16, Type: struct TArray<struct UEdGraphPin_Deprecated*>
			constexpr auto NodePosX = 0x48; // Size: 4, Type: int32_t
			constexpr auto NodePosY = 0x4c; // Size: 4, Type: int32_t
			constexpr auto NodeWidth = 0x50; // Size: 4, Type: int32_t
			constexpr auto NodeHeight = 0x54; // Size: 4, Type: int32_t
			constexpr auto AdvancedPinDisplay = 0x58; // Size: 1, Type: enum class ENodeAdvancedPins
			constexpr auto EnabledState = 0x59; // Size: 1, Type: enum class ENodeEnabledState
			constexpr auto bDisplayAsDisabled = 0x5b; // Size: 1, Type: char
			constexpr auto bUserSetEnabledState = 0x5b; // Size: 1, Type: char
			constexpr auto bIsNodeEnabled = 0x5b; // Size: 1, Type: char
			constexpr auto bHasCompilerMessage = 0x5b; // Size: 1, Type: char
			constexpr auto NodeComment = 0x60; // Size: 16, Type: struct FString
			constexpr auto ErrorType = 0x70; // Size: 4, Type: int32_t
			constexpr auto ErrorMsg = 0x78; // Size: 16, Type: struct FString
			constexpr auto NodeGuid = 0x88; // Size: 16, Type: struct FGuid
	}
} 
