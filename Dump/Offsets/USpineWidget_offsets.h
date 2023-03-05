namespace offsets
{
	namespace USpineWidget
	{
			constexpr auto InitialSkin = 0x108; // Size: 16, Type: struct FString
			constexpr auto Atlas = 0x118; // Size: 8, Type: struct USpineAtlasAsset*
			constexpr auto SkeletonData = 0x120; // Size: 8, Type: struct USpineSkeletonDataAsset*
			constexpr auto NormalBlendMaterial = 0x128; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto AdditiveBlendMaterial = 0x130; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto MultiplyBlendMaterial = 0x138; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto ScreenBlendMaterial = 0x140; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto TextureParameterName = 0x148; // Size: 8, Type: struct FName
			constexpr auto DepthOffset = 0x150; // Size: 4, Type: float
			constexpr auto Color = 0x154; // Size: 16, Type: struct FLinearColor
			constexpr auto Brush = 0x168; // Size: 136, Type: struct FSlateBrush
			constexpr auto BeforeUpdateWorldTransform = 0x1f0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto AfterUpdateWorldTransform = 0x200; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto animationStart = 0x210; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto AnimationInterrupt = 0x220; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto AnimationEvent = 0x230; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto AnimationComplete = 0x240; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto animationEnd = 0x250; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto AnimationDispose = 0x260; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto atlasNormalBlendMaterials = 0x2b0; // Size: 16, Type: struct TArray<struct UMaterialInstanceDynamic*>
			constexpr auto atlasAdditiveBlendMaterials = 0x310; // Size: 16, Type: struct TArray<struct UMaterialInstanceDynamic*>
			constexpr auto atlasMultiplyBlendMaterials = 0x370; // Size: 16, Type: struct TArray<struct UMaterialInstanceDynamic*>
			constexpr auto atlasScreenBlendMaterials = 0x3d0; // Size: 16, Type: struct TArray<struct UMaterialInstanceDynamic*>
			constexpr auto trackEntries = 0x620; // Size: 80, Type: struct TSet<struct UTrackEntry*>
			constexpr auto bAutoPlaying = 0x670; // Size: 1, Type: bool
	}
} 
