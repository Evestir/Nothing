namespace offsets
{
	namespace USoundfieldSubmix
	{
			constexpr auto SoundfieldEncodingFormat = 0x40; // Size: 8, Type: struct FName
			constexpr auto EncodingSettings = 0x48; // Size: 8, Type: struct USoundfieldEncodingSettingsBase*
			constexpr auto SoundfieldEffectChain = 0x50; // Size: 16, Type: struct TArray<struct USoundfieldEffectBase*>
			constexpr auto EncodingSettingsClass = 0x60; // Size: 8, Type: USoundfieldEncodingSettingsBase*
	}
} 
