namespace offsets
{
	namespace USlider
	{
			constexpr auto Value = 0x108; // Size: 4, Type: float
			constexpr auto ValueDelegate = 0x10c; // Size: 16, Type: struct FDelegate
			constexpr auto MinValue = 0x11c; // Size: 4, Type: float
			constexpr auto MaxValue = 0x120; // Size: 4, Type: float
			constexpr auto WidgetStyle = 0x128; // Size: 832, Type: struct FSliderStyle
			constexpr auto Orientation = 0x468; // Size: 1, Type: enum class EOrientation
			constexpr auto SliderBarColor = 0x46c; // Size: 16, Type: struct FLinearColor
			constexpr auto SliderHandleColor = 0x47c; // Size: 16, Type: struct FLinearColor
			constexpr auto IndentHandle = 0x48c; // Size: 1, Type: bool
			constexpr auto Locked = 0x48d; // Size: 1, Type: bool
			constexpr auto MouseUsesStep = 0x48e; // Size: 1, Type: bool
			constexpr auto RequiresControllerLock = 0x48f; // Size: 1, Type: bool
			constexpr auto StepSize = 0x490; // Size: 4, Type: float
			constexpr auto IsFocusable = 0x494; // Size: 1, Type: bool
			constexpr auto OnMouseCaptureBegin = 0x498; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnMouseCaptureEnd = 0x4a8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnControllerCaptureBegin = 0x4b8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnControllerCaptureEnd = 0x4c8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnValueChanged = 0x4d8; // Size: 16, Type: struct FMulticastInlineDelegate
	}
} 
