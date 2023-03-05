namespace offsets
{
	namespace USVGToolsMesh
	{
			constexpr auto Type = 0x30; // Size: 1, Type: enum class SVGToolsMeshType
			constexpr auto antialiasingWidth = 0x34; // Size: 4, Type: float
			constexpr auto Scale = 0x38; // Size: 4, Type: float
			constexpr auto curveQuality = 0x3c; // Size: 4, Type: float
			constexpr auto Quality = 0x40; // Size: 4, Type: float
			constexpr auto DepthOffset = 0x44; // Size: 4, Type: float
			constexpr auto useLight = 0x48; // Size: 1, Type: char
			constexpr auto pivotIndex = 0x4c; // Size: 1, Type: enum class SVGToolsPivotIndex
			constexpr auto Pivot = 0x50; // Size: 8, Type: struct FVector2D
			constexpr auto colliderMargin = 0x58; // Size: 4, Type: float
			constexpr auto colliderQuality = 0x5c; // Size: 4, Type: float
			constexpr auto colliderThickness = 0x60; // Size: 4, Type: float
			constexpr auto generateCollider = 0x64; // Size: 1, Type: char
			constexpr auto materialFlags = 0x68; // Size: 4, Type: uint32_t
			constexpr auto svgData = 0x70; // Size: 16, Type: struct FString
			constexpr auto pMaterial[2] = 0x80; // Size: 16, Type: struct UMaterialInterface*
			constexpr auto pTexture = 0x90; // Size: 8, Type: struct UTexture2D*
			constexpr auto pBodySetup = 0x98; // Size: 8, Type: struct UBodySetup*
			constexpr auto Bounds = 0xa0; // Size: 28, Type: struct FBoxSphereBounds
			constexpr auto firstIndex[2] = 0xbc; // Size: 8, Type: uint32_t
			constexpr auto numPrimitives[2] = 0xc4; // Size: 8, Type: uint32_t
			constexpr auto numMaterials = 0xcc; // Size: 4, Type: int32_t
			constexpr auto NumVertices = 0xd0; // Size: 4, Type: int32_t
			constexpr auto use32Bit = 0xd4; // Size: 1, Type: char
			constexpr auto SVG_MATERIAL_PATHObj = 0x208; // Size: 8, Type: struct UMaterial*
			constexpr auto SVG_TEX_MATERIAL_PATHObj = 0x210; // Size: 8, Type: struct UMaterial*
			constexpr auto SVG_TEX_RAD_MATERIAL_PATHObj = 0x218; // Size: 8, Type: struct UMaterial*
			constexpr auto SVG_TEX_FOCAL_MATERIAL_PATHObj = 0x220; // Size: 8, Type: struct UMaterial*
			constexpr auto SVG_TEX_RAD_PAD_MATERIAL_PATHObj = 0x228; // Size: 8, Type: struct UMaterial*
			constexpr auto SVG_TEX_RAD_REFLECT_MATERIAL_PATHObj = 0x230; // Size: 8, Type: struct UMaterial*
			constexpr auto SVG_TEX_RAD_SELECT_MATERIAL_PATHObj = 0x238; // Size: 8, Type: struct UMaterial*
			constexpr auto SVG_TEX_FOCAL_PAD_MATERIAL_PATHObj = 0x240; // Size: 8, Type: struct UMaterial*
			constexpr auto SVG_TEX_FOCAL_REFLECT_MATERIAL_PATHObj = 0x248; // Size: 8, Type: struct UMaterial*
			constexpr auto SVG_TEX_FOCAL_SELECT_MATERIAL_PATHObj = 0x250; // Size: 8, Type: struct UMaterial*
	}
} 
