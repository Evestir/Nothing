namespace offsets
{
	namespace UUVLayoutPreview
	{
			constexpr auto Settings = 0x28; // Size: 8, Type: struct UUVLayoutPreviewProperties*
			constexpr auto PreviewMesh = 0x30; // Size: 8, Type: struct UPreviewMesh*
			constexpr auto TriangleComponent = 0x38; // Size: 8, Type: struct UTriangleSetComponent*
			constexpr auto bShowBackingRectangle = 0x40; // Size: 1, Type: bool
			constexpr auto BackingRectangleMaterial = 0x48; // Size: 8, Type: struct UMaterialInterface*
	}
} 
