namespace offsets
{
	namespace UMediaPlayer
	{
			constexpr auto OnEndReached = 0x28; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnMediaClosed = 0x38; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnMediaOpened = 0x48; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnMediaOpenFailed = 0x58; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnPlaybackResumed = 0x68; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnPlaybackSuspended = 0x78; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnSeekCompleted = 0x88; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnTracksChanged = 0x98; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto CacheAhead = 0xa8; // Size: 8, Type: struct FTimespan
			constexpr auto CacheBehind = 0xb0; // Size: 8, Type: struct FTimespan
			constexpr auto CacheBehindGame = 0xb8; // Size: 8, Type: struct FTimespan
			constexpr auto NativeAudioOut = 0xc0; // Size: 1, Type: bool
			constexpr auto PlayOnOpen = 0xc1; // Size: 1, Type: bool
			constexpr auto Shuffle = 0xc4; // Size: 1, Type: char
			constexpr auto Loop = 0xc4; // Size: 1, Type: char
			constexpr auto PlayList = 0xc8; // Size: 8, Type: struct UMediaPlaylist*
			constexpr auto PlaylistIndex = 0xd0; // Size: 4, Type: int32_t
			constexpr auto TimeDelay = 0xd8; // Size: 8, Type: struct FTimespan
			constexpr auto HorizontalFieldOfView = 0xe0; // Size: 4, Type: float
			constexpr auto VerticalFieldOfView = 0xe4; // Size: 4, Type: float
			constexpr auto ViewRotation = 0xe8; // Size: 12, Type: struct FRotator
			constexpr auto PlayerGuid = 0x120; // Size: 16, Type: struct FGuid
	}
} 
