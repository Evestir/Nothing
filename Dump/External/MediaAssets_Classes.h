#pragma once 
#include <MediaAssets_Structs.h>
 
 
 
class UMediaPlayer
{
public:
	UMediaPlayer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate GetOnEndReached() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 40);
	}
	struct FMulticastInlineDelegate GetOnMediaClosed() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 56);
	}
	struct FMulticastInlineDelegate GetOnMediaOpened() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 72);
	}
	struct FMulticastInlineDelegate GetOnMediaOpenFailed() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 88);
	}
	struct FMulticastInlineDelegate GetOnPlaybackResumed() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 104);
	}
	struct FMulticastInlineDelegate GetOnPlaybackSuspended() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 120);
	}
	struct FMulticastInlineDelegate GetOnSeekCompleted() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 136);
	}
	struct FMulticastInlineDelegate GetOnTracksChanged() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 152);
	}
	struct FTimespan GetCacheAhead() {
		return memory.read<struct FTimespan>(m_addr + 168);
	}
	struct FTimespan GetCacheBehind() {
		return memory.read<struct FTimespan>(m_addr + 176);
	}
	struct FTimespan GetCacheBehindGame() {
		return memory.read<struct FTimespan>(m_addr + 184);
	}
	bool GetNativeAudioOut() {
		return memory.read<bool>(m_addr + 192);
	}
	bool GetPlayOnOpen() {
		return memory.read<bool>(m_addr + 193);
	}
	char GetShuffle() {
		return memory.read<char>(m_addr + 196);
	}
	char GetLoop() {
		return memory.read<char>(m_addr + 196);
	}
	struct UMediaPlaylist GetPlayList() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 200);
		return struct UMediaPlaylist(ptr_addr);
	}
	int32_t GetPlaylistIndex() {
		return memory.read<int32_t>(m_addr + 208);
	}
	struct FTimespan GetTimeDelay() {
		return memory.read<struct FTimespan>(m_addr + 216);
	}
	float GetHorizontalFieldOfView() {
		return memory.read<float>(m_addr + 224);
	}
	float GetVerticalFieldOfView() {
		return memory.read<float>(m_addr + 228);
	}
	struct FRotator GetViewRotation() {
		return memory.read<struct FRotator>(m_addr + 232);
	}
	struct FGuid GetPlayerGuid() {
		return memory.read<struct FGuid>(m_addr + 288);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMediaBlueprintFunctionLibrary
{
public:
	UMediaBlueprintFunctionLibrary(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMediaSource
{
public:
	UMediaSource(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UBaseMediaSource
{
public:
	UBaseMediaSource(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetPlayerName() {
		return memory.read<struct FName>(m_addr + 128);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMediaComponent
{
public:
	UMediaComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMediaTexture GetMediaTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 176);
		return struct UMediaTexture(ptr_addr);
	}
	struct UMediaPlayer GetMediaPlayer() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 184);
		return struct UMediaPlayer(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UFileMediaSource
{
public:
	UFileMediaSource(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetFilePath() {
		return memory.read<struct FString>(m_addr + 136);
	}
	bool GetPrecacheFile() {
		return memory.read<bool>(m_addr + 152);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMediaTimeStampInfo
{
public:
	UMediaTimeStampInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTimespan GetTime() {
		return memory.read<struct FTimespan>(m_addr + 40);
	}
	int64_t GetSequenceIndex() {
		return memory.read<int64_t>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMediaPlaylist
{
public:
	UMediaPlaylist(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UMediaSource> GetItems() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct TArray<struct UMediaSource>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMediaSoundComponent
{
public:
	UMediaSoundComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EMediaSoundChannels GetChannels() {
		return memory.read<enum class EMediaSoundChannels>(m_addr + 1744);
	}
	bool GetDynamicRateAdjustment() {
		return memory.read<bool>(m_addr + 1748);
	}
	float GetRateAdjustmentFactor() {
		return memory.read<float>(m_addr + 1752);
	}
	struct FFloatRange GetRateAdjustmentRange() {
		return memory.read<struct FFloatRange>(m_addr + 1756);
	}
	struct UMediaPlayer GetMediaPlayer() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1776);
		return struct UMediaPlayer(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMediaTexture
{
public:
	UMediaTexture(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class TextureAddress GetAddressX() {
		return memory.read<enum class TextureAddress>(m_addr + 376);
	}
	enum class TextureAddress GetAddressY() {
		return memory.read<enum class TextureAddress>(m_addr + 377);
	}
	bool GetAutoClear() {
		return memory.read<bool>(m_addr + 378);
	}
	struct FLinearColor GetClearColor() {
		return memory.read<struct FLinearColor>(m_addr + 380);
	}
	bool GetEnableGenMips() {
		return memory.read<bool>(m_addr + 396);
	}
	char GetNumMips() {
		return memory.read<char>(m_addr + 397);
	}
	bool GetNewStyleOutput() {
		return memory.read<bool>(m_addr + 398);
	}
	enum class MediaTextureOutputFormat GetOutputFormat() {
		return memory.read<enum class MediaTextureOutputFormat>(m_addr + 399);
	}
	float GetCurrentAspectRatio() {
		return memory.read<float>(m_addr + 400);
	}
	enum class MediaTextureOrientation GetCurrentOrientation() {
		return memory.read<enum class MediaTextureOrientation>(m_addr + 404);
	}
	struct UMediaPlayer GetMediaPlayer() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 408);
		return struct UMediaPlayer(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UPlatformMediaSource
{
public:
	UPlatformMediaSource(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMediaSource GetMediaSource() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 128);
		return struct UMediaSource(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UStreamMediaSource
{
public:
	UStreamMediaSource(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetStreamUrl() {
		return memory.read<struct FString>(m_addr + 136);
	}

private:
	std::uint64_t m_addr = 0;
};


class UTimeSynchronizableMediaSource
{
public:
	UTimeSynchronizableMediaSource(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbUseTimeSynchronization() {
		return memory.read<bool>(m_addr + 136);
	}
	int32_t GetFrameDelay() {
		return memory.read<int32_t>(m_addr + 140);
	}
	double GetTimeDelay() {
		return memory.read<double>(m_addr + 144);
	}

private:
	std::uint64_t m_addr = 0;
};


