namespace offsets
{
	namespace UKdImage
	{
			constexpr auto OnStreamingStarted = 0x210; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnStreamingComplete = 0x220; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto ColorTableSet = 0x240; // Size: 16, Type: struct FDataTableRowHandle
			constexpr auto StartStreamingVisibility = 0x258; // Size: 1, Type: enum class ESlateVisibility
			constexpr auto CompleteStreamingVisibility = 0x259; // Size: 1, Type: enum class ESlateVisibility
			constexpr auto Throbber = 0x25c; // Size: 8, Type: struct TWeakObjectPtr<UWidget>
	}
} 
