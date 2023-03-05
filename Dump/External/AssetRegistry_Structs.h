#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FGetExportTextName
{
public:
	FGetExportTextName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAssetData GetInAssetData() {
		return memory.read<struct FAssetData>(m_addr + 0);
	}
	struct FString GetReturnValue() {
		return memory.read<struct FString>(m_addr + 96);
	}

private:
	std::uint64_t m_addr = 0;
};class FAssetRegistryDependencyOptions
{
public:
	FAssetRegistryDependencyOptions(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbIncludeSoftPackageReferences() {
		return memory.read<bool>(m_addr + 0);
	}
	bool GetbIncludeHardPackageReferences() {
		return memory.read<bool>(m_addr + 1);
	}
	bool GetbIncludeSearchableNames() {
		return memory.read<bool>(m_addr + 2);
	}
	bool GetbIncludeSoftManagementReferences() {
		return memory.read<bool>(m_addr + 3);
	}
	bool GetbIncludeHardManagementReferences() {
		return memory.read<bool>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FTagAndValue
{
public:
	FTagAndValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetTag() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FString GetValue() {
		return memory.read<struct FString>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FCreateAssetData
{
public:
	FCreateAssetData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetInAsset() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	bool GetbAllowBlueprintClass() {
		return memory.read<bool>(m_addr + 8);
	}
	struct FAssetData GetReturnValue() {
		return memory.read<struct FAssetData>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetFullName
{
public:
	FGetFullName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAssetData GetInAssetData() {
		return memory.read<struct FAssetData>(m_addr + 0);
	}
	struct FString GetReturnValue() {
		return memory.read<struct FString>(m_addr + 96);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetClass
{
public:
	FGetClass(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAssetData GetInAssetData() {
		return memory.read<struct FAssetData>(m_addr + 0);
	}
	UObject GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 96);
		return UObject(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAsset
{
public:
	FGetAsset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAssetData GetInAssetData() {
		return memory.read<struct FAssetData>(m_addr + 0);
	}
	struct UObject GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 96);
		return struct UObject(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAssetRegistry
{
public:
	FGetAssetRegistry(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TScriptInterface<IAssetRegistry> GetReturnValue() {
		return memory.read<struct TScriptInterface<IAssetRegistry>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTagValue
{
public:
	FGetTagValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAssetData GetInAssetData() {
		return memory.read<struct FAssetData>(m_addr + 0);
	}
	struct FName GetInTagName() {
		return memory.read<struct FName>(m_addr + 96);
	}
	struct FString GetOutTagValue() {
		return memory.read<struct FString>(m_addr + 104);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 120);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsAssetLoaded
{
public:
	FIsAssetLoaded(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAssetData GetInAssetData() {
		return memory.read<struct FAssetData>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 96);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAllCachedPaths
{
public:
	FGetAllCachedPaths(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FString> GetOutPathList() {
		return memory.read<struct TArray<struct FString>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsRedirector
{
public:
	FIsRedirector(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAssetData GetInAssetData() {
		return memory.read<struct FAssetData>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 96);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsUAsset
{
public:
	FIsUAsset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAssetData GetInAssetData() {
		return memory.read<struct FAssetData>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 96);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsValid
{
public:
	FIsValid(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAssetData GetInAssetData() {
		return memory.read<struct FAssetData>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 96);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAllAssets
{
public:
	FGetAllAssets(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FAssetData> GetOutAssetData() {
		return memory.read<struct TArray<struct FAssetData>>(m_addr + 0);
	}
	bool GetbIncludeOnlyOnDiskAssets() {
		return memory.read<bool>(m_addr + 16);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 17);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetFilterTagsAndValues
{
public:
	FSetFilterTagsAndValues(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FARFilter GetInFilter() {
		return memory.read<struct FARFilter>(m_addr + 0);
	}
	struct TArray<struct FTagAndValue> GetInTagsAndValues() {
		return memory.read<struct TArray<struct FTagAndValue>>(m_addr + 240);
	}
	struct FARFilter GetReturnValue() {
		return memory.read<struct FARFilter>(m_addr + 256);
	}

private:
	std::uint64_t m_addr = 0;
};class FToSoftObjectPath
{
public:
	FToSoftObjectPath(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAssetData GetInAssetData() {
		return memory.read<struct FAssetData>(m_addr + 0);
	}
	struct FSoftObjectPath GetReturnValue() {
		return memory.read<struct FSoftObjectPath>(m_addr + 96);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAssetByObjectPath
{
public:
	FGetAssetByObjectPath(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetObjectPath() {
		return memory.read<struct FName>(m_addr + 0);
	}
	bool GetbIncludeOnlyOnDiskAssets() {
		return memory.read<bool>(m_addr + 8);
	}
	struct FAssetData GetReturnValue() {
		return memory.read<struct FAssetData>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FUseFilterToExcludeAssets
{
public:
	FUseFilterToExcludeAssets(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FAssetData> GetAssetDataList() {
		return memory.read<struct TArray<struct FAssetData>>(m_addr + 0);
	}
	struct FARFilter GetFilter() {
		return memory.read<struct FARFilter>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAssetsByPackageName
{
public:
	FGetAssetsByPackageName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetPackageName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct TArray<struct FAssetData> GetOutAssetData() {
		return memory.read<struct TArray<struct FAssetData>>(m_addr + 8);
	}
	bool GetbIncludeOnlyOnDiskAssets() {
		return memory.read<bool>(m_addr + 24);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 25);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAssets
{
public:
	FGetAssets(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FARFilter GetFilter() {
		return memory.read<struct FARFilter>(m_addr + 0);
	}
	struct TArray<struct FAssetData> GetOutAssetData() {
		return memory.read<struct TArray<struct FAssetData>>(m_addr + 240);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 256);
	}

private:
	std::uint64_t m_addr = 0;
};class FScanPathsSynchronous
{
public:
	FScanPathsSynchronous(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FString> GetInPaths() {
		return memory.read<struct TArray<struct FString>>(m_addr + 0);
	}
	bool GetbForceRescan() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAssetsByClass
{
public:
	FGetAssetsByClass(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetClassName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct TArray<struct FAssetData> GetOutAssetData() {
		return memory.read<struct TArray<struct FAssetData>>(m_addr + 8);
	}
	bool GetbSearchSubClasses() {
		return memory.read<bool>(m_addr + 24);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 25);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAssetsByPath
{
public:
	FGetAssetsByPath(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetPackagePath() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct TArray<struct FAssetData> GetOutAssetData() {
		return memory.read<struct TArray<struct FAssetData>>(m_addr + 8);
	}
	bool GetbRecursive() {
		return memory.read<bool>(m_addr + 24);
	}
	bool GetbIncludeOnlyOnDiskAssets() {
		return memory.read<bool>(m_addr + 25);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 26);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSubPaths
{
public:
	FGetSubPaths(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetInBasePath() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct TArray<struct FString> GetOutPathList() {
		return memory.read<struct TArray<struct FString>>(m_addr + 16);
	}
	bool GetbInRecurse() {
		return memory.read<bool>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FHasAssets
{
public:
	FHasAssets(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetPackagePath() {
		return memory.read<struct FName>(m_addr + 0);
	}
	bool GetbRecursive() {
		return memory.read<bool>(m_addr + 8);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 9);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsLoadingAssets
{
public:
	FIsLoadingAssets(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FK2_GetDependencies
{
public:
	FK2_GetDependencies(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetPackageName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FAssetRegistryDependencyOptions GetDependencyOptions() {
		return memory.read<struct FAssetRegistryDependencyOptions>(m_addr + 8);
	}
	struct TArray<struct FName> GetOutDependencies() {
		return memory.read<struct TArray<struct FName>>(m_addr + 16);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FK2_GetReferencers
{
public:
	FK2_GetReferencers(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetPackageName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FAssetRegistryDependencyOptions GetReferenceOptions() {
		return memory.read<struct FAssetRegistryDependencyOptions>(m_addr + 8);
	}
	struct TArray<struct FName> GetOutReferencers() {
		return memory.read<struct TArray<struct FName>>(m_addr + 16);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FPrioritizeSearchPath
{
public:
	FPrioritizeSearchPath(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetPathToPrioritize() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FRunAssetsThroughFilter
{
public:
	FRunAssetsThroughFilter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FAssetData> GetAssetDataList() {
		return memory.read<struct TArray<struct FAssetData>>(m_addr + 0);
	}
	struct FARFilter GetFilter() {
		return memory.read<struct FARFilter>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FScanFilesSynchronous
{
public:
	FScanFilesSynchronous(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FString> GetInFilePaths() {
		return memory.read<struct TArray<struct FString>>(m_addr + 0);
	}
	bool GetbForceRescan() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FScanModifiedAssetFiles
{
public:
	FScanModifiedAssetFiles(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FString> GetInFilePaths() {
		return memory.read<struct TArray<struct FString>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSearchAllAssets
{
public:
	FSearchAllAssets(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbSynchronousSearch() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};