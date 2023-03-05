#pragma once 
#include <AudioCapture_Structs.h>
 
 
 
class UAudioCaptureFunctionLibrary
{
public:
	UAudioCaptureFunctionLibrary(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAudioCapture
{
public:
	UAudioCapture(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAudioCaptureComponent
{
public:
	UAudioCaptureComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetJitterLatencyFrames() {
		return memory.read<int32_t>(m_addr + 1744);
	}

private:
	std::uint64_t m_addr = 0;
};


