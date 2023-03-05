namespace offsets
{
	namespace ULightComponentBase
	{
			constexpr auto LightGuid = 0x208; // Size: 16, Type: struct FGuid
			constexpr auto Brightness = 0x218; // Size: 4, Type: float
			constexpr auto Intensity = 0x21c; // Size: 4, Type: float
			constexpr auto LightColor = 0x220; // Size: 4, Type: struct FColor
			constexpr auto bAffectsWorld = 0x224; // Size: 1, Type: char
			constexpr auto CastShadows = 0x224; // Size: 1, Type: char
			constexpr auto CastStaticShadows = 0x224; // Size: 1, Type: char
			constexpr auto CastDynamicShadows = 0x224; // Size: 1, Type: char
			constexpr auto bAffectTranslucentLighting = 0x224; // Size: 1, Type: char
			constexpr auto bTransmission = 0x224; // Size: 1, Type: char
			constexpr auto bCastVolumetricShadow = 0x224; // Size: 1, Type: char
			constexpr auto bCastDeepShadow = 0x224; // Size: 1, Type: char
			constexpr auto bCastRaytracedShadow = 0x225; // Size: 1, Type: char
			constexpr auto bAffectReflectionNoRayTracing = 0x225; // Size: 1, Type: char
			constexpr auto bAffectReflection = 0x225; // Size: 1, Type: char
			constexpr auto bAffectGlobalIllumination = 0x225; // Size: 1, Type: char
			constexpr auto DeepShadowLayerDistribution = 0x228; // Size: 4, Type: float
			constexpr auto IndirectLightingIntensity = 0x22c; // Size: 4, Type: float
			constexpr auto VolumetricScatteringIntensity = 0x230; // Size: 4, Type: float
			constexpr auto SamplesPerPixel = 0x234; // Size: 4, Type: int32_t
	}
} 
