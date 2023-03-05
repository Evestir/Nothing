#pragma once 
#include <BuildPatchServices_Structs.h>
 
 
 
class UBuildPatchManifest
{
public:
	UBuildPatchManifest(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetManifestFileVersion() {
		return memory.read<char>(m_addr + 40);
	}
	bool GetbIsFileData() {
		return memory.read<bool>(m_addr + 41);
	}
	uint32_t GetAppID() {
		return memory.read<uint32_t>(m_addr + 44);
	}
	struct FString GetAppName() {
		return memory.read<struct FString>(m_addr + 48);
	}
	struct FString GetBuildVersion() {
		return memory.read<struct FString>(m_addr + 64);
	}
	struct FString GetLaunchExe() {
		return memory.read<struct FString>(m_addr + 80);
	}
	struct FString GetLaunchCommand() {
		return memory.read<struct FString>(m_addr + 96);
	}
	struct TSet<struct FString> GetPrereqIds() {
		return memory.read<struct TSet<struct FString>>(m_addr + 112);
	}
	struct FString GetPrereqName() {
		return memory.read<struct FString>(m_addr + 192);
	}
	struct FString GetPrereqPath() {
		return memory.read<struct FString>(m_addr + 208);
	}
	struct FString GetPrereqArgs() {
		return memory.read<struct FString>(m_addr + 224);
	}
	struct TArray<struct FFileManifestData> GetFileManifestList() {
		return memory.read<struct TArray<struct FFileManifestData>>(m_addr + 240);
	}
	struct TArray<struct FChunkInfoData> GetChunkList() {
		return memory.read<struct TArray<struct FChunkInfoData>>(m_addr + 256);
	}
	struct TArray<struct FCustomFieldData> GetCustomFields() {
		return memory.read<struct TArray<struct FCustomFieldData>>(m_addr + 272);
	}

private:
	std::uint64_t m_addr = 0;
};


