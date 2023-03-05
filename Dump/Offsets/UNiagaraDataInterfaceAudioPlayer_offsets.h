namespace offsets
{
	namespace UNiagaraDataInterfaceAudioPlayer
	{
			constexpr auto SoundToPlay = 0x38; // Size: 8, Type: struct USoundBase*
			constexpr auto Attenuation = 0x40; // Size: 8, Type: struct USoundAttenuation*
			constexpr auto Concurrency = 0x48; // Size: 8, Type: struct USoundConcurrency*
			constexpr auto ParameterNames = 0x50; // Size: 16, Type: struct TArray<struct FName>
			constexpr auto bLimitPlaysPerTick = 0x60; // Size: 1, Type: bool
			constexpr auto MaxPlaysPerTick = 0x64; // Size: 4, Type: int32_t
			constexpr auto bStopWhenComponentIsDestroyed = 0x68; // Size: 1, Type: bool
	}
} 
