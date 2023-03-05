namespace offsets
{
	namespace UDatasmithAreaLightActorTemplate
	{
			constexpr auto LightType = 0x30; // Size: 1, Type: enum class EDatasmithAreaLightActorType
			constexpr auto LightShape = 0x31; // Size: 1, Type: enum class EDatasmithAreaLightActorShape
			constexpr auto Dimensions = 0x34; // Size: 8, Type: struct FVector2D
			constexpr auto Color = 0x3c; // Size: 16, Type: struct FLinearColor
			constexpr auto Intensity = 0x4c; // Size: 4, Type: float
			constexpr auto IntensityUnits = 0x50; // Size: 1, Type: enum class ELightUnits
			constexpr auto Temperature = 0x54; // Size: 4, Type: float
			constexpr auto IESTexture = 0x58; // Size: 40, Type: struct TSoftObjectPtr<UTextureLightProfile>
			constexpr auto bUseIESBrightness = 0x80; // Size: 1, Type: bool
			constexpr auto IESBrightnessScale = 0x84; // Size: 4, Type: float
			constexpr auto Rotation = 0x88; // Size: 12, Type: struct FRotator
			constexpr auto SourceRadius = 0x94; // Size: 4, Type: float
			constexpr auto SourceLength = 0x98; // Size: 4, Type: float
			constexpr auto AttenuationRadius = 0x9c; // Size: 4, Type: float
	}
} 
