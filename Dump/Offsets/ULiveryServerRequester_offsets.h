namespace offsets
{
	namespace ULiveryServerRequester
	{
			constexpr auto HttpRequester = 0x28; // Size: 8, Type: struct UHttpRequester*
			constexpr auto LiveryCacheMap = 0x30; // Size: 80, Type: struct TMap<struct FString, struct FLiveryCache>
			constexpr auto StickerCacheMap = 0x80; // Size: 80, Type: struct TMap<struct FString, struct FLiveryStickerCache>
	}
} 
