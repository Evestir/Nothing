namespace offsets
{
	namespace UGroomBindingAsset
	{
			constexpr auto GroomBindingType = 0x28; // Size: 1, Type: enum class EGroomBindingMeshType
			constexpr auto Groom = 0x30; // Size: 8, Type: struct UGroomAsset*
			constexpr auto SourceSkeletalMesh = 0x38; // Size: 8, Type: struct USkeletalMesh*
			constexpr auto TargetSkeletalMesh = 0x40; // Size: 8, Type: struct USkeletalMesh*
			constexpr auto SourceGeometryCache = 0x48; // Size: 8, Type: struct UGeometryCache*
			constexpr auto TargetGeometryCache = 0x50; // Size: 8, Type: struct UGeometryCache*
			constexpr auto NumInterpolationPoints = 0x58; // Size: 4, Type: int32_t
			constexpr auto MatchingSection = 0x5c; // Size: 4, Type: int32_t
			constexpr auto GroupInfos = 0x60; // Size: 16, Type: struct TArray<struct FGoomBindingGroupInfo>
	}
} 
