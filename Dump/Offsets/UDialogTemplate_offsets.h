namespace offsets
{
	namespace UDialogTemplate
	{
			constexpr auto DialogOpenSound = 0x2b8; // Size: 8, Type: struct UFMODEvent*
			constexpr auto KeyIconWidgetList = 0x2d8; // Size: 16, Type: struct TArray<struct UKeyIconWidget*>
			constexpr auto Anim_Open = 0x2f0; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto Anim_Close = 0x2f8; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto OpenPrevWidgetAnimList = 0x300; // Size: 16, Type: struct TArray<struct FString>
			constexpr auto ClosePrevWidgetAnimList = 0x310; // Size: 16, Type: struct TArray<struct FString>
			constexpr auto PrevWidget = 0x320; // Size: 8, Type: struct UUserWidget*
			constexpr auto bWorldRenderingFlag = 0x328; // Size: 1, Type: bool
	}
} 
