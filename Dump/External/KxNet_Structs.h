#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FPrResult
{
public:
	FPrResult(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t Getcode() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FJsonTestStruct
{
public:
	FJsonTestStruct(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetBoolProperty() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetIntProperty() {
		return memory.read<int32_t>(m_addr + 4);
	}
	struct FString GetstringProperty() {
		return memory.read<struct FString>(m_addr + 8);
	}
	struct TMap<struct FString, struct FString> GetMapProperty() {
		return memory.read<struct TMap<struct FString, struct FString>>(m_addr + 24);
	}
	struct TMap<struct FString, struct FJsonTestStruct2> GetmapProperty2() {
		return memory.read<struct TMap<struct FString, struct FJsonTestStruct2>>(m_addr + 104);
	}

private:
	std::uint64_t m_addr = 0;
};class FJsonTestStruct2
{
public:
	FJsonTestStruct2(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetIntValue() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FString GetstrValue() {
		return memory.read<struct FString>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FReplyPacketRedirector
{
public:
	FReplyPacketRedirector(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<int32_t, struct FPendingPqPacket> GetPendingPackets() {
		return memory.read<struct TMap<int32_t, struct FPendingPqPacket>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FPendingPqPacket
{
public:
	FPendingPqPacket(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReqId() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct UServerRequest GetRequest() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UServerRequest(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};