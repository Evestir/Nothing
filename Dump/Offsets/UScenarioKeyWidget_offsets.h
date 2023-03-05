namespace offsets
{
	namespace UScenarioKeyWidget
	{
			constexpr auto Key_PC = 0x3e8; // Size: 24, Type: struct FKey
			constexpr auto Key_Gamepad = 0x400; // Size: 24, Type: struct FKey
			constexpr auto Key_Descript = 0x418; // Size: 24, Type: struct FText
			constexpr auto V_KeyText = 0x430; // Size: 8, Type: struct UKdTextBlock*
			constexpr auto V_KeyDescriptText = 0x438; // Size: 8, Type: struct UKdTextBlock*
			constexpr auto V_Switcher = 0x440; // Size: 8, Type: struct UWidgetSwitcher*
			constexpr auto V_WidgetSwitcher_Stroke = 0x448; // Size: 8, Type: struct UWidgetSwitcher*
			constexpr auto V_WidgetSwitcher_CountDown = 0x450; // Size: 8, Type: struct UWidgetSwitcher*
			constexpr auto Key_Common = 0x458; // Size: 8, Type: struct UKeyTextureMap2*
			constexpr auto Key_XBOX = 0x460; // Size: 8, Type: struct UKeyTextureMap2*
			constexpr auto Key_DualShock = 0x468; // Size: 8, Type: struct UKeyTextureMap2*
			constexpr auto InputDevice = 0x470; // Size: 1, Type: enum class EInputDeviceType
			constexpr auto bIsPlatformFixed = 0x471; // Size: 1, Type: bool
	}
} 
