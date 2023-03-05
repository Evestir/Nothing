#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//ScriptStruct BuildPatchServices.FileManifestData Size 104
class FFileManifestData
{

 public: 
	struct FString Filename;  // Offset: 0 Size: 16
	struct FSHAHashData FileHash;  // Offset: 16 Size: 20
	char pad_36[4];  // Offset: 36 Size: 4
	struct TArray<struct FChunkPartData> FileChunkParts;  // Offset: 40 Size: 16
	struct TArray<struct FString> InstallTags;  // Offset: 56 Size: 16
	char pad_72_1 : 7;  // Offset: 72 Size: 1
	bool bIsUnixExecutable : 1;  // Offset: 72 Size: 1
	char pad_73[7];  // Offset: 73 Size: 7
	struct FString SymlinkTarget;  // Offset: 80 Size: 16
	char pad_96_1 : 7;  // Offset: 96 Size: 1
	bool bIsReadOnly : 1;  // Offset: 96 Size: 1
	char pad_97_1 : 7;  // Offset: 97 Size: 1
	bool bIsCompressed : 1;  // Offset: 97 Size: 1
	char pad_98[6];  // Offset: 98 Size: 6



 // Functions 
 public:
}; 
 
 //ScriptStruct BuildPatchServices.ChunkPartData Size 24
class FChunkPartData
{

 public: 
	struct FGuid Guid;  // Offset: 0 Size: 16
	uint32_t Offset;  // Offset: 16 Size: 4
	uint32_t Size;  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct BuildPatchServices.SHAHashData Size 20
class FSHAHashData
{

 public: 
	char Hash[14];  // Offset: 0 Size: 20



 // Functions 
 public:
}; 
 
 //ScriptStruct BuildPatchServices.CustomFieldData Size 32
class FCustomFieldData
{

 public: 
	struct FString Key;  // Offset: 0 Size: 16
	struct FString Value;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct BuildPatchServices.ChunkInfoData Size 64
class FChunkInfoData
{

 public: 
	struct FGuid Guid;  // Offset: 0 Size: 16
	uint64_t Hash;  // Offset: 16 Size: 8
	struct FSHAHashData ShaHash;  // Offset: 24 Size: 20
	char pad_44[4];  // Offset: 44 Size: 4
	int64_t FileSize;  // Offset: 48 Size: 8
	char GroupNumber;  // Offset: 56 Size: 1
	char pad_57[7];  // Offset: 57 Size: 7



 // Functions 
 public:
}; 
 
 