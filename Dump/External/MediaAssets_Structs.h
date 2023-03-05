#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FSetEnableEnvelopeFollowing
{
public:
	FSetEnableEnvelopeFollowing(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbInEnvelopeFollowing() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FHasError
{
public:
	FHasError(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnMediaPlayerMediaOpened__DelegateSignature
{
public:
	FOnMediaPlayerMediaOpened__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetOpenedUrl() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetDuration
{
public:
	FGetDuration(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTimespan GetReturnValue() {
		return memory.read<struct FTimespan>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetMediaOptionInt64
{
public:
	FSetMediaOptionInt64(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetKey() {
		return memory.read<struct FName>(m_addr + 0);
	}
	int64_t GetValue() {
		return memory.read<int64_t>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FOpenFile
{
public:
	FOpenFile(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetFilePath() {
		return memory.read<struct FString>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsPreparing
{
public:
	FIsPreparing(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnMediaPlayerMediaOpenFailed__DelegateSignature
{
public:
	FOnMediaPlayerMediaOpenFailed__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetFailedUrl() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMediaCaptureDevice
{
public:
	FMediaCaptureDevice(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetDisplayName() {
		return memory.read<struct FText>(m_addr + 0);
	}
	struct FString GetURL() {
		return memory.read<struct FString>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FOpenPlaylistIndex
{
public:
	FOpenPlaylistIndex(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMediaPlaylist GetInPlaylist() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMediaPlaylist(ptr_addr);
	}
	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 8);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FMediaSoundComponentSpectralData
{
public:
	FMediaSoundComponentSpectralData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetFrequencyHz() {
		return memory.read<float>(m_addr + 0);
	}
	float GetMagnitude() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetUrl
{
public:
	FGetUrl(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetReturnValue() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetVideoTrackDimensions
{
public:
	FGetVideoTrackDimensions(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetTrackIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetFormatIndex() {
		return memory.read<int32_t>(m_addr + 4);
	}
	struct FIntPoint GetReturnValue() {
		return memory.read<struct FIntPoint>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsReady
{
public:
	FIsReady(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetVideoTrackFrameRate
{
public:
	FSetVideoTrackFrameRate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetTrackIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetFormatIndex() {
		return memory.read<int32_t>(m_addr + 4);
	}
	float GetFrameRate() {
		return memory.read<float>(m_addr + 8);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetNumTrackFormats
{
public:
	FGetNumTrackFormats(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EMediaPlayerTrack GetTrackType() {
		return memory.read<enum class EMediaPlayerTrack>(m_addr + 0);
	}
	int32_t GetTrackIndex() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetBlockOnTime
{
public:
	FSetBlockOnTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTimespan GetTime() {
		return memory.read<struct FTimespan>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetMediaOptionBool
{
public:
	FSetMediaOptionBool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetKey() {
		return memory.read<struct FName>(m_addr + 0);
	}
	bool GetValue() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSupportedRates
{
public:
	FGetSupportedRates(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FFloatRange> GetOutRates() {
		return memory.read<struct TArray<struct FFloatRange>>(m_addr + 0);
	}
	bool GetUnthinned() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FCanPlaySource
{
public:
	FCanPlaySource(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMediaSource GetMediaSource() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMediaSource(ptr_addr);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetMediaOptionFloat
{
public:
	FSetMediaOptionFloat(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetKey() {
		return memory.read<struct FName>(m_addr + 0);
	}
	float GetValue() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsPlaying
{
public:
	FIsPlaying(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FRemove
{
public:
	FRemove(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMediaSource GetMediaSource() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMediaSource(ptr_addr);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsClosed
{
public:
	FIsClosed(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsBuffering
{
public:
	FIsBuffering(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetMediaOptionString
{
public:
	FSetMediaOptionString(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetKey() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FString GetValue() {
		return memory.read<struct FString>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FCanPause
{
public:
	FCanPause(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FValidate
{
public:
	FValidate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsPaused
{
public:
	FIsPaused(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetNormalizedSpectralData
{
public:
	FGetNormalizedSpectralData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FMediaSoundComponentSpectralData> GetReturnValue() {
		return memory.read<struct TArray<struct FMediaSoundComponentSpectralData>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetFilePath
{
public:
	FSetFilePath(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetPath() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetMediaTexture
{
public:
	FGetMediaTexture(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMediaTexture GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMediaTexture(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FEnumerateAudioCaptureDevices
{
public:
	FEnumerateAudioCaptureDevices(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FMediaCaptureDevice> GetOutDevices() {
		return memory.read<struct TArray<struct FMediaCaptureDevice>>(m_addr + 0);
	}
	int32_t GetFilter() {
		return memory.read<int32_t>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FEnumerateVideoCaptureDevices
{
public:
	FEnumerateVideoCaptureDevices(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FMediaCaptureDevice> GetOutDevices() {
		return memory.read<struct TArray<struct FMediaCaptureDevice>>(m_addr + 0);
	}
	int32_t GetFilter() {
		return memory.read<int32_t>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FEnumerateWebcamCaptureDevices
{
public:
	FEnumerateWebcamCaptureDevices(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FMediaCaptureDevice> GetOutDevices() {
		return memory.read<struct TArray<struct FMediaCaptureDevice>>(m_addr + 0);
	}
	int32_t GetFilter() {
		return memory.read<int32_t>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsLooping
{
public:
	FIsLooping(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetRate
{
public:
	FGetRate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOpenSource
{
public:
	FOpenSource(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMediaSource GetMediaSource() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMediaSource(ptr_addr);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSelectTrack
{
public:
	FSelectTrack(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EMediaPlayerTrack GetTrackType() {
		return memory.read<enum class EMediaPlayerTrack>(m_addr + 0);
	}
	int32_t GetTrackIndex() {
		return memory.read<int32_t>(m_addr + 4);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetMediaPlayer
{
public:
	FGetMediaPlayer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMediaPlayer GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMediaPlayer(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FCanPlayUrl
{
public:
	FCanPlayUrl(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetURL() {
		return memory.read<struct FString>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAudioTrackType
{
public:
	FGetAudioTrackType(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetTrackIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetFormatIndex() {
		return memory.read<int32_t>(m_addr + 4);
	}
	struct FString GetReturnValue() {
		return memory.read<struct FString>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAudioTrackChannels
{
public:
	FGetAudioTrackChannels(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetTrackIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetFormatIndex() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAudioTrackSampleRate
{
public:
	FGetAudioTrackSampleRate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetTrackIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetFormatIndex() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetDesiredPlayerName
{
public:
	FGetDesiredPlayerName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetReturnValue() {
		return memory.read<struct FName>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetHorizontalFieldOfView
{
public:
	FGetHorizontalFieldOfView(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOpenSourceLatent
{
public:
	FOpenSourceLatent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct FLatentActionInfo GetLatentInfo() {
		return memory.read<struct FLatentActionInfo>(m_addr + 8);
	}
	struct UMediaSource GetMediaSource() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 32);
		return struct UMediaSource(ptr_addr);
	}
	struct FMediaPlayerOptions GetOptions() {
		return memory.read<struct FMediaPlayerOptions>(m_addr + 40);
	}
	bool GetbSuccess() {
		return memory.read<bool>(m_addr + 88);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetMediaName
{
public:
	FGetMediaName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetReturnValue() {
		return memory.read<struct FText>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTrackFormat
{
public:
	FGetTrackFormat(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EMediaPlayerTrack GetTrackType() {
		return memory.read<enum class EMediaPlayerTrack>(m_addr + 0);
	}
	int32_t GetTrackIndex() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetNumTracks
{
public:
	FGetNumTracks(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EMediaPlayerTrack GetTrackType() {
		return memory.read<enum class EMediaPlayerTrack>(m_addr + 0);
	}
	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPlayerName
{
public:
	FGetPlayerName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetReturnValue() {
		return memory.read<struct FName>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPlaylist
{
public:
	FGetPlaylist(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMediaPlaylist GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMediaPlaylist(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTrackDisplayName
{
public:
	FGetTrackDisplayName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EMediaPlayerTrack GetTrackType() {
		return memory.read<enum class EMediaPlayerTrack>(m_addr + 0);
	}
	int32_t GetTrackIndex() {
		return memory.read<int32_t>(m_addr + 4);
	}
	struct FText GetReturnValue() {
		return memory.read<struct FText>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPlaylistIndex
{
public:
	FGetPlaylistIndex(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSelectedTrack
{
public:
	FGetSelectedTrack(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EMediaPlayerTrack GetTrackType() {
		return memory.read<enum class EMediaPlayerTrack>(m_addr + 0);
	}
	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTime
{
public:
	FGetTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTimespan GetReturnValue() {
		return memory.read<struct FTimespan>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetVideoTrackFrameRates
{
public:
	FGetVideoTrackFrameRates(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetTrackIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetFormatIndex() {
		return memory.read<int32_t>(m_addr + 4);
	}
	struct FFloatRange GetReturnValue() {
		return memory.read<struct FFloatRange>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTimeDelay
{
public:
	FGetTimeDelay(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTimespan GetReturnValue() {
		return memory.read<struct FTimespan>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTimeStamp
{
public:
	FGetTimeStamp(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMediaTimeStampInfo GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMediaTimeStampInfo(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTrackLanguage
{
public:
	FGetTrackLanguage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EMediaPlayerTrack GetTrackType() {
		return memory.read<enum class EMediaPlayerTrack>(m_addr + 0);
	}
	int32_t GetTrackIndex() {
		return memory.read<int32_t>(m_addr + 4);
	}
	struct FString GetReturnValue() {
		return memory.read<struct FString>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetVerticalFieldOfView
{
public:
	FGetVerticalFieldOfView(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetVideoTrackAspectRatio
{
public:
	FGetVideoTrackAspectRatio(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetTrackIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetFormatIndex() {
		return memory.read<int32_t>(m_addr + 4);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetViewRotation
{
public:
	FGetViewRotation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRotator GetReturnValue() {
		return memory.read<struct FRotator>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetHeight
{
public:
	FGetHeight(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetVideoTrackFrameRate
{
public:
	FGetVideoTrackFrameRate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetTrackIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetFormatIndex() {
		return memory.read<int32_t>(m_addr + 4);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetVideoTrackType
{
public:
	FGetVideoTrackType(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetTrackIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetFormatIndex() {
		return memory.read<int32_t>(m_addr + 4);
	}
	struct FString GetReturnValue() {
		return memory.read<struct FString>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsConnecting
{
public:
	FIsConnecting(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FRemoveAt
{
public:
	FRemoveAt(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FNext
{
public:
	FNext(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSpectralData
{
public:
	FGetSpectralData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FMediaSoundComponentSpectralData> GetReturnValue() {
		return memory.read<struct TArray<struct FMediaSoundComponentSpectralData>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOpenPlaylist
{
public:
	FOpenPlaylist(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMediaPlaylist GetInPlaylist() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMediaPlaylist(ptr_addr);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FOpenSourceWithOptions
{
public:
	FOpenSourceWithOptions(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMediaSource GetMediaSource() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMediaSource(ptr_addr);
	}
	struct FMediaPlayerOptions GetOptions() {
		return memory.read<struct FMediaPlayerOptions>(m_addr + 8);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FOpenUrl
{
public:
	FOpenUrl(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetURL() {
		return memory.read<struct FString>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FPause
{
public:
	FPause(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FPlay
{
public:
	FPlay(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FPrevious
{
public:
	FPrevious(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FReopen
{
public:
	FReopen(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FRewind
{
public:
	FRewind(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSeek
{
public:
	FSeek(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTimespan GetTime() {
		return memory.read<struct FTimespan>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetDesiredPlayerName
{
public:
	FSetDesiredPlayerName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetPlayerName() {
		return memory.read<struct FName>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetLooping
{
public:
	FSetLooping(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetLooping() {
		return memory.read<bool>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 1);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetMediaOptions
{
public:
	FSetMediaOptions(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMediaSource GetOptions() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMediaSource(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetNativeVolume
{
public:
	FSetNativeVolume(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetVolume() {
		return memory.read<float>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTextureNumMips
{
public:
	FGetTextureNumMips(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetRate
{
public:
	FSetRate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetRate() {
		return memory.read<float>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetTimeDelay
{
public:
	FSetTimeDelay(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTimespan GetTimeDelay() {
		return memory.read<struct FTimespan>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetTrackFormat
{
public:
	FSetTrackFormat(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EMediaPlayerTrack GetTrackType() {
		return memory.read<enum class EMediaPlayerTrack>(m_addr + 0);
	}
	int32_t GetTrackIndex() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t GetFormatIndex() {
		return memory.read<int32_t>(m_addr + 8);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetViewField
{
public:
	FSetViewField(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetHorizontal() {
		return memory.read<float>(m_addr + 0);
	}
	float GetVertical() {
		return memory.read<float>(m_addr + 4);
	}
	bool GetAbsolute() {
		return memory.read<bool>(m_addr + 8);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 9);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetViewRotation
{
public:
	FSetViewRotation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRotator GetRotation() {
		return memory.read<struct FRotator>(m_addr + 0);
	}
	bool GetAbsolute() {
		return memory.read<bool>(m_addr + 12);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 13);
	}

private:
	std::uint64_t m_addr = 0;
};class FSupportsRate
{
public:
	FSupportsRate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetRate() {
		return memory.read<float>(m_addr + 0);
	}
	bool GetUnthinned() {
		return memory.read<bool>(m_addr + 4);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 5);
	}

private:
	std::uint64_t m_addr = 0;
};class FSupportsScrubbing
{
public:
	FSupportsScrubbing(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSupportsSeeking
{
public:
	FSupportsSeeking(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAdd
{
public:
	FAdd(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMediaSource GetMediaSource() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMediaSource(ptr_addr);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddFile
{
public:
	FAddFile(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetFilePath() {
		return memory.read<struct FString>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddUrl
{
public:
	FAddUrl(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetURL() {
		return memory.read<struct FString>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGet
{
public:
	FGet(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct UMediaSource GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UMediaSource(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetNext
{
public:
	FGetNext(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInOutIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct UMediaSource GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UMediaSource(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPrevious
{
public:
	FGetPrevious(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInOutIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct UMediaSource GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UMediaSource(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetEnvelopeValue
{
public:
	FGetEnvelopeValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetRandom
{
public:
	FGetRandom(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetOutIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct UMediaSource GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UMediaSource(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FInsert
{
public:
	FInsert(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMediaSource GetMediaSource() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMediaSource(ptr_addr);
	}
	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FNum
{
public:
	FNum(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FReplace
{
public:
	FReplace(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct UMediaSource GetReplacement() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UMediaSource(ptr_addr);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FBP_GetAttenuationSettingsToApply
{
public:
	FBP_GetAttenuationSettingsToApply(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSoundAttenuationSettings GetOutAttenuationSettings() {
		return memory.read<struct FSoundAttenuationSettings>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 928);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetEnableSpectralAnalysis
{
public:
	FSetEnableSpectralAnalysis(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbInSpectralAnalysisEnabled() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetEnvelopeFollowingsettings
{
public:
	FSetEnvelopeFollowingsettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetAttackTimeMsec() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetReleaseTimeMsec() {
		return memory.read<int32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetMediaPlayer
{
public:
	FSetMediaPlayer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMediaPlayer GetNewMediaPlayer() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMediaPlayer(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetSpectralAnalysisSettings
{
public:
	FSetSpectralAnalysisSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<float> GetInFrequenciesToAnalyze() {
		return memory.read<struct TArray<float>>(m_addr + 0);
	}
	enum class EMediaSoundComponentFFTSize GetInFFTSize() {
		return memory.read<enum class EMediaSoundComponentFFTSize>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAspectRatio
{
public:
	FGetAspectRatio(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetWidth
{
public:
	FGetWidth(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};