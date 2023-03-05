#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//ScriptStruct GameplayTags.GameplayTagQuery Size 72
class FGameplayTagQuery
{

 public: 
	int32_t TokenStreamVersion;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct TArray<struct FGameplayTag> TagDictionary;  // Offset: 8 Size: 16
	struct TArray<char> QueryTokenStream;  // Offset: 24 Size: 16
	struct FString UserDescription;  // Offset: 40 Size: 16
	struct FString AutoDescription;  // Offset: 56 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct GameplayTags.GameplayTag Size 8
class FGameplayTag
{

 public: 
	struct FName TagName;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct GameplayTags.GameplayTagNode Size 80
class FGameplayTagNode
{

 public: 
	char pad_0[80];  // Offset: 0 Size: 80



 // Functions 
 public:
}; 
 
 //ScriptStruct GameplayTags.GameplayTagRedirect Size 16
class FGameplayTagRedirect
{

 public: 
	struct FName OldTagName;  // Offset: 0 Size: 8
	struct FName NewTagName;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct GameplayTags.RestrictedConfigInfo Size 32
class FRestrictedConfigInfo
{

 public: 
	struct FString RestrictedConfigName;  // Offset: 0 Size: 16
	struct TArray<struct FString> Owners;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct GameplayTags.GameplayTagCreationWidgetHelper Size 1
class FGameplayTagCreationWidgetHelper
{

 public: 
	char pad_0[1];  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct GameplayTags.GameplayTagReferenceHelper Size 16
class FGameplayTagReferenceHelper
{

 public: 
	char pad_0[16];  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct GameplayTags.GameplayTagSource Size 32
class FGameplayTagSource
{

 public: 
	struct FName SourceName;  // Offset: 0 Size: 8
	enum class EGameplayTagSourceType SourceType;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7
	struct UGameplayTagsList* SourceTagList;  // Offset: 16 Size: 8
	struct URestrictedGameplayTagsList* SourceRestrictedTagList;  // Offset: 24 Size: 8



 // Functions 
 public:
}; 
 
 //Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTag Size 16
class FMakeLiteralGameplayTag
{

 public: 
	struct FGameplayTag Value;  // Offset: 0 Size: 8
	struct FGameplayTag ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct GameplayTags.GameplayTagContainer Size 32
class FGameplayTagContainer
{

 public: 
	struct TArray<struct FGameplayTag> GameplayTags;  // Offset: 0 Size: 16
	struct TArray<struct FGameplayTag> ParentTags;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromArray Size 48
class FMakeGameplayTagContainerFromArray
{

 public: 
	struct TArray<struct FGameplayTag> GameplayTags;  // Offset: 0 Size: 16
	struct FGameplayTagContainer ReturnValue;  // Offset: 16 Size: 32



 // Functions 
 public:
}; 
 
 //ScriptStruct GameplayTags.GameplayTagTableRow Size 32
// Inherited 8 bytes 
class FGameplayTagTableRow : public FTableRowBase
{

 public: 
	struct FName Tag;  // Offset: 8 Size: 8
	struct FString DevComment;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function GameplayTags.BlueprintGameplayTagLibrary.DoesTagAssetInterfaceHaveTag Size 32
class FDoesTagAssetInterfaceHaveTag
{

 public: 
	struct TScriptInterface<IGameplayTagAssetInterface> TagContainerInterface;  // Offset: 0 Size: 16
	struct FGameplayTag Tag;  // Offset: 16 Size: 8
	char pad_24_1 : 7;  // Offset: 24 Size: 1
	bool ReturnValue : 1;  // Offset: 24 Size: 1
	char pad_25[7];  // Offset: 25 Size: 7



 // Functions 
 public:
}; 
 
 //ScriptStruct GameplayTags.RestrictedGameplayTagTableRow Size 40
// Inherited 32 bytes 
class FRestrictedGameplayTagTableRow : public FGameplayTagTableRow
{

 public: 
	char pad_32_1 : 7;  // Offset: 32 Size: 1
	bool bAllowNonRestrictedChildren : 1;  // Offset: 32 Size: 1
	char pad_33[7];  // Offset: 33 Size: 7



 // Functions 
 public:
}; 
 
 //ScriptStruct GameplayTags.GameplayTagCategoryRemap Size 32
class FGameplayTagCategoryRemap
{

 public: 
	struct FString BaseCategory;  // Offset: 0 Size: 16
	struct TArray<struct FString> RemapCategories;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function GameplayTags.BlueprintGameplayTagLibrary.AddGameplayTag Size 40
class FAddGameplayTag
{

 public: 
	struct FGameplayTagContainer TagContainer;  // Offset: 0 Size: 32
	struct FGameplayTag Tag;  // Offset: 32 Size: 8



 // Functions 
 public:
}; 
 
 //Function GameplayTags.BlueprintGameplayTagLibrary.BreakGameplayTagContainer Size 48
class FBreakGameplayTagContainer
{

 public: 
	struct FGameplayTagContainer GameplayTagContainer;  // Offset: 0 Size: 32
	struct TArray<struct FGameplayTag> GameplayTags;  // Offset: 32 Size: 16



 // Functions 
 public:
}; 
 
 //Function GameplayTags.BlueprintGameplayTagLibrary.AppendGameplayTagContainers Size 64
class FAppendGameplayTagContainers
{

 public: 
	struct FGameplayTagContainer InOutTagContainer;  // Offset: 0 Size: 32
	struct FGameplayTagContainer InTagContainer;  // Offset: 32 Size: 32



 // Functions 
 public:
}; 
 
 //Function GameplayTags.BlueprintGameplayTagLibrary.DoesContainerMatchTagQuery Size 112
class FDoesContainerMatchTagQuery
{

 public: 
	struct FGameplayTagContainer TagContainer;  // Offset: 0 Size: 32
	struct FGameplayTagQuery TagQuery;  // Offset: 32 Size: 72
	char pad_104_1 : 7;  // Offset: 104 Size: 1
	bool ReturnValue : 1;  // Offset: 104 Size: 1
	char pad_105[7];  // Offset: 105 Size: 7



 // Functions 
 public:
}; 
 
 //Function GameplayTags.BlueprintGameplayTagLibrary.MatchesTag Size 20
class FMatchesTag
{

 public: 
	struct FGameplayTag TagOne;  // Offset: 0 Size: 8
	struct FGameplayTag TagTwo;  // Offset: 8 Size: 8
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool bExactMatch : 1;  // Offset: 16 Size: 1
	char pad_17_1 : 7;  // Offset: 17 Size: 1
	bool ReturnValue : 1;  // Offset: 17 Size: 1
	char pad_18[2];  // Offset: 18 Size: 2



 // Functions 
 public:
}; 
 
 //Function GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTag Size 20
class FEqualEqual_GameplayTag
{

 public: 
	struct FGameplayTag A;  // Offset: 0 Size: 8
	struct FGameplayTag B;  // Offset: 8 Size: 8
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool ReturnValue : 1;  // Offset: 16 Size: 1
	char pad_17[3];  // Offset: 17 Size: 3



 // Functions 
 public:
}; 
 
 //Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTag Size 20
class FNotEqual_GameplayTag
{

 public: 
	struct FGameplayTag A;  // Offset: 0 Size: 8
	struct FGameplayTag B;  // Offset: 8 Size: 8
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool ReturnValue : 1;  // Offset: 16 Size: 1
	char pad_17[3];  // Offset: 17 Size: 3



 // Functions 
 public:
}; 
 
 //Function GameplayTags.BlueprintGameplayTagLibrary.EqualEqual_GameplayTagContainer Size 72
class FEqualEqual_GameplayTagContainer
{

 public: 
	struct FGameplayTagContainer A;  // Offset: 0 Size: 32
	struct FGameplayTagContainer B;  // Offset: 32 Size: 32
	char pad_64_1 : 7;  // Offset: 64 Size: 1
	bool ReturnValue : 1;  // Offset: 64 Size: 1
	char pad_65[7];  // Offset: 65 Size: 7



 // Functions 
 public:
}; 
 
 //Function GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTagContainer Size 48
class FGetDebugStringFromGameplayTagContainer
{

 public: 
	struct FGameplayTagContainer TagContainer;  // Offset: 0 Size: 32
	struct FString ReturnValue;  // Offset: 32 Size: 16



 // Functions 
 public:
}; 
 
 //Function GameplayTags.BlueprintGameplayTagLibrary.GetAllActorsOfClassMatchingTagQuery Size 104
class FGetAllActorsOfClassMatchingTagQuery
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	AActor* ActorClass;  // Offset: 8 Size: 8
	struct FGameplayTagQuery GameplayTagQuery;  // Offset: 16 Size: 72
	struct TArray<struct AActor*> OutActors;  // Offset: 88 Size: 16



 // Functions 
 public:
}; 
 
 //Function GameplayTags.BlueprintGameplayTagLibrary.GetDebugStringFromGameplayTag Size 24
class FGetDebugStringFromGameplayTag
{

 public: 
	struct FGameplayTag GameplayTag;  // Offset: 0 Size: 8
	struct FString ReturnValue;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function GameplayTags.BlueprintGameplayTagLibrary.GetNumGameplayTagsInContainer Size 40
class FGetNumGameplayTagsInContainer
{

 public: 
	struct FGameplayTagContainer TagContainer;  // Offset: 0 Size: 32
	int32_t ReturnValue;  // Offset: 32 Size: 4
	char pad_36[4];  // Offset: 36 Size: 4



 // Functions 
 public:
}; 
 
 //Function GameplayTags.BlueprintGameplayTagLibrary.HasAnyTags Size 72
class FHasAnyTags
{

 public: 
	struct FGameplayTagContainer TagContainer;  // Offset: 0 Size: 32
	struct FGameplayTagContainer OtherContainer;  // Offset: 32 Size: 32
	char pad_64_1 : 7;  // Offset: 64 Size: 1
	bool bExactMatch : 1;  // Offset: 64 Size: 1
	char pad_65_1 : 7;  // Offset: 65 Size: 1
	bool ReturnValue : 1;  // Offset: 65 Size: 1
	char pad_66[6];  // Offset: 66 Size: 6



 // Functions 
 public:
}; 
 
 //Function GameplayTags.BlueprintGameplayTagLibrary.GetTagName Size 16
class FGetTagName
{

 public: 
	struct FGameplayTag GameplayTag;  // Offset: 0 Size: 8
	struct FName ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function GameplayTags.GameplayTagAssetInterface.HasAllMatchingGameplayTags Size 40
class FHasAllMatchingGameplayTags
{

 public: 
	struct FGameplayTagContainer TagContainer;  // Offset: 0 Size: 32
	char pad_32_1 : 7;  // Offset: 32 Size: 1
	bool ReturnValue : 1;  // Offset: 32 Size: 1
	char pad_33[7];  // Offset: 33 Size: 7



 // Functions 
 public:
}; 
 
 //Function GameplayTags.BlueprintGameplayTagLibrary.HasAllTags Size 72
class FHasAllTags
{

 public: 
	struct FGameplayTagContainer TagContainer;  // Offset: 0 Size: 32
	struct FGameplayTagContainer OtherContainer;  // Offset: 32 Size: 32
	char pad_64_1 : 7;  // Offset: 64 Size: 1
	bool bExactMatch : 1;  // Offset: 64 Size: 1
	char pad_65_1 : 7;  // Offset: 65 Size: 1
	bool ReturnValue : 1;  // Offset: 65 Size: 1
	char pad_66[6];  // Offset: 66 Size: 6



 // Functions 
 public:
}; 
 
 //Function GameplayTags.GameplayTagAssetInterface.HasAnyMatchingGameplayTags Size 40
class FHasAnyMatchingGameplayTags
{

 public: 
	struct FGameplayTagContainer TagContainer;  // Offset: 0 Size: 32
	char pad_32_1 : 7;  // Offset: 32 Size: 1
	bool ReturnValue : 1;  // Offset: 32 Size: 1
	char pad_33[7];  // Offset: 33 Size: 7



 // Functions 
 public:
}; 
 
 //Function GameplayTags.BlueprintGameplayTagLibrary.HasTag Size 48
class FHasTag
{

 public: 
	struct FGameplayTagContainer TagContainer;  // Offset: 0 Size: 32
	struct FGameplayTag Tag;  // Offset: 32 Size: 8
	char pad_40_1 : 7;  // Offset: 40 Size: 1
	bool bExactMatch : 1;  // Offset: 40 Size: 1
	char pad_41_1 : 7;  // Offset: 41 Size: 1
	bool ReturnValue : 1;  // Offset: 41 Size: 1
	char pad_42[6];  // Offset: 42 Size: 6



 // Functions 
 public:
}; 
 
 //Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagQuery Size 144
class FMakeGameplayTagQuery
{

 public: 
	struct FGameplayTagQuery TagQuery;  // Offset: 0 Size: 72
	struct FGameplayTagQuery ReturnValue;  // Offset: 72 Size: 72



 // Functions 
 public:
}; 
 
 //Function GameplayTags.BlueprintGameplayTagLibrary.IsGameplayTagValid Size 12
class FIsGameplayTagValid
{

 public: 
	struct FGameplayTag GameplayTag;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool ReturnValue : 1;  // Offset: 8 Size: 1
	char pad_9[3];  // Offset: 9 Size: 3



 // Functions 
 public:
}; 
 
 //Function GameplayTags.BlueprintGameplayTagLibrary.IsTagQueryEmpty Size 80
class FIsTagQueryEmpty
{

 public: 
	struct FGameplayTagQuery TagQuery;  // Offset: 0 Size: 72
	char pad_72_1 : 7;  // Offset: 72 Size: 1
	bool ReturnValue : 1;  // Offset: 72 Size: 1
	char pad_73[7];  // Offset: 73 Size: 7



 // Functions 
 public:
}; 
 
 //Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagContainerFromTag Size 40
class FMakeGameplayTagContainerFromTag
{

 public: 
	struct FGameplayTag SingleTag;  // Offset: 0 Size: 8
	struct FGameplayTagContainer ReturnValue;  // Offset: 8 Size: 32



 // Functions 
 public:
}; 
 
 //Function GameplayTags.GameplayTagAssetInterface.GetOwnedGameplayTags Size 32
class FGetOwnedGameplayTags
{

 public: 
	struct FGameplayTagContainer TagContainer;  // Offset: 0 Size: 32



 // Functions 
 public:
}; 
 
 //Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTagContainer Size 64
class FMakeLiteralGameplayTagContainer
{

 public: 
	struct FGameplayTagContainer Value;  // Offset: 0 Size: 32
	struct FGameplayTagContainer ReturnValue;  // Offset: 32 Size: 32



 // Functions 
 public:
}; 
 
 //Function GameplayTags.BlueprintGameplayTagLibrary.MatchesAnyTags Size 48
class FMatchesAnyTags
{

 public: 
	struct FGameplayTag TagOne;  // Offset: 0 Size: 8
	struct FGameplayTagContainer OtherContainer;  // Offset: 8 Size: 32
	char pad_40_1 : 7;  // Offset: 40 Size: 1
	bool bExactMatch : 1;  // Offset: 40 Size: 1
	char pad_41_1 : 7;  // Offset: 41 Size: 1
	bool ReturnValue : 1;  // Offset: 41 Size: 1
	char pad_42[6];  // Offset: 42 Size: 6



 // Functions 
 public:
}; 
 
 //Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_GameplayTagContainer Size 72
class FNotEqual_GameplayTagContainer
{

 public: 
	struct FGameplayTagContainer A;  // Offset: 0 Size: 32
	struct FGameplayTagContainer B;  // Offset: 32 Size: 32
	char pad_64_1 : 7;  // Offset: 64 Size: 1
	bool ReturnValue : 1;  // Offset: 64 Size: 1
	char pad_65[7];  // Offset: 65 Size: 7



 // Functions 
 public:
}; 
 
 //Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagContainerTagContainer Size 56
class FNotEqual_TagContainerTagContainer
{

 public: 
	struct FGameplayTagContainer A;  // Offset: 0 Size: 32
	struct FString B;  // Offset: 32 Size: 16
	char pad_48_1 : 7;  // Offset: 48 Size: 1
	bool ReturnValue : 1;  // Offset: 48 Size: 1
	char pad_49[7];  // Offset: 49 Size: 7



 // Functions 
 public:
}; 
 
 //Function GameplayTags.BlueprintGameplayTagLibrary.NotEqual_TagTag Size 32
class FNotEqual_TagTag
{

 public: 
	struct FGameplayTag A;  // Offset: 0 Size: 8
	struct FString B;  // Offset: 8 Size: 16
	char pad_24_1 : 7;  // Offset: 24 Size: 1
	bool ReturnValue : 1;  // Offset: 24 Size: 1
	char pad_25[7];  // Offset: 25 Size: 7



 // Functions 
 public:
}; 
 
 //Function GameplayTags.BlueprintGameplayTagLibrary.RemoveGameplayTag Size 48
class FRemoveGameplayTag
{

 public: 
	struct FGameplayTagContainer TagContainer;  // Offset: 0 Size: 32
	struct FGameplayTag Tag;  // Offset: 32 Size: 8
	char pad_40_1 : 7;  // Offset: 40 Size: 1
	bool ReturnValue : 1;  // Offset: 40 Size: 1
	char pad_41[7];  // Offset: 41 Size: 7



 // Functions 
 public:
}; 
 
 //Function GameplayTags.GameplayTagAssetInterface.HasMatchingGameplayTag Size 12
class FHasMatchingGameplayTag
{

 public: 
	struct FGameplayTag TagToCheck;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool ReturnValue : 1;  // Offset: 8 Size: 1
	char pad_9[3];  // Offset: 9 Size: 3



 // Functions 
 public:
}; 
 
 