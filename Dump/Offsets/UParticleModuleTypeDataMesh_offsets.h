namespace offsets
{
	namespace UParticleModuleTypeDataMesh
	{
			constexpr auto Mesh = 0x30; // Size: 8, Type: struct UStaticMesh*
			constexpr auto LODSizeScale = 0x40; // Size: 4, Type: float
			constexpr auto bUseStaticMeshLODs = 0x44; // Size: 1, Type: char
			constexpr auto CastShadows = 0x44; // Size: 1, Type: char
			constexpr auto DoCollisions = 0x44; // Size: 1, Type: char
			constexpr auto MeshAlignment = 0x45; // Size: 1, Type: enum class EMeshScreenAlignment
			constexpr auto bOverrideMaterial = 0x46; // Size: 1, Type: char
			constexpr auto bOverrideDefaultMotionBlurSettings = 0x46; // Size: 1, Type: char
			constexpr auto bEnableMotionBlur = 0x46; // Size: 1, Type: char
			constexpr auto RollPitchYawRange = 0x48; // Size: 72, Type: struct FRawDistributionVector
			constexpr auto AxisLockOption = 0x90; // Size: 1, Type: enum class EParticleAxisLock
			constexpr auto bCameraFacing = 0x91; // Size: 1, Type: char
			constexpr auto CameraFacingUpAxisOption = 0x92; // Size: 1, Type: enum class EMeshCameraFacingUpAxis
			constexpr auto CameraFacingOption = 0x93; // Size: 1, Type: enum class EMeshCameraFacingOptions
			constexpr auto bApplyParticleRotationAsSpin = 0x94; // Size: 1, Type: char
			constexpr auto bFaceCameraDirectionRatherThanPosition = 0x94; // Size: 1, Type: char
			constexpr auto bCollisionsConsiderPartilceSize = 0x94; // Size: 1, Type: char
	}
} 
