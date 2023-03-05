namespace offsets
{
	namespace UDirectionalLightComponent
	{
			constexpr auto ShadowCascadeBiasDistribution = 0x340; // Size: 4, Type: float
			constexpr auto bEnableLightShaftOcclusion = 0x344; // Size: 1, Type: char
			constexpr auto OcclusionMaskDarkness = 0x348; // Size: 4, Type: float
			constexpr auto OcclusionDepthRange = 0x34c; // Size: 4, Type: float
			constexpr auto LightShaftOverrideDirection = 0x350; // Size: 12, Type: struct FVector
			constexpr auto WholeSceneDynamicShadowRadius = 0x35c; // Size: 4, Type: float
			constexpr auto DynamicShadowDistanceMovableLight = 0x360; // Size: 4, Type: float
			constexpr auto DynamicShadowDistanceStationaryLight = 0x364; // Size: 4, Type: float
			constexpr auto DynamicShadowCascades = 0x368; // Size: 4, Type: int32_t
			constexpr auto MaxCascadeStaticObjects = 0x36c; // Size: 4, Type: int32_t
			constexpr auto MaxCascadeDynamicObjects = 0x370; // Size: 4, Type: int32_t
			constexpr auto CascadeDistributionExponent = 0x374; // Size: 4, Type: float
			constexpr auto CascadeTransitionFraction = 0x378; // Size: 4, Type: float
			constexpr auto ShadowDistanceFadeoutFraction = 0x37c; // Size: 4, Type: float
			constexpr auto bUseInsetShadowsForMovableObjects = 0x380; // Size: 1, Type: char
			constexpr auto FarShadowCascadeCount = 0x384; // Size: 4, Type: int32_t
			constexpr auto FarShadowDistance = 0x388; // Size: 4, Type: float
			constexpr auto DistanceFieldShadowDistance = 0x38c; // Size: 4, Type: float
			constexpr auto LightSourceAngle = 0x390; // Size: 4, Type: float
			constexpr auto LightSourceSoftAngle = 0x394; // Size: 4, Type: float
			constexpr auto ShadowSourceAngleFactor = 0x398; // Size: 4, Type: float
			constexpr auto TraceDistance = 0x39c; // Size: 4, Type: float
			constexpr auto bUsedAsAtmosphereSunLight = 0x3a0; // Size: 1, Type: char
			constexpr auto AtmosphereSunLightIndex = 0x3a4; // Size: 4, Type: int32_t
			constexpr auto AtmosphereSunDiskColorScale = 0x3a8; // Size: 16, Type: struct FLinearColor
			constexpr auto bPerPixelAtmosphereTransmittance = 0x3b8; // Size: 1, Type: char
			constexpr auto bCastShadowsOnClouds = 0x3b8; // Size: 1, Type: char
			constexpr auto bCastShadowsOnAtmosphere = 0x3b8; // Size: 1, Type: char
			constexpr auto bCastCloudShadows = 0x3b8; // Size: 1, Type: char
			constexpr auto CloudShadowStrength = 0x3bc; // Size: 4, Type: float
			constexpr auto CloudShadowOnAtmosphereStrength = 0x3c0; // Size: 4, Type: float
			constexpr auto CloudShadowOnSurfaceStrength = 0x3c4; // Size: 4, Type: float
			constexpr auto CloudShadowDepthBias = 0x3c8; // Size: 4, Type: float
			constexpr auto CloudShadowExtent = 0x3cc; // Size: 4, Type: float
			constexpr auto CloudShadowMapResolutionScale = 0x3d0; // Size: 4, Type: float
			constexpr auto CloudShadowRaySampleCountScale = 0x3d4; // Size: 4, Type: float
			constexpr auto CloudScatteredLuminanceScale = 0x3d8; // Size: 16, Type: struct FLinearColor
			constexpr auto LightmassSettings = 0x3e8; // Size: 16, Type: struct FLightmassDirectionalLightSettings
			constexpr auto bCastModulatedShadows = 0x3f8; // Size: 1, Type: char
			constexpr auto ModulatedShadowColor = 0x3fc; // Size: 4, Type: struct FColor
			constexpr auto ShadowAmount = 0x400; // Size: 4, Type: float
	}
} 
