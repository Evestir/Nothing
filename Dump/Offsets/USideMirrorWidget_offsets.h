namespace offsets
{
	namespace USideMirrorWidget
	{
			constexpr auto SceneImage = 0x260; // Size: 8, Type: struct UImage*
			constexpr auto SceneCaptureActor = 0x268; // Size: 8, Type: struct ASceneCaptureActor*
			constexpr auto CameraComponent = 0x270; // Size: 8, Type: struct USideMirrorCameraComponent*
			constexpr auto PawnList = 0x288; // Size: 16, Type: struct TArray<struct APawn*>
			constexpr auto StressInAnimation = 0x2a0; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto StressOnAnimation = 0x2a8; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto StressOutAnimation = 0x2b0; // Size: 8, Type: struct UWidgetAnimation*
	}
} 
