namespace offsets
{
	namespace USpineSkeletonRendererComponent
	{
			constexpr auto NormalBlendMaterial = 0x518; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto AdditiveBlendMaterial = 0x520; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto MultiplyBlendMaterial = 0x528; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto ScreenBlendMaterial = 0x530; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto atlasNormalBlendMaterials = 0x538; // Size: 16, Type: struct TArray<struct UMaterialInstanceDynamic*>
			constexpr auto atlasAdditiveBlendMaterials = 0x598; // Size: 16, Type: struct TArray<struct UMaterialInstanceDynamic*>
			constexpr auto atlasMultiplyBlendMaterials = 0x5f8; // Size: 16, Type: struct TArray<struct UMaterialInstanceDynamic*>
			constexpr auto atlasScreenBlendMaterials = 0x658; // Size: 16, Type: struct TArray<struct UMaterialInstanceDynamic*>
			constexpr auto DepthOffset = 0x6b8; // Size: 4, Type: float
			constexpr auto TextureParameterName = 0x6bc; // Size: 8, Type: struct FName
			constexpr auto Color = 0x6c4; // Size: 16, Type: struct FLinearColor
			constexpr auto bCreateCollision = 0x6d4; // Size: 1, Type: bool
	}
} 
