namespace offsets
{
	namespace AHUD
	{
			constexpr auto PlayerOwner = 0x220; // Size: 8, Type: struct APlayerController*
			constexpr auto bLostFocusPaused = 0x228; // Size: 1, Type: char
			constexpr auto bShowHUD = 0x228; // Size: 1, Type: char
			constexpr auto bShowDebugInfo = 0x228; // Size: 1, Type: char
			constexpr auto CurrentTargetIndex = 0x22c; // Size: 4, Type: int32_t
			constexpr auto bShowHitBoxDebugInfo = 0x230; // Size: 1, Type: char
			constexpr auto bShowOverlays = 0x230; // Size: 1, Type: char
			constexpr auto bEnableDebugTextShadow = 0x230; // Size: 1, Type: char
			constexpr auto PostRenderedActors = 0x238; // Size: 16, Type: struct TArray<struct AActor*>
			constexpr auto DebugDisplay = 0x250; // Size: 16, Type: struct TArray<struct FName>
			constexpr auto ToggledDebugCategories = 0x260; // Size: 16, Type: struct TArray<struct FName>
			constexpr auto Canvas = 0x270; // Size: 8, Type: struct UCanvas*
			constexpr auto DebugCanvas = 0x278; // Size: 8, Type: struct UCanvas*
			constexpr auto DebugTextList = 0x280; // Size: 16, Type: struct TArray<struct FDebugTextInfo>
			constexpr auto ShowDebugTargetDesiredClass = 0x290; // Size: 8, Type: AActor*
			constexpr auto ShowDebugTargetActor = 0x298; // Size: 8, Type: struct AActor*
	}
} 
