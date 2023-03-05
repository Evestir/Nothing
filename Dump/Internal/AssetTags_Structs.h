#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//Function AssetTags.AssetTagsSubsystem.CollectionExists Size 12
class FCollectionExists
{

 public: 
	struct FName Name;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool ReturnValue : 1;  // Offset: 8 Size: 1
	char pad_9[3];  // Offset: 9 Size: 3



 // Functions 
 public:
}; 
 
 //Function AssetTags.AssetTagsSubsystem.GetAssetsInCollection Size 24
class FGetAssetsInCollection
{

 public: 
	struct FName Name;  // Offset: 0 Size: 8
	struct TArray<struct FAssetData> ReturnValue;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAssetData Size 112
class FGetCollectionsContainingAssetData
{

 public: 
	struct FAssetData AssetData;  // Offset: 0 Size: 96
	struct TArray<struct FName> ReturnValue;  // Offset: 96 Size: 16



 // Functions 
 public:
}; 
 
 //Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAsset Size 24
class FGetCollectionsContainingAsset
{

 public: 
	struct FName AssetPathName;  // Offset: 0 Size: 8
	struct TArray<struct FName> ReturnValue;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function AssetTags.AssetTagsSubsystem.GetCollections Size 16
class FGetCollections
{

 public: 
	struct TArray<struct FName> ReturnValue;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAssetPtr Size 24
class FGetCollectionsContainingAssetPtr
{

 public: 
	struct UObject* AssetPtr;  // Offset: 0 Size: 8
	struct TArray<struct FName> ReturnValue;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 