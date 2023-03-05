namespace offsets
{
	namespace UMediaSoundComponent
	{
			constexpr auto Channels = 0x6d0; // Size: 4, Type: enum class EMediaSoundChannels
			constexpr auto DynamicRateAdjustment = 0x6d4; // Size: 1, Type: bool
			constexpr auto RateAdjustmentFactor = 0x6d8; // Size: 4, Type: float
			constexpr auto RateAdjustmentRange = 0x6dc; // Size: 16, Type: struct FFloatRange
			constexpr auto MediaPlayer = 0x6f0; // Size: 8, Type: struct UMediaPlayer*
	}
} 
