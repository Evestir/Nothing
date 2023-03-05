namespace offsets
{
	namespace USkyAtmosphereComponent
	{
			constexpr auto TransformMode = 0x208; // Size: 1, Type: enum class ESkyAtmosphereTransformMode
			constexpr auto BottomRadius = 0x20c; // Size: 4, Type: float
			constexpr auto GroundAlbedo = 0x210; // Size: 4, Type: struct FColor
			constexpr auto AtmosphereHeight = 0x214; // Size: 4, Type: float
			constexpr auto MultiScatteringFactor = 0x218; // Size: 4, Type: float
			constexpr auto TraceSampleCountScale = 0x21c; // Size: 4, Type: float
			constexpr auto RayleighScatteringScale = 0x220; // Size: 4, Type: float
			constexpr auto RayleighScattering = 0x224; // Size: 16, Type: struct FLinearColor
			constexpr auto RayleighExponentialDistribution = 0x234; // Size: 4, Type: float
			constexpr auto MieScatteringScale = 0x238; // Size: 4, Type: float
			constexpr auto MieScattering = 0x23c; // Size: 16, Type: struct FLinearColor
			constexpr auto MieAbsorptionScale = 0x24c; // Size: 4, Type: float
			constexpr auto MieAbsorption = 0x250; // Size: 16, Type: struct FLinearColor
			constexpr auto MieAnisotropy = 0x260; // Size: 4, Type: float
			constexpr auto MieExponentialDistribution = 0x264; // Size: 4, Type: float
			constexpr auto OtherAbsorptionScale = 0x268; // Size: 4, Type: float
			constexpr auto OtherAbsorption = 0x26c; // Size: 16, Type: struct FLinearColor
			constexpr auto OtherTentDistribution = 0x27c; // Size: 12, Type: struct FTentDistribution
			constexpr auto SkyLuminanceFactor = 0x288; // Size: 16, Type: struct FLinearColor
			constexpr auto AerialPespectiveViewDistanceScale = 0x298; // Size: 4, Type: float
			constexpr auto HeightFogContribution = 0x29c; // Size: 4, Type: float
			constexpr auto TransmittanceMinLightElevationAngle = 0x2a0; // Size: 4, Type: float
			constexpr auto AerialPerspectiveStartDepth = 0x2a4; // Size: 4, Type: float
			constexpr auto bStaticLightingBuiltGUID = 0x2cc; // Size: 16, Type: struct FGuid
	}
} 
