namespace offsets
{
	namespace AEnvironmentTriggerBox
	{
			constexpr auto AudioComponent = 0x228; // Size: 8, Type: struct UAudioComponent*
			constexpr auto SoundAsset_Low = 0x230; // Size: 8, Type: struct USoundBase*
			constexpr auto SoundAsset_Medium = 0x238; // Size: 8, Type: struct USoundBase*
			constexpr auto SoundAsset_High = 0x240; // Size: 8, Type: struct USoundBase*
			constexpr auto EffectAsset_Low = 0x248; // Size: 8, Type: struct UParticleSystem*
			constexpr auto EffectAsset_Medium = 0x250; // Size: 8, Type: struct UParticleSystem*
			constexpr auto EffectAsset_High = 0x258; // Size: 8, Type: struct UParticleSystem*
			constexpr auto LowSpeed = 0x260; // Size: 4, Type: float
			constexpr auto HighSpeed = 0x264; // Size: 4, Type: float
			constexpr auto Factor = 0x268; // Size: 4, Type: float
			constexpr auto DirectingEffectType = 0x26c; // Size: 1, Type: enum class EEnvironmentDirectingEffectType
			constexpr auto ActiveTimeSconds = 0x270; // Size: 4, Type: float
			constexpr auto AttachSocketName = 0x274; // Size: 8, Type: struct FName
	}
} 
