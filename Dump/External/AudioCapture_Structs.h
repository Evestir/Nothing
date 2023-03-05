#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FAudioCaptureDeviceInfo
{
public:
	FAudioCaptureDeviceInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetDeviceName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	int32_t GetNumInputChannels() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetSampleRate() {
		return memory.read<int32_t>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAudioCaptureDeviceInfo
{
public:
	FGetAudioCaptureDeviceInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAudioCaptureDeviceInfo GetOutInfo() {
		return memory.read<struct FAudioCaptureDeviceInfo>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsCapturingAudio
{
public:
	FIsCapturingAudio(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FCreateAudioCapture
{
public:
	FCreateAudioCapture(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UAudioCapture GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UAudioCapture(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};