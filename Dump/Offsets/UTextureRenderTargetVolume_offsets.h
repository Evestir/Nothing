namespace offsets
{
	namespace UTextureRenderTargetVolume
	{
			constexpr auto SizeX = 0x180; // Size: 4, Type: int32_t
			constexpr auto SizeY = 0x184; // Size: 4, Type: int32_t
			constexpr auto SizeZ = 0x188; // Size: 4, Type: int32_t
			constexpr auto ClearColor = 0x18c; // Size: 16, Type: struct FLinearColor
			constexpr auto OverrideFormat = 0x19c; // Size: 1, Type: enum class EPixelFormat
			constexpr auto bHDR = 0x19d; // Size: 1, Type: char
			constexpr auto bForceLinearGamma = 0x19d; // Size: 1, Type: char
	}
} 
