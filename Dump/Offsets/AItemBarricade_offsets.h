namespace offsets
{
	namespace AItemBarricade
	{
			constexpr auto FiringSound = 0x358; // Size: 40, Type: struct TSoftObjectPtr<UFMODEvent>
			constexpr auto DropSound = 0x380; // Size: 40, Type: struct TSoftObjectPtr<UFMODEvent>
			constexpr auto StateEndSound = 0x3a8; // Size: 40, Type: struct TSoftObjectPtr<UFMODEvent>
			constexpr auto StateSetSound = 0x3d0; // Size: 40, Type: struct TSoftObjectPtr<UFMODEvent>
			constexpr auto Barricade_Bullet = 0x3f8; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto ItemFeedSequence = 0x420; // Size: 40, Type: struct TSoftObjectPtr<ULevelSequence>
			constexpr auto AuthStates = 0x4d8; // Size: 16, Type: struct TArray<int32_t>
			constexpr auto BarricadeSkeletalMeshComponents = 0x4e8; // Size: 16, Type: struct TArray<struct USkeletalMeshComponent*>
			constexpr auto BarricadeOverlapComponents = 0x4f8; // Size: 16, Type: struct TArray<struct UBoxComponent*>
			constexpr auto BarricadeCollisionComponents = 0x508; // Size: 16, Type: struct TArray<struct UBoxComponent*>
			constexpr auto AnimMontage_Start = 0x518; // Size: 8, Type: struct UAnimMontage*
			constexpr auto AnimMontage_TimeOut = 0x520; // Size: 8, Type: struct UAnimMontage*
			constexpr auto AnimMontage_Destruct_UsingPhys = 0x528; // Size: 8, Type: struct UAnimMontage*
			constexpr auto BarricadeAnim_Start = 0x530; // Size: 40, Type: struct TSoftObjectPtr<UAnimMontage>
			constexpr auto BarricadeAnim_TimeOut = 0x558; // Size: 40, Type: struct TSoftObjectPtr<UAnimSequenceBase>
			constexpr auto BarricadeAnim_Destruct_UsingPhysics = 0x580; // Size: 40, Type: struct TSoftObjectPtr<UAnimSequenceBase>
			constexpr auto BarricadeMesh = 0x5a8; // Size: 40, Type: struct TSoftObjectPtr<USkeletalMesh>
			constexpr auto BarricadeMesh_Destruct = 0x5d0; // Size: 40, Type: struct TSoftObjectPtr<USkeletalMesh>
			constexpr auto BarricadePhysicsAsset_Destruct = 0x5f8; // Size: 40, Type: struct TSoftObjectPtr<UPhysicsAsset>
			constexpr auto OverlapItemComponents = 0x628; // Size: 16, Type: struct TArray<struct UItemComponent*>
			constexpr auto AuthHitItemComponents = 0x638; // Size: 16, Type: struct TArray<struct UItemComponent*>
	}
} 
