#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FEyeTrackerGazeData
{
public:
	FEyeTrackerGazeData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetGazeOrigin() {
		return memory.read<struct FVector>(m_addr + 0);
	}
	struct FVector GetGazeDirection() {
		return memory.read<struct FVector>(m_addr + 12);
	}
	struct FVector GetFixationPoint() {
		return memory.read<struct FVector>(m_addr + 24);
	}
	float GetConfidenceValue() {
		return memory.read<float>(m_addr + 36);
	}
	bool GetbIsLeftEyeBlink() {
		return memory.read<bool>(m_addr + 40);
	}
	bool GetbIsRightEyeBlink() {
		return memory.read<bool>(m_addr + 41);
	}
	float GetLeftPupilDiameter() {
		return memory.read<float>(m_addr + 44);
	}
	float GetRightPupilDiameter() {
		return memory.read<float>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FEyeTrackerStereoGazeData
{
public:
	FEyeTrackerStereoGazeData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetLeftEyeOrigin() {
		return memory.read<struct FVector>(m_addr + 0);
	}
	struct FVector GetLeftEyeDirection() {
		return memory.read<struct FVector>(m_addr + 12);
	}
	struct FVector GetRightEyeOrigin() {
		return memory.read<struct FVector>(m_addr + 24);
	}
	struct FVector GetRightEyeDirection() {
		return memory.read<struct FVector>(m_addr + 36);
	}
	struct FVector GetFixationPoint() {
		return memory.read<struct FVector>(m_addr + 48);
	}
	float GetConfidenceValue() {
		return memory.read<float>(m_addr + 60);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetGazeData
{
public:
	FGetGazeData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FEyeTrackerGazeData GetOutGazeData() {
		return memory.read<struct FEyeTrackerGazeData>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 52);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetStereoGazeData
{
public:
	FGetStereoGazeData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FEyeTrackerStereoGazeData GetOutGazeData() {
		return memory.read<struct FEyeTrackerStereoGazeData>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsEyeTrackerConnected
{
public:
	FIsEyeTrackerConnected(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetEyeTrackedPlayer
{
public:
	FSetEyeTrackedPlayer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct APlayerController GetPlayerController() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct APlayerController(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsStereoGazeDataAvailable
{
public:
	FIsStereoGazeDataAvailable(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};