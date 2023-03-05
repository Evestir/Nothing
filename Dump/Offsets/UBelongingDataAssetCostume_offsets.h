namespace offsets
{
	namespace UBelongingDataAssetCostume
	{
			constexpr auto CharMeshScale = 0x40; // Size: 4, Type: float
			constexpr auto OffsetFromSeat = 0x44; // Size: 12, Type: struct FVector
			constexpr auto OffsetLocStandFromKart = 0x50; // Size: 12, Type: struct FVector
			constexpr auto OffsetRotStandFromKart = 0x5c; // Size: 12, Type: struct FRotator
			constexpr auto HandleDirectionOffset = 0x68; // Size: 4, Type: float
			constexpr auto MontageAssets = 0x70; // Size: 8, Type: struct UCharacterMontageAsset*
			constexpr auto Mesh = 0x78; // Size: 40, Type: struct TSoftObjectPtr<USkeletalMesh>
			constexpr auto PhysicAssetOverride = 0xa0; // Size: 40, Type: struct TSoftObjectPtr<UPhysicsAsset>
			constexpr auto AnimInstance = 0xc8; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto TargetAffiliatePlatform = 0xf0; // Size: 1, Type: enum class EKtAffiliatePlatform
			constexpr auto DefaultAssetItemId = 0xf8; // Size: 16, Type: struct FString
			constexpr auto CostumeGadgetIndex = 0x108; // Size: 4, Type: int32_t
			constexpr auto CostumeParticleIndex = 0x10c; // Size: 4, Type: int32_t
			constexpr auto CostumeFMODIndex = 0x110; // Size: 4, Type: int32_t
	}
} 
