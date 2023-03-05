namespace offsets
{
	namespace UBrushStampIndicator
	{
			constexpr auto BrushRadius = 0x38; // Size: 4, Type: float
			constexpr auto BrushFalloff = 0x3c; // Size: 4, Type: float
			constexpr auto BrushPosition = 0x40; // Size: 12, Type: struct FVector
			constexpr auto BrushNormal = 0x4c; // Size: 12, Type: struct FVector
			constexpr auto bDrawIndicatorLines = 0x58; // Size: 1, Type: bool
			constexpr auto bDrawRadiusCircle = 0x59; // Size: 1, Type: bool
			constexpr auto SampleStepCount = 0x5c; // Size: 4, Type: int32_t
			constexpr auto LineColor = 0x60; // Size: 16, Type: struct FLinearColor
			constexpr auto LineThickness = 0x70; // Size: 4, Type: float
			constexpr auto bDepthTested = 0x74; // Size: 1, Type: bool
			constexpr auto bDrawSecondaryLines = 0x75; // Size: 1, Type: bool
			constexpr auto SecondaryLineThickness = 0x78; // Size: 4, Type: float
			constexpr auto SecondaryLineColor = 0x7c; // Size: 16, Type: struct FLinearColor
			constexpr auto AttachedComponent = 0x90; // Size: 8, Type: struct UPrimitiveComponent*
	}
} 
