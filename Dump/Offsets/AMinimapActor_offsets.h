namespace offsets
{
	namespace AMinimapActor
	{
			constexpr auto Minimap_Mesh = 0x220; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto MinimapSceneCapture = 0x228; // Size: 8, Type: struct USceneCaptureComponent2D*
			constexpr auto MinimapCaptureScale = 0x234; // Size: 4, Type: float
			constexpr auto CamDistance = 0x238; // Size: 4, Type: float
			constexpr auto CamOffset = 0x23c; // Size: 4, Type: float
			constexpr auto MinimapRot = 0x240; // Size: 4, Type: float
			constexpr auto MinimapScale = 0x244; // Size: 4, Type: float
			constexpr auto ArrowScale = 0x248; // Size: 4, Type: float
			constexpr auto DotScale = 0x24c; // Size: 4, Type: float
			constexpr auto SDFMiniMapTexture = 0x258; // Size: 8, Type: struct UTexture2D*
			constexpr auto ZoomOrthoWidth = 0x290; // Size: 4, Type: float
			constexpr auto CamHeight = 0x294; // Size: 4, Type: float
			constexpr auto CamFov = 0x298; // Size: 4, Type: float
			constexpr auto MaterialForBirdView = 0x2a8; // Size: 8, Type: struct UMaterial*
	}
} 
