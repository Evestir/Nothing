namespace offsets
{
	namespace ULightComponent
	{
			constexpr auto Temperature = 0x238; // Size: 4, Type: float
			constexpr auto MaxDrawDistance = 0x23c; // Size: 4, Type: float
			constexpr auto MaxDistanceFadeRange = 0x240; // Size: 4, Type: float
			constexpr auto TexelsPerPixelSpotlight = 0x244; // Size: 4, Type: float
			constexpr auto bUseTemperature = 0x248; // Size: 1, Type: char
			constexpr auto ShadowMapChannel = 0x24c; // Size: 4, Type: int32_t
			constexpr auto MinRoughness = 0x254; // Size: 4, Type: float
			constexpr auto SpecularScale = 0x258; // Size: 4, Type: float
			constexpr auto MinRoughness_K2 = 0x25c; // Size: 4, Type: float
			constexpr auto ShadowResolutionScale = 0x260; // Size: 4, Type: float
			constexpr auto ShadowBias = 0x264; // Size: 4, Type: float
			constexpr auto ShadowSlopeBias = 0x268; // Size: 4, Type: float
			constexpr auto ShadowSharpen = 0x26c; // Size: 4, Type: float
			constexpr auto ContactShadowLength = 0x270; // Size: 4, Type: float
			constexpr auto ContactShadowLengthInWS = 0x274; // Size: 1, Type: char
			constexpr auto InverseSquaredFalloff = 0x274; // Size: 1, Type: char
			constexpr auto CastTranslucentShadows = 0x274; // Size: 1, Type: char
			constexpr auto bCastShadowsFromCinematicObjectsOnly = 0x274; // Size: 1, Type: char
			constexpr auto bAffectDynamicIndirectLighting = 0x274; // Size: 1, Type: char
			constexpr auto bForceCachedShadowsForMovablePrimitives = 0x274; // Size: 1, Type: char
			constexpr auto LightingChannels = 0x278; // Size: 1, Type: struct FLightingChannels
			constexpr auto LightFunctionMaterial = 0x280; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto LightFunctionScale = 0x288; // Size: 12, Type: struct FVector
			constexpr auto IESTexture = 0x298; // Size: 8, Type: struct UTextureLightProfile*
			constexpr auto bUseIESBrightness = 0x2a0; // Size: 1, Type: char
			constexpr auto IESBrightnessScale = 0x2a4; // Size: 4, Type: float
			constexpr auto LightFunctionFadeDistance = 0x2a8; // Size: 4, Type: float
			constexpr auto DisabledBrightness = 0x2ac; // Size: 4, Type: float
			constexpr auto bEnableLightShaftBloom = 0x2b0; // Size: 1, Type: char
			constexpr auto BloomScale = 0x2b4; // Size: 4, Type: float
			constexpr auto BloomThreshold = 0x2b8; // Size: 4, Type: float
			constexpr auto BloomMaxBrightness = 0x2bc; // Size: 4, Type: float
			constexpr auto BloomTint = 0x2c0; // Size: 4, Type: struct FColor
			constexpr auto bUseRayTracedDistanceFieldShadows = 0x2c4; // Size: 1, Type: bool
			constexpr auto RayStartOffsetDepthScale = 0x2c8; // Size: 4, Type: float
	}
} 
