namespace offsets
{
	namespace UFMODNotifyComponent
	{
			constexpr auto FMODPlay = 0xb0; // Size: 1, Type: bool
			constexpr auto Volume = 0xb4; // Size: 4, Type: float
			constexpr auto Pitch = 0xb8; // Size: 4, Type: float
			constexpr auto bOverrideAttenuation = 0xbc; // Size: 1, Type: bool
			constexpr auto MinimumDistance = 0xc0; // Size: 4, Type: float
			constexpr auto MaximumDistance = 0xc4; // Size: 4, Type: float
			constexpr auto bOverrideParameter = 0xc8; // Size: 1, Type: bool
			constexpr auto Param = 0xcc; // Size: 12, Type: struct FAnimNoti_FMODParam
	}
} 
