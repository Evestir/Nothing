#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FTimedDataInputEvaluationData
{
public:
	FTimedDataInputEvaluationData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetDistanceToNewestSampleSeconds() {
		return memory.read<float>(m_addr + 0);
	}
	float GetDistanceToOldestSampleSeconds() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FConv_QualifiedFrameTimeToSeconds
{
public:
	FConv_QualifiedFrameTimeToSeconds(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FQualifiedFrameTime GetInFrameTime() {
		return memory.read<struct FQualifiedFrameTime>(m_addr + 0);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FMultiply_FrameNumberInteger
{
public:
	FMultiply_FrameNumberInteger(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FFrameNumber GetA() {
		return memory.read<struct FFrameNumber>(m_addr + 0);
	}
	int32_t GetB() {
		return memory.read<int32_t>(m_addr + 4);
	}
	struct FFrameNumber GetReturnValue() {
		return memory.read<struct FFrameNumber>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FTimedDataChannelSampleTime
{
public:
	FTimedDataChannelSampleTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FAdd_FrameNumberFrameNumber
{
public:
	FAdd_FrameNumberFrameNumber(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FFrameNumber GetA() {
		return memory.read<struct FFrameNumber>(m_addr + 0);
	}
	struct FFrameNumber GetB() {
		return memory.read<struct FFrameNumber>(m_addr + 4);
	}
	struct FFrameNumber GetReturnValue() {
		return memory.read<struct FFrameNumber>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FConv_FrameRateToSeconds
{
public:
	FConv_FrameRateToSeconds(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FFrameRate GetInFrameRate() {
		return memory.read<struct FFrameRate>(m_addr + 0);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FAdd_FrameNumberInteger
{
public:
	FAdd_FrameNumberInteger(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FFrameNumber GetA() {
		return memory.read<struct FFrameNumber>(m_addr + 0);
	}
	int32_t GetB() {
		return memory.read<int32_t>(m_addr + 4);
	}
	struct FFrameNumber GetReturnValue() {
		return memory.read<struct FFrameNumber>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsValid_Framerate
{
public:
	FIsValid_Framerate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FFrameRate GetInFrameRate() {
		return memory.read<struct FFrameRate>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FConv_FrameNumberToInteger
{
public:
	FConv_FrameNumberToInteger(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FFrameNumber GetInFrameNumber() {
		return memory.read<struct FFrameNumber>(m_addr + 0);
	}
	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FConv_TimecodeToString
{
public:
	FConv_TimecodeToString(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTimecode GetInTimecode() {
		return memory.read<struct FTimecode>(m_addr + 0);
	}
	bool GetbForceSignDisplay() {
		return memory.read<bool>(m_addr + 20);
	}
	struct FString GetReturnValue() {
		return memory.read<struct FString>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FDivide_FrameNumberInteger
{
public:
	FDivide_FrameNumberInteger(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FFrameNumber GetA() {
		return memory.read<struct FFrameNumber>(m_addr + 0);
	}
	int32_t GetB() {
		return memory.read<int32_t>(m_addr + 4);
	}
	struct FFrameNumber GetReturnValue() {
		return memory.read<struct FFrameNumber>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTimecode
{
public:
	FGetTimecode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTimecode GetReturnValue() {
		return memory.read<struct FTimecode>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSubtract_FrameNumberFrameNumber
{
public:
	FSubtract_FrameNumberFrameNumber(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FFrameNumber GetA() {
		return memory.read<struct FFrameNumber>(m_addr + 0);
	}
	struct FFrameNumber GetB() {
		return memory.read<struct FFrameNumber>(m_addr + 4);
	}
	struct FFrameNumber GetReturnValue() {
		return memory.read<struct FFrameNumber>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTimecodeFrameRate
{
public:
	FGetTimecodeFrameRate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FFrameRate GetReturnValue() {
		return memory.read<struct FFrameRate>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsValid_MultipleOf
{
public:
	FIsValid_MultipleOf(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FFrameRate GetInFrameRate() {
		return memory.read<struct FFrameRate>(m_addr + 0);
	}
	struct FFrameRate GetOtherFramerate() {
		return memory.read<struct FFrameRate>(m_addr + 8);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FMultiply_SecondsFrameRate
{
public:
	FMultiply_SecondsFrameRate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetTimeInSeconds() {
		return memory.read<float>(m_addr + 0);
	}
	struct FFrameRate GetFrameRate() {
		return memory.read<struct FFrameRate>(m_addr + 4);
	}
	struct FFrameTime GetReturnValue() {
		return memory.read<struct FFrameTime>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FSnapFrameTimeToRate
{
public:
	FSnapFrameTimeToRate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FFrameTime GetSourceTime() {
		return memory.read<struct FFrameTime>(m_addr + 0);
	}
	struct FFrameRate GetSourceRate() {
		return memory.read<struct FFrameRate>(m_addr + 8);
	}
	struct FFrameRate GetSnapToRate() {
		return memory.read<struct FFrameRate>(m_addr + 16);
	}
	struct FFrameTime GetReturnValue() {
		return memory.read<struct FFrameTime>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FSubtract_FrameNumberInteger
{
public:
	FSubtract_FrameNumberInteger(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FFrameNumber GetA() {
		return memory.read<struct FFrameNumber>(m_addr + 0);
	}
	int32_t GetB() {
		return memory.read<int32_t>(m_addr + 4);
	}
	struct FFrameNumber GetReturnValue() {
		return memory.read<struct FFrameNumber>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FTransformTime
{
public:
	FTransformTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FFrameTime GetSourceTime() {
		return memory.read<struct FFrameTime>(m_addr + 0);
	}
	struct FFrameRate GetSourceRate() {
		return memory.read<struct FFrameRate>(m_addr + 8);
	}
	struct FFrameRate GetDestinationRate() {
		return memory.read<struct FFrameRate>(m_addr + 16);
	}
	struct FFrameTime GetReturnValue() {
		return memory.read<struct FFrameTime>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};