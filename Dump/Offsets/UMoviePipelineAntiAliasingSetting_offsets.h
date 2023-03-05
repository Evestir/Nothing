namespace offsets
{
	namespace UMoviePipelineAntiAliasingSetting
	{
			constexpr auto SpatialSampleCount = 0x48; // Size: 4, Type: int32_t
			constexpr auto TemporalSampleCount = 0x4c; // Size: 4, Type: int32_t
			constexpr auto bOverrideAntiAliasing = 0x50; // Size: 1, Type: bool
			constexpr auto AntiAliasingMethod = 0x51; // Size: 1, Type: enum class EAntiAliasingMethod
			constexpr auto RenderWarmUpCount = 0x54; // Size: 4, Type: int32_t
			constexpr auto bUseCameraCutForWarmUp = 0x58; // Size: 1, Type: bool
			constexpr auto EngineWarmUpCount = 0x5c; // Size: 4, Type: int32_t
			constexpr auto bRenderWarmUpFrames = 0x60; // Size: 1, Type: bool
	}
} 
