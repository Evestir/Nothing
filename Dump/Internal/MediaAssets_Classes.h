#pragma once 
#include <MediaAssets_Structs.h>
 
 
 
//Class MediaAssets.MediaPlayer Size 312
// Inherited 40 bytes 
class UMediaPlayer : public UObject
{

 public: 
	struct FMulticastInlineDelegate OnEndReached;  // Offset: 40 Size: 16
	struct FMulticastInlineDelegate OnMediaClosed;  // Offset: 56 Size: 16
	struct FMulticastInlineDelegate OnMediaOpened;  // Offset: 72 Size: 16
	struct FMulticastInlineDelegate OnMediaOpenFailed;  // Offset: 88 Size: 16
	struct FMulticastInlineDelegate OnPlaybackResumed;  // Offset: 104 Size: 16
	struct FMulticastInlineDelegate OnPlaybackSuspended;  // Offset: 120 Size: 16
	struct FMulticastInlineDelegate OnSeekCompleted;  // Offset: 136 Size: 16
	struct FMulticastInlineDelegate OnTracksChanged;  // Offset: 152 Size: 16
	struct FTimespan CacheAhead;  // Offset: 168 Size: 8
	struct FTimespan CacheBehind;  // Offset: 176 Size: 8
	struct FTimespan CacheBehindGame;  // Offset: 184 Size: 8
	char pad_192_1 : 7;  // Offset: 192 Size: 1
	bool NativeAudioOut : 1;  // Offset: 192 Size: 1
	char pad_193_1 : 7;  // Offset: 193 Size: 1
	bool PlayOnOpen : 1;  // Offset: 193 Size: 1
	char pad_194[2];  // Offset: 194 Size: 2
	char Shuffle : 1;  // Offset: 196 Size: 1
	char Loop : 1;  // Offset: 196 Size: 1
	char pad_196_1 : 6;  // Offset: 196 Size: 1
	char pad_197[4];  // Offset: 197 Size: 4
	struct UMediaPlaylist* PlayList;  // Offset: 200 Size: 8
	int32_t PlaylistIndex;  // Offset: 208 Size: 4
	char pad_212[4];  // Offset: 212 Size: 4
	struct FTimespan TimeDelay;  // Offset: 216 Size: 8
	float HorizontalFieldOfView;  // Offset: 224 Size: 4
	float VerticalFieldOfView;  // Offset: 228 Size: 4
	struct FRotator ViewRotation;  // Offset: 232 Size: 12
	char pad_244[44];  // Offset: 244 Size: 44
	struct FGuid PlayerGuid;  // Offset: 288 Size: 16
	char pad_304[8];  // Offset: 304 Size: 8



 // Functions 
 public:
	bool SupportsSeeking(); // Function MediaAssets.MediaPlayer.SupportsSeeking
	bool SupportsScrubbing(); // Function MediaAssets.MediaPlayer.SupportsScrubbing
	bool SupportsRate(float Rate, bool Unthinned); // Function MediaAssets.MediaPlayer.SupportsRate
	bool SetViewRotation(struct FRotator& Rotation, bool Absolute); // Function MediaAssets.MediaPlayer.SetViewRotation
	bool SetViewField(float Horizontal, float Vertical, bool Absolute); // Function MediaAssets.MediaPlayer.SetViewField
	bool SetVideoTrackFrameRate(int32_t TrackIndex, int32_t FormatIndex, float FrameRate); // Function MediaAssets.MediaPlayer.SetVideoTrackFrameRate
	bool SetTrackFormat(enum class EMediaPlayerTrack TrackType, int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.SetTrackFormat
	void SetTimeDelay(struct FTimespan TimeDelay); // Function MediaAssets.MediaPlayer.SetTimeDelay
	bool SetRate(float Rate); // Function MediaAssets.MediaPlayer.SetRate
	bool SetNativeVolume(float Volume); // Function MediaAssets.MediaPlayer.SetNativeVolume
	void SetMediaOptions(struct UMediaSource* Options); // Function MediaAssets.MediaPlayer.SetMediaOptions
	bool SetLooping(bool Looping); // Function MediaAssets.MediaPlayer.SetLooping
	void SetDesiredPlayerName(struct FName PlayerName); // Function MediaAssets.MediaPlayer.SetDesiredPlayerName
	void SetBlockOnTime(struct FTimespan& Time); // Function MediaAssets.MediaPlayer.SetBlockOnTime
	bool SelectTrack(enum class EMediaPlayerTrack TrackType, int32_t TrackIndex); // Function MediaAssets.MediaPlayer.SelectTrack
	bool Seek(struct FTimespan& Time); // Function MediaAssets.MediaPlayer.Seek
	bool Rewind(); // Function MediaAssets.MediaPlayer.Rewind
	bool Reopen(); // Function MediaAssets.MediaPlayer.Reopen
	bool Previous(); // Function MediaAssets.MediaPlayer.Previous
	void PlayAndSeek(); // Function MediaAssets.MediaPlayer.PlayAndSeek
	bool Play(); // Function MediaAssets.MediaPlayer.Play
	bool Pause(); // Function MediaAssets.MediaPlayer.Pause
	bool OpenUrl(struct FString URL); // Function MediaAssets.MediaPlayer.OpenUrl
	bool OpenSourceWithOptions(struct UMediaSource* MediaSource, struct FMediaPlayerOptions& Options); // Function MediaAssets.MediaPlayer.OpenSourceWithOptions
	void OpenSourceLatent(struct UObject* WorldContextObject, struct FLatentActionInfo LatentInfo, struct UMediaSource* MediaSource, struct FMediaPlayerOptions& Options, bool& bSuccess); // Function MediaAssets.MediaPlayer.OpenSourceLatent
	bool OpenSource(struct UMediaSource* MediaSource); // Function MediaAssets.MediaPlayer.OpenSource
	bool OpenPlaylistIndex(struct UMediaPlaylist* InPlaylist, int32_t Index); // Function MediaAssets.MediaPlayer.OpenPlaylistIndex
	bool OpenPlaylist(struct UMediaPlaylist* InPlaylist); // Function MediaAssets.MediaPlayer.OpenPlaylist
	bool OpenFile(struct FString FilePath); // Function MediaAssets.MediaPlayer.OpenFile
	bool Next(); // Function MediaAssets.MediaPlayer.Next
	bool IsReady(); // Function MediaAssets.MediaPlayer.IsReady
	bool IsPreparing(); // Function MediaAssets.MediaPlayer.IsPreparing
	bool IsPlaying(); // Function MediaAssets.MediaPlayer.IsPlaying
	bool IsPaused(); // Function MediaAssets.MediaPlayer.IsPaused
	bool IsLooping(); // Function MediaAssets.MediaPlayer.IsLooping
	bool IsConnecting(); // Function MediaAssets.MediaPlayer.IsConnecting
	bool IsClosed(); // Function MediaAssets.MediaPlayer.IsClosed
	bool IsBuffering(); // Function MediaAssets.MediaPlayer.IsBuffering
	bool HasError(); // Function MediaAssets.MediaPlayer.HasError
	struct FRotator GetViewRotation(); // Function MediaAssets.MediaPlayer.GetViewRotation
	struct FString GetVideoTrackType(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetVideoTrackType
	struct FFloatRange GetVideoTrackFrameRates(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetVideoTrackFrameRates
	float GetVideoTrackFrameRate(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetVideoTrackFrameRate
	struct FIntPoint GetVideoTrackDimensions(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetVideoTrackDimensions
	float GetVideoTrackAspectRatio(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetVideoTrackAspectRatio
	float GetVerticalFieldOfView(); // Function MediaAssets.MediaPlayer.GetVerticalFieldOfView
	struct FString GetUrl(); // Function MediaAssets.MediaPlayer.GetUrl
	struct FString GetTrackLanguage(enum class EMediaPlayerTrack TrackType, int32_t TrackIndex); // Function MediaAssets.MediaPlayer.GetTrackLanguage
	int32_t GetTrackFormat(enum class EMediaPlayerTrack TrackType, int32_t TrackIndex); // Function MediaAssets.MediaPlayer.GetTrackFormat
	struct FText GetTrackDisplayName(enum class EMediaPlayerTrack TrackType, int32_t TrackIndex); // Function MediaAssets.MediaPlayer.GetTrackDisplayName
	struct UMediaTimeStampInfo* GetTimeStamp(); // Function MediaAssets.MediaPlayer.GetTimeStamp
	struct FTimespan GetTimeDelay(); // Function MediaAssets.MediaPlayer.GetTimeDelay
	struct FTimespan GetTime(); // Function MediaAssets.MediaPlayer.GetTime
	void GetSupportedRates(struct TArray<struct FFloatRange>& OutRates, bool Unthinned); // Function MediaAssets.MediaPlayer.GetSupportedRates
	int32_t GetSelectedTrack(enum class EMediaPlayerTrack TrackType); // Function MediaAssets.MediaPlayer.GetSelectedTrack
	float GetRate(); // Function MediaAssets.MediaPlayer.GetRate
	int32_t GetPlaylistIndex(); // Function MediaAssets.MediaPlayer.GetPlaylistIndex
	struct UMediaPlaylist* GetPlaylist(); // Function MediaAssets.MediaPlayer.GetPlaylist
	struct FName GetPlayerName(); // Function MediaAssets.MediaPlayer.GetPlayerName
	int32_t GetNumTracks(enum class EMediaPlayerTrack TrackType); // Function MediaAssets.MediaPlayer.GetNumTracks
	int32_t GetNumTrackFormats(enum class EMediaPlayerTrack TrackType, int32_t TrackIndex); // Function MediaAssets.MediaPlayer.GetNumTrackFormats
	struct FText GetMediaName(); // Function MediaAssets.MediaPlayer.GetMediaName
	float GetHorizontalFieldOfView(); // Function MediaAssets.MediaPlayer.GetHorizontalFieldOfView
	struct FTimespan GetDuration(); // Function MediaAssets.MediaPlayer.GetDuration
	struct FName GetDesiredPlayerName(); // Function MediaAssets.MediaPlayer.GetDesiredPlayerName
	struct FString GetAudioTrackType(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetAudioTrackType
	int32_t GetAudioTrackSampleRate(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetAudioTrackSampleRate
	int32_t GetAudioTrackChannels(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetAudioTrackChannels
	void Close(); // Function MediaAssets.MediaPlayer.Close
	bool CanPlayUrl(struct FString URL); // Function MediaAssets.MediaPlayer.CanPlayUrl
	bool CanPlaySource(struct UMediaSource* MediaSource); // Function MediaAssets.MediaPlayer.CanPlaySource
	bool CanPause(); // Function MediaAssets.MediaPlayer.CanPause
}; 
 
 


//Class MediaAssets.MediaBlueprintFunctionLibrary Size 40
// Inherited 40 bytes 
class UMediaBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{

 public: 



 // Functions 
 public:
	void EnumerateWebcamCaptureDevices(struct TArray<struct FMediaCaptureDevice>& OutDevices, int32_t Filter); // Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateWebcamCaptureDevices
	void EnumerateVideoCaptureDevices(struct TArray<struct FMediaCaptureDevice>& OutDevices, int32_t Filter); // Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateVideoCaptureDevices
	void EnumerateAudioCaptureDevices(struct TArray<struct FMediaCaptureDevice>& OutDevices, int32_t Filter); // Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateAudioCaptureDevices
}; 
 
 


//Class MediaAssets.MediaSource Size 128
// Inherited 40 bytes 
class UMediaSource : public UObject
{

 public: 
	char pad_40[88];  // Offset: 40 Size: 88



 // Functions 
 public:
	bool Validate(); // Function MediaAssets.MediaSource.Validate
	void SetMediaOptionString(struct FName& Key, struct FString Value); // Function MediaAssets.MediaSource.SetMediaOptionString
	void SetMediaOptionInt64(struct FName& Key, int64_t Value); // Function MediaAssets.MediaSource.SetMediaOptionInt64
	void SetMediaOptionFloat(struct FName& Key, float Value); // Function MediaAssets.MediaSource.SetMediaOptionFloat
	void SetMediaOptionBool(struct FName& Key, bool Value); // Function MediaAssets.MediaSource.SetMediaOptionBool
	struct FString GetUrl(); // Function MediaAssets.MediaSource.GetUrl
}; 
 
 


//Class MediaAssets.BaseMediaSource Size 136
// Inherited 128 bytes 
class UBaseMediaSource : public UMediaSource
{

 public: 
	struct FName PlayerName;  // Offset: 128 Size: 8



 // Functions 
 public:
}; 
 
 


//Class MediaAssets.MediaComponent Size 192
// Inherited 176 bytes 
class UMediaComponent : public UActorComponent
{

 public: 
	struct UMediaTexture* MediaTexture;  // Offset: 176 Size: 8
	struct UMediaPlayer* MediaPlayer;  // Offset: 184 Size: 8



 // Functions 
 public:
	struct UMediaTexture* GetMediaTexture(); // Function MediaAssets.MediaComponent.GetMediaTexture
	struct UMediaPlayer* GetMediaPlayer(); // Function MediaAssets.MediaComponent.GetMediaPlayer
}; 
 
 


//Class MediaAssets.FileMediaSource Size 176
// Inherited 136 bytes 
class UFileMediaSource : public UBaseMediaSource
{

 public: 
	struct FString FilePath;  // Offset: 136 Size: 16
	char pad_152_1 : 7;  // Offset: 152 Size: 1
	bool PrecacheFile : 1;  // Offset: 152 Size: 1
	char pad_153[23];  // Offset: 153 Size: 23



 // Functions 
 public:
	void SetFilePath(struct FString Path); // Function MediaAssets.FileMediaSource.SetFilePath
}; 
 
 


//Class MediaAssets.MediaTimeStampInfo Size 56
// Inherited 40 bytes 
class UMediaTimeStampInfo : public UObject
{

 public: 
	struct FTimespan Time;  // Offset: 40 Size: 8
	int64_t SequenceIndex;  // Offset: 48 Size: 8



 // Functions 
 public:
}; 
 
 


//Class MediaAssets.MediaPlaylist Size 56
// Inherited 40 bytes 
class UMediaPlaylist : public UObject
{

 public: 
	struct TArray<struct UMediaSource*> Items;  // Offset: 40 Size: 16



 // Functions 
 public:
	bool Replace(int32_t Index, struct UMediaSource* Replacement); // Function MediaAssets.MediaPlaylist.Replace
	bool RemoveAt(int32_t Index); // Function MediaAssets.MediaPlaylist.RemoveAt
	bool Remove(struct UMediaSource* MediaSource); // Function MediaAssets.MediaPlaylist.Remove
	int32_t Num(); // Function MediaAssets.MediaPlaylist.Num
	void Insert(struct UMediaSource* MediaSource, int32_t Index); // Function MediaAssets.MediaPlaylist.Insert
	struct UMediaSource* GetRandom(int32_t& OutIndex); // Function MediaAssets.MediaPlaylist.GetRandom
	struct UMediaSource* GetPrevious(int32_t& InOutIndex); // Function MediaAssets.MediaPlaylist.GetPrevious
	struct UMediaSource* GetNext(int32_t& InOutIndex); // Function MediaAssets.MediaPlaylist.GetNext
	struct UMediaSource* Get(int32_t Index); // Function MediaAssets.MediaPlaylist.Get
	bool AddUrl(struct FString URL); // Function MediaAssets.MediaPlaylist.AddUrl
	bool AddFile(struct FString FilePath); // Function MediaAssets.MediaPlaylist.AddFile
	bool Add(struct UMediaSource* MediaSource); // Function MediaAssets.MediaPlaylist.Add
}; 
 
 


//Class MediaAssets.MediaSoundComponent Size 2096
// Inherited 1744 bytes 
class UMediaSoundComponent : public USynthComponent
{

 public: 
	enum class EMediaSoundChannels Channels;  // Offset: 1744 Size: 4
	char pad_1748_1 : 7;  // Offset: 1748 Size: 1
	bool DynamicRateAdjustment : 1;  // Offset: 1748 Size: 1
	char pad_1749[3];  // Offset: 1749 Size: 3
	float RateAdjustmentFactor;  // Offset: 1752 Size: 4
	struct FFloatRange RateAdjustmentRange;  // Offset: 1756 Size: 16
	char pad_1772[4];  // Offset: 1772 Size: 4
	struct UMediaPlayer* MediaPlayer;  // Offset: 1776 Size: 8
	char pad_1784[312];  // Offset: 1784 Size: 312



 // Functions 
 public:
	void SetSpectralAnalysisSettings(struct TArray<float> InFrequenciesToAnalyze, enum class EMediaSoundComponentFFTSize InFFTSize); // Function MediaAssets.MediaSoundComponent.SetSpectralAnalysisSettings
	void SetMediaPlayer(struct UMediaPlayer* NewMediaPlayer); // Function MediaAssets.MediaSoundComponent.SetMediaPlayer
	void SetEnvelopeFollowingsettings(int32_t AttackTimeMsec, int32_t ReleaseTimeMsec); // Function MediaAssets.MediaSoundComponent.SetEnvelopeFollowingsettings
	void SetEnableSpectralAnalysis(bool bInSpectralAnalysisEnabled); // Function MediaAssets.MediaSoundComponent.SetEnableSpectralAnalysis
	void SetEnableEnvelopeFollowing(bool bInEnvelopeFollowing); // Function MediaAssets.MediaSoundComponent.SetEnableEnvelopeFollowing
	struct TArray<struct FMediaSoundComponentSpectralData> GetSpectralData(); // Function MediaAssets.MediaSoundComponent.GetSpectralData
	struct TArray<struct FMediaSoundComponentSpectralData> GetNormalizedSpectralData(); // Function MediaAssets.MediaSoundComponent.GetNormalizedSpectralData
	struct UMediaPlayer* GetMediaPlayer(); // Function MediaAssets.MediaSoundComponent.GetMediaPlayer
	float GetEnvelopeValue(); // Function MediaAssets.MediaSoundComponent.GetEnvelopeValue
	bool BP_GetAttenuationSettingsToApply(struct FSoundAttenuationSettings& OutAttenuationSettings); // Function MediaAssets.MediaSoundComponent.BP_GetAttenuationSettingsToApply
}; 
 
 


//Class MediaAssets.MediaTexture Size 608
// Inherited 384 bytes 
class UMediaTexture : public UTexture
{

 public: 
	enum class TextureAddress AddressX;  // Offset: 376 Size: 1
	enum class TextureAddress AddressY;  // Offset: 377 Size: 1
	char pad_386_1 : 7;  // Offset: 386 Size: 1
	bool AutoClear : 1;  // Offset: 378 Size: 1
	struct FLinearColor ClearColor;  // Offset: 380 Size: 16
	char pad_403_1 : 7;  // Offset: 403 Size: 1
	bool EnableGenMips : 1;  // Offset: 396 Size: 1
	char NumMips;  // Offset: 397 Size: 1
	char pad_405_1 : 7;  // Offset: 405 Size: 1
	bool NewStyleOutput : 1;  // Offset: 398 Size: 1
	enum class MediaTextureOutputFormat OutputFormat;  // Offset: 399 Size: 1
	float CurrentAspectRatio;  // Offset: 400 Size: 4
	enum class MediaTextureOrientation CurrentOrientation;  // Offset: 404 Size: 1
	struct UMediaPlayer* MediaPlayer;  // Offset: 408 Size: 8
	char pad_420[188];  // Offset: 420 Size: 188



 // Functions 
 public:
	void SetMediaPlayer(struct UMediaPlayer* NewMediaPlayer); // Function MediaAssets.MediaTexture.SetMediaPlayer
	int32_t GetWidth(); // Function MediaAssets.MediaTexture.GetWidth
	int32_t GetTextureNumMips(); // Function MediaAssets.MediaTexture.GetTextureNumMips
	struct UMediaPlayer* GetMediaPlayer(); // Function MediaAssets.MediaTexture.GetMediaPlayer
	int32_t GetHeight(); // Function MediaAssets.MediaTexture.GetHeight
	float GetAspectRatio(); // Function MediaAssets.MediaTexture.GetAspectRatio
}; 
 
 


//Class MediaAssets.PlatformMediaSource Size 136
// Inherited 128 bytes 
class UPlatformMediaSource : public UMediaSource
{

 public: 
	struct UMediaSource* MediaSource;  // Offset: 128 Size: 8



 // Functions 
 public:
}; 
 
 


//Class MediaAssets.StreamMediaSource Size 152
// Inherited 136 bytes 
class UStreamMediaSource : public UBaseMediaSource
{

 public: 
	struct FString StreamUrl;  // Offset: 136 Size: 16



 // Functions 
 public:
}; 
 
 


//Class MediaAssets.TimeSynchronizableMediaSource Size 152
// Inherited 136 bytes 
class UTimeSynchronizableMediaSource : public UBaseMediaSource
{

 public: 
	char pad_136_1 : 7;  // Offset: 136 Size: 1
	bool bUseTimeSynchronization : 1;  // Offset: 136 Size: 1
	char pad_137[3];  // Offset: 137 Size: 3
	int32_t FrameDelay;  // Offset: 140 Size: 4
	double TimeDelay;  // Offset: 144 Size: 8



 // Functions 
 public:
}; 
 
 


