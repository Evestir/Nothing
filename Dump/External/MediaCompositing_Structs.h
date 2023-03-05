#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FMovieSceneMediaPlayerPropertySectionTemplate
{
public:
	FMovieSceneMediaPlayerPropertySectionTemplate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMediaSource GetMediaSource() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct UMediaSource(ptr_addr);
	}
	struct FFrameNumber GetSectionStartFrame() {
		return memory.read<struct FFrameNumber>(m_addr + 64);
	}
	bool GetbLoop() {
		return memory.read<bool>(m_addr + 68);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneMediaSectionTemplate
{
public:
	FMovieSceneMediaSectionTemplate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMovieSceneMediaSectionParams GetParams() {
		return memory.read<struct FMovieSceneMediaSectionParams>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneMediaSectionParams
{
public:
	FMovieSceneMediaSectionParams(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMediaSoundComponent GetMediaSoundComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMediaSoundComponent(ptr_addr);
	}
	struct UMediaSource GetMediaSource() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UMediaSource(ptr_addr);
	}
	struct UMediaTexture GetMediaTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UMediaTexture(ptr_addr);
	}
	struct UMediaPlayer GetMediaPlayer() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct UMediaPlayer(ptr_addr);
	}
	struct FFrameNumber GetSectionStartFrame() {
		return memory.read<struct FFrameNumber>(m_addr + 32);
	}
	struct FFrameNumber GetSectionEndFrame() {
		return memory.read<struct FFrameNumber>(m_addr + 36);
	}
	bool GetbLooping() {
		return memory.read<bool>(m_addr + 40);
	}
	struct FFrameNumber GetStartFrameOffset() {
		return memory.read<struct FFrameNumber>(m_addr + 44);
	}

private:
	std::uint64_t m_addr = 0;
};