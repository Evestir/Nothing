namespace offsets
{
	namespace AEmitterCameraLensEffectBase
	{
			constexpr auto PS_CameraEffect = 0x270; // Size: 8, Type: struct UParticleSystem*
			constexpr auto PS_CameraEffectNonExtremeContent = 0x278; // Size: 8, Type: struct UParticleSystem*
			constexpr auto BaseCamera = 0x280; // Size: 8, Type: struct APlayerCameraManager*
			constexpr auto RelativeTransform = 0x290; // Size: 48, Type: struct FTransform
			constexpr auto BaseFOV = 0x2c0; // Size: 4, Type: float
			constexpr auto bAllowMultipleInstances = 0x2c4; // Size: 1, Type: char
			constexpr auto bResetWhenRetriggered = 0x2c4; // Size: 1, Type: char
			constexpr auto EmittersToTreatAsSame = 0x2c8; // Size: 16, Type: struct TArray<AEmitterCameraLensEffectBase*>
			constexpr auto DistFromCamera = 0x2d8; // Size: 4, Type: float
	}
} 
