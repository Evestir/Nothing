namespace offsets
{
	namespace UClothingAssetCommon
	{
			constexpr auto PhysicsAsset = 0x48; // Size: 8, Type: struct UPhysicsAsset*
			constexpr auto ClothConfigs = 0x50; // Size: 80, Type: struct TMap<struct FName, struct UClothConfigBase*>
			constexpr auto LODData = 0xa0; // Size: 16, Type: struct TArray<struct FClothLODDataCommon>
			constexpr auto LodMap = 0xb0; // Size: 16, Type: struct TArray<int32_t>
			constexpr auto UsedBoneNames = 0xc0; // Size: 16, Type: struct TArray<struct FName>
			constexpr auto UsedBoneIndices = 0xd0; // Size: 16, Type: struct TArray<int32_t>
			constexpr auto ReferenceBoneIndex = 0xe0; // Size: 4, Type: int32_t
			constexpr auto CustomData = 0xe8; // Size: 8, Type: struct UClothingAssetCustomData*
	}
} 
