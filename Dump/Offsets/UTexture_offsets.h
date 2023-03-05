namespace offsets
{
	namespace UTexture
	{
			constexpr auto LightingGuid = 0x68; // Size: 16, Type: struct FGuid
			constexpr auto MipGenSettings = 0x78; // Size: 1, Type: enum class TextureMipGenSettings
			constexpr auto CompressionNone = 0x7c; // Size: 1, Type: char
			constexpr auto DeferCompression = 0x7c; // Size: 1, Type: char
			constexpr auto LODBias = 0x80; // Size: 4, Type: int32_t
			constexpr auto CompressionSettings = 0x84; // Size: 1, Type: enum class TextureCompressionSettings
			constexpr auto Filter = 0x85; // Size: 1, Type: enum class TextureFilter
			constexpr auto MipLoadOptions = 0x86; // Size: 1, Type: enum class ETextureMipLoadOptions
			constexpr auto LODGroup = 0x87; // Size: 1, Type: enum class TextureGroup
			constexpr auto Downscale = 0x88; // Size: 4, Type: struct FPerPlatformFloat
			constexpr auto DownscaleOptions = 0x8c; // Size: 1, Type: enum class ETextureDownscaleOptions
			constexpr auto sRGB = 0x8d; // Size: 1, Type: char
			constexpr auto bNoTiling = 0x8d; // Size: 1, Type: char
			constexpr auto VirtualTextureStreaming = 0x8d; // Size: 1, Type: char
			constexpr auto CompressionYCoCg = 0x8d; // Size: 1, Type: char
			constexpr auto bNotOfflineProcessed = 0x8d; // Size: 1, Type: char
			constexpr auto bAsyncResourceReleaseHasBeenStarted = 0x8d; // Size: 1, Type: char
			constexpr auto AssetUserData = 0x90; // Size: 16, Type: struct TArray<struct UAssetUserData*>
	}
} 
