#pragma once 
#include <ImgMedia_Structs.h>
 
 
 
class UImgMediaSource
{
public:
	UImgMediaSource(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetIsPathRelativeToProjectRoot() {
		return memory.read<bool>(m_addr + 136);
	}
	struct FFrameRate GetFrameRateOverride() {
		return memory.read<struct FFrameRate>(m_addr + 140);
	}
	struct FString GetProxyOverride() {
		return memory.read<struct FString>(m_addr + 152);
	}
	struct FDirectoryPath GetSequencePath() {
		return memory.read<struct FDirectoryPath>(m_addr + 168);
	}

private:
	std::uint64_t m_addr = 0;
};


