namespace offsets
{
	namespace USkeleton
	{
			constexpr auto BoneTree = 0x38; // Size: 16, Type: struct TArray<struct FBoneNode>
			constexpr auto RefLocalPoses = 0x48; // Size: 16, Type: struct TArray<struct FTransform>
			constexpr auto VirtualBoneGuid = 0x170; // Size: 16, Type: struct FGuid
			constexpr auto VirtualBones = 0x180; // Size: 16, Type: struct TArray<struct FVirtualBone>
			constexpr auto Sockets = 0x190; // Size: 16, Type: struct TArray<struct USkeletalMeshSocket*>
			constexpr auto SmartNames = 0x1f0; // Size: 80, Type: struct FSmartNameContainer
			constexpr auto BlendProfiles = 0x270; // Size: 16, Type: struct TArray<struct UBlendProfile*>
			constexpr auto SlotGroups = 0x280; // Size: 16, Type: struct TArray<struct FAnimSlotGroup>
			constexpr auto AssetUserData = 0x380; // Size: 16, Type: struct TArray<struct UAssetUserData*>
	}
} 
