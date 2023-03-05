namespace offsets
{
	namespace UKeyIconWidget
	{
			constexpr auto Key_PC = 0x3e8; // Size: 24, Type: struct FKey
			constexpr auto Key_Gamepad = 0x400; // Size: 24, Type: struct FKey
			constexpr auto BindKeyEvent = 0x418; // Size: 1, Type: bool
			constexpr auto bFocusedWidgetClickCondition = 0x419; // Size: 1, Type: bool
			constexpr auto bIsFocusedWidgetClick = 0x41a; // Size: 1, Type: bool
			constexpr auto bNeitherAcceptNorBackButtonCondition = 0x41b; // Size: 1, Type: bool
			constexpr auto bIsNeitherAcceptNorBackButton = 0x41c; // Size: 1, Type: bool
			constexpr auto bEnableRepeatEvent = 0x41d; // Size: 1, Type: bool
			constexpr auto Slot_HAlign = 0x41e; // Size: 1, Type: enum class EHorizontalAlignment
			constexpr auto Key_Common = 0x430; // Size: 40, Type: struct TSoftObjectPtr<UKeyTextureMap>
			constexpr auto Key_XBOX = 0x458; // Size: 40, Type: struct TSoftObjectPtr<UKeyTextureMap>
			constexpr auto Key_DualShock = 0x480; // Size: 40, Type: struct TSoftObjectPtr<UKeyTextureMap>
			constexpr auto V_InnerOverlay = 0x4a8; // Size: 8, Type: struct UOverlay*
			constexpr auto V_KeyText = 0x4b0; // Size: 8, Type: struct UKdTextBlock*
			constexpr auto V_Switcher = 0x4b8; // Size: 8, Type: struct UWidgetSwitcher*
			constexpr auto V_KeySlot = 0x4c0; // Size: 8, Type: struct UHorizontalBox*
			constexpr auto InnerOverlay_Margin = 0x4c8; // Size: 16, Type: struct FMargin
			constexpr auto InnerOverlay_HAlign = 0x4d8; // Size: 1, Type: enum class EHorizontalAlignment
			constexpr auto InnerOverlay_VAlign = 0x4d9; // Size: 1, Type: enum class EVerticalAlignment
			constexpr auto InputDevice = 0x4da; // Size: 1, Type: enum class EInputDeviceType
			constexpr auto bIsPlatformFixed = 0x4db; // Size: 1, Type: bool
			constexpr auto bForAllPlatform = 0x4dc; // Size: 1, Type: bool
			constexpr auto LastestInputDevice = 0x4dd; // Size: 1, Type: enum class EInputDeviceType
	}
} 
