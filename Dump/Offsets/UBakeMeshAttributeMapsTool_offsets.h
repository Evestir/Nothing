namespace offsets
{
	namespace UBakeMeshAttributeMapsTool
	{
			constexpr auto Settings = 0x90; // Size: 8, Type: struct UBakeMeshAttributeMapsToolProperties*
			constexpr auto NormalMapProps = 0x98; // Size: 8, Type: struct UBakedNormalMapToolProperties*
			constexpr auto OcclusionMapProps = 0xa0; // Size: 8, Type: struct UBakedOcclusionMapToolProperties*
			constexpr auto CurvatureMapProps = 0xa8; // Size: 8, Type: struct UBakedCurvatureMapToolProperties*
			constexpr auto Texture2DProps = 0xb0; // Size: 8, Type: struct UBakedTexture2DImageProperties*
			constexpr auto VisualizationProps = 0xb8; // Size: 8, Type: struct UBakedOcclusionMapVisualizationProperties*
			constexpr auto PreviewMaterial = 0xd0; // Size: 8, Type: struct UMaterialInstanceDynamic*
			constexpr auto BentNormalPreviewMaterial = 0xd8; // Size: 8, Type: struct UMaterialInstanceDynamic*
			constexpr auto CachedNormalMap = 0x440; // Size: 8, Type: struct UTexture2D*
			constexpr auto CachedOcclusionMap = 0x470; // Size: 8, Type: struct UTexture2D*
			constexpr auto CachedBentNormalMap = 0x478; // Size: 8, Type: struct UTexture2D*
			constexpr auto CachedCurvatureMap = 0x4a8; // Size: 8, Type: struct UTexture2D*
			constexpr auto CachedMeshPropertyMap = 0x4c0; // Size: 8, Type: struct UTexture2D*
			constexpr auto CachedTexture2DImageMap = 0x4d8; // Size: 8, Type: struct UTexture2D*
			constexpr auto EmptyNormalMap = 0x4e0; // Size: 8, Type: struct UTexture2D*
			constexpr auto EmptyColorMapBlack = 0x4e8; // Size: 8, Type: struct UTexture2D*
			constexpr auto EmptyColorMapWhite = 0x4f0; // Size: 8, Type: struct UTexture2D*
	}
} 
