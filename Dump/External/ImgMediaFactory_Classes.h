#pragma once 
#include <ImgMediaFactory_Structs.h>
 
 
 
class UImgMediaSettings
{
public:
	UImgMediaSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FFrameRate GetDefaultFrameRate() {
		return memory.read<struct FFrameRate>(m_addr + 40);
	}
	float GetCacheBehindPercentage() {
		return memory.read<float>(m_addr + 48);
	}
	float GetCacheSizeGB() {
		return memory.read<float>(m_addr + 52);
	}
	int32_t GetCacheThreads() {
		return memory.read<int32_t>(m_addr + 56);
	}
	int32_t GetCacheThreadStackSizeKB() {
		return memory.read<int32_t>(m_addr + 60);
	}
	float GetGlobalCacheSizeGB() {
		return memory.read<float>(m_addr + 64);
	}
	bool GetUseGlobalCache() {
		return memory.read<bool>(m_addr + 68);
	}
	uint32_t GetExrDecoderThreads() {
		return memory.read<uint32_t>(m_addr + 72);
	}
	struct FString GetDefaultProxy() {
		return memory.read<struct FString>(m_addr + 80);
	}
	bool GetUseDefaultProxy() {
		return memory.read<bool>(m_addr + 96);
	}

private:
	std::uint64_t m_addr = 0;
};


