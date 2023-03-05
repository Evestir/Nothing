namespace offsets
{
	namespace UDatasmithLightComponentTemplate
	{
			constexpr auto bVisible = 0x30; // Size: 1, Type: char
			constexpr auto CastShadows = 0x34; // Size: 1, Type: char
			constexpr auto bUseTemperature = 0x34; // Size: 1, Type: char
			constexpr auto bUseIESBrightness = 0x34; // Size: 1, Type: char
			constexpr auto Intensity = 0x38; // Size: 4, Type: float
			constexpr auto Temperature = 0x3c; // Size: 4, Type: float
			constexpr auto IESBrightnessScale = 0x40; // Size: 4, Type: float
			constexpr auto LightColor = 0x44; // Size: 16, Type: struct FLinearColor
			constexpr auto LightFunctionMaterial = 0x58; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto IESTexture = 0x60; // Size: 8, Type: struct UTextureLightProfile*
	}
} 
