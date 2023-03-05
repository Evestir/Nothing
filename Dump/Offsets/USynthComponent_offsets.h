namespace offsets
{
	namespace USynthComponent
	{
			constexpr auto bAutoDestroy = 0x208; // Size: 1, Type: char
			constexpr auto bStopWhenOwnerDestroyed = 0x208; // Size: 1, Type: char
			constexpr auto bAllowSpatialization = 0x208; // Size: 1, Type: char
			constexpr auto bOverrideAttenuation = 0x208; // Size: 1, Type: char
			constexpr auto bEnableBusSends = 0x20c; // Size: 1, Type: char
			constexpr auto bEnableBaseSubmix = 0x20c; // Size: 1, Type: char
			constexpr auto bEnableSubmixSends = 0x20c; // Size: 1, Type: char
			constexpr auto AttenuationSettings = 0x210; // Size: 8, Type: struct USoundAttenuation*
			constexpr auto AttenuationOverrides = 0x218; // Size: 928, Type: struct FSoundAttenuationSettings
			constexpr auto ConcurrencySettings = 0x5b8; // Size: 8, Type: struct USoundConcurrency*
			constexpr auto ConcurrencySet = 0x5c0; // Size: 80, Type: struct TSet<struct USoundConcurrency*>
			constexpr auto SoundClass = 0x610; // Size: 8, Type: struct USoundClass*
			constexpr auto SourceEffectChain = 0x618; // Size: 8, Type: struct USoundEffectSourcePresetChain*
			constexpr auto SoundSubmix = 0x620; // Size: 8, Type: struct USoundSubmixBase*
			constexpr auto SoundSubmixSends = 0x628; // Size: 16, Type: struct TArray<struct FSoundSubmixSendInfo>
			constexpr auto BusSends = 0x638; // Size: 16, Type: struct TArray<struct FSoundSourceBusSendInfo>
			constexpr auto PreEffectBusSends = 0x648; // Size: 16, Type: struct TArray<struct FSoundSourceBusSendInfo>
			constexpr auto bIsUISound = 0x658; // Size: 1, Type: char
			constexpr auto bIsPreviewSound = 0x658; // Size: 1, Type: char
			constexpr auto EnvelopeFollowerAttackTime = 0x65c; // Size: 4, Type: int32_t
			constexpr auto EnvelopeFollowerReleaseTime = 0x660; // Size: 4, Type: int32_t
			constexpr auto OnAudioEnvelopeValue = 0x668; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto Synth = 0x698; // Size: 8, Type: struct USynthSound*
			constexpr auto AudioComponent = 0x6a0; // Size: 8, Type: struct UAudioComponent*
	}
} 
