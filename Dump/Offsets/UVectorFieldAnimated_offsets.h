namespace offsets
{
	namespace UVectorFieldAnimated
	{
			constexpr auto Texture = 0x48; // Size: 8, Type: struct UTexture2D*
			constexpr auto ConstructionOp = 0x50; // Size: 1, Type: enum class EVectorFieldConstructionOp
			constexpr auto VolumeSizeX = 0x54; // Size: 4, Type: int32_t
			constexpr auto VolumeSizeY = 0x58; // Size: 4, Type: int32_t
			constexpr auto VolumeSizeZ = 0x5c; // Size: 4, Type: int32_t
			constexpr auto SubImagesX = 0x60; // Size: 4, Type: int32_t
			constexpr auto SubImagesY = 0x64; // Size: 4, Type: int32_t
			constexpr auto FrameCount = 0x68; // Size: 4, Type: int32_t
			constexpr auto FramesPerSecond = 0x6c; // Size: 4, Type: float
			constexpr auto bLoop = 0x70; // Size: 1, Type: char
			constexpr auto NoiseField = 0x78; // Size: 8, Type: struct UVectorFieldStatic*
			constexpr auto NoiseScale = 0x80; // Size: 4, Type: float
			constexpr auto NoiseMax = 0x84; // Size: 4, Type: float
	}
} 
