#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FLiveLinkSubjectFrameMessage
{
public:
	FLiveLinkSubjectFrameMessage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetSubjectName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct TArray<struct FTransform> GetTransforms() {
		return memory.read<struct TArray<struct FTransform>>(m_addr + 8);
	}
	struct TArray<struct FLiveLinkCurveElement> GetCurves() {
		return memory.read<struct TArray<struct FLiveLinkCurveElement>>(m_addr + 24);
	}
	struct FLiveLinkMetaData GetMetaData() {
		return memory.read<struct FLiveLinkMetaData>(m_addr + 40);
	}
	double GetTime() {
		return memory.read<double>(m_addr + 136);
	}

private:
	std::uint64_t m_addr = 0;
};class FLiveLinkPongMessage
{
public:
	FLiveLinkPongMessage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetProviderName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetMachineName() {
		return memory.read<struct FString>(m_addr + 16);
	}
	struct FGuid GetPollRequest() {
		return memory.read<struct FGuid>(m_addr + 32);
	}
	int32_t GetLiveLinkVersion() {
		return memory.read<int32_t>(m_addr + 48);
	}
	double GetCreationPlatformTime() {
		return memory.read<double>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FLiveLinkHeartbeatMessage
{
public:
	FLiveLinkHeartbeatMessage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FLiveLinkSubjectDataMessage
{
public:
	FLiveLinkSubjectDataMessage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLiveLinkRefSkeleton GetRefSkeleton() {
		return memory.read<struct FLiveLinkRefSkeleton>(m_addr + 0);
	}
	struct FName GetSubjectName() {
		return memory.read<struct FName>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FLiveLinkClearSubject
{
public:
	FLiveLinkClearSubject(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetSubjectName() {
		return memory.read<struct FName>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FLiveLinkPingMessage
{
public:
	FLiveLinkPingMessage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGuid GetPollRequest() {
		return memory.read<struct FGuid>(m_addr + 0);
	}
	int32_t GetLiveLinkVersion() {
		return memory.read<int32_t>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FLiveLinkConnectMessage
{
public:
	FLiveLinkConnectMessage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetLiveLinkVersion() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};