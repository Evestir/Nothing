#pragma once 
#include <BuildPatchServices_Structs.h>
 
 
 
//Class BuildPatchServices.BuildPatchManifest Size 288
// Inherited 40 bytes 
class UBuildPatchManifest : public UObject
{

 public: 
	char ManifestFileVersion;  // Offset: 40 Size: 1
	char pad_41_1 : 7;  // Offset: 41 Size: 1
	bool bIsFileData : 1;  // Offset: 41 Size: 1
	char pad_42[2];  // Offset: 42 Size: 2
	uint32_t AppID;  // Offset: 44 Size: 4
	struct FString AppName;  // Offset: 48 Size: 16
	struct FString BuildVersion;  // Offset: 64 Size: 16
	struct FString LaunchExe;  // Offset: 80 Size: 16
	struct FString LaunchCommand;  // Offset: 96 Size: 16
	struct TSet<struct FString> PrereqIds;  // Offset: 112 Size: 80
	struct FString PrereqName;  // Offset: 192 Size: 16
	struct FString PrereqPath;  // Offset: 208 Size: 16
	struct FString PrereqArgs;  // Offset: 224 Size: 16
	struct TArray<struct FFileManifestData> FileManifestList;  // Offset: 240 Size: 16
	struct TArray<struct FChunkInfoData> ChunkList;  // Offset: 256 Size: 16
	struct TArray<struct FCustomFieldData> CustomFields;  // Offset: 272 Size: 16



 // Functions 
 public:
}; 
 
 


