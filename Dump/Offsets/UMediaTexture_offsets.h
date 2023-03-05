namespace offsets
{
	namespace UMediaTexture
	{
			constexpr auto AddressX = 0x178; // Size: 1, Type: enum class TextureAddress
			constexpr auto AddressY = 0x179; // Size: 1, Type: enum class TextureAddress
			constexpr auto AutoClear = 0x17a; // Size: 1, Type: bool
			constexpr auto ClearColor = 0x17c; // Size: 16, Type: struct FLinearColor
			constexpr auto EnableGenMips = 0x18c; // Size: 1, Type: bool
			constexpr auto NumMips = 0x18d; // Size: 1, Type: char
			constexpr auto NewStyleOutput = 0x18e; // Size: 1, Type: bool
			constexpr auto OutputFormat = 0x18f; // Size: 1, Type: enum class MediaTextureOutputFormat
			constexpr auto CurrentAspectRatio = 0x190; // Size: 4, Type: float
			constexpr auto CurrentOrientation = 0x194; // Size: 1, Type: enum class MediaTextureOrientation
			constexpr auto MediaPlayer = 0x198; // Size: 8, Type: struct UMediaPlayer*
	}
} 
