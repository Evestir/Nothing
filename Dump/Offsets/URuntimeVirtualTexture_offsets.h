namespace offsets
{
	namespace URuntimeVirtualTexture
	{
			constexpr auto TileCount = 0x28; // Size: 4, Type: int32_t
			constexpr auto TileSize = 0x2c; // Size: 4, Type: int32_t
			constexpr auto TileBorderSize = 0x30; // Size: 4, Type: int32_t
			constexpr auto MaterialType = 0x34; // Size: 1, Type: enum class ERuntimeVirtualTextureMaterialType
			constexpr auto bCompressTextures = 0x35; // Size: 1, Type: bool
			constexpr auto bClearTextures = 0x36; // Size: 1, Type: bool
			constexpr auto bSinglePhysicalSpace = 0x37; // Size: 1, Type: bool
			constexpr auto bPrivateSpace = 0x38; // Size: 1, Type: bool
			constexpr auto bAdaptive = 0x39; // Size: 1, Type: bool
			constexpr auto bContinuousUpdate = 0x3a; // Size: 1, Type: bool
			constexpr auto RemoveLowMips = 0x3c; // Size: 4, Type: int32_t
			constexpr auto LODGroup = 0x40; // Size: 1, Type: enum class TextureGroup
			constexpr auto Size = 0x44; // Size: 4, Type: int32_t
			constexpr auto StreamingTexture = 0x48; // Size: 8, Type: struct URuntimeVirtualTextureStreamingProxy*
	}
} 
