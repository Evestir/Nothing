#pragma once 
#include <GameplayTags_Structs.h>
 
 
 
//Class GameplayTags.EditableGameplayTagQueryExpression_AllTagsMatch Size 72
// Inherited 40 bytes 
class UEditableGameplayTagQueryExpression_AllTagsMatch : public UEditableGameplayTagQueryExpression
{

 public: 
	struct FGameplayTagContainer Tags;  // Offset: 40 Size: 32



 // Functions 
 public:
}; 
 
 


//Class GameplayTags.EditableGameplayTagQueryExpression_NoExprMatch Size 56
// Inherited 40 bytes 
class UEditableGameplayTagQueryExpression_NoExprMatch : public UEditableGameplayTagQueryExpression
{

 public: 
	struct TArray<struct UEditableGameplayTagQueryExpression*> Expressions;  // Offset: 40 Size: 16



 // Functions 
 public:
}; 
 
 


//Class GameplayTags.BlueprintGameplayTagLibrary Size 40
// Inherited 40 bytes 
class UBlueprintGameplayTagLibrary : public UBlueprintFunctionLibrary
{

 public: 



 // Functions 
 public:
	bool RemoveGameplayTag(struct FGameplayTagContainer& TagContainer, struct FGameplayTag Tag); // Function GameplayTags.BlueprintGameplayTagLibrary.RemoveGameplayTag
	bool NotEqual_TagTag(struct FGameplayTag A, struct FString B); // Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagTag
	bool NotEqual_TagContainerTagContainer(struct FGameplayTagContainer A, struct FString B); // Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagContainerTagContainer
	bool NotEqual_GameplayTagContainer(struct FGameplayTagContainer& A, struct FGameplayTagContainer& B); // Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTagContainer
	bool NotEqual_GameplayTag(struct FGameplayTag A, struct FGameplayTag B); // Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTag
	bool MatchesTag(struct FGameplayTag TagOne, struct FGameplayTag TagTwo, bool bExactMatch); // Function GameplayTags.BlueprintGameplayTagLibrary.MatchesTag
	bool MatchesAnyTags(struct FGameplayTag TagOne, struct FGameplayTagContainer& OtherContainer, bool bExactMatch); // Function GameplayTags.BlueprintGameplayTagLibrary.MatchesAnyTags
	struct FGameplayTagContainer MakeLiteralGameplayTagContainer(struct FGameplayTagContainer Value); // Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTagContainer
	struct FGameplayTag MakeLiteralGameplayTag(struct FGameplayTag Value); // Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTag
	struct FGameplayTagQuery MakeGameplayTagQuery(struct FGameplayTagQuery TagQuery); // Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagQuery
	struct FGameplayTagContainer MakeGameplayTagContainerFromTag(struct FGameplayTag SingleTag); // Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromTag
	struct FGameplayTagContainer MakeGameplayTagContainerFromArray(struct TArray<struct FGameplayTag>& GameplayTags); // Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromArray
	bool IsTagQueryEmpty(struct FGameplayTagQuery& TagQuery); // Function GameplayTags.BlueprintGameplayTagLibrary.IsTagQueryEmpty
	bool IsGameplayTagValid(struct FGameplayTag GameplayTag); // Function GameplayTags.BlueprintGameplayTagLibrary.IsGameplayTagValid
	bool HasTag(struct FGameplayTagContainer& TagContainer, struct FGameplayTag Tag, bool bExactMatch); // Function GameplayTags.BlueprintGameplayTagLibrary.HasTag
	bool HasAnyTags(struct FGameplayTagContainer& TagContainer, struct FGameplayTagContainer& OtherContainer, bool bExactMatch); // Function GameplayTags.BlueprintGameplayTagLibrary.HasAnyTags
	bool HasAllTags(struct FGameplayTagContainer& TagContainer, struct FGameplayTagContainer& OtherContainer, bool bExactMatch); // Function GameplayTags.BlueprintGameplayTagLibrary.HasAllTags
	bool HasAllMatchingGameplayTags(struct TScriptInterface<IGameplayTagAssetInterface> TagContainerInterface, struct FGameplayTagContainer& OtherContainer); // Function GameplayTags.BlueprintGameplayTagLibrary.HasAllMatchingGameplayTags
	struct FName GetTagName(struct FGameplayTag& GameplayTag); // Function GameplayTags.BlueprintGameplayTagLibrary.GetTagName
	int32_t GetNumGameplayTagsInContainer(struct FGameplayTagContainer& TagContainer); // Function GameplayTags.BlueprintGameplayTagLibrary.GetNumGameplayTagsInContainer
	struct FString GetDebugStringFromGameplayTagContainer(struct FGameplayTagContainer& TagContainer); // Function GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTagContainer
	struct FString GetDebugStringFromGameplayTag(struct FGameplayTag GameplayTag); // Function GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTag
	void GetAllActorsOfClassMatchingTagQuery(struct UObject* WorldContextObject, AActor* ActorClass, struct FGameplayTagQuery& GameplayTagQuery, struct TArray<struct AActor*>& OutActors); // Function GameplayTags.BlueprintGameplayTagLibrary.GetAllActorsOfClassMatchingTagQuery
	bool EqualEqual_GameplayTagContainer(struct FGameplayTagContainer& A, struct FGameplayTagContainer& B); // Function GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTagContainer
	bool EqualEqual_GameplayTag(struct FGameplayTag A, struct FGameplayTag B); // Function GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTag
	bool DoesTagAssetInterfaceHaveTag(struct TScriptInterface<IGameplayTagAssetInterface> TagContainerInterface, struct FGameplayTag Tag); // Function GameplayTags.BlueprintGameplayTagLibrary.DoesTagAssetInterfaceHaveTag
	bool DoesContainerMatchTagQuery(struct FGameplayTagContainer& TagContainer, struct FGameplayTagQuery& TagQuery); // Function GameplayTags.BlueprintGameplayTagLibrary.DoesContainerMatchTagQuery
	void BreakGameplayTagContainer(struct FGameplayTagContainer& GameplayTagContainer, struct TArray<struct FGameplayTag>& GameplayTags); // Function GameplayTags.BlueprintGameplayTagLibrary.BreakGameplayTagContainer
	void AppendGameplayTagContainers(struct FGameplayTagContainer& InOutTagContainer, struct FGameplayTagContainer& InTagContainer); // Function GameplayTags.BlueprintGameplayTagLibrary.AppendGameplayTagContainers
	void AddGameplayTag(struct FGameplayTagContainer& TagContainer, struct FGameplayTag Tag); // Function GameplayTags.BlueprintGameplayTagLibrary.AddGameplayTag
}; 
 
 


//Class GameplayTags.GameplayTagAssetInterface Size 40
// Inherited 40 bytes 
class UGameplayTagAssetInterface : public UInterface
{

 public: 



 // Functions 
 public:
	bool HasMatchingGameplayTag(struct FGameplayTag TagToCheck); // Function GameplayTags.GameplayTagAssetInterface.HasMatchingGameplayTag
	bool HasAnyMatchingGameplayTags(struct FGameplayTagContainer& TagContainer); // Function GameplayTags.GameplayTagAssetInterface.HasAnyMatchingGameplayTags
	bool HasAllMatchingGameplayTags(struct FGameplayTagContainer& TagContainer); // Function GameplayTags.GameplayTagAssetInterface.HasAllMatchingGameplayTags
	void GetOwnedGameplayTags(struct FGameplayTagContainer& TagContainer); // Function GameplayTags.GameplayTagAssetInterface.GetOwnedGameplayTags
}; 
 
 


//Class GameplayTags.GameplayTagsManager Size 576
// Inherited 40 bytes 
class UGameplayTagsManager : public UObject
{

 public: 
	char pad_40[312];  // Offset: 40 Size: 312
	struct TMap<struct FName, struct FGameplayTagSource> TagSources;  // Offset: 352 Size: 80
	char pad_432[128];  // Offset: 432 Size: 128
	struct TArray<struct UDataTable*> GameplayTagTables;  // Offset: 560 Size: 16



 // Functions 
 public:
}; 
 
 


//Class GameplayTags.EditableGameplayTagQueryExpression_AnyTagsMatch Size 72
// Inherited 40 bytes 
class UEditableGameplayTagQueryExpression_AnyTagsMatch : public UEditableGameplayTagQueryExpression
{

 public: 
	struct FGameplayTagContainer Tags;  // Offset: 40 Size: 32



 // Functions 
 public:
}; 
 
 


//Class GameplayTags.EditableGameplayTagQuery Size 152
// Inherited 40 bytes 
class UEditableGameplayTagQuery : public UObject
{

 public: 
	struct FString UserDescription;  // Offset: 40 Size: 16
	char pad_56[16];  // Offset: 56 Size: 16
	struct UEditableGameplayTagQueryExpression* RootExpression;  // Offset: 72 Size: 8
	struct FGameplayTagQuery TagQueryExportText_Helper;  // Offset: 80 Size: 72



 // Functions 
 public:
}; 
 
 


//Class GameplayTags.EditableGameplayTagQueryExpression Size 40
// Inherited 40 bytes 
class UEditableGameplayTagQueryExpression : public UObject
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class GameplayTags.GameplayTagsList Size 72
// Inherited 40 bytes 
class UGameplayTagsList : public UObject
{

 public: 
	struct FString ConfigFileName;  // Offset: 40 Size: 16
	struct TArray<struct FGameplayTagTableRow> GameplayTagList;  // Offset: 56 Size: 16



 // Functions 
 public:
}; 
 
 


//Class GameplayTags.EditableGameplayTagQueryExpression_NoTagsMatch Size 72
// Inherited 40 bytes 
class UEditableGameplayTagQueryExpression_NoTagsMatch : public UEditableGameplayTagQueryExpression
{

 public: 
	struct FGameplayTagContainer Tags;  // Offset: 40 Size: 32



 // Functions 
 public:
}; 
 
 


//Class GameplayTags.EditableGameplayTagQueryExpression_AnyExprMatch Size 56
// Inherited 40 bytes 
class UEditableGameplayTagQueryExpression_AnyExprMatch : public UEditableGameplayTagQueryExpression
{

 public: 
	struct TArray<struct UEditableGameplayTagQueryExpression*> Expressions;  // Offset: 40 Size: 16



 // Functions 
 public:
}; 
 
 


//Class GameplayTags.EditableGameplayTagQueryExpression_AllExprMatch Size 56
// Inherited 40 bytes 
class UEditableGameplayTagQueryExpression_AllExprMatch : public UEditableGameplayTagQueryExpression
{

 public: 
	struct TArray<struct UEditableGameplayTagQueryExpression*> Expressions;  // Offset: 40 Size: 16



 // Functions 
 public:
}; 
 
 


//Class GameplayTags.RestrictedGameplayTagsList Size 72
// Inherited 40 bytes 
class URestrictedGameplayTagsList : public UObject
{

 public: 
	struct FString ConfigFileName;  // Offset: 40 Size: 16
	struct TArray<struct FRestrictedGameplayTagTableRow> RestrictedGameplayTagList;  // Offset: 56 Size: 16



 // Functions 
 public:
}; 
 
 


//Class GameplayTags.GameplayTagsSettings Size 184
// Inherited 72 bytes 
class UGameplayTagsSettings : public UGameplayTagsList
{

 public: 
	char pad_72_1 : 7;  // Offset: 72 Size: 1
	bool ImportTagsFromConfig : 1;  // Offset: 72 Size: 1
	char pad_73_1 : 7;  // Offset: 73 Size: 1
	bool WarnOnInvalidTags : 1;  // Offset: 73 Size: 1
	char pad_74_1 : 7;  // Offset: 74 Size: 1
	bool ClearInvalidTags : 1;  // Offset: 74 Size: 1
	char pad_75_1 : 7;  // Offset: 75 Size: 1
	bool FastReplication : 1;  // Offset: 75 Size: 1
	char pad_76[4];  // Offset: 76 Size: 4
	struct FString InvalidTagCharacters;  // Offset: 80 Size: 16
	struct TArray<struct FGameplayTagCategoryRemap> CategoryRemapping;  // Offset: 96 Size: 16
	struct TArray<struct FSoftObjectPath> GameplayTagTableList;  // Offset: 112 Size: 16
	struct TArray<struct FGameplayTagRedirect> GameplayTagRedirects;  // Offset: 128 Size: 16
	struct TArray<struct FName> CommonlyReplicatedTags;  // Offset: 144 Size: 16
	int32_t NumBitsForContainerSize;  // Offset: 160 Size: 4
	int32_t NetIndexFirstBitSegment;  // Offset: 164 Size: 4
	struct TArray<struct FRestrictedConfigInfo> RestrictedConfigFiles;  // Offset: 168 Size: 16



 // Functions 
 public:
}; 
 
 


//Class GameplayTags.GameplayTagsDeveloperSettings Size 80
// Inherited 56 bytes 
class UGameplayTagsDeveloperSettings : public UDeveloperSettings
{

 public: 
	struct FString DeveloperConfigName;  // Offset: 56 Size: 16
	struct FName FavoriteTagSource;  // Offset: 72 Size: 8



 // Functions 
 public:
}; 
 
 


