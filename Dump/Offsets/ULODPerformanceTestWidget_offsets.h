namespace offsets
{
	namespace ULODPerformanceTestWidget
	{
			constexpr auto CharacterMontageMap = 0x260; // Size: 80, Type: struct TMap<struct USkeletalMesh*, struct UCharacterMontageAsset*>
			constexpr auto AnimComboBox = 0x2b0; // Size: 8, Type: struct UComboBoxStringExpand*
			constexpr auto SkeletalMeshActorList = 0x2b8; // Size: 16, Type: struct TArray<struct ASkeletalMeshActor*>
			constexpr auto bPlayAnimation = 0x2c8; // Size: 1, Type: bool
			constexpr auto SelectedMontage = 0x2c9; // Size: 1, Type: enum class ECharacterMontage
			constexpr auto MontageListMap = 0x2d0; // Size: 80, Type: struct TMap<struct FString, enum class ECharacterMontage>
	}
} 
