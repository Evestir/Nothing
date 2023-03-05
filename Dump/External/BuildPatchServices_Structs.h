#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FFileManifestData
{
public:
	FFileManifestData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetFilename() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FSHAHashData GetFileHash() {
		return memory.read<struct FSHAHashData>(m_addr + 16);
	}
	struct TArray<struct FChunkPartData> GetFileChunkParts() {
		return memory.read<struct TArray<struct FChunkPartData>>(m_addr + 40);
	}
	struct TArray<struct FString> GetInstallTags() {
		return memory.read<struct TArray<struct FString>>(m_addr + 56);
	}
	bool GetbIsUnixExecutable() {
		return memory.read<bool>(m_addr + 72);
	}
	struct FString GetSymlinkTarget() {
		return memory.read<struct FString>(m_addr + 80);
	}
	bool GetbIsReadOnly() {
		return memory.read<bool>(m_addr + 96);
	}
	bool GetbIsCompressed() {
		return memory.read<bool>(m_addr + 97);
	}

private:
	std::uint64_t m_addr = 0;
};class FChunkPartData
{
public:
	FChunkPartData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGuid GetGuid() {
		return memory.read<struct FGuid>(m_addr + 0);
	}
	uint32_t GetOffset() {
		return memory.read<uint32_t>(m_addr + 16);
	}
	uint32_t GetSize() {
		return memory.read<uint32_t>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FSHAHashData
{
public:
	FSHAHashData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetHash[14]() {
		return memory.read<char>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FCustomFieldData
{
public:
	FCustomFieldData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetKey() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetValue() {
		return memory.read<struct FString>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FChunkInfoData
{
public:
	FChunkInfoData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGuid GetGuid() {
		return memory.read<struct FGuid>(m_addr + 0);
	}
	uint64_t GetHash() {
		return memory.read<uint64_t>(m_addr + 16);
	}
	struct FSHAHashData GetShaHash() {
		return memory.read<struct FSHAHashData>(m_addr + 24);
	}
	int64_t GetFileSize() {
		return memory.read<int64_t>(m_addr + 48);
	}
	char GetGroupNumber() {
		return memory.read<char>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};