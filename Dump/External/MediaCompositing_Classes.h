#pragma once 
#include <MediaCompositing_Structs.h>
 
 
 
class UMovieSceneMediaSection
{
public:
	UMovieSceneMediaSection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMediaSource GetMediaSource() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 232);
		return struct UMediaSource(ptr_addr);
	}
	bool GetbLooping() {
		return memory.read<bool>(m_addr + 240);
	}
	struct FFrameNumber GetStartFrameOffset() {
		return memory.read<struct FFrameNumber>(m_addr + 244);
	}
	struct UMediaTexture GetMediaTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 248);
		return struct UMediaTexture(ptr_addr);
	}
	struct UMediaSoundComponent GetMediaSoundComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 256);
		return struct UMediaSoundComponent(ptr_addr);
	}
	bool GetbUseExternalMediaPlayer() {
		return memory.read<bool>(m_addr + 264);
	}
	struct UMediaPlayer GetExternalMediaPlayer() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 272);
		return struct UMediaPlayer(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneMediaPlayerPropertySection
{
public:
	UMovieSceneMediaPlayerPropertySection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMediaSource GetMediaSource() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 232);
		return struct UMediaSource(ptr_addr);
	}
	bool GetbLoop() {
		return memory.read<bool>(m_addr + 240);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneMediaPlayerPropertyTrack
{
public:
	UMovieSceneMediaPlayerPropertyTrack(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneMediaTrack
{
public:
	UMovieSceneMediaTrack(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UMovieSceneSection> GetMediaSections() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 152);
		return struct TArray<struct UMovieSceneSection>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


