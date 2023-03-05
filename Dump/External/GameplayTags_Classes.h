#pragma once 
#include <GameplayTags_Structs.h>
 
 
 
class UEditableGameplayTagQueryExpression_AllTagsMatch
{
public:
	UEditableGameplayTagQueryExpression_AllTagsMatch(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGameplayTagContainer GetTags() {
		return memory.read<struct FGameplayTagContainer>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};


class UEditableGameplayTagQueryExpression_NoExprMatch
{
public:
	UEditableGameplayTagQueryExpression_NoExprMatch(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UEditableGameplayTagQueryExpression> GetExpressions() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct TArray<struct UEditableGameplayTagQueryExpression>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBlueprintGameplayTagLibrary
{
public:
	UBlueprintGameplayTagLibrary(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UGameplayTagAssetInterface
{
public:
	UGameplayTagAssetInterface(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UGameplayTagsManager
{
public:
	UGameplayTagsManager(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TMap<struct FName, struct FGameplayTagSource> GetTagSources() {
		return memory.read<struct TMap<struct FName, struct FGameplayTagSource>>(m_addr + 352);
	}
	struct TArray<struct UDataTable> GetGameplayTagTables() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 560);
		return struct TArray<struct UDataTable>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UEditableGameplayTagQueryExpression_AnyTagsMatch
{
public:
	UEditableGameplayTagQueryExpression_AnyTagsMatch(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGameplayTagContainer GetTags() {
		return memory.read<struct FGameplayTagContainer>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};


class UEditableGameplayTagQuery
{
public:
	UEditableGameplayTagQuery(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetUserDescription() {
		return memory.read<struct FString>(m_addr + 40);
	}
	struct UEditableGameplayTagQueryExpression GetRootExpression() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 72);
		return struct UEditableGameplayTagQueryExpression(ptr_addr);
	}
	struct FGameplayTagQuery GetTagQueryExportText_Helper() {
		return memory.read<struct FGameplayTagQuery>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};


class UEditableGameplayTagQueryExpression
{
public:
	UEditableGameplayTagQueryExpression(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UGameplayTagsList
{
public:
	UGameplayTagsList(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetConfigFileName() {
		return memory.read<struct FString>(m_addr + 40);
	}
	struct TArray<struct FGameplayTagTableRow> GetGameplayTagList() {
		return memory.read<struct TArray<struct FGameplayTagTableRow>>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};


class UEditableGameplayTagQueryExpression_NoTagsMatch
{
public:
	UEditableGameplayTagQueryExpression_NoTagsMatch(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGameplayTagContainer GetTags() {
		return memory.read<struct FGameplayTagContainer>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};


class UEditableGameplayTagQueryExpression_AnyExprMatch
{
public:
	UEditableGameplayTagQueryExpression_AnyExprMatch(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UEditableGameplayTagQueryExpression> GetExpressions() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct TArray<struct UEditableGameplayTagQueryExpression>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UEditableGameplayTagQueryExpression_AllExprMatch
{
public:
	UEditableGameplayTagQueryExpression_AllExprMatch(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UEditableGameplayTagQueryExpression> GetExpressions() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct TArray<struct UEditableGameplayTagQueryExpression>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class URestrictedGameplayTagsList
{
public:
	URestrictedGameplayTagsList(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetConfigFileName() {
		return memory.read<struct FString>(m_addr + 40);
	}
	struct TArray<struct FRestrictedGameplayTagTableRow> GetRestrictedGameplayTagList() {
		return memory.read<struct TArray<struct FRestrictedGameplayTagTableRow>>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};


class UGameplayTagsSettings
{
public:
	UGameplayTagsSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetImportTagsFromConfig() {
		return memory.read<bool>(m_addr + 72);
	}
	bool GetWarnOnInvalidTags() {
		return memory.read<bool>(m_addr + 73);
	}
	bool GetClearInvalidTags() {
		return memory.read<bool>(m_addr + 74);
	}
	bool GetFastReplication() {
		return memory.read<bool>(m_addr + 75);
	}
	struct FString GetInvalidTagCharacters() {
		return memory.read<struct FString>(m_addr + 80);
	}
	struct TArray<struct FGameplayTagCategoryRemap> GetCategoryRemapping() {
		return memory.read<struct TArray<struct FGameplayTagCategoryRemap>>(m_addr + 96);
	}
	struct TArray<struct FSoftObjectPath> GetGameplayTagTableList() {
		return memory.read<struct TArray<struct FSoftObjectPath>>(m_addr + 112);
	}
	struct TArray<struct FGameplayTagRedirect> GetGameplayTagRedirects() {
		return memory.read<struct TArray<struct FGameplayTagRedirect>>(m_addr + 128);
	}
	struct TArray<struct FName> GetCommonlyReplicatedTags() {
		return memory.read<struct TArray<struct FName>>(m_addr + 144);
	}
	int32_t GetNumBitsForContainerSize() {
		return memory.read<int32_t>(m_addr + 160);
	}
	int32_t GetNetIndexFirstBitSegment() {
		return memory.read<int32_t>(m_addr + 164);
	}
	struct TArray<struct FRestrictedConfigInfo> GetRestrictedConfigFiles() {
		return memory.read<struct TArray<struct FRestrictedConfigInfo>>(m_addr + 168);
	}

private:
	std::uint64_t m_addr = 0;
};


class UGameplayTagsDeveloperSettings
{
public:
	UGameplayTagsDeveloperSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetDeveloperConfigName() {
		return memory.read<struct FString>(m_addr + 56);
	}
	struct FName GetFavoriteTagSource() {
		return memory.read<struct FName>(m_addr + 72);
	}

private:
	std::uint64_t m_addr = 0;
};


