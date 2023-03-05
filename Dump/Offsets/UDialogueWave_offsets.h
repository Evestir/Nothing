namespace offsets
{
	namespace UDialogueWave
	{
			constexpr auto bMature = 0x28; // Size: 1, Type: char
			constexpr auto bOverride_SubtitleOverride = 0x28; // Size: 1, Type: char
			constexpr auto SpokenText = 0x30; // Size: 16, Type: struct FString
			constexpr auto SubtitleOverride = 0x40; // Size: 16, Type: struct FString
			constexpr auto ContextMappings = 0x50; // Size: 16, Type: struct TArray<struct FDialogueContextMapping>
			constexpr auto LocalizationGUID = 0x60; // Size: 16, Type: struct FGuid
	}
} 
