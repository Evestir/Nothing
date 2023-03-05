namespace offsets
{
	namespace UMaterialExpressionRuntimeVirtualTextureSample
	{
			constexpr auto Coordinates = 0x40; // Size: 20, Type: struct FExpressionInput
			constexpr auto WorldPosition = 0x54; // Size: 20, Type: struct FExpressionInput
			constexpr auto MipValue = 0x68; // Size: 20, Type: struct FExpressionInput
			constexpr auto VirtualTexture = 0x80; // Size: 8, Type: struct URuntimeVirtualTexture*
			constexpr auto MaterialType = 0x88; // Size: 1, Type: enum class ERuntimeVirtualTextureMaterialType
			constexpr auto bSinglePhysicalSpace = 0x89; // Size: 1, Type: bool
			constexpr auto bAdaptive = 0x8a; // Size: 1, Type: bool
			constexpr auto MipValueMode = 0x8b; // Size: 1, Type: enum class ERuntimeVirtualTextureMipValueMode
			constexpr auto TextureAddressMode = 0x8c; // Size: 1, Type: enum class ERuntimeVirtualTextureTextureAddressMode
	}
} 
