namespace offsets
{
	namespace ULicenseBossData
	{
			constexpr auto KartDesc = 0x40; // Size: 184, Type: struct FKartDesc
			constexpr auto CharacterDesc = 0xf8; // Size: 96, Type: struct FCharacterDesc
			constexpr auto InitDistance = 0x158; // Size: 4, Type: float
			constexpr auto MaxHP = 0x15c; // Size: 4, Type: float
			constexpr auto SlipRadius = 0x160; // Size: 4, Type: float
			constexpr auto RageTime = 0x164; // Size: 4, Type: float
			constexpr auto RocketDamage = 0x168; // Size: 4, Type: float
			constexpr auto FirstRocketDamage = 0x16c; // Size: 4, Type: float
			constexpr auto LockItemCount = 0x170; // Size: 4, Type: int32_t
			constexpr auto RageThreshold = 0x178; // Size: 16, Type: struct TArray<float>
			constexpr auto AttackDistanceInterval = 0x188; // Size: 4, Type: float
			constexpr auto LoseDistance = 0x18c; // Size: 4, Type: float
			constexpr auto Scale = 0x190; // Size: 4, Type: float
			constexpr auto BossBananaPatternSet = 0x198; // Size: 40, Type: struct FLicenseBossBananaPatternSet
			constexpr auto Banana_Begin = 0x1c0; // Size: 40, Type: struct TSoftObjectPtr<UAnimationAsset>
			constexpr auto Montage_Base = 0x1e8; // Size: 40, Type: struct TSoftObjectPtr<UAnimMontage>
			constexpr auto Montage_Base2 = 0x210; // Size: 40, Type: struct TSoftObjectPtr<UAnimMontage>
			constexpr auto Montage_Angry = 0x238; // Size: 40, Type: struct TSoftObjectPtr<UAnimMontage>
			constexpr auto Montage_Attack = 0x260; // Size: 40, Type: struct TSoftObjectPtr<UAnimMontage>
			constexpr auto Montage_Damage = 0x288; // Size: 40, Type: struct TSoftObjectPtr<UAnimMontage>
			constexpr auto Montage_Damage2 = 0x2b0; // Size: 40, Type: struct TSoftObjectPtr<UAnimMontage>
			constexpr auto Montage_Fail = 0x2d8; // Size: 40, Type: struct TSoftObjectPtr<UAnimMontage>
			constexpr auto Montage_Start = 0x300; // Size: 40, Type: struct TSoftObjectPtr<UAnimMontage>
			constexpr auto RageBGM = 0x328; // Size: 8, Type: struct UFMODEvent*
	}
} 
