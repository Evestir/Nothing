namespace offsets
{
	namespace UMaterialInstance
	{
			constexpr auto PhysMaterial = 0x98; // Size: 8, Type: struct UPhysicalMaterial*
			constexpr auto PhysicalMaterialMap[8] = 0xa0; // Size: 64, Type: struct UPhysicalMaterial*
			constexpr auto Parent = 0xe0; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto bHasStaticPermutationResource = 0xe8; // Size: 1, Type: char
			constexpr auto bOverrideSubsurfaceProfile = 0xe8; // Size: 1, Type: char
			constexpr auto ScalarParameterValues = 0xf8; // Size: 16, Type: struct TArray<struct FScalarParameterValue>
			constexpr auto VectorParameterValues = 0x108; // Size: 16, Type: struct TArray<struct FVectorParameterValue>
			constexpr auto TextureParameterValues = 0x118; // Size: 16, Type: struct TArray<struct FTextureParameterValue>
			constexpr auto RuntimeVirtualTextureParameterValues = 0x128; // Size: 16, Type: struct TArray<struct FRuntimeVirtualTextureParameterValue>
			constexpr auto FontParameterValues = 0x138; // Size: 16, Type: struct TArray<struct FFontParameterValue>
			constexpr auto BasePropertyOverrides = 0x148; // Size: 12, Type: struct FMaterialInstanceBasePropertyOverrides
			constexpr auto StaticParameters = 0x160; // Size: 64, Type: struct FStaticParameterSet
			constexpr auto CachedLayerParameters = 0x1a0; // Size: 336, Type: struct FMaterialCachedParameters
			constexpr auto CachedReferencedTextures = 0x2f0; // Size: 16, Type: struct TArray<struct UObject*>
	}
} 
