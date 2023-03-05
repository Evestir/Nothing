namespace offsets
{
	namespace UNiagaraBakerSettings
	{
			constexpr auto StartSeconds = 0x28; // Size: 4, Type: float
			constexpr auto DurationSeconds = 0x2c; // Size: 4, Type: float
			constexpr auto FramesPerSecond = 0x30; // Size: 4, Type: int32_t
			constexpr auto bPreviewLooping = 0x34; // Size: 1, Type: char
			constexpr auto FramesPerDimension = 0x38; // Size: 8, Type: struct FIntPoint
			constexpr auto OutputTextures = 0x40; // Size: 16, Type: struct TArray<struct FNiagaraBakerTextureSettings>
			constexpr auto CameraViewportMode = 0x50; // Size: 4, Type: enum class ENiagaraBakerViewMode
			constexpr auto CameraViewportLocation[7] = 0x54; // Size: 84, Type: struct FVector
			constexpr auto CameraViewportRotation[7] = 0xa8; // Size: 84, Type: struct FRotator
			constexpr auto CameraOrbitDistance = 0xfc; // Size: 4, Type: float
			constexpr auto CameraFOV = 0x100; // Size: 4, Type: float
			constexpr auto CameraOrthoWidth = 0x104; // Size: 4, Type: float
			constexpr auto bUseCameraAspectRatio = 0x108; // Size: 1, Type: char
			constexpr auto CameraAspectRatio = 0x10c; // Size: 4, Type: float
			constexpr auto bRenderComponentOnly = 0x110; // Size: 1, Type: char
	}
} 
