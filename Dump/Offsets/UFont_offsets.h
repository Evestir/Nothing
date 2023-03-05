namespace offsets
{
	namespace UFont
	{
			constexpr auto FontCacheType = 0x30; // Size: 1, Type: enum class EFontCacheType
			constexpr auto Characters = 0x38; // Size: 16, Type: struct TArray<struct FFontCharacter>
			constexpr auto Textures = 0x48; // Size: 16, Type: struct TArray<struct UTexture2D*>
			constexpr auto IsRemapped = 0x58; // Size: 4, Type: int32_t
			constexpr auto EmScale = 0x5c; // Size: 4, Type: float
			constexpr auto Ascent = 0x60; // Size: 4, Type: float
			constexpr auto Descent = 0x64; // Size: 4, Type: float
			constexpr auto Leading = 0x68; // Size: 4, Type: float
			constexpr auto Kerning = 0x6c; // Size: 4, Type: int32_t
			constexpr auto ImportOptions = 0x70; // Size: 176, Type: struct FFontImportOptionsData
			constexpr auto NumCharacters = 0x120; // Size: 4, Type: int32_t
			constexpr auto MaxCharHeight = 0x128; // Size: 16, Type: struct TArray<int32_t>
			constexpr auto ScalingFactor = 0x138; // Size: 4, Type: float
			constexpr auto LegacyFontSize = 0x13c; // Size: 4, Type: int32_t
			constexpr auto LegacyFontName = 0x140; // Size: 8, Type: struct FName
			constexpr auto CompositeFont = 0x148; // Size: 56, Type: struct FCompositeFont
	}
} 
