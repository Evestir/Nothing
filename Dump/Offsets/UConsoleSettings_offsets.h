namespace offsets
{
	namespace UConsoleSettings
	{
			constexpr auto MaxScrollbackSize = 0x28; // Size: 4, Type: int32_t
			constexpr auto ManualAutoCompleteList = 0x30; // Size: 16, Type: struct TArray<struct FAutoCompleteCommand>
			constexpr auto AutoCompleteMapPaths = 0x40; // Size: 16, Type: struct TArray<struct FString>
			constexpr auto BackgroundOpacityPercentage = 0x50; // Size: 4, Type: float
			constexpr auto bOrderTopToBottom = 0x54; // Size: 1, Type: bool
			constexpr auto bDisplayHelpInAutoComplete = 0x55; // Size: 1, Type: bool
			constexpr auto InputColor = 0x58; // Size: 4, Type: struct FColor
			constexpr auto HistoryColor = 0x5c; // Size: 4, Type: struct FColor
			constexpr auto AutoCompleteCommandColor = 0x60; // Size: 4, Type: struct FColor
			constexpr auto AutoCompleteCVarColor = 0x64; // Size: 4, Type: struct FColor
			constexpr auto AutoCompleteFadedColor = 0x68; // Size: 4, Type: struct FColor
	}
} 
