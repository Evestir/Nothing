namespace offsets
{
	namespace UKdLevelLoader
	{
			constexpr auto OnAllCompleteLoading = 0x30; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnSingleCompleteLoading = 0x40; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnStandbyLoading = 0x50; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto LoadedStreamingLevels = 0x70; // Size: 16, Type: struct TArray<struct ULevelStreaming*>
			constexpr auto LoadingAllStreamingLevels = 0x80; // Size: 80, Type: struct TMap<int32_t, struct ULevelStreaming*>
			constexpr auto LoadingSingleStreamingLevels = 0xd0; // Size: 80, Type: struct TMap<int32_t, struct ULevelStreaming*>
	}
} 
