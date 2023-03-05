namespace offsets
{
	namespace UCameraShakeSourceComponent
	{
			constexpr auto Attenuation = 0x208; // Size: 1, Type: enum class ECameraShakeAttenuation
			constexpr auto InnerAttenuationRadius = 0x20c; // Size: 4, Type: float
			constexpr auto OuterAttenuationRadius = 0x210; // Size: 4, Type: float
			constexpr auto CameraShake = 0x218; // Size: 8, Type: UCameraShakeBase*
			constexpr auto bAutoStart = 0x220; // Size: 1, Type: bool
	}
} 
