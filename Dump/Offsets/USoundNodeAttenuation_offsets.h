namespace offsets
{
	namespace USoundNodeAttenuation
	{
			constexpr auto AttenuationSettings = 0x48; // Size: 8, Type: struct USoundAttenuation*
			constexpr auto AttenuationOverrides = 0x50; // Size: 928, Type: struct FSoundAttenuationSettings
			constexpr auto bOverrideAttenuation = 0x3f0; // Size: 1, Type: char
	}
} 
