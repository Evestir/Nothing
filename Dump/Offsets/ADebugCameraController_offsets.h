namespace offsets
{
	namespace ADebugCameraController
	{
			constexpr auto bShowSelectedInfo = 0x580; // Size: 1, Type: char
			constexpr auto bIsFrozenRendering = 0x580; // Size: 1, Type: char
			constexpr auto bIsOrbitingSelectedActor = 0x580; // Size: 1, Type: char
			constexpr auto bOrbitPivotUseCenter = 0x580; // Size: 1, Type: char
			constexpr auto bEnableBufferVisualization = 0x580; // Size: 1, Type: char
			constexpr auto bEnableBufferVisualizationFullMode = 0x580; // Size: 1, Type: char
			constexpr auto bIsBufferVisualizationInputSetup = 0x580; // Size: 1, Type: char
			constexpr auto bLastDisplayEnabled = 0x580; // Size: 1, Type: char
			constexpr auto DrawFrustum = 0x588; // Size: 8, Type: struct UDrawFrustumComponent*
			constexpr auto SelectedActor = 0x590; // Size: 8, Type: struct AActor*
			constexpr auto SelectedComponent = 0x598; // Size: 8, Type: struct UPrimitiveComponent*
			constexpr auto SelectedHitPoint = 0x5a0; // Size: 136, Type: struct FHitResult
			constexpr auto OriginalControllerRef = 0x628; // Size: 8, Type: struct APlayerController*
			constexpr auto OriginalPlayer = 0x630; // Size: 8, Type: struct UPlayer*
			constexpr auto SpeedScale = 0x638; // Size: 4, Type: float
			constexpr auto InitialMaxSpeed = 0x63c; // Size: 4, Type: float
			constexpr auto InitialAccel = 0x640; // Size: 4, Type: float
			constexpr auto InitialDecel = 0x644; // Size: 4, Type: float
	}
} 
