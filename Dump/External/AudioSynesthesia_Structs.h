#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FGetNormalizedLoudnessAtTime
{
public:
	FGetNormalizedLoudnessAtTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInSeconds() {
		return memory.read<float>(m_addr + 0);
	}
	float GetOutLoudness() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetChannelConstantQAtTime
{
public:
	FGetChannelConstantQAtTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInSeconds() {
		return memory.read<float>(m_addr + 0);
	}
	int32_t GetInChannel() {
		return memory.read<int32_t>(m_addr + 4);
	}
	struct TArray<float> GetOutConstantQ() {
		return memory.read<struct TArray<float>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetChannelOnsetsBetweenTimes
{
public:
	FGetChannelOnsetsBetweenTimes(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInStartSeconds() {
		return memory.read<float>(m_addr + 0);
	}
	float GetInEndSeconds() {
		return memory.read<float>(m_addr + 4);
	}
	int32_t GetInChannel() {
		return memory.read<int32_t>(m_addr + 8);
	}
	struct TArray<float> GetOutOnsetTimestamps() {
		return memory.read<struct TArray<float>>(m_addr + 16);
	}
	struct TArray<float> GetOutOnsetStrengths() {
		return memory.read<struct TArray<float>>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetLoudnessAtTime
{
public:
	FGetLoudnessAtTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInSeconds() {
		return memory.read<float>(m_addr + 0);
	}
	float GetOutLoudness() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetNormalizedChannelConstantQAtTime
{
public:
	FGetNormalizedChannelConstantQAtTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInSeconds() {
		return memory.read<float>(m_addr + 0);
	}
	int32_t GetInChannel() {
		return memory.read<int32_t>(m_addr + 4);
	}
	struct TArray<float> GetOutConstantQ() {
		return memory.read<struct TArray<float>>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetChannelLoudnessAtTime
{
public:
	FGetChannelLoudnessAtTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInSeconds() {
		return memory.read<float>(m_addr + 0);
	}
	int32_t GetInChannel() {
		return memory.read<int32_t>(m_addr + 4);
	}
	float GetOutLoudness() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetNormalizedChannelLoudnessAtTime
{
public:
	FGetNormalizedChannelLoudnessAtTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInSeconds() {
		return memory.read<float>(m_addr + 0);
	}
	int32_t GetInChannel() {
		return memory.read<int32_t>(m_addr + 4);
	}
	float GetOutLoudness() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetNormalizedChannelOnsetsBetweenTimes
{
public:
	FGetNormalizedChannelOnsetsBetweenTimes(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInStartSeconds() {
		return memory.read<float>(m_addr + 0);
	}
	float GetInEndSeconds() {
		return memory.read<float>(m_addr + 4);
	}
	int32_t GetInChannel() {
		return memory.read<int32_t>(m_addr + 8);
	}
	struct TArray<float> GetOutOnsetTimestamps() {
		return memory.read<struct TArray<float>>(m_addr + 16);
	}
	struct TArray<float> GetOutOnsetStrengths() {
		return memory.read<struct TArray<float>>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};