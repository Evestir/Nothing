#pragma once 
#include <TimeManagement_Structs.h>
 
 
 
class UFixedFrameRateCustomTimeStep
{
public:
	UFixedFrameRateCustomTimeStep(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UTimeSynchronizationSource
{
public:
	UTimeSynchronizationSource(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbUseForSynchronization() {
		return memory.read<bool>(m_addr + 40);
	}
	int32_t GetFrameOffset() {
		return memory.read<int32_t>(m_addr + 44);
	}

private:
	std::uint64_t m_addr = 0;
};


class UGenlockedCustomTimeStep
{
public:
	UGenlockedCustomTimeStep(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UGenlockedFixedRateCustomTimeStep
{
public:
	UGenlockedFixedRateCustomTimeStep(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FFrameRate GetFrameRate() {
		return memory.read<struct FFrameRate>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};


class UGenlockedTimecodeProvider
{
public:
	UGenlockedTimecodeProvider(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbUseGenlockToCount() {
		return memory.read<bool>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};


class UTimeManagementBlueprintLibrary
{
public:
	UTimeManagementBlueprintLibrary(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


