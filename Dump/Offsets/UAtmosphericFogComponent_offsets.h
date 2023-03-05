namespace offsets
{
	namespace UAtmosphericFogComponent
	{
			constexpr auto SunMultiplier = 0x208; // Size: 4, Type: float
			constexpr auto FogMultiplier = 0x20c; // Size: 4, Type: float
			constexpr auto DensityMultiplier = 0x210; // Size: 4, Type: float
			constexpr auto DensityOffset = 0x214; // Size: 4, Type: float
			constexpr auto DistanceScale = 0x218; // Size: 4, Type: float
			constexpr auto AltitudeScale = 0x21c; // Size: 4, Type: float
			constexpr auto DistanceOffset = 0x220; // Size: 4, Type: float
			constexpr auto GroundOffset = 0x224; // Size: 4, Type: float
			constexpr auto StartDistance = 0x228; // Size: 4, Type: float
			constexpr auto CacheDegree = 0x22c; // Size: 4, Type: float
			constexpr auto SunDiscScale = 0x230; // Size: 4, Type: float
			constexpr auto DefaultBrightness = 0x234; // Size: 4, Type: float
			constexpr auto DefaultLightColor = 0x238; // Size: 4, Type: struct FColor
			constexpr auto bDisableSunDisk = 0x23c; // Size: 1, Type: char
			constexpr auto bAtmosphereAffectsSunIlluminance = 0x23c; // Size: 1, Type: char
			constexpr auto bDisableGroundScattering = 0x23c; // Size: 1, Type: char
			constexpr auto CacheRate = 0x240; // Size: 12, Type: struct FVector
			constexpr auto PrecomputeParams = 0x24c; // Size: 44, Type: struct FAtmospherePrecomputeParameters
			constexpr auto TransmittanceTexture = 0x278; // Size: 8, Type: struct UTexture2D*
			constexpr auto IrradianceTexture = 0x280; // Size: 8, Type: struct UTexture2D*
			constexpr auto DebugTextureTarget = 0x288; // Size: 8, Type: struct UTextureRenderTarget2D*
	}
} 
