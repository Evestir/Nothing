#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FGetVariantSetByName
{
public:
	FGetVariantSetByName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetVariantSetName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct UVariantSet GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UVariantSet(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FFunctionCaller
{
public:
	FFunctionCaller(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetFunctionName() {
		return memory.read<struct FName>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetOptions
{
public:
	FGetOptions(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct AActor> GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct TArray<struct AActor>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FVariantDependency
{
public:
	FVariantDependency(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TSoftObjectPtr<UVariantSet> GetVariantSet() {
		return memory.read<struct TSoftObjectPtr<UVariantSet>>(m_addr + 0);
	}
	struct TSoftObjectPtr<UVariant> GetVariant() {
		return memory.read<struct TSoftObjectPtr<UVariant>>(m_addr + 40);
	}
	bool GetbEnabled() {
		return memory.read<bool>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};class FCapturedPropSegment
{
public:
	FCapturedPropSegment(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetPropertyName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	int32_t GetPropertyIndex() {
		return memory.read<int32_t>(m_addr + 16);
	}
	struct FString GetComponentName() {
		return memory.read<struct FString>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetNumVariantSets
{
public:
	FGetNumVariantSets(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetVariantSet
{
public:
	FGetVariantSet(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetVariantSetIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct UVariantSet GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UVariantSet(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetLevelVariantSets
{
public:
	FGetLevelVariantSets(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbLoad() {
		return memory.read<bool>(m_addr + 0);
	}
	struct ULevelVariantSets GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct ULevelVariantSets(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPropertyTooltip
{
public:
	FGetPropertyTooltip(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetReturnValue() {
		return memory.read<struct FText>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetLevelVariantSets
{
public:
	FSetLevelVariantSets(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct ULevelVariantSets GetInVariantSets() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct ULevelVariantSets(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSwitchOnVariantByIndex
{
public:
	FSwitchOnVariantByIndex(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetVariantSetIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetVariantIndex() {
		return memory.read<int32_t>(m_addr + 4);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSwitchOnVariantByName
{
public:
	FSwitchOnVariantByName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetVariantSetName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetVariantName() {
		return memory.read<struct FString>(m_addr + 16);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetFullDisplayString
{
public:
	FGetFullDisplayString(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetReturnValue() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetNumActors
{
public:
	FGetNumActors(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FHasRecordedData
{
public:
	FHasRecordedData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSelectedOption
{
public:
	FGetSelectedOption(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSelectOption
{
public:
	FSelectOption(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetOptionIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddDependency
{
public:
	FAddDependency(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVariantDependency GetDependency() {
		return memory.read<struct FVariantDependency>(m_addr + 0);
	}
	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 88);
	}

private:
	std::uint64_t m_addr = 0;
};class FDeleteDependency
{
public:
	FDeleteDependency(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetDisplayText
{
public:
	FSetDisplayText(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetNewDisplayText() {
		return memory.read<struct FText>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetActor
{
public:
	FGetActor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetActorIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct AActor GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct AActor(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetDependency
{
public:
	FGetDependency(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FVariantDependency GetReturnValue() {
		return memory.read<struct FVariantDependency>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetThumbnailFromFile
{
public:
	FSetThumbnailFromFile(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetFilePath() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetDependents
{
public:
	FGetDependents(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct ULevelVariantSets GetLevelVariantSets() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct ULevelVariantSets(ptr_addr);
	}
	bool GetbOnlyEnabledDependencies() {
		return memory.read<bool>(m_addr + 8);
	}
	struct TArray<struct UVariant> GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct TArray<struct UVariant>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetVariant
{
public:
	FGetVariant(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetVariantIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct UVariant GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UVariant(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetDisplayText
{
public:
	FGetDisplayText(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetReturnValue() {
		return memory.read<struct FText>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetNumDependencies
{
public:
	FGetNumDependencies(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetParent
{
public:
	FGetParent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct ULevelVariantSets GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct ULevelVariantSets(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetThumbnail
{
public:
	FGetThumbnail(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTexture2D GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UTexture2D(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsActive
{
public:
	FIsActive(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetDependency
{
public:
	FSetDependency(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FVariantDependency GetDependency() {
		return memory.read<struct FVariantDependency>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetThumbnailFromCamera
{
public:
	FSetThumbnailFromCamera(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct FTransform GetCameraTransform() {
		return memory.read<struct FTransform>(m_addr + 16);
	}
	float GetFOVDegrees() {
		return memory.read<float>(m_addr + 64);
	}
	float GetMinZ() {
		return memory.read<float>(m_addr + 68);
	}
	float GetGamma() {
		return memory.read<float>(m_addr + 72);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetThumbnailFromTexture
{
public:
	FSetThumbnailFromTexture(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTexture2D GetNewThumbnail() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UTexture2D(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetNumVariants
{
public:
	FGetNumVariants(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetVariantByName
{
public:
	FGetVariantByName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetVariantName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct UVariant GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UVariant(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};