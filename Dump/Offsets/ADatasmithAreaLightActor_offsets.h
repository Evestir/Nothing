namespace offsets
{
	namespace ADatasmithAreaLightActor
	{
			constexpr auto Mobility = 0x220; // Size: 1, Type: enum class EComponentMobility
			constexpr auto LightType = 0x221; // Size: 1, Type: enum class EDatasmithAreaLightActorType
			constexpr auto LightShape = 0x222; // Size: 1, Type: enum class EDatasmithAreaLightActorShape
			constexpr auto Dimensions = 0x224; // Size: 8, Type: struct FVector2D
			constexpr auto Intensity = 0x22c; // Size: 4, Type: float
			constexpr auto IntensityUnits = 0x230; // Size: 1, Type: enum class ELightUnits
			constexpr auto Color = 0x234; // Size: 16, Type: struct FLinearColor
			constexpr auto Temperature = 0x244; // Size: 4, Type: float
			constexpr auto IESTexture = 0x248; // Size: 8, Type: struct UTextureLightProfile*
			constexpr auto bUseIESBrightness = 0x250; // Size: 1, Type: bool
			constexpr auto IESBrightnessScale = 0x254; // Size: 4, Type: float
			constexpr auto Rotation = 0x258; // Size: 12, Type: struct FRotator
			constexpr auto SourceRadius = 0x264; // Size: 4, Type: float
			constexpr auto SourceLength = 0x268; // Size: 4, Type: float
			constexpr auto AttenuationRadius = 0x26c; // Size: 4, Type: float
			constexpr auto SpotlightInnerAngle = 0x270; // Size: 4, Type: float
			constexpr auto SpotlightOuterAngle = 0x274; // Size: 4, Type: float
	}
} 
