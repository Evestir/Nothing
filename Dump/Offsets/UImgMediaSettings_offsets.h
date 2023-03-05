namespace offsets
{
	namespace UImgMediaSettings
	{
			constexpr auto DefaultFrameRate = 0x28; // Size: 8, Type: struct FFrameRate
			constexpr auto CacheBehindPercentage = 0x30; // Size: 4, Type: float
			constexpr auto CacheSizeGB = 0x34; // Size: 4, Type: float
			constexpr auto CacheThreads = 0x38; // Size: 4, Type: int32_t
			constexpr auto CacheThreadStackSizeKB = 0x3c; // Size: 4, Type: int32_t
			constexpr auto GlobalCacheSizeGB = 0x40; // Size: 4, Type: float
			constexpr auto UseGlobalCache = 0x44; // Size: 1, Type: bool
			constexpr auto ExrDecoderThreads = 0x48; // Size: 4, Type: uint32_t
			constexpr auto DefaultProxy = 0x50; // Size: 16, Type: struct FString
			constexpr auto UseDefaultProxy = 0x60; // Size: 1, Type: bool
	}
} 
