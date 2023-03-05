#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//Function MediaAssets.MediaSoundComponent.SetEnableEnvelopeFollowing Size 1
class FSetEnableEnvelopeFollowing
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bInEnvelopeFollowing : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaPlayer.HasError Size 1
class FHasError
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //DelegateFunction MediaAssets.OnMediaPlayerMediaOpened__DelegateSignature Size 16
class FOnMediaPlayerMediaOpened__DelegateSignature
{

 public: 
	struct FString OpenedUrl;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaPlayer.GetDuration Size 8
class FGetDuration
{

 public: 
	struct FTimespan ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaSource.SetMediaOptionInt64 Size 16
class FSetMediaOptionInt64
{

 public: 
	struct FName Key;  // Offset: 0 Size: 8
	int64_t Value;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaPlayer.OpenFile Size 24
class FOpenFile
{

 public: 
	struct FString FilePath;  // Offset: 0 Size: 16
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool ReturnValue : 1;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaPlayer.IsPreparing Size 1
class FIsPreparing
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //DelegateFunction MediaAssets.OnMediaPlayerMediaOpenFailed__DelegateSignature Size 16
class FOnMediaPlayerMediaOpenFailed__DelegateSignature
{

 public: 
	struct FString FailedUrl;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct MediaAssets.MediaCaptureDevice Size 40
class FMediaCaptureDevice
{

 public: 
	struct FText DisplayName;  // Offset: 0 Size: 24
	struct FString URL;  // Offset: 24 Size: 16



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaPlayer.OpenPlaylistIndex Size 16
class FOpenPlaylistIndex
{

 public: 
	struct UMediaPlaylist* InPlaylist;  // Offset: 0 Size: 8
	int32_t Index;  // Offset: 8 Size: 4
	char pad_12_1 : 7;  // Offset: 12 Size: 1
	bool ReturnValue : 1;  // Offset: 12 Size: 1
	char pad_13[3];  // Offset: 13 Size: 3



 // Functions 
 public:
}; 
 
 //ScriptStruct MediaAssets.MediaSoundComponentSpectralData Size 8
class FMediaSoundComponentSpectralData
{

 public: 
	float FrequencyHz;  // Offset: 0 Size: 4
	float Magnitude;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaPlayer.GetUrl Size 16
class FGetUrl
{

 public: 
	struct FString ReturnValue;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaPlayer.GetVideoTrackDimensions Size 16
class FGetVideoTrackDimensions
{

 public: 
	int32_t TrackIndex;  // Offset: 0 Size: 4
	int32_t FormatIndex;  // Offset: 4 Size: 4
	struct FIntPoint ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaPlayer.IsReady Size 1
class FIsReady
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaPlayer.SetVideoTrackFrameRate Size 16
class FSetVideoTrackFrameRate
{

 public: 
	int32_t TrackIndex;  // Offset: 0 Size: 4
	int32_t FormatIndex;  // Offset: 4 Size: 4
	float FrameRate;  // Offset: 8 Size: 4
	char pad_12_1 : 7;  // Offset: 12 Size: 1
	bool ReturnValue : 1;  // Offset: 12 Size: 1
	char pad_13[3];  // Offset: 13 Size: 3



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaPlayer.GetNumTrackFormats Size 12
class FGetNumTrackFormats
{

 public: 
	enum class EMediaPlayerTrack TrackType;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	int32_t TrackIndex;  // Offset: 4 Size: 4
	int32_t ReturnValue;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaPlayer.SetBlockOnTime Size 8
class FSetBlockOnTime
{

 public: 
	struct FTimespan Time;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaSource.SetMediaOptionBool Size 12
class FSetMediaOptionBool
{

 public: 
	struct FName Key;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool Value : 1;  // Offset: 8 Size: 1
	char pad_9[3];  // Offset: 9 Size: 3



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaPlayer.GetSupportedRates Size 24
class FGetSupportedRates
{

 public: 
	struct TArray<struct FFloatRange> OutRates;  // Offset: 0 Size: 16
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool Unthinned : 1;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaPlayer.CanPlaySource Size 16
class FCanPlaySource
{

 public: 
	struct UMediaSource* MediaSource;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool ReturnValue : 1;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaSource.SetMediaOptionFloat Size 12
class FSetMediaOptionFloat
{

 public: 
	struct FName Key;  // Offset: 0 Size: 8
	float Value;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaPlayer.IsPlaying Size 1
class FIsPlaying
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaPlaylist.Remove Size 16
class FRemove
{

 public: 
	struct UMediaSource* MediaSource;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool ReturnValue : 1;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaPlayer.IsClosed Size 1
class FIsClosed
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaPlayer.IsBuffering Size 1
class FIsBuffering
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaSource.SetMediaOptionString Size 24
class FSetMediaOptionString
{

 public: 
	struct FName Key;  // Offset: 0 Size: 8
	struct FString Value;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaPlayer.CanPause Size 1
class FCanPause
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaSource.Validate Size 1
class FValidate
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaPlayer.IsPaused Size 1
class FIsPaused
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaSoundComponent.GetNormalizedSpectralData Size 16
class FGetNormalizedSpectralData
{

 public: 
	struct TArray<struct FMediaSoundComponentSpectralData> ReturnValue;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function MediaAssets.FileMediaSource.SetFilePath Size 16
class FSetFilePath
{

 public: 
	struct FString Path;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaComponent.GetMediaTexture Size 8
class FGetMediaTexture
{

 public: 
	struct UMediaTexture* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateAudioCaptureDevices Size 24
class FEnumerateAudioCaptureDevices
{

 public: 
	struct TArray<struct FMediaCaptureDevice> OutDevices;  // Offset: 0 Size: 16
	int32_t Filter;  // Offset: 16 Size: 4
	char pad_20[4];  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateVideoCaptureDevices Size 24
class FEnumerateVideoCaptureDevices
{

 public: 
	struct TArray<struct FMediaCaptureDevice> OutDevices;  // Offset: 0 Size: 16
	int32_t Filter;  // Offset: 16 Size: 4
	char pad_20[4];  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateWebcamCaptureDevices Size 24
class FEnumerateWebcamCaptureDevices
{

 public: 
	struct TArray<struct FMediaCaptureDevice> OutDevices;  // Offset: 0 Size: 16
	int32_t Filter;  // Offset: 16 Size: 4
	char pad_20[4];  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaPlayer.IsLooping Size 1
class FIsLooping
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaPlayer.GetRate Size 4
class FGetRate
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaPlayer.OpenSource Size 16
class FOpenSource
{

 public: 
	struct UMediaSource* MediaSource;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool ReturnValue : 1;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaPlayer.SelectTrack Size 12
class FSelectTrack
{

 public: 
	enum class EMediaPlayerTrack TrackType;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	int32_t TrackIndex;  // Offset: 4 Size: 4
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool ReturnValue : 1;  // Offset: 8 Size: 1
	char pad_9[3];  // Offset: 9 Size: 3



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaTexture.GetMediaPlayer Size 8
class FGetMediaPlayer
{

 public: 
	struct UMediaPlayer* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaPlayer.CanPlayUrl Size 24
class FCanPlayUrl
{

 public: 
	struct FString URL;  // Offset: 0 Size: 16
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool ReturnValue : 1;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaPlayer.GetAudioTrackType Size 24
class FGetAudioTrackType
{

 public: 
	int32_t TrackIndex;  // Offset: 0 Size: 4
	int32_t FormatIndex;  // Offset: 4 Size: 4
	struct FString ReturnValue;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaPlayer.GetAudioTrackChannels Size 12
class FGetAudioTrackChannels
{

 public: 
	int32_t TrackIndex;  // Offset: 0 Size: 4
	int32_t FormatIndex;  // Offset: 4 Size: 4
	int32_t ReturnValue;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaPlayer.GetAudioTrackSampleRate Size 12
class FGetAudioTrackSampleRate
{

 public: 
	int32_t TrackIndex;  // Offset: 0 Size: 4
	int32_t FormatIndex;  // Offset: 4 Size: 4
	int32_t ReturnValue;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaPlayer.GetDesiredPlayerName Size 8
class FGetDesiredPlayerName
{

 public: 
	struct FName ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaPlayer.GetHorizontalFieldOfView Size 4
class FGetHorizontalFieldOfView
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaPlayer.OpenSourceLatent Size 96
class FOpenSourceLatent
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct FLatentActionInfo LatentInfo;  // Offset: 8 Size: 24
	struct UMediaSource* MediaSource;  // Offset: 32 Size: 8
	struct FMediaPlayerOptions Options;  // Offset: 40 Size: 48
	char pad_88_1 : 7;  // Offset: 88 Size: 1
	bool bSuccess : 1;  // Offset: 88 Size: 1
	char pad_89[7];  // Offset: 89 Size: 7



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaPlayer.GetMediaName Size 24
class FGetMediaName
{

 public: 
	struct FText ReturnValue;  // Offset: 0 Size: 24



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaPlayer.GetTrackFormat Size 12
class FGetTrackFormat
{

 public: 
	enum class EMediaPlayerTrack TrackType;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	int32_t TrackIndex;  // Offset: 4 Size: 4
	int32_t ReturnValue;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaPlayer.GetNumTracks Size 8
class FGetNumTracks
{

 public: 
	enum class EMediaPlayerTrack TrackType;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	int32_t ReturnValue;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaPlayer.GetPlayerName Size 8
class FGetPlayerName
{

 public: 
	struct FName ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaPlayer.GetPlaylist Size 8
class FGetPlaylist
{

 public: 
	struct UMediaPlaylist* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaPlayer.GetTrackDisplayName Size 32
class FGetTrackDisplayName
{

 public: 
	enum class EMediaPlayerTrack TrackType;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	int32_t TrackIndex;  // Offset: 4 Size: 4
	struct FText ReturnValue;  // Offset: 8 Size: 24



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaPlayer.GetPlaylistIndex Size 4
class FGetPlaylistIndex
{

 public: 
	int32_t ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaPlayer.GetSelectedTrack Size 8
class FGetSelectedTrack
{

 public: 
	enum class EMediaPlayerTrack TrackType;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	int32_t ReturnValue;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaPlayer.GetTime Size 8
class FGetTime
{

 public: 
	struct FTimespan ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaPlayer.GetVideoTrackFrameRates Size 24
class FGetVideoTrackFrameRates
{

 public: 
	int32_t TrackIndex;  // Offset: 0 Size: 4
	int32_t FormatIndex;  // Offset: 4 Size: 4
	struct FFloatRange ReturnValue;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaPlayer.GetTimeDelay Size 8
class FGetTimeDelay
{

 public: 
	struct FTimespan ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaPlayer.GetTimeStamp Size 8
class FGetTimeStamp
{

 public: 
	struct UMediaTimeStampInfo* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaPlayer.GetTrackLanguage Size 24
class FGetTrackLanguage
{

 public: 
	enum class EMediaPlayerTrack TrackType;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	int32_t TrackIndex;  // Offset: 4 Size: 4
	struct FString ReturnValue;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaPlayer.GetVerticalFieldOfView Size 4
class FGetVerticalFieldOfView
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaPlayer.GetVideoTrackAspectRatio Size 12
class FGetVideoTrackAspectRatio
{

 public: 
	int32_t TrackIndex;  // Offset: 0 Size: 4
	int32_t FormatIndex;  // Offset: 4 Size: 4
	float ReturnValue;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaPlayer.GetViewRotation Size 12
class FGetViewRotation
{

 public: 
	struct FRotator ReturnValue;  // Offset: 0 Size: 12



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaTexture.GetHeight Size 4
class FGetHeight
{

 public: 
	int32_t ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaPlayer.GetVideoTrackFrameRate Size 12
class FGetVideoTrackFrameRate
{

 public: 
	int32_t TrackIndex;  // Offset: 0 Size: 4
	int32_t FormatIndex;  // Offset: 4 Size: 4
	float ReturnValue;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaPlayer.GetVideoTrackType Size 24
class FGetVideoTrackType
{

 public: 
	int32_t TrackIndex;  // Offset: 0 Size: 4
	int32_t FormatIndex;  // Offset: 4 Size: 4
	struct FString ReturnValue;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaPlayer.IsConnecting Size 1
class FIsConnecting
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaPlaylist.RemoveAt Size 8
class FRemoveAt
{

 public: 
	int32_t Index;  // Offset: 0 Size: 4
	char pad_4_1 : 7;  // Offset: 4 Size: 1
	bool ReturnValue : 1;  // Offset: 4 Size: 1
	char pad_5[3];  // Offset: 5 Size: 3



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaPlayer.Next Size 1
class FNext
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaSoundComponent.GetSpectralData Size 16
class FGetSpectralData
{

 public: 
	struct TArray<struct FMediaSoundComponentSpectralData> ReturnValue;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaPlayer.OpenPlaylist Size 16
class FOpenPlaylist
{

 public: 
	struct UMediaPlaylist* InPlaylist;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool ReturnValue : 1;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaPlayer.OpenSourceWithOptions Size 64
class FOpenSourceWithOptions
{

 public: 
	struct UMediaSource* MediaSource;  // Offset: 0 Size: 8
	struct FMediaPlayerOptions Options;  // Offset: 8 Size: 48
	char pad_56_1 : 7;  // Offset: 56 Size: 1
	bool ReturnValue : 1;  // Offset: 56 Size: 1
	char pad_57[7];  // Offset: 57 Size: 7



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaPlayer.OpenUrl Size 24
class FOpenUrl
{

 public: 
	struct FString URL;  // Offset: 0 Size: 16
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool ReturnValue : 1;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaPlayer.Pause Size 1
class FPause
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaPlayer.Play Size 1
class FPlay
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaPlayer.Previous Size 1
class FPrevious
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaPlayer.Reopen Size 1
class FReopen
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaPlayer.Rewind Size 1
class FRewind
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaPlayer.Seek Size 16
class FSeek
{

 public: 
	struct FTimespan Time;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool ReturnValue : 1;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaPlayer.SetDesiredPlayerName Size 8
class FSetDesiredPlayerName
{

 public: 
	struct FName PlayerName;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaPlayer.SetLooping Size 2
class FSetLooping
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool Looping : 1;  // Offset: 0 Size: 1
	char pad_1_1 : 7;  // Offset: 1 Size: 1
	bool ReturnValue : 1;  // Offset: 1 Size: 1



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaPlayer.SetMediaOptions Size 8
class FSetMediaOptions
{

 public: 
	struct UMediaSource* Options;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaPlayer.SetNativeVolume Size 8
class FSetNativeVolume
{

 public: 
	float Volume;  // Offset: 0 Size: 4
	char pad_4_1 : 7;  // Offset: 4 Size: 1
	bool ReturnValue : 1;  // Offset: 4 Size: 1
	char pad_5[3];  // Offset: 5 Size: 3



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaTexture.GetTextureNumMips Size 4
class FGetTextureNumMips
{

 public: 
	int32_t ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaPlayer.SetRate Size 8
class FSetRate
{

 public: 
	float Rate;  // Offset: 0 Size: 4
	char pad_4_1 : 7;  // Offset: 4 Size: 1
	bool ReturnValue : 1;  // Offset: 4 Size: 1
	char pad_5[3];  // Offset: 5 Size: 3



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaPlayer.SetTimeDelay Size 8
class FSetTimeDelay
{

 public: 
	struct FTimespan TimeDelay;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaPlayer.SetTrackFormat Size 16
class FSetTrackFormat
{

 public: 
	enum class EMediaPlayerTrack TrackType;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	int32_t TrackIndex;  // Offset: 4 Size: 4
	int32_t FormatIndex;  // Offset: 8 Size: 4
	char pad_12_1 : 7;  // Offset: 12 Size: 1
	bool ReturnValue : 1;  // Offset: 12 Size: 1
	char pad_13[3];  // Offset: 13 Size: 3



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaPlayer.SetViewField Size 12
class FSetViewField
{

 public: 
	float Horizontal;  // Offset: 0 Size: 4
	float Vertical;  // Offset: 4 Size: 4
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool Absolute : 1;  // Offset: 8 Size: 1
	char pad_9_1 : 7;  // Offset: 9 Size: 1
	bool ReturnValue : 1;  // Offset: 9 Size: 1
	char pad_10[2];  // Offset: 10 Size: 2



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaPlayer.SetViewRotation Size 16
class FSetViewRotation
{

 public: 
	struct FRotator Rotation;  // Offset: 0 Size: 12
	char pad_12_1 : 7;  // Offset: 12 Size: 1
	bool Absolute : 1;  // Offset: 12 Size: 1
	char pad_13_1 : 7;  // Offset: 13 Size: 1
	bool ReturnValue : 1;  // Offset: 13 Size: 1
	char pad_14[2];  // Offset: 14 Size: 2



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaPlayer.SupportsRate Size 8
class FSupportsRate
{

 public: 
	float Rate;  // Offset: 0 Size: 4
	char pad_4_1 : 7;  // Offset: 4 Size: 1
	bool Unthinned : 1;  // Offset: 4 Size: 1
	char pad_5_1 : 7;  // Offset: 5 Size: 1
	bool ReturnValue : 1;  // Offset: 5 Size: 1
	char pad_6[2];  // Offset: 6 Size: 2



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaPlayer.SupportsScrubbing Size 1
class FSupportsScrubbing
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaPlayer.SupportsSeeking Size 1
class FSupportsSeeking
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaPlaylist.Add Size 16
class FAdd
{

 public: 
	struct UMediaSource* MediaSource;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool ReturnValue : 1;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaPlaylist.AddFile Size 24
class FAddFile
{

 public: 
	struct FString FilePath;  // Offset: 0 Size: 16
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool ReturnValue : 1;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaPlaylist.AddUrl Size 24
class FAddUrl
{

 public: 
	struct FString URL;  // Offset: 0 Size: 16
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool ReturnValue : 1;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaPlaylist.Get Size 16
class FGet
{

 public: 
	int32_t Index;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct UMediaSource* ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaPlaylist.GetNext Size 16
class FGetNext
{

 public: 
	int32_t InOutIndex;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct UMediaSource* ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaPlaylist.GetPrevious Size 16
class FGetPrevious
{

 public: 
	int32_t InOutIndex;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct UMediaSource* ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaSoundComponent.GetEnvelopeValue Size 4
class FGetEnvelopeValue
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaPlaylist.GetRandom Size 16
class FGetRandom
{

 public: 
	int32_t OutIndex;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct UMediaSource* ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaPlaylist.Insert Size 16
class FInsert
{

 public: 
	struct UMediaSource* MediaSource;  // Offset: 0 Size: 8
	int32_t Index;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaPlaylist.Num Size 4
class FNum
{

 public: 
	int32_t ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaPlaylist.Replace Size 24
class FReplace
{

 public: 
	int32_t Index;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct UMediaSource* Replacement;  // Offset: 8 Size: 8
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool ReturnValue : 1;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaSoundComponent.BP_GetAttenuationSettingsToApply Size 936
class FBP_GetAttenuationSettingsToApply
{

 public: 
	struct FSoundAttenuationSettings OutAttenuationSettings;  // Offset: 0 Size: 928
	char pad_928_1 : 7;  // Offset: 928 Size: 1
	bool ReturnValue : 1;  // Offset: 928 Size: 1
	char pad_929[7];  // Offset: 929 Size: 7



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaSoundComponent.SetEnableSpectralAnalysis Size 1
class FSetEnableSpectralAnalysis
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bInSpectralAnalysisEnabled : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaSoundComponent.SetEnvelopeFollowingsettings Size 8
class FSetEnvelopeFollowingsettings
{

 public: 
	int32_t AttackTimeMsec;  // Offset: 0 Size: 4
	int32_t ReleaseTimeMsec;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaTexture.SetMediaPlayer Size 8
class FSetMediaPlayer
{

 public: 
	struct UMediaPlayer* NewMediaPlayer;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaSoundComponent.SetSpectralAnalysisSettings Size 24
class FSetSpectralAnalysisSettings
{

 public: 
	struct TArray<float> InFrequenciesToAnalyze;  // Offset: 0 Size: 16
	enum class EMediaSoundComponentFFTSize InFFTSize;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaTexture.GetAspectRatio Size 4
class FGetAspectRatio
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function MediaAssets.MediaTexture.GetWidth Size 4
class FGetWidth
{

 public: 
	int32_t ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 