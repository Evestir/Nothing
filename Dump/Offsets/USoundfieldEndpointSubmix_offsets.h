namespace offsets
{
	namespace USoundfieldEndpointSubmix
	{
			constexpr auto SoundfieldEndpointType = 0x38; // Size: 8, Type: struct FName
			constexpr auto EndpointSettingsClass = 0x40; // Size: 8, Type: UAudioEndpointSettingsBase*
			constexpr auto EndpointSettings = 0x48; // Size: 8, Type: struct USoundfieldEndpointSettingsBase*
			constexpr auto EncodingSettingsClass = 0x50; // Size: 8, Type: USoundfieldEncodingSettingsBase*
			constexpr auto EncodingSettings = 0x58; // Size: 8, Type: struct USoundfieldEncodingSettingsBase*
			constexpr auto SoundfieldEffectChain = 0x60; // Size: 16, Type: struct TArray<struct USoundfieldEffectBase*>
	}
} 
