namespace offsets
{
	namespace UParticleModuleLight
	{
			constexpr auto bUseInverseSquaredFalloff = 0x30; // Size: 1, Type: bool
			constexpr auto bAffectsTranslucency = 0x31; // Size: 1, Type: bool
			constexpr auto bPreviewLightRadius = 0x32; // Size: 1, Type: bool
			constexpr auto SpawnFraction = 0x34; // Size: 4, Type: float
			constexpr auto ColorScaleOverLife = 0x38; // Size: 72, Type: struct FRawDistributionVector
			constexpr auto BrightnessOverLife = 0x80; // Size: 48, Type: struct FRawDistributionFloat
			constexpr auto RadiusScale = 0xb0; // Size: 48, Type: struct FRawDistributionFloat
			constexpr auto LightExponent = 0xe0; // Size: 48, Type: struct FRawDistributionFloat
			constexpr auto LightingChannels = 0x110; // Size: 1, Type: struct FLightingChannels
			constexpr auto VolumetricScatteringIntensity = 0x114; // Size: 4, Type: float
			constexpr auto bHighQualityLights = 0x118; // Size: 1, Type: bool
			constexpr auto bShadowCastingLights = 0x119; // Size: 1, Type: bool
	}
} 
