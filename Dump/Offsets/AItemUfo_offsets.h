namespace offsets
{
	namespace AItemUfo
	{
			constexpr auto UfoMeshComponent = 0x358; // Size: 8, Type: struct USkeletalMeshComponent*
			constexpr auto UsingSound = 0x360; // Size: 40, Type: struct TSoftObjectPtr<UFMODEvent>
			constexpr auto AffectSound = 0x388; // Size: 40, Type: struct TSoftObjectPtr<UFMODEvent>
			constexpr auto UfoMesh = 0x3b0; // Size: 40, Type: struct TSoftObjectPtr<USkeletalMesh>
			constexpr auto AttackBeginAnim = 0x3d8; // Size: 40, Type: struct TSoftObjectPtr<UAnimSequence>
			constexpr auto AttackLoopAnim = 0x400; // Size: 40, Type: struct TSoftObjectPtr<UAnimSequence>
			constexpr auto AttackEndAnim = 0x428; // Size: 40, Type: struct TSoftObjectPtr<UAnimSequence>
			constexpr auto DefenseAnim = 0x450; // Size: 40, Type: struct TSoftObjectPtr<UAnimSequence>
			constexpr auto UfoUseAnim = 0x478; // Size: 40, Type: struct TSoftObjectPtr<UAnimSequence>
			constexpr auto HeightCurveAsset_Water = 0x4a0; // Size: 40, Type: struct TSoftObjectPtr<UCurveFloat>
			constexpr auto HeightCurveAsset_Rocket = 0x4c8; // Size: 40, Type: struct TSoftObjectPtr<UCurveFloat>
			constexpr auto UFO_Bullet = 0x4f0; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto ItemFeedSequence = 0x518; // Size: 40, Type: struct TSoftObjectPtr<ULevelSequence>
			constexpr auto HeightCurve = 0x540; // Size: 8, Type: struct UCurveFloat*
			constexpr auto AuthTarget = 0x568; // Size: 8, Type: struct UItemComponent*
			constexpr auto LocalUser = 0x570; // Size: 8, Type: struct UItemComponent*
			constexpr auto AuthReaction = 0x578; // Size: 8, Type: struct UUfoReaction*
			constexpr auto LocalReaction = 0x580; // Size: 8, Type: struct UUfoReaction*
	}
} 
