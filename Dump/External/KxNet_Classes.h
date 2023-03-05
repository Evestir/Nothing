#pragma once 
#include <KxNet_Structs.h>
 
 
 
class UServerRequester
{
public:
	UServerRequester(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UHttpServerRequester
{
public:
	UHttpServerRequester(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UHttpRequester GetHttpRequester() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 64);
		return struct UHttpRequester(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UServerConnection
{
public:
	UServerConnection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FReplyPacketRedirector GetRequests() {
		return memory.read<struct FReplyPacketRedirector>(m_addr + 96);
	}

private:
	std::uint64_t m_addr = 0;
};


class UWebSocketServerConnection
{
public:
	UWebSocketServerConnection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UGfsServerConnection
{
public:
	UGfsServerConnection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UJsonTest
{
public:
	UJsonTest(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FJsonTestStruct GetStructProperty() {
		return memory.read<struct FJsonTestStruct>(m_addr + 40);
	}
	struct UJsonTest GetObjectProperty() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 224);
		return struct UJsonTest(ptr_addr);
	}
	struct TArray<struct FString> GetArrayProperty() {
		return memory.read<struct TArray<struct FString>>(m_addr + 232);
	}

private:
	std::uint64_t m_addr = 0;
};


class UHttpRequester
{
public:
	UHttpRequester(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class ULocalFileCache
{
public:
	ULocalFileCache(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UKxPacket
{
public:
	UKxPacket(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UClientPacket
{
public:
	UClientPacket(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UPqPacket
{
public:
	UPqPacket(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReqId() {
		return memory.read<int32_t>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};


class UServerPacket
{
public:
	UServerPacket(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UPcPacket
{
public:
	UPcPacket(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UPrPacket
{
public:
	UPrPacket(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReqId() {
		return memory.read<int32_t>(m_addr + 48);
	}
	struct FPrResult GetResult() {
		return memory.read<struct FPrResult>(m_addr + 52);
	}
	struct FString Getdesc() {
		return memory.read<struct FString>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};


class UPcEcho
{
public:
	UPcEcho(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UPqEcho
{
public:
	UPqEcho(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UPrEcho
{
public:
	UPrEcho(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UPcContinuation
{
public:
	UPcContinuation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetToken() {
		return memory.read<struct FString>(m_addr + 48);
	}
	int64_t GetpacketId() {
		return memory.read<int64_t>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UServerRequest
{
public:
	UServerRequest(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPqPacket GetRequestPacket() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct UPqPacket(ptr_addr);
	}
	struct UPrPacket GetReplyPacket() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UPrPacket(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UReconnectableWebSocketServerConnection
{
public:
	UReconnectableWebSocketServerConnection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWebSocketServerConnection GetWebSocket() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 232);
		return struct UWebSocketServerConnection(ptr_addr);
	}
	struct UWebSocketServerConnection GetConnectingWebSocket() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 240);
		return struct UWebSocketServerConnection(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UTcpServerConnection
{
public:
	UTcpServerConnection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


