namespace offsets
{
	namespace UCameraModifier_CameraShake
	{
			constexpr auto ActiveShakes = 0x48; // Size: 16, Type: struct TArray<struct FActiveCameraShakeInfo>
			constexpr auto ExpiredPooledShakesMap = 0x58; // Size: 80, Type: struct TMap<UCameraShakeBase*, struct FPooledCameraShakes>
			constexpr auto SplitScreenShakeScale = 0xa8; // Size: 4, Type: float
	}
} 
