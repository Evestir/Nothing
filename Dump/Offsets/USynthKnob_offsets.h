namespace offsets
{
	namespace USynthKnob
	{
			constexpr auto Value = 0x108; // Size: 4, Type: float
			constexpr auto StepSize = 0x10c; // Size: 4, Type: float
			constexpr auto MouseSpeed = 0x110; // Size: 4, Type: float
			constexpr auto MouseFineTuneSpeed = 0x114; // Size: 4, Type: float
			constexpr auto ShowTooltipInfo = 0x118; // Size: 1, Type: char
			constexpr auto ParameterName = 0x120; // Size: 24, Type: struct FText
			constexpr auto ParameterUnits = 0x138; // Size: 24, Type: struct FText
			constexpr auto ValueDelegate = 0x150; // Size: 16, Type: struct FDelegate
			constexpr auto WidgetStyle = 0x160; // Size: 568, Type: struct FSynthKnobStyle
			constexpr auto Locked = 0x398; // Size: 1, Type: bool
			constexpr auto IsFocusable = 0x399; // Size: 1, Type: bool
			constexpr auto OnMouseCaptureBegin = 0x3a0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnMouseCaptureEnd = 0x3b0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnControllerCaptureBegin = 0x3c0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnControllerCaptureEnd = 0x3d0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnValueChanged = 0x3e0; // Size: 16, Type: struct FMulticastInlineDelegate
	}
} 
