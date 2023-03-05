#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FSessionServiceLogUnsubscribe
{
public:
	FSessionServiceLogUnsubscribe(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FSessionServicePong
{
public:
	FSessionServicePong(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetAuthorized() {
		return memory.read<bool>(m_addr + 0);
	}
	struct FString GetBuildDate() {
		return memory.read<struct FString>(m_addr + 8);
	}
	struct FString GetDeviceName() {
		return memory.read<struct FString>(m_addr + 24);
	}
	struct FGuid GetInstanceId() {
		return memory.read<struct FGuid>(m_addr + 40);
	}
	struct FString GetInstanceName() {
		return memory.read<struct FString>(m_addr + 56);
	}
	struct FString GetPlatformName() {
		return memory.read<struct FString>(m_addr + 72);
	}
	struct FGuid GetSessionId() {
		return memory.read<struct FGuid>(m_addr + 88);
	}
	struct FString GetSessionName() {
		return memory.read<struct FString>(m_addr + 104);
	}
	struct FString GetSessionOwner() {
		return memory.read<struct FString>(m_addr + 120);
	}
	bool GetStandalone() {
		return memory.read<bool>(m_addr + 136);
	}

private:
	std::uint64_t m_addr = 0;
};class FSessionServiceLog
{
public:
	FSessionServiceLog(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetCategory() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FString GetData() {
		return memory.read<struct FString>(m_addr + 8);
	}
	struct FGuid GetInstanceId() {
		return memory.read<struct FGuid>(m_addr + 24);
	}
	double GetTimeSeconds() {
		return memory.read<double>(m_addr + 40);
	}
	char GetVerbosity() {
		return memory.read<char>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FSessionServiceLogSubscribe
{
public:
	FSessionServiceLogSubscribe(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FSessionServicePing
{
public:
	FSessionServicePing(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetuserName() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};