namespace offsets
{
	namespace UMoviePipelineDeferredPassBase
	{
			constexpr auto bAccumulatorIncludesAlpha = 0xc8; // Size: 1, Type: bool
			constexpr auto bDisableMultisampleEffects = 0xc9; // Size: 1, Type: bool
			constexpr auto bUse32BitPostProcessMaterials = 0xca; // Size: 1, Type: bool
			constexpr auto AdditionalPostProcessMaterials = 0xd0; // Size: 16, Type: struct TArray<struct FMoviePipelinePostProcessPass>
			constexpr auto bAddDefaultLayer = 0xe0; // Size: 1, Type: bool
			constexpr auto StencilLayers = 0xe8; // Size: 16, Type: struct TArray<struct FActorLayer>
			constexpr auto ActivePostProcessMaterials = 0xf8; // Size: 16, Type: struct TArray<struct UMaterialInterface*>
			constexpr auto StencilLayerMaterial = 0x108; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto TileRenderTargets = 0x110; // Size: 16, Type: struct TArray<struct UTextureRenderTarget2D*>
	}
} 
