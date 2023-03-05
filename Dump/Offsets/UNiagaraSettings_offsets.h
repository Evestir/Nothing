namespace offsets
{
	namespace UNiagaraSettings
	{
			constexpr auto DefaultEffectType = 0x38; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto QualityLevels = 0x50; // Size: 16, Type: struct TArray<struct FText>
			constexpr auto ComponentRendererWarningsPerClass = 0x60; // Size: 80, Type: struct TMap<struct FString, struct FText>
			constexpr auto DefaultRenderTargetFormat = 0xb0; // Size: 1, Type: enum class ETextureRenderTargetFormat
			constexpr auto DefaultGridFormat = 0xb1; // Size: 1, Type: enum class ENiagaraGpuBufferFormat
			constexpr auto DefaultRendererMotionVectorSetting = 0xb4; // Size: 4, Type: enum class ENiagaraDefaultRendererMotionVectorSetting
			constexpr auto NDISkelMesh_GpuMaxInfluences = 0xb8; // Size: 1, Type: enum class ENDISkelMesh_GpuMaxInfluences
			constexpr auto NDISkelMesh_GpuUniformSamplingFormat = 0xb9; // Size: 1, Type: enum class ENDISkelMesh_GpuUniformSamplingFormat
			constexpr auto NDISkelMesh_AdjacencyTriangleIndexFormat = 0xba; // Size: 1, Type: enum class ENDISkelMesh_AdjacencyTriangleIndexFormat
			constexpr auto DefaultEffectTypePtr = 0xc0; // Size: 8, Type: struct UNiagaraEffectType*
	}
} 
