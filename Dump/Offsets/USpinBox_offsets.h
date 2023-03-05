namespace offsets
{
	namespace USpinBox
	{
			constexpr auto Value = 0x108; // Size: 4, Type: float
			constexpr auto ValueDelegate = 0x10c; // Size: 16, Type: struct FDelegate
			constexpr auto WidgetStyle = 0x120; // Size: 744, Type: struct FSpinBoxStyle
			constexpr auto Style = 0x408; // Size: 8, Type: struct USlateWidgetStyleAsset*
			constexpr auto MinFractionalDigits = 0x410; // Size: 4, Type: int32_t
			constexpr auto MaxFractionalDigits = 0x414; // Size: 4, Type: int32_t
			constexpr auto bAlwaysUsesDeltaSnap = 0x418; // Size: 1, Type: bool
			constexpr auto Delta = 0x41c; // Size: 4, Type: float
			constexpr auto SliderExponent = 0x420; // Size: 4, Type: float
			constexpr auto Font = 0x428; // Size: 88, Type: struct FSlateFontInfo
			constexpr auto Justification = 0x480; // Size: 1, Type: enum class ETextJustify
			constexpr auto MinDesiredWidth = 0x484; // Size: 4, Type: float
			constexpr auto ClearKeyboardFocusOnCommit = 0x488; // Size: 1, Type: bool
			constexpr auto SelectAllTextOnCommit = 0x489; // Size: 1, Type: bool
			constexpr auto ForegroundColor = 0x490; // Size: 40, Type: struct FSlateColor
			constexpr auto OnValueChanged = 0x4b8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnValueCommitted = 0x4c8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnBeginSliderMovement = 0x4d8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnEndSliderMovement = 0x4e8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto bOverride_MinValue = 0x4f8; // Size: 1, Type: char
			constexpr auto bOverride_MaxValue = 0x4f8; // Size: 1, Type: char
			constexpr auto bOverride_MinSliderValue = 0x4f8; // Size: 1, Type: char
			constexpr auto bOverride_MaxSliderValue = 0x4f8; // Size: 1, Type: char
			constexpr auto MinValue = 0x4fc; // Size: 4, Type: float
			constexpr auto MaxValue = 0x500; // Size: 4, Type: float
			constexpr auto MinSliderValue = 0x504; // Size: 4, Type: float
			constexpr auto MaxSliderValue = 0x508; // Size: 4, Type: float
	}
} 
