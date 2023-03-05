namespace offsets
{
	namespace UGroomAsset
	{
			constexpr auto HairGroupsInfo = 0x30; // Size: 16, Type: struct TArray<struct FHairGroupInfoWithVisibility>
			constexpr auto HairGroupsRendering = 0x40; // Size: 16, Type: struct TArray<struct FHairGroupsRendering>
			constexpr auto HairGroupsPhysics = 0x50; // Size: 16, Type: struct TArray<struct FHairGroupsPhysics>
			constexpr auto HairGroupsInterpolation = 0x60; // Size: 16, Type: struct TArray<struct FHairGroupsInterpolation>
			constexpr auto HairGroupsLOD = 0x70; // Size: 16, Type: struct TArray<struct FHairGroupsLOD>
			constexpr auto HairGroupsCards = 0x80; // Size: 16, Type: struct TArray<struct FHairGroupsCardsSourceDescription>
			constexpr auto HairGroupsMeshes = 0x90; // Size: 16, Type: struct TArray<struct FHairGroupsMeshesSourceDescription>
			constexpr auto HairGroupsMaterials = 0xa0; // Size: 16, Type: struct TArray<struct FHairGroupsMaterial>
			constexpr auto EnableGlobalInterpolation = 0xc0; // Size: 1, Type: bool
			constexpr auto HairInterpolationType = 0xc1; // Size: 1, Type: enum class EGroomInterpolationType
			constexpr auto LODSelectionType = 0xc2; // Size: 1, Type: enum class EHairLODSelectionType
			constexpr auto MinLOD = 0xc4; // Size: 4, Type: struct FPerPlatformInt
			constexpr auto DisableBelowMinLodStripping = 0xc8; // Size: 1, Type: struct FPerPlatformBool
			constexpr auto EffectiveLODBias = 0xd0; // Size: 16, Type: struct TArray<float>
			constexpr auto AssetUserData = 0xe0; // Size: 16, Type: struct TArray<struct UAssetUserData*>
	}
} 
