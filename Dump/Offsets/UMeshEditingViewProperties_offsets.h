namespace offsets
{
	namespace UMeshEditingViewProperties
	{
			constexpr auto bShowWireframe = 0x60; // Size: 1, Type: bool
			constexpr auto MaterialMode = 0x64; // Size: 4, Type: enum class EMeshEditingMaterialModes
			constexpr auto bFlatShading = 0x68; // Size: 1, Type: bool
			constexpr auto Color = 0x6c; // Size: 16, Type: struct FLinearColor
			constexpr auto Image = 0x80; // Size: 8, Type: struct UTexture2D*
	}
} 
