namespace offsets
{
	namespace UWidget
	{
			constexpr auto Slot = 0x28; // Size: 8, Type: struct UPanelSlot*
			constexpr auto bIsEnabledDelegate = 0x30; // Size: 16, Type: struct FDelegate
			constexpr auto ToolTipText = 0x40; // Size: 24, Type: struct FText
			constexpr auto ToolTipTextDelegate = 0x58; // Size: 16, Type: struct FDelegate
			constexpr auto ToolTipWidget = 0x68; // Size: 8, Type: struct UWidget*
			constexpr auto ToolTipWidgetDelegate = 0x70; // Size: 16, Type: struct FDelegate
			constexpr auto VisibilityDelegate = 0x80; // Size: 16, Type: struct FDelegate
			constexpr auto RenderTransform = 0x90; // Size: 28, Type: struct FWidgetTransform
			constexpr auto RenderTransformPivot = 0xac; // Size: 8, Type: struct FVector2D
			constexpr auto bIsVariable = 0xb4; // Size: 1, Type: char
			constexpr auto bCreatedByConstructionScript = 0xb4; // Size: 1, Type: char
			constexpr auto bIsEnabled = 0xb4; // Size: 1, Type: char
			constexpr auto bOverride_Cursor = 0xb4; // Size: 1, Type: char
			constexpr auto AccessibleWidgetData = 0xb8; // Size: 8, Type: struct USlateAccessibleWidgetData*
			constexpr auto bIsVolatile = 0xc0; // Size: 1, Type: char
			constexpr auto Cursor = 0xc1; // Size: 1, Type: enum class EMouseCursor
			constexpr auto Clipping = 0xc2; // Size: 1, Type: enum class EWidgetClipping
			constexpr auto Visibility = 0xc3; // Size: 1, Type: enum class ESlateVisibility
			constexpr auto RenderOpacity = 0xc4; // Size: 4, Type: float
			constexpr auto Navigation = 0xc8; // Size: 8, Type: struct UWidgetNavigation*
			constexpr auto FlowDirectionPreference = 0xd0; // Size: 1, Type: enum class EFlowDirectionPreference
			constexpr auto NativeBindings = 0xf8; // Size: 16, Type: struct TArray<struct UPropertyBinding*>
	}
} 
