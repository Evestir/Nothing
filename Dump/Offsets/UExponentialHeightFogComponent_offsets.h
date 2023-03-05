namespace offsets
{
	namespace UExponentialHeightFogComponent
	{
			constexpr auto FogDensity = 0x208; // Size: 4, Type: float
			constexpr auto FogHeightFalloff = 0x20c; // Size: 4, Type: float
			constexpr auto SecondFogData = 0x210; // Size: 12, Type: struct FExponentialHeightFogData
			constexpr auto FogInscatteringColor = 0x21c; // Size: 16, Type: struct FLinearColor
			constexpr auto InscatteringColorCubemap = 0x230; // Size: 8, Type: struct UTextureCube*
			constexpr auto InscatteringColorCubemapAngle = 0x238; // Size: 4, Type: float
			constexpr auto InscatteringTextureTint = 0x23c; // Size: 16, Type: struct FLinearColor
			constexpr auto FullyDirectionalInscatteringColorDistance = 0x24c; // Size: 4, Type: float
			constexpr auto NonDirectionalInscatteringColorDistance = 0x250; // Size: 4, Type: float
			constexpr auto DirectionalInscatteringExponent = 0x254; // Size: 4, Type: float
			constexpr auto DirectionalInscatteringStartDistance = 0x258; // Size: 4, Type: float
			constexpr auto DirectionalInscatteringColor = 0x25c; // Size: 16, Type: struct FLinearColor
			constexpr auto FogMaxOpacity = 0x26c; // Size: 4, Type: float
			constexpr auto StartDistance = 0x270; // Size: 4, Type: float
			constexpr auto FogCutoffDistance = 0x274; // Size: 4, Type: float
			constexpr auto bEnableVolumetricFog = 0x278; // Size: 1, Type: bool
			constexpr auto VolumetricFogScatteringDistribution = 0x27c; // Size: 4, Type: float
			constexpr auto VolumetricFogAlbedo = 0x280; // Size: 4, Type: struct FColor
			constexpr auto VolumetricFogEmissive = 0x284; // Size: 16, Type: struct FLinearColor
			constexpr auto VolumetricFogExtinctionScale = 0x294; // Size: 4, Type: float
			constexpr auto VolumetricFogDistance = 0x298; // Size: 4, Type: float
			constexpr auto VolumetricFogStaticLightingScatteringIntensity = 0x29c; // Size: 4, Type: float
			constexpr auto bOverrideLightColorsWithFogInscatteringColors = 0x2a0; // Size: 1, Type: bool
	}
} 
