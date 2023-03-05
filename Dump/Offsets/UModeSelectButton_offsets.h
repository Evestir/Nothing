namespace offsets
{
	namespace UModeSelectButton
	{
			constexpr auto ModeNameText = 0x3e8; // Size: 24, Type: struct FText
			constexpr auto BackgroundBrush = 0x400; // Size: 136, Type: struct FSlateBrush
			constexpr auto HighlightBackgroundBrush = 0x488; // Size: 136, Type: struct FSlateBrush
			constexpr auto ModeBrush = 0x510; // Size: 136, Type: struct FSlateBrush
			constexpr auto HighlightModeBrush = 0x598; // Size: 136, Type: struct FSlateBrush
			constexpr auto ModeImageOffset = 0x620; // Size: 8, Type: struct FVector2D
			constexpr auto V_ModeName = 0x628; // Size: 8, Type: struct UKdTextBlock*
			constexpr auto V_HighlightModeName = 0x630; // Size: 8, Type: struct UKdTextBlock*
			constexpr auto V_BackgroundImage = 0x638; // Size: 8, Type: struct UImage*
			constexpr auto V_HighlightBackgroundImage = 0x640; // Size: 8, Type: struct UImage*
			constexpr auto V_ModeImage = 0x648; // Size: 8, Type: struct UImage*
			constexpr auto V_HighlightModeImage = 0x650; // Size: 8, Type: struct UImage*
	}
} 
