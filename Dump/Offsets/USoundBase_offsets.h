namespace offsets
{
	namespace USoundBase
	{
			constexpr auto SoundClassObject = 0x30; // Size: 8, Type: struct USoundClass*
			constexpr auto bDebug = 0x38; // Size: 1, Type: char
			constexpr auto bOverrideConcurrency = 0x38; // Size: 1, Type: char
			constexpr auto bEnableBusSends = 0x38; // Size: 1, Type: char
			constexpr auto bEnableBaseSubmix = 0x38; // Size: 1, Type: char
			constexpr auto bEnableSubmixSends = 0x38; // Size: 1, Type: char
			constexpr auto bHasDelayNode = 0x38; // Size: 1, Type: char
			constexpr auto bHasConcatenatorNode = 0x38; // Size: 1, Type: char
			constexpr auto bBypassVolumeScaleForPriority = 0x38; // Size: 1, Type: char
			constexpr auto VirtualizationMode = 0x39; // Size: 1, Type: enum class EVirtualizationMode
			constexpr auto ConcurrencySet = 0x90; // Size: 80, Type: struct TSet<struct USoundConcurrency*>
			constexpr auto ConcurrencyOverrides = 0xe0; // Size: 40, Type: struct FSoundConcurrencySettings
			constexpr auto Duration = 0x108; // Size: 4, Type: float
			constexpr auto MaxDistance = 0x10c; // Size: 4, Type: float
			constexpr auto TotalSamples = 0x110; // Size: 4, Type: float
			constexpr auto Priority = 0x114; // Size: 4, Type: float
			constexpr auto AttenuationSettings = 0x118; // Size: 8, Type: struct USoundAttenuation*
			constexpr auto SoundSubmixObject = 0x120; // Size: 8, Type: struct USoundSubmixBase*
			constexpr auto SoundSubmixSends = 0x128; // Size: 16, Type: struct TArray<struct FSoundSubmixSendInfo>
			constexpr auto SourceEffectChain = 0x138; // Size: 8, Type: struct USoundEffectSourcePresetChain*
			constexpr auto BusSends = 0x140; // Size: 16, Type: struct TArray<struct FSoundSourceBusSendInfo>
			constexpr auto PreEffectBusSends = 0x150; // Size: 16, Type: struct TArray<struct FSoundSourceBusSendInfo>
			constexpr auto AssetUserData = 0x160; // Size: 16, Type: struct TArray<struct UAssetUserData*>
	}
} 
