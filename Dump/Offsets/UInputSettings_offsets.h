namespace offsets
{
	namespace UInputSettings
	{
			constexpr auto AxisConfig = 0x28; // Size: 16, Type: struct TArray<struct FInputAxisConfigEntry>
			constexpr auto bAltEnterTogglesFullscreen = 0x38; // Size: 1, Type: char
			constexpr auto bF11TogglesFullscreen = 0x38; // Size: 1, Type: char
			constexpr auto bUseMouseForTouch = 0x38; // Size: 1, Type: char
			constexpr auto bEnableMouseSmoothing = 0x38; // Size: 1, Type: char
			constexpr auto bEnableFOVScaling = 0x38; // Size: 1, Type: char
			constexpr auto bCaptureMouseOnLaunch = 0x38; // Size: 1, Type: char
			constexpr auto bDefaultViewportMouseLock = 0x38; // Size: 1, Type: char
			constexpr auto bAlwaysShowTouchInterface = 0x38; // Size: 1, Type: char
			constexpr auto bShowConsoleOnFourFingerTap = 0x39; // Size: 1, Type: char
			constexpr auto bEnableGestureRecognizer = 0x39; // Size: 1, Type: char
			constexpr auto bUseAutocorrect = 0x3a; // Size: 1, Type: bool
			constexpr auto ExcludedAutocorrectOS = 0x40; // Size: 16, Type: struct TArray<struct FString>
			constexpr auto ExcludedAutocorrectCultures = 0x50; // Size: 16, Type: struct TArray<struct FString>
			constexpr auto ExcludedAutocorrectDeviceModels = 0x60; // Size: 16, Type: struct TArray<struct FString>
			constexpr auto DefaultViewportMouseCaptureMode = 0x70; // Size: 1, Type: enum class EMouseCaptureMode
			constexpr auto DefaultViewportMouseLockMode = 0x71; // Size: 1, Type: enum class EMouseLockMode
			constexpr auto FOVScale = 0x74; // Size: 4, Type: float
			constexpr auto DoubleClickTime = 0x78; // Size: 4, Type: float
			constexpr auto ActionMappings = 0x80; // Size: 16, Type: struct TArray<struct FInputActionKeyMapping>
			constexpr auto AxisMappings = 0x90; // Size: 16, Type: struct TArray<struct FInputAxisKeyMapping>
			constexpr auto SpeechMappings = 0xa0; // Size: 16, Type: struct TArray<struct FInputActionSpeechMapping>
			constexpr auto DefaultPlayerInputClass = 0xb0; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto DefaultInputComponentClass = 0xd8; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto DefaultTouchInterface = 0x100; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto ConsoleKey = 0x118; // Size: 24, Type: struct FKey
			constexpr auto ConsoleKeys = 0x130; // Size: 16, Type: struct TArray<struct FKey>
	}
} 
