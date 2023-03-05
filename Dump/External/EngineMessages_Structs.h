#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FEngineServiceNotification
{
public:
	FEngineServiceNotification(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetText() {
		return memory.read<struct FString>(m_addr + 0);
	}
	double GetTimeSeconds() {
		return memory.read<double>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FEngineServiceTerminate
{
public:
	FEngineServiceTerminate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetuserName() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FEngineServiceAuthGrant
{
public:
	FEngineServiceAuthGrant(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetuserName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetUserToGrant() {
		return memory.read<struct FString>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FEngineServiceExecuteCommand
{
public:
	FEngineServiceExecuteCommand(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetCommand() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetuserName() {
		return memory.read<struct FString>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FEngineServicePing
{
public:
	FEngineServicePing(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FEngineServiceAuthDeny
{
public:
	FEngineServiceAuthDeny(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetuserName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetUserToDeny() {
		return memory.read<struct FString>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FEngineServicePong
{
public:
	FEngineServicePong(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetCurrentLevel() {
		return memory.read<struct FString>(m_addr + 0);
	}
	int32_t GetEngineVersion() {
		return memory.read<int32_t>(m_addr + 16);
	}
	bool GetHasBegunPlay() {
		return memory.read<bool>(m_addr + 20);
	}
	struct FGuid GetInstanceId() {
		return memory.read<struct FGuid>(m_addr + 24);
	}
	struct FString GetInstanceType() {
		return memory.read<struct FString>(m_addr + 40);
	}
	struct FGuid GetSessionId() {
		return memory.read<struct FGuid>(m_addr + 56);
	}
	float GetWorldTimeSeconds() {
		return memory.read<float>(m_addr + 72);
	}

private:
	std::uint64_t m_addr = 0;
};