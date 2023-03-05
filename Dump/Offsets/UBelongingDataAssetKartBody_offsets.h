namespace offsets
{
	namespace UBelongingDataAssetKartBody
	{
			constexpr auto bIsLineupKart = 0x40; // Size: 1, Type: bool
			constexpr auto bUnuseDisplayFrontWheel = 0x41; // Size: 1, Type: bool
			constexpr auto bTransform = 0x42; // Size: 1, Type: bool
			constexpr auto ItemSkeletalMesh = 0x48; // Size: 40, Type: struct TSoftObjectPtr<USkeletalMesh>
			constexpr auto PhysicsAsset = 0x70; // Size: 40, Type: struct TSoftObjectPtr<UPhysicsAsset>
			constexpr auto TargetAffiliatePlatform = 0x98; // Size: 1, Type: enum class EKtAffiliatePlatform
			constexpr auto OverrideTargetMaterial = 0xa0; // Size: 40, Type: struct TSoftObjectPtr<UMaterialInterface>
			constexpr auto OverridingMaterial = 0xc8; // Size: 40, Type: struct TSoftObjectPtr<UMaterialInterface>
			constexpr auto ItemAnimation = 0xf0; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto SubLinkAnimation = 0x118; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto EffectPreset = 0x140; // Size: 40, Type: struct TSoftObjectPtr<UEffectPreset>
			constexpr auto KartSoundData = 0x168; // Size: 40, Type: struct TSoftObjectPtr<UKartBodySound>
			constexpr auto OffsetFromSeat = 0x190; // Size: 12, Type: struct FVector
			constexpr auto OffsetStandFromKart = 0x19c; // Size: 12, Type: struct FVector
			constexpr auto KartEffectEvent = 0x1a8; // Size: 272, Type: struct FKartEffectEvent
			constexpr auto WheelType = 0x2b8; // Size: 1, Type: enum class EWheelType
			constexpr auto ChangeMaterialBySpeed = 0x2bc; // Size: 4, Type: int32_t
			constexpr auto AdditionalSkillData = 0x2c0; // Size: 408, Type: struct FKartAdditionalSkillData
			constexpr auto AODecalMaterial = 0x458; // Size: 40, Type: struct TSoftObjectPtr<UMaterialInterface>
			constexpr auto AODecalBounds = 0x480; // Size: 28, Type: struct FBoxSphereBounds
			constexpr auto AODecalScale = 0x49c; // Size: 4, Type: float
			constexpr auto Headlight = 0x4a0; // Size: 40, Type: struct TSoftObjectPtr<UHeadlightDataAsset>
			constexpr auto Rear_Light_Color = 0x4c8; // Size: 16, Type: struct FLinearColor
			constexpr auto LeftTrailWidth = 0x4d8; // Size: 4, Type: float
			constexpr auto RightTrailWidth = 0x4dc; // Size: 4, Type: float
			constexpr auto BoosterWindTransform = 0x4e0; // Size: 48, Type: struct FTransform
			constexpr auto IdleAnimation = 0x510; // Size: 40, Type: struct TSoftObjectPtr<UAnimSequenceBase>
			constexpr auto AnimTransform = 0x538; // Size: 40, Type: struct TSoftObjectPtr<UAnimSequenceBase>
			constexpr auto AnimTransformed = 0x560; // Size: 40, Type: struct TSoftObjectPtr<UAnimSequenceBase>
			constexpr auto bIdleRateBySpeed = 0x588; // Size: 1, Type: bool
			constexpr auto bTransformLoopRateBySpeed = 0x589; // Size: 1, Type: bool
			constexpr auto IdleAnimRate = 0x58c; // Size: 4, Type: float
			constexpr auto TransformAnimRate = 0x590; // Size: 4, Type: float
			constexpr auto UntransLoopRate = 0x594; // Size: 4, Type: float
			constexpr auto TransformLoopAnimRate = 0x598; // Size: 4, Type: float
			constexpr auto WheelAxisOffset = 0x59c; // Size: 4, Type: float
			constexpr auto SuspensionOffset = 0x5a0; // Size: 4, Type: float
	}
} 
