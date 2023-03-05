namespace offsets
{
	namespace UKdPhysicalMaterial
	{
			constexpr auto LeftParticle = 0x80; // Size: 8, Type: struct UParticleSystem*
			constexpr auto RightParticle = 0x88; // Size: 8, Type: struct UParticleSystem*
			constexpr auto CenterParticle = 0x90; // Size: 8, Type: struct UParticleSystem*
			constexpr auto Sound = 0x98; // Size: 8, Type: struct UFMODEvent*
			constexpr auto ForceFeedbackName = 0xa0; // Size: 8, Type: struct FName
			constexpr auto TrackSurfaceType = 0xa8; // Size: 1, Type: enum class EDriveMode
			constexpr auto AdditionalDragForce_PM = 0xac; // Size: 4, Type: float
	}
} 
