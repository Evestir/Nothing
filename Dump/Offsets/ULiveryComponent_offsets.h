namespace offsets
{
	namespace ULiveryComponent
	{
			constexpr auto ReplicatedLiveryUniqueId = 0xc0; // Size: 16, Type: struct FString
			constexpr auto bEnableReplicatedLivery = 0xd0; // Size: 1, Type: bool
			constexpr auto KartSkeletalMeshComponent = 0xe0; // Size: 8, Type: struct UKartSkeletalMeshComponent*
			constexpr auto DecalMaterials = 0xe8; // Size: 16, Type: struct TArray<struct UMaterialInstanceDynamic*>
			constexpr auto bHasApplyLivery = 0x180; // Size: 1, Type: bool
			constexpr auto bVisibleLiveryBoundary = 0x181; // Size: 1, Type: bool
			constexpr auto LayerSection = 0x182; // Size: 1, Type: enum class ELiveryPaintType
			constexpr auto LayerIndex = 0x184; // Size: 4, Type: int32_t
			constexpr auto bVisibleLiveryLayer = 0x188; // Size: 1, Type: bool
	}
} 
