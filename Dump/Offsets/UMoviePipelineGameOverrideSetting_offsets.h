namespace offsets
{
	namespace UMoviePipelineGameOverrideSetting
	{
			constexpr auto GameModeOverride = 0x48; // Size: 8, Type: AGameModeBase*
			constexpr auto bCinematicQualitySettings = 0x50; // Size: 1, Type: bool
			constexpr auto TextureStreaming = 0x51; // Size: 1, Type: enum class EMoviePipelineTextureStreamingMethod
			constexpr auto bUseLODZero = 0x52; // Size: 1, Type: bool
			constexpr auto bDisableHLODs = 0x53; // Size: 1, Type: bool
			constexpr auto bUseHighQualityShadows = 0x54; // Size: 1, Type: bool
			constexpr auto ShadowDistanceScale = 0x58; // Size: 4, Type: int32_t
			constexpr auto ShadowRadiusThreshold = 0x5c; // Size: 4, Type: float
			constexpr auto bOverrideViewDistanceScale = 0x60; // Size: 1, Type: bool
			constexpr auto ViewDistanceScale = 0x64; // Size: 4, Type: int32_t
			constexpr auto bFlushGrassStreaming = 0x68; // Size: 1, Type: bool
	}
} 
