namespace offsets
{
	namespace UVolumetricCloudComponent
	{
			constexpr auto LayerBottomAltitude = 0x208; // Size: 4, Type: float
			constexpr auto LayerHeight = 0x20c; // Size: 4, Type: float
			constexpr auto TracingStartMaxDistance = 0x210; // Size: 4, Type: float
			constexpr auto TracingMaxDistance = 0x214; // Size: 4, Type: float
			constexpr auto PlanetRadius = 0x218; // Size: 4, Type: float
			constexpr auto GroundAlbedo = 0x21c; // Size: 4, Type: struct FColor
			constexpr auto Material = 0x220; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto bUsePerSampleAtmosphericLightTransmittance = 0x228; // Size: 1, Type: char
			constexpr auto SkyLightCloudBottomOcclusion = 0x22c; // Size: 4, Type: float
			constexpr auto ViewSampleCountScale = 0x230; // Size: 4, Type: float
			constexpr auto ReflectionSampleCountScale = 0x234; // Size: 4, Type: float
			constexpr auto ShadowViewSampleCountScale = 0x238; // Size: 4, Type: float
			constexpr auto ShadowReflectionSampleCountScale = 0x23c; // Size: 4, Type: float
			constexpr auto ShadowTracingDistance = 0x240; // Size: 4, Type: float
			constexpr auto StopTracingTransmittanceThreshold = 0x244; // Size: 4, Type: float
	}
} 
