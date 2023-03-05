#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//Function AssetRegistry.AssetRegistryHelpers.GetExportTextName Size 112
class FGetExportTextName
{

 public: 
	struct FAssetData InAssetData;  // Offset: 0 Size: 96
	struct FString ReturnValue;  // Offset: 96 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct AssetRegistry.AssetRegistryDependencyOptions Size 5
class FAssetRegistryDependencyOptions
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bIncludeSoftPackageReferences : 1;  // Offset: 0 Size: 1
	char pad_1_1 : 7;  // Offset: 1 Size: 1
	bool bIncludeHardPackageReferences : 1;  // Offset: 1 Size: 1
	char pad_2_1 : 7;  // Offset: 2 Size: 1
	bool bIncludeSearchableNames : 1;  // Offset: 2 Size: 1
	char pad_3_1 : 7;  // Offset: 3 Size: 1
	bool bIncludeSoftManagementReferences : 1;  // Offset: 3 Size: 1
	char pad_4_1 : 7;  // Offset: 4 Size: 1
	bool bIncludeHardManagementReferences : 1;  // Offset: 4 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct AssetRegistry.TagAndValue Size 24
class FTagAndValue
{

 public: 
	struct FName Tag;  // Offset: 0 Size: 8
	struct FString Value;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function AssetRegistry.AssetRegistryHelpers.CreateAssetData Size 112
class FCreateAssetData
{

 public: 
	struct UObject* InAsset;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool bAllowBlueprintClass : 1;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7
	struct FAssetData ReturnValue;  // Offset: 16 Size: 96



 // Functions 
 public:
}; 
 
 //Function AssetRegistry.AssetRegistryHelpers.GetFullName Size 112
class FGetFullName
{

 public: 
	struct FAssetData InAssetData;  // Offset: 0 Size: 96
	struct FString ReturnValue;  // Offset: 96 Size: 16



 // Functions 
 public:
}; 
 
 //Function AssetRegistry.AssetRegistryHelpers.GetClass Size 104
class FGetClass
{

 public: 
	struct FAssetData InAssetData;  // Offset: 0 Size: 96
	UObject* ReturnValue;  // Offset: 96 Size: 8



 // Functions 
 public:
}; 
 
 //Function AssetRegistry.AssetRegistryHelpers.GetAsset Size 104
class FGetAsset
{

 public: 
	struct FAssetData InAssetData;  // Offset: 0 Size: 96
	struct UObject* ReturnValue;  // Offset: 96 Size: 8



 // Functions 
 public:
}; 
 
 //Function AssetRegistry.AssetRegistryHelpers.GetAssetRegistry Size 16
class FGetAssetRegistry
{

 public: 
	struct TScriptInterface<IAssetRegistry> ReturnValue;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function AssetRegistry.AssetRegistryHelpers.GetTagValue Size 128
class FGetTagValue
{

 public: 
	struct FAssetData InAssetData;  // Offset: 0 Size: 96
	struct FName InTagName;  // Offset: 96 Size: 8
	struct FString OutTagValue;  // Offset: 104 Size: 16
	char pad_120_1 : 7;  // Offset: 120 Size: 1
	bool ReturnValue : 1;  // Offset: 120 Size: 1
	char pad_121[7];  // Offset: 121 Size: 7



 // Functions 
 public:
}; 
 
 //Function AssetRegistry.AssetRegistryHelpers.IsAssetLoaded Size 104
class FIsAssetLoaded
{

 public: 
	struct FAssetData InAssetData;  // Offset: 0 Size: 96
	char pad_96_1 : 7;  // Offset: 96 Size: 1
	bool ReturnValue : 1;  // Offset: 96 Size: 1
	char pad_97[7];  // Offset: 97 Size: 7



 // Functions 
 public:
}; 
 
 //Function AssetRegistry.AssetRegistry.GetAllCachedPaths Size 16
class FGetAllCachedPaths
{

 public: 
	struct TArray<struct FString> OutPathList;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function AssetRegistry.AssetRegistryHelpers.IsRedirector Size 104
class FIsRedirector
{

 public: 
	struct FAssetData InAssetData;  // Offset: 0 Size: 96
	char pad_96_1 : 7;  // Offset: 96 Size: 1
	bool ReturnValue : 1;  // Offset: 96 Size: 1
	char pad_97[7];  // Offset: 97 Size: 7



 // Functions 
 public:
}; 
 
 //Function AssetRegistry.AssetRegistryHelpers.IsUAsset Size 104
class FIsUAsset
{

 public: 
	struct FAssetData InAssetData;  // Offset: 0 Size: 96
	char pad_96_1 : 7;  // Offset: 96 Size: 1
	bool ReturnValue : 1;  // Offset: 96 Size: 1
	char pad_97[7];  // Offset: 97 Size: 7



 // Functions 
 public:
}; 
 
 //Function AssetRegistry.AssetRegistryHelpers.IsValid Size 104
class FIsValid
{

 public: 
	struct FAssetData InAssetData;  // Offset: 0 Size: 96
	char pad_96_1 : 7;  // Offset: 96 Size: 1
	bool ReturnValue : 1;  // Offset: 96 Size: 1
	char pad_97[7];  // Offset: 97 Size: 7



 // Functions 
 public:
}; 
 
 //Function AssetRegistry.AssetRegistry.GetAllAssets Size 24
class FGetAllAssets
{

 public: 
	struct TArray<struct FAssetData> OutAssetData;  // Offset: 0 Size: 16
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool bIncludeOnlyOnDiskAssets : 1;  // Offset: 16 Size: 1
	char pad_17_1 : 7;  // Offset: 17 Size: 1
	bool ReturnValue : 1;  // Offset: 17 Size: 1
	char pad_18[6];  // Offset: 18 Size: 6



 // Functions 
 public:
}; 
 
 //Function AssetRegistry.AssetRegistryHelpers.SetFilterTagsAndValues Size 496
class FSetFilterTagsAndValues
{

 public: 
	struct FARFilter InFilter;  // Offset: 0 Size: 240
	struct TArray<struct FTagAndValue> InTagsAndValues;  // Offset: 240 Size: 16
	struct FARFilter ReturnValue;  // Offset: 256 Size: 240



 // Functions 
 public:
}; 
 
 //Function AssetRegistry.AssetRegistryHelpers.ToSoftObjectPath Size 120
class FToSoftObjectPath
{

 public: 
	struct FAssetData InAssetData;  // Offset: 0 Size: 96
	struct FSoftObjectPath ReturnValue;  // Offset: 96 Size: 24



 // Functions 
 public:
}; 
 
 //Function AssetRegistry.AssetRegistry.GetAssetByObjectPath Size 112
class FGetAssetByObjectPath
{

 public: 
	struct FName ObjectPath;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool bIncludeOnlyOnDiskAssets : 1;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7
	struct FAssetData ReturnValue;  // Offset: 16 Size: 96



 // Functions 
 public:
}; 
 
 //Function AssetRegistry.AssetRegistry.UseFilterToExcludeAssets Size 256
class FUseFilterToExcludeAssets
{

 public: 
	struct TArray<struct FAssetData> AssetDataList;  // Offset: 0 Size: 16
	struct FARFilter Filter;  // Offset: 16 Size: 240



 // Functions 
 public:
}; 
 
 //Function AssetRegistry.AssetRegistry.GetAssetsByPackageName Size 32
class FGetAssetsByPackageName
{

 public: 
	struct FName PackageName;  // Offset: 0 Size: 8
	struct TArray<struct FAssetData> OutAssetData;  // Offset: 8 Size: 16
	char pad_24_1 : 7;  // Offset: 24 Size: 1
	bool bIncludeOnlyOnDiskAssets : 1;  // Offset: 24 Size: 1
	char pad_25_1 : 7;  // Offset: 25 Size: 1
	bool ReturnValue : 1;  // Offset: 25 Size: 1
	char pad_26[6];  // Offset: 26 Size: 6



 // Functions 
 public:
}; 
 
 //Function AssetRegistry.AssetRegistry.GetAssets Size 264
class FGetAssets
{

 public: 
	struct FARFilter Filter;  // Offset: 0 Size: 240
	struct TArray<struct FAssetData> OutAssetData;  // Offset: 240 Size: 16
	char pad_256_1 : 7;  // Offset: 256 Size: 1
	bool ReturnValue : 1;  // Offset: 256 Size: 1
	char pad_257[7];  // Offset: 257 Size: 7



 // Functions 
 public:
}; 
 
 //Function AssetRegistry.AssetRegistry.ScanPathsSynchronous Size 24
class FScanPathsSynchronous
{

 public: 
	struct TArray<struct FString> InPaths;  // Offset: 0 Size: 16
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool bForceRescan : 1;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //Function AssetRegistry.AssetRegistry.GetAssetsByClass Size 32
class FGetAssetsByClass
{

 public: 
	struct FName ClassName;  // Offset: 0 Size: 8
	struct TArray<struct FAssetData> OutAssetData;  // Offset: 8 Size: 16
	char pad_24_1 : 7;  // Offset: 24 Size: 1
	bool bSearchSubClasses : 1;  // Offset: 24 Size: 1
	char pad_25_1 : 7;  // Offset: 25 Size: 1
	bool ReturnValue : 1;  // Offset: 25 Size: 1
	char pad_26[6];  // Offset: 26 Size: 6



 // Functions 
 public:
}; 
 
 //Function AssetRegistry.AssetRegistry.GetAssetsByPath Size 32
class FGetAssetsByPath
{

 public: 
	struct FName PackagePath;  // Offset: 0 Size: 8
	struct TArray<struct FAssetData> OutAssetData;  // Offset: 8 Size: 16
	char pad_24_1 : 7;  // Offset: 24 Size: 1
	bool bRecursive : 1;  // Offset: 24 Size: 1
	char pad_25_1 : 7;  // Offset: 25 Size: 1
	bool bIncludeOnlyOnDiskAssets : 1;  // Offset: 25 Size: 1
	char pad_26_1 : 7;  // Offset: 26 Size: 1
	bool ReturnValue : 1;  // Offset: 26 Size: 1
	char pad_27[5];  // Offset: 27 Size: 5



 // Functions 
 public:
}; 
 
 //Function AssetRegistry.AssetRegistry.GetSubPaths Size 40
class FGetSubPaths
{

 public: 
	struct FString InBasePath;  // Offset: 0 Size: 16
	struct TArray<struct FString> OutPathList;  // Offset: 16 Size: 16
	char pad_32_1 : 7;  // Offset: 32 Size: 1
	bool bInRecurse : 1;  // Offset: 32 Size: 1
	char pad_33[7];  // Offset: 33 Size: 7



 // Functions 
 public:
}; 
 
 //Function AssetRegistry.AssetRegistry.HasAssets Size 12
class FHasAssets
{

 public: 
	struct FName PackagePath;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool bRecursive : 1;  // Offset: 8 Size: 1
	char pad_9_1 : 7;  // Offset: 9 Size: 1
	bool ReturnValue : 1;  // Offset: 9 Size: 1
	char pad_10[2];  // Offset: 10 Size: 2



 // Functions 
 public:
}; 
 
 //Function AssetRegistry.AssetRegistry.IsLoadingAssets Size 1
class FIsLoadingAssets
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function AssetRegistry.AssetRegistry.K2_GetDependencies Size 40
class FK2_GetDependencies
{

 public: 
	struct FName PackageName;  // Offset: 0 Size: 8
	struct FAssetRegistryDependencyOptions DependencyOptions;  // Offset: 8 Size: 5
	char pad_13[3];  // Offset: 13 Size: 3
	struct TArray<struct FName> OutDependencies;  // Offset: 16 Size: 16
	char pad_32_1 : 7;  // Offset: 32 Size: 1
	bool ReturnValue : 1;  // Offset: 32 Size: 1
	char pad_33[7];  // Offset: 33 Size: 7



 // Functions 
 public:
}; 
 
 //Function AssetRegistry.AssetRegistry.K2_GetReferencers Size 40
class FK2_GetReferencers
{

 public: 
	struct FName PackageName;  // Offset: 0 Size: 8
	struct FAssetRegistryDependencyOptions ReferenceOptions;  // Offset: 8 Size: 5
	char pad_13[3];  // Offset: 13 Size: 3
	struct TArray<struct FName> OutReferencers;  // Offset: 16 Size: 16
	char pad_32_1 : 7;  // Offset: 32 Size: 1
	bool ReturnValue : 1;  // Offset: 32 Size: 1
	char pad_33[7];  // Offset: 33 Size: 7



 // Functions 
 public:
}; 
 
 //Function AssetRegistry.AssetRegistry.PrioritizeSearchPath Size 16
class FPrioritizeSearchPath
{

 public: 
	struct FString PathToPrioritize;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function AssetRegistry.AssetRegistry.RunAssetsThroughFilter Size 256
class FRunAssetsThroughFilter
{

 public: 
	struct TArray<struct FAssetData> AssetDataList;  // Offset: 0 Size: 16
	struct FARFilter Filter;  // Offset: 16 Size: 240



 // Functions 
 public:
}; 
 
 //Function AssetRegistry.AssetRegistry.ScanFilesSynchronous Size 24
class FScanFilesSynchronous
{

 public: 
	struct TArray<struct FString> InFilePaths;  // Offset: 0 Size: 16
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool bForceRescan : 1;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //Function AssetRegistry.AssetRegistry.ScanModifiedAssetFiles Size 16
class FScanModifiedAssetFiles
{

 public: 
	struct TArray<struct FString> InFilePaths;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function AssetRegistry.AssetRegistry.SearchAllAssets Size 1
class FSearchAllAssets
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bSynchronousSearch : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 