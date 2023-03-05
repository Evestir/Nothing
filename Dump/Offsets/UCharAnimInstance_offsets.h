namespace offsets
{
	namespace UCharAnimInstance
	{
			constexpr auto CharacterState = 0x2c0; // Size: 1, Type: enum class ECharacterAnimGraphState
			constexpr auto RaceBlendSpace = 0x2c8; // Size: 8, Type: struct UBlendSpaceBase*
			constexpr auto BoostAnimSequence = 0x2d0; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto StandAnimSequence = 0x2d8; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto SitAnimSequence = 0x2e0; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto Steer = 0x2f0; // Size: 4, Type: float
			constexpr auto Throttle = 0x2f4; // Size: 4, Type: float
			constexpr auto bIsBoost = 0x2f8; // Size: 1, Type: bool
			constexpr auto bStand = 0x2f9; // Size: 1, Type: bool
			constexpr auto bLobby = 0x2fa; // Size: 1, Type: bool
			constexpr auto PhysicsWithBlend = 0x2fc; // Size: 4, Type: float
			constexpr auto LayerBlend = 0x300; // Size: 16, Type: struct TArray<float>
			constexpr auto bInitLookAt = 0x310; // Size: 1, Type: bool
			constexpr auto bActivateLookat = 0x311; // Size: 1, Type: bool
			constexpr auto LookAtLerpDelta = 0x314; // Size: 4, Type: float
			constexpr auto FrontViewLerpAlpha = 0x318; // Size: 4, Type: float
			constexpr auto ReceivedRotation = 0x31c; // Size: 12, Type: struct FRotator
			constexpr auto HeadRotation = 0x328; // Size: 12, Type: struct FRotator
			constexpr auto NeckRotation = 0x334; // Size: 12, Type: struct FRotator
			constexpr auto SavedRotation = 0x340; // Size: 12, Type: struct FRotator
			constexpr auto HeadPitchFactor = 0x34c; // Size: 4, Type: float
			constexpr auto LookAtSpeedCurve = 0x358; // Size: 8, Type: struct UCurveFloat*
			constexpr auto LookAtDelay = 0x360; // Size: 4, Type: float
			constexpr auto NeckHeadRotateRate = 0x364; // Size: 4, Type: float
			constexpr auto MaxYaw = 0x368; // Size: 4, Type: float
			constexpr auto CharacterName = 0x370; // Size: 16, Type: struct FString
			constexpr auto FolderPath = 0x380; // Size: 16, Type: struct FString
			constexpr auto bAutoPropertySettings = 0x390; // Size: 1, Type: bool
			constexpr auto LastCrashTime = 0x394; // Size: 4, Type: float
			constexpr auto bNoAnimUpdate = 0x398; // Size: 1, Type: bool
			constexpr auto MontageAsset = 0x3a0; // Size: 8, Type: struct UCharacterMontageAsset*
			constexpr auto PreCacheMontageAssetContainer = 0x3a8; // Size: 80, Type: struct TSet<struct UObject*>
			constexpr auto KdAnimationComponent = 0x400; // Size: 8, Type: struct UKdAnimationComponent*
	}
} 
