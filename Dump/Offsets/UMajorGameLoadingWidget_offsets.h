namespace offsets
{
	namespace UMajorGameLoadingWidget
	{
			constexpr auto Switcher_Top = 0x2a0; // Size: 8, Type: struct UWidgetSwitcher*
			constexpr auto LoadingGameInformation = 0x2a8; // Size: 8, Type: struct ULoadingGameInformationWidget*
			constexpr auto LoadingAdvertising = 0x2b0; // Size: 8, Type: struct ULoadingAdvertisingWidget*
			constexpr auto Overlay_Bottom = 0x2b8; // Size: 8, Type: struct UOverlay*
			constexpr auto HB_Tips = 0x2c0; // Size: 8, Type: struct UHorizontalBox*
			constexpr auto LoadingProgressBar = 0x2c8; // Size: 8, Type: struct UProgressBar*
			constexpr auto LoadingProgressBarRightDeco = 0x2d0; // Size: 8, Type: struct UProgressBar*
			constexpr auto LeftIndentSpace = 0x2d8; // Size: 8, Type: struct USpacer*
			constexpr auto RightIndentSpace = 0x2e0; // Size: 8, Type: struct USpacer*
			constexpr auto CrossPlayToast = 0x2e8; // Size: 8, Type: struct UUserWidget*
			constexpr auto PresetWidget = 0x2f0; // Size: 8, Type: struct ULoadingPresetWidget*
			constexpr auto GameType = 0x2f8; // Size: 1, Type: enum class ERaceMode
			constexpr auto PlayersWidgetContainer = 0x300; // Size: 80, Type: struct TMap<enum class ERaceMode, ULoadingPresetWidget*>
	}
} 
