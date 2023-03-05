namespace offsets
{
	namespace USynth2DSlider
	{
			constexpr auto ValueX = 0x108; // Size: 4, Type: float
			constexpr auto ValueY = 0x10c; // Size: 4, Type: float
			constexpr auto ValueXDelegate = 0x110; // Size: 16, Type: struct FDelegate
			constexpr auto ValueYDelegate = 0x120; // Size: 16, Type: struct FDelegate
			constexpr auto WidgetStyle = 0x130; // Size: 696, Type: struct FSynth2DSliderStyle
			constexpr auto SliderHandleColor = 0x3e8; // Size: 16, Type: struct FLinearColor
			constexpr auto IndentHandle = 0x3f8; // Size: 1, Type: bool
			constexpr auto Locked = 0x3f9; // Size: 1, Type: bool
			constexpr auto StepSize = 0x3fc; // Size: 4, Type: float
			constexpr auto IsFocusable = 0x400; // Size: 1, Type: bool
			constexpr auto OnMouseCaptureBegin = 0x408; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnMouseCaptureEnd = 0x418; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnControllerCaptureBegin = 0x428; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnControllerCaptureEnd = 0x438; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnValueChangedX = 0x448; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnValueChangedY = 0x458; // Size: 16, Type: struct FMulticastInlineDelegate
	}
} 
