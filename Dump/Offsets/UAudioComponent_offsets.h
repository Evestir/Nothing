namespace offsets
{
	namespace UAudioComponent
	{
			constexpr auto Sound = 0x208; // Size: 8, Type: struct USoundBase*
			constexpr auto InstanceParameters = 0x210; // Size: 16, Type: struct TArray<struct FAudioComponentParam>
			constexpr auto SoundClassOverride = 0x220; // Size: 8, Type: struct USoundClass*
			constexpr auto bAutoDestroy = 0x228; // Size: 1, Type: char
			constexpr auto bStopWhenOwnerDestroyed = 0x228; // Size: 1, Type: char
			constexpr auto bShouldRemainActiveIfDropped = 0x228; // Size: 1, Type: char
			constexpr auto bAllowSpatialization = 0x228; // Size: 1, Type: char
			constexpr auto bOverrideAttenuation = 0x228; // Size: 1, Type: char
			constexpr auto bOverrideSubtitlePriority = 0x228; // Size: 1, Type: char
			constexpr auto bIsUISound = 0x228; // Size: 1, Type: char
			constexpr auto bEnableLowPassFilter = 0x228; // Size: 1, Type: char
			constexpr auto bOverridePriority = 0x229; // Size: 1, Type: char
			constexpr auto bSuppressSubtitles = 0x229; // Size: 1, Type: char
			constexpr auto bAutoManageAttachment = 0x22a; // Size: 1, Type: char
			constexpr auto AudioComponentUserID = 0x230; // Size: 8, Type: struct FName
			constexpr auto PitchModulationMin = 0x238; // Size: 4, Type: float
			constexpr auto PitchModulationMax = 0x23c; // Size: 4, Type: float
			constexpr auto VolumeModulationMin = 0x240; // Size: 4, Type: float
			constexpr auto VolumeModulationMax = 0x244; // Size: 4, Type: float
			constexpr auto VolumeMultiplier = 0x248; // Size: 4, Type: float
			constexpr auto EnvelopeFollowerAttackTime = 0x24c; // Size: 4, Type: int32_t
			constexpr auto EnvelopeFollowerReleaseTime = 0x250; // Size: 4, Type: int32_t
			constexpr auto Priority = 0x254; // Size: 4, Type: float
			constexpr auto SubtitlePriority = 0x258; // Size: 4, Type: float
			constexpr auto SourceEffectChain = 0x260; // Size: 8, Type: struct USoundEffectSourcePresetChain*
			constexpr auto PitchMultiplier = 0x268; // Size: 4, Type: float
			constexpr auto LowPassFilterFrequency = 0x26c; // Size: 4, Type: float
			constexpr auto AttenuationSettings = 0x278; // Size: 8, Type: struct USoundAttenuation*
			constexpr auto AttenuationOverrides = 0x280; // Size: 928, Type: struct FSoundAttenuationSettings
			constexpr auto ConcurrencySettings = 0x620; // Size: 8, Type: struct USoundConcurrency*
			constexpr auto ConcurrencySet = 0x628; // Size: 80, Type: struct TSet<struct USoundConcurrency*>
			constexpr auto AutoAttachLocationRule = 0x684; // Size: 1, Type: enum class EAttachmentRule
			constexpr auto AutoAttachRotationRule = 0x685; // Size: 1, Type: enum class EAttachmentRule
			constexpr auto AutoAttachScaleRule = 0x686; // Size: 1, Type: enum class EAttachmentRule
			constexpr auto ModulationRouting = 0x688; // Size: 72, Type: struct FSoundModulationDefaultRoutingSettings
			constexpr auto OnAudioPlayStateChanged = 0x6d0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnAudioVirtualizationChanged = 0x6f8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnAudioFinished = 0x720; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnAudioPlaybackPercent = 0x748; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnAudioSingleEnvelopeValue = 0x770; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnAudioMultiEnvelopeValue = 0x798; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnQueueSubtitles = 0x7c0; // Size: 16, Type: struct FDelegate
			constexpr auto AutoAttachParent = 0x7d0; // Size: 8, Type: struct TWeakObjectPtr<USceneComponent>
			constexpr auto AutoAttachSocketName = 0x7d8; // Size: 8, Type: struct FName
	}
} 
