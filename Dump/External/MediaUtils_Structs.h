#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FMediaPlayerOptions
{
public:
	FMediaPlayerOptions(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMediaPlayerTrackOptions GetTracks() {
		return memory.read<struct FMediaPlayerTrackOptions>(m_addr + 0);
	}
	struct FTimespan GetSeekTime() {
		return memory.read<struct FTimespan>(m_addr + 32);
	}
	enum class EMediaPlayerOptionBooleanOverride GetPlayOnOpen() {
		return memory.read<enum class EMediaPlayerOptionBooleanOverride>(m_addr + 40);
	}
	enum class EMediaPlayerOptionBooleanOverride GetLoop() {
		return memory.read<enum class EMediaPlayerOptionBooleanOverride>(m_addr + 41);
	}

private:
	std::uint64_t m_addr = 0;
};class FMediaPlayerTrackOptions
{
public:
	FMediaPlayerTrackOptions(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetAudio() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetCaption() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t GetMetaData() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetScript() {
		return memory.read<int32_t>(m_addr + 12);
	}
	int32_t GetSubtitle() {
		return memory.read<int32_t>(m_addr + 16);
	}
	int32_t GetText() {
		return memory.read<int32_t>(m_addr + 20);
	}
	int32_t GetVideo() {
		return memory.read<int32_t>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};