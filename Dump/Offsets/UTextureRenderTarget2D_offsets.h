namespace offsets
{
	namespace UTextureRenderTarget2D
	{
			constexpr auto SizeX = 0x180; // Size: 4, Type: int32_t
			constexpr auto SizeY = 0x184; // Size: 4, Type: int32_t
			constexpr auto ClearColor = 0x188; // Size: 16, Type: struct FLinearColor
			constexpr auto AddressX = 0x198; // Size: 1, Type: enum class TextureAddress
			constexpr auto AddressY = 0x199; // Size: 1, Type: enum class TextureAddress
			constexpr auto bForceLinearGamma = 0x19a; // Size: 1, Type: char
			constexpr auto bHDR = 0x19a; // Size: 1, Type: char
			constexpr auto bGPUSharedFlag = 0x19a; // Size: 1, Type: char
			constexpr auto RenderTargetFormat = 0x19b; // Size: 1, Type: enum class ETextureRenderTargetFormat
			constexpr auto bAutoGenerateMips = 0x19c; // Size: 1, Type: char
			constexpr auto MipsSamplerFilter = 0x19d; // Size: 1, Type: enum class TextureFilter
			constexpr auto MipsAddressU = 0x19e; // Size: 1, Type: enum class TextureAddress
			constexpr auto MipsAddressV = 0x19f; // Size: 1, Type: enum class TextureAddress
			constexpr auto OverrideFormat = 0x1a0; // Size: 1, Type: enum class EPixelFormat
	}
} 
