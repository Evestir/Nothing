#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FGameplayTagQuery
{
public:
	FGameplayTagQuery(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetTokenStreamVersion() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct TArray<struct FGameplayTag> GetTagDictionary() {
		return memory.read<struct TArray<struct FGameplayTag>>(m_addr + 8);
	}
	struct TArray<char> GetQueryTokenStream() {
		return memory.read<struct TArray<char>>(m_addr + 24);
	}
	struct FString GetUserDescription() {
		return memory.read<struct FString>(m_addr + 40);
	}
	struct FString GetAutoDescription() {
		return memory.read<struct FString>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FGameplayTag
{
public:
	FGameplayTag(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetTagName() {
		return memory.read<struct FName>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGameplayTagNode
{
public:
	FGameplayTagNode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FGameplayTagRedirect
{
public:
	FGameplayTagRedirect(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetOldTagName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FName GetNewTagName() {
		return memory.read<struct FName>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FRestrictedConfigInfo
{
public:
	FRestrictedConfigInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetRestrictedConfigName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct TArray<struct FString> GetOwners() {
		return memory.read<struct TArray<struct FString>>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGameplayTagCreationWidgetHelper
{
public:
	FGameplayTagCreationWidgetHelper(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FGameplayTagReferenceHelper
{
public:
	FGameplayTagReferenceHelper(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FGameplayTagSource
{
public:
	FGameplayTagSource(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetSourceName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	enum class EGameplayTagSourceType GetSourceType() {
		return memory.read<enum class EGameplayTagSourceType>(m_addr + 8);
	}
	struct UGameplayTagsList GetSourceTagList() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UGameplayTagsList(ptr_addr);
	}
	struct URestrictedGameplayTagsList GetSourceRestrictedTagList() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct URestrictedGameplayTagsList(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FMakeLiteralGameplayTag
{
public:
	FMakeLiteralGameplayTag(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGameplayTag GetValue() {
		return memory.read<struct FGameplayTag>(m_addr + 0);
	}
	struct FGameplayTag GetReturnValue() {
		return memory.read<struct FGameplayTag>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGameplayTagContainer
{
public:
	FGameplayTagContainer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FGameplayTag> GetGameplayTags() {
		return memory.read<struct TArray<struct FGameplayTag>>(m_addr + 0);
	}
	struct TArray<struct FGameplayTag> GetParentTags() {
		return memory.read<struct TArray<struct FGameplayTag>>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FMakeGameplayTagContainerFromArray
{
public:
	FMakeGameplayTagContainerFromArray(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FGameplayTag> GetGameplayTags() {
		return memory.read<struct TArray<struct FGameplayTag>>(m_addr + 0);
	}
	struct FGameplayTagContainer GetReturnValue() {
		return memory.read<struct FGameplayTagContainer>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGameplayTagTableRow
{
public:
	FGameplayTagTableRow(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetTag() {
		return memory.read<struct FName>(m_addr + 8);
	}
	struct FString GetDevComment() {
		return memory.read<struct FString>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FDoesTagAssetInterfaceHaveTag
{
public:
	FDoesTagAssetInterfaceHaveTag(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TScriptInterface<IGameplayTagAssetInterface> GetTagContainerInterface() {
		return memory.read<struct TScriptInterface<IGameplayTagAssetInterface>>(m_addr + 0);
	}
	struct FGameplayTag GetTag() {
		return memory.read<struct FGameplayTag>(m_addr + 16);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FRestrictedGameplayTagTableRow
{
public:
	FRestrictedGameplayTagTableRow(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbAllowNonRestrictedChildren() {
		return memory.read<bool>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FGameplayTagCategoryRemap
{
public:
	FGameplayTagCategoryRemap(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetBaseCategory() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct TArray<struct FString> GetRemapCategories() {
		return memory.read<struct TArray<struct FString>>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddGameplayTag
{
public:
	FAddGameplayTag(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGameplayTagContainer GetTagContainer() {
		return memory.read<struct FGameplayTagContainer>(m_addr + 0);
	}
	struct FGameplayTag GetTag() {
		return memory.read<struct FGameplayTag>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FBreakGameplayTagContainer
{
public:
	FBreakGameplayTagContainer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGameplayTagContainer GetGameplayTagContainer() {
		return memory.read<struct FGameplayTagContainer>(m_addr + 0);
	}
	struct TArray<struct FGameplayTag> GetGameplayTags() {
		return memory.read<struct TArray<struct FGameplayTag>>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FAppendGameplayTagContainers
{
public:
	FAppendGameplayTagContainers(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGameplayTagContainer GetInOutTagContainer() {
		return memory.read<struct FGameplayTagContainer>(m_addr + 0);
	}
	struct FGameplayTagContainer GetInTagContainer() {
		return memory.read<struct FGameplayTagContainer>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FDoesContainerMatchTagQuery
{
public:
	FDoesContainerMatchTagQuery(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGameplayTagContainer GetTagContainer() {
		return memory.read<struct FGameplayTagContainer>(m_addr + 0);
	}
	struct FGameplayTagQuery GetTagQuery() {
		return memory.read<struct FGameplayTagQuery>(m_addr + 32);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 104);
	}

private:
	std::uint64_t m_addr = 0;
};class FMatchesTag
{
public:
	FMatchesTag(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGameplayTag GetTagOne() {
		return memory.read<struct FGameplayTag>(m_addr + 0);
	}
	struct FGameplayTag GetTagTwo() {
		return memory.read<struct FGameplayTag>(m_addr + 8);
	}
	bool GetbExactMatch() {
		return memory.read<bool>(m_addr + 16);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 17);
	}

private:
	std::uint64_t m_addr = 0;
};class FEqualEqual_GameplayTag
{
public:
	FEqualEqual_GameplayTag(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGameplayTag GetA() {
		return memory.read<struct FGameplayTag>(m_addr + 0);
	}
	struct FGameplayTag GetB() {
		return memory.read<struct FGameplayTag>(m_addr + 8);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FNotEqual_GameplayTag
{
public:
	FNotEqual_GameplayTag(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGameplayTag GetA() {
		return memory.read<struct FGameplayTag>(m_addr + 0);
	}
	struct FGameplayTag GetB() {
		return memory.read<struct FGameplayTag>(m_addr + 8);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FEqualEqual_GameplayTagContainer
{
public:
	FEqualEqual_GameplayTagContainer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGameplayTagContainer GetA() {
		return memory.read<struct FGameplayTagContainer>(m_addr + 0);
	}
	struct FGameplayTagContainer GetB() {
		return memory.read<struct FGameplayTagContainer>(m_addr + 32);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetDebugStringFromGameplayTagContainer
{
public:
	FGetDebugStringFromGameplayTagContainer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGameplayTagContainer GetTagContainer() {
		return memory.read<struct FGameplayTagContainer>(m_addr + 0);
	}
	struct FString GetReturnValue() {
		return memory.read<struct FString>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAllActorsOfClassMatchingTagQuery
{
public:
	FGetAllActorsOfClassMatchingTagQuery(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	AActor GetActorClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return AActor(ptr_addr);
	}
	struct FGameplayTagQuery GetGameplayTagQuery() {
		return memory.read<struct FGameplayTagQuery>(m_addr + 16);
	}
	struct TArray<struct AActor> GetOutActors() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 88);
		return struct TArray<struct AActor>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetDebugStringFromGameplayTag
{
public:
	FGetDebugStringFromGameplayTag(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGameplayTag GetGameplayTag() {
		return memory.read<struct FGameplayTag>(m_addr + 0);
	}
	struct FString GetReturnValue() {
		return memory.read<struct FString>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetNumGameplayTagsInContainer
{
public:
	FGetNumGameplayTagsInContainer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGameplayTagContainer GetTagContainer() {
		return memory.read<struct FGameplayTagContainer>(m_addr + 0);
	}
	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FHasAnyTags
{
public:
	FHasAnyTags(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGameplayTagContainer GetTagContainer() {
		return memory.read<struct FGameplayTagContainer>(m_addr + 0);
	}
	struct FGameplayTagContainer GetOtherContainer() {
		return memory.read<struct FGameplayTagContainer>(m_addr + 32);
	}
	bool GetbExactMatch() {
		return memory.read<bool>(m_addr + 64);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 65);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTagName
{
public:
	FGetTagName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGameplayTag GetGameplayTag() {
		return memory.read<struct FGameplayTag>(m_addr + 0);
	}
	struct FName GetReturnValue() {
		return memory.read<struct FName>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FHasAllMatchingGameplayTags
{
public:
	FHasAllMatchingGameplayTags(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGameplayTagContainer GetTagContainer() {
		return memory.read<struct FGameplayTagContainer>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FHasAllTags
{
public:
	FHasAllTags(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGameplayTagContainer GetTagContainer() {
		return memory.read<struct FGameplayTagContainer>(m_addr + 0);
	}
	struct FGameplayTagContainer GetOtherContainer() {
		return memory.read<struct FGameplayTagContainer>(m_addr + 32);
	}
	bool GetbExactMatch() {
		return memory.read<bool>(m_addr + 64);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 65);
	}

private:
	std::uint64_t m_addr = 0;
};class FHasAnyMatchingGameplayTags
{
public:
	FHasAnyMatchingGameplayTags(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGameplayTagContainer GetTagContainer() {
		return memory.read<struct FGameplayTagContainer>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FHasTag
{
public:
	FHasTag(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGameplayTagContainer GetTagContainer() {
		return memory.read<struct FGameplayTagContainer>(m_addr + 0);
	}
	struct FGameplayTag GetTag() {
		return memory.read<struct FGameplayTag>(m_addr + 32);
	}
	bool GetbExactMatch() {
		return memory.read<bool>(m_addr + 40);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 41);
	}

private:
	std::uint64_t m_addr = 0;
};class FMakeGameplayTagQuery
{
public:
	FMakeGameplayTagQuery(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGameplayTagQuery GetTagQuery() {
		return memory.read<struct FGameplayTagQuery>(m_addr + 0);
	}
	struct FGameplayTagQuery GetReturnValue() {
		return memory.read<struct FGameplayTagQuery>(m_addr + 72);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsGameplayTagValid
{
public:
	FIsGameplayTagValid(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGameplayTag GetGameplayTag() {
		return memory.read<struct FGameplayTag>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsTagQueryEmpty
{
public:
	FIsTagQueryEmpty(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGameplayTagQuery GetTagQuery() {
		return memory.read<struct FGameplayTagQuery>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 72);
	}

private:
	std::uint64_t m_addr = 0;
};class FMakeGameplayTagContainerFromTag
{
public:
	FMakeGameplayTagContainerFromTag(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGameplayTag GetSingleTag() {
		return memory.read<struct FGameplayTag>(m_addr + 0);
	}
	struct FGameplayTagContainer GetReturnValue() {
		return memory.read<struct FGameplayTagContainer>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetOwnedGameplayTags
{
public:
	FGetOwnedGameplayTags(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGameplayTagContainer GetTagContainer() {
		return memory.read<struct FGameplayTagContainer>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMakeLiteralGameplayTagContainer
{
public:
	FMakeLiteralGameplayTagContainer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGameplayTagContainer GetValue() {
		return memory.read<struct FGameplayTagContainer>(m_addr + 0);
	}
	struct FGameplayTagContainer GetReturnValue() {
		return memory.read<struct FGameplayTagContainer>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FMatchesAnyTags
{
public:
	FMatchesAnyTags(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGameplayTag GetTagOne() {
		return memory.read<struct FGameplayTag>(m_addr + 0);
	}
	struct FGameplayTagContainer GetOtherContainer() {
		return memory.read<struct FGameplayTagContainer>(m_addr + 8);
	}
	bool GetbExactMatch() {
		return memory.read<bool>(m_addr + 40);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 41);
	}

private:
	std::uint64_t m_addr = 0;
};class FNotEqual_GameplayTagContainer
{
public:
	FNotEqual_GameplayTagContainer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGameplayTagContainer GetA() {
		return memory.read<struct FGameplayTagContainer>(m_addr + 0);
	}
	struct FGameplayTagContainer GetB() {
		return memory.read<struct FGameplayTagContainer>(m_addr + 32);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};class FNotEqual_TagContainerTagContainer
{
public:
	FNotEqual_TagContainerTagContainer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGameplayTagContainer GetA() {
		return memory.read<struct FGameplayTagContainer>(m_addr + 0);
	}
	struct FString GetB() {
		return memory.read<struct FString>(m_addr + 32);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FNotEqual_TagTag
{
public:
	FNotEqual_TagTag(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGameplayTag GetA() {
		return memory.read<struct FGameplayTag>(m_addr + 0);
	}
	struct FString GetB() {
		return memory.read<struct FString>(m_addr + 8);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FRemoveGameplayTag
{
public:
	FRemoveGameplayTag(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGameplayTagContainer GetTagContainer() {
		return memory.read<struct FGameplayTagContainer>(m_addr + 0);
	}
	struct FGameplayTag GetTag() {
		return memory.read<struct FGameplayTag>(m_addr + 32);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FHasMatchingGameplayTag
{
public:
	FHasMatchingGameplayTag(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGameplayTag GetTagToCheck() {
		return memory.read<struct FGameplayTag>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};