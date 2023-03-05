#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//DelegateFunction ImageWriteQueue.OnImageWriteComplete__DelegateSignature Size 1
class FOnImageWriteComplete__DelegateSignature
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bSuccess : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct ImageWriteQueue.ImageWriteOptions Size 96
class FImageWriteOptions
{

 public: 
	enum class EDesiredImageFormat Format;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	struct FDelegate OnComplete;  // Offset: 4 Size: 16
	int32_t CompressionQuality;  // Offset: 20 Size: 4
	char pad_24_1 : 7;  // Offset: 24 Size: 1
	bool bOverwriteFile : 1;  // Offset: 24 Size: 1
	char pad_25_1 : 7;  // Offset: 25 Size: 1
	bool bAsync : 1;  // Offset: 25 Size: 1
	char pad_26[70];  // Offset: 26 Size: 70



 // Functions 
 public:
}; 
 
 //Function ImageWriteQueue.ImageWriteBlueprintLibrary.ExportToDisk Size 128
class FExportToDisk
{

 public: 
	struct UTexture* Texture;  // Offset: 0 Size: 8
	struct FString Filename;  // Offset: 8 Size: 16
	char pad_24[8];  // Offset: 24 Size: 8
	struct FImageWriteOptions Options;  // Offset: 32 Size: 96



 // Functions 
 public:
}; 
 
 