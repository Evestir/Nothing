namespace offsets
{
	namespace UMediaPlayerTemplate
	{
			constexpr auto PlaySoundVolume = 0x2c0; // Size: 4, Type: float
			constexpr auto MediaPlayer = 0x2c8; // Size: 8, Type: struct UMediaPlayer*
			constexpr auto MediaTexture = 0x2d0; // Size: 8, Type: struct UMediaTexture*
			constexpr auto MediaMaterial = 0x2d8; // Size: 8, Type: struct UMaterialInstanceDynamic*
			constexpr auto MediaPlaylistPtrs = 0x2e0; // Size: 16, Type: struct TArray<struct TSoftObjectPtr<UMediaPlaylist>>
			constexpr auto MediaPlaylists = 0x2f0; // Size: 16, Type: struct TArray<struct UMediaPlaylist*>
			constexpr auto PreviewTexture2D = 0x300; // Size: 40, Type: struct TSoftObjectPtr<UTexture2D>
			constexpr auto PreivewSprite = 0x328; // Size: 40, Type: struct TSoftObjectPtr<UPaperSprite>
			constexpr auto bShowLoadingImg = 0x350; // Size: 1, Type: bool
			constexpr auto bLoop = 0x351; // Size: 1, Type: bool
			constexpr auto MediaSoundComponent = 0x358; // Size: 8, Type: struct UMediaSoundComponent*
			constexpr auto OpenedMediaPlaylists = 0x360; // Size: 16, Type: struct TArray<struct UMediaPlaylist*>
			constexpr auto MediaBGDataPtrConatiner = 0x3a8; // Size: 16, Type: struct TArray<struct TSoftObjectPtr<UFMODEvent>>
			constexpr auto MediaBGDataContainer = 0x3b8; // Size: 16, Type: struct TArray<struct UFMODEvent*>
			constexpr auto RequestMediaPlaylists = 0x3c8; // Size: 16, Type: struct TArray<struct UMediaPlaylist*>
	}
} 
