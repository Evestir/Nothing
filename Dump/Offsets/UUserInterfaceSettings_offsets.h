namespace offsets
{
	namespace UUserInterfaceSettings
	{
			constexpr auto RenderFocusRule = 0x38; // Size: 1, Type: enum class ERenderFocusRule
			constexpr auto HardwareCursors = 0x40; // Size: 80, Type: struct TMap<enum class EMouseCursor, struct FHardwareCursorReference>
			constexpr auto SoftwareCursors = 0x90; // Size: 80, Type: struct TMap<enum class EMouseCursor, struct FSoftClassPath>
			constexpr auto DefaultCursor = 0xe0; // Size: 24, Type: struct FSoftClassPath
			constexpr auto TextEditBeamCursor = 0xf8; // Size: 24, Type: struct FSoftClassPath
			constexpr auto CrosshairsCursor = 0x110; // Size: 24, Type: struct FSoftClassPath
			constexpr auto HandCursor = 0x128; // Size: 24, Type: struct FSoftClassPath
			constexpr auto GrabHandCursor = 0x140; // Size: 24, Type: struct FSoftClassPath
			constexpr auto GrabHandClosedCursor = 0x158; // Size: 24, Type: struct FSoftClassPath
			constexpr auto SlashedCircleCursor = 0x170; // Size: 24, Type: struct FSoftClassPath
			constexpr auto ApplicationScale = 0x188; // Size: 4, Type: float
			constexpr auto UIScaleRule = 0x18c; // Size: 1, Type: enum class EUIScalingRule
			constexpr auto CustomScalingRuleClass = 0x190; // Size: 24, Type: struct FSoftClassPath
			constexpr auto UIScaleCurve = 0x1a8; // Size: 136, Type: struct FRuntimeFloatCurve
			constexpr auto bAllowHighDPIInGameMode = 0x230; // Size: 1, Type: bool
			constexpr auto DesignScreenSize = 0x234; // Size: 8, Type: struct FIntPoint
			constexpr auto bLoadWidgetsOnDedicatedServer = 0x23c; // Size: 1, Type: bool
			constexpr auto CursorClasses = 0x240; // Size: 16, Type: struct TArray<struct UObject*>
			constexpr auto CustomScalingRuleClassInstance = 0x250; // Size: 8, Type: UObject*
			constexpr auto CustomScalingRule = 0x258; // Size: 8, Type: struct UDPICustomScalingRule*
	}
} 
