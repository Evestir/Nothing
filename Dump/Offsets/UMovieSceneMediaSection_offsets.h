namespace offsets
{
	namespace UMovieSceneMediaSection
	{
			constexpr auto MediaSource = 0xe8; // Size: 8, Type: struct UMediaSource*
			constexpr auto bLooping = 0xf0; // Size: 1, Type: bool
			constexpr auto StartFrameOffset = 0xf4; // Size: 4, Type: struct FFrameNumber
			constexpr auto MediaTexture = 0xf8; // Size: 8, Type: struct UMediaTexture*
			constexpr auto MediaSoundComponent = 0x100; // Size: 8, Type: struct UMediaSoundComponent*
			constexpr auto bUseExternalMediaPlayer = 0x108; // Size: 1, Type: bool
			constexpr auto ExternalMediaPlayer = 0x110; // Size: 8, Type: struct UMediaPlayer*
	}
} 
