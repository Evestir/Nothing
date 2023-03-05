namespace offsets
{
	namespace AEQSTestingPawn
	{
			constexpr auto QueryTemplate = 0x4c0; // Size: 8, Type: struct UEnvQuery*
			constexpr auto QueryParams = 0x4c8; // Size: 16, Type: struct TArray<struct FEnvNamedValue>
			constexpr auto QueryConfig = 0x4d8; // Size: 16, Type: struct TArray<struct FAIDynamicParam>
			constexpr auto TimeLimitPerStep = 0x4e8; // Size: 4, Type: float
			constexpr auto StepToDebugDraw = 0x4ec; // Size: 4, Type: int32_t
			constexpr auto HighlightMode = 0x4f0; // Size: 1, Type: enum class EEnvQueryHightlightMode
			constexpr auto bDrawLabels = 0x4f4; // Size: 1, Type: char
			constexpr auto bDrawFailedItems = 0x4f4; // Size: 1, Type: char
			constexpr auto bReRunQueryOnlyOnFinishedMove = 0x4f4; // Size: 1, Type: char
			constexpr auto bShouldBeVisibleInGame = 0x4f4; // Size: 1, Type: char
			constexpr auto bTickDuringGame = 0x4f4; // Size: 1, Type: char
			constexpr auto QueryingMode = 0x4f8; // Size: 1, Type: enum class EEnvQueryRunMode
			constexpr auto NavAgentProperties = 0x500; // Size: 48, Type: struct FNavAgentProperties
	}
} 
