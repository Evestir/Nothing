namespace offsets
{
	namespace UCharacterCostumeAsset
	{
			constexpr auto CharMeshScale = 0x30; // Size: 4, Type: float
			constexpr auto OffsetFromSeat = 0x34; // Size: 12, Type: struct FVector
			constexpr auto HandleDirectionOffset = 0x40; // Size: 4, Type: float
			constexpr auto NotifyAnimParticleId = 0x44; // Size: 4, Type: int32_t
			constexpr auto MontageAssets = 0x48; // Size: 8, Type: struct UCharacterMontageAsset*
			constexpr auto Mesh = 0x50; // Size: 40, Type: struct TSoftObjectPtr<USkeletalMesh>
			constexpr auto AnimInstance = 0x78; // Size: 40, Type: struct TSoftClassPtr<UObject>
	}
} 
