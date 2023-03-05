namespace offsets
{
	namespace AItemMine
	{
			constexpr auto FiringSound = 0x358; // Size: 40, Type: struct TSoftObjectPtr<UFMODEvent>
			constexpr auto ActionDelay = 0x380; // Size: 4, Type: float
			constexpr auto LifeSpanTime = 0x384; // Size: 4, Type: float
			constexpr auto MineSkeletalMeshComponents = 0x390; // Size: 16, Type: struct TArray<struct USkeletalMeshComponent*>
			constexpr auto OverlapComponents = 0x3a0; // Size: 16, Type: struct TArray<struct USphereComponent*>
			constexpr auto MineMesh = 0x3b0; // Size: 40, Type: struct TSoftObjectPtr<USkeletalMesh>
			constexpr auto IdleBeepSoundAsset = 0x3d8; // Size: 40, Type: struct TSoftObjectPtr<UFMODEvent>
			constexpr auto MineAnim = 0x400; // Size: 40, Type: struct TSoftObjectPtr<UAnimSequenceBase>
			constexpr auto DropCurveAsset = 0x428; // Size: 40, Type: struct TSoftObjectPtr<UCurveFloat>
			constexpr auto ItemFeedSequence = 0x450; // Size: 40, Type: struct TSoftObjectPtr<ULevelSequence>
	}
} 
