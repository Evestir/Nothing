#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToTIFF Size 32
class FCreateProxyObjectForConvertToTIFF
{

 public: 
	struct UTexture* SourceImage;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool bWantColor : 1;  // Offset: 8 Size: 1
	char pad_9_1 : 7;  // Offset: 9 Size: 1
	bool bUseGpu : 1;  // Offset: 9 Size: 1
	char pad_10[2];  // Offset: 10 Size: 2
	float Scale;  // Offset: 12 Size: 4
	enum class ETextureRotationDirection Rotate;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7
	struct UAppleImageUtilsBaseAsyncTaskBlueprintProxy* ReturnValue;  // Offset: 24 Size: 8



 // Functions 
 public:
}; 
 
 //DelegateFunction AppleImageUtils.AppleImageConversionDelegate__DelegateSignature Size 32
class FAppleImageConversionDelegate__DelegateSignature
{

 public: 
	struct FAppleImageUtilsImageConversionResult ConversionResult;  // Offset: 0 Size: 32



 // Functions 
 public:
}; 
 
 //Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToHEIF Size 32
class FCreateProxyObjectForConvertToHEIF
{

 public: 
	struct UTexture* SourceImage;  // Offset: 0 Size: 8
	int32_t Quality;  // Offset: 8 Size: 4
	char pad_12_1 : 7;  // Offset: 12 Size: 1
	bool bWantColor : 1;  // Offset: 12 Size: 1
	char pad_13_1 : 7;  // Offset: 13 Size: 1
	bool bUseGpu : 1;  // Offset: 13 Size: 1
	char pad_14[2];  // Offset: 14 Size: 2
	float Scale;  // Offset: 16 Size: 4
	enum class ETextureRotationDirection Rotate;  // Offset: 20 Size: 1
	char pad_21[3];  // Offset: 21 Size: 3
	struct UAppleImageUtilsBaseAsyncTaskBlueprintProxy* ReturnValue;  // Offset: 24 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct AppleImageUtils.AppleImageUtilsImageConversionResult Size 32
class FAppleImageUtilsImageConversionResult
{

 public: 
	struct FString Error;  // Offset: 0 Size: 16
	struct TArray<char> ImageData;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToJPEG Size 32
class FCreateProxyObjectForConvertToJPEG
{

 public: 
	struct UTexture* SourceImage;  // Offset: 0 Size: 8
	int32_t Quality;  // Offset: 8 Size: 4
	char pad_12_1 : 7;  // Offset: 12 Size: 1
	bool bWantColor : 1;  // Offset: 12 Size: 1
	char pad_13_1 : 7;  // Offset: 13 Size: 1
	bool bUseGpu : 1;  // Offset: 13 Size: 1
	char pad_14[2];  // Offset: 14 Size: 2
	float Scale;  // Offset: 16 Size: 4
	enum class ETextureRotationDirection Rotate;  // Offset: 20 Size: 1
	char pad_21[3];  // Offset: 21 Size: 3
	struct UAppleImageUtilsBaseAsyncTaskBlueprintProxy* ReturnValue;  // Offset: 24 Size: 8



 // Functions 
 public:
}; 
 
 //Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToPNG Size 32
class FCreateProxyObjectForConvertToPNG
{

 public: 
	struct UTexture* SourceImage;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool bWantColor : 1;  // Offset: 8 Size: 1
	char pad_9_1 : 7;  // Offset: 9 Size: 1
	bool bUseGpu : 1;  // Offset: 9 Size: 1
	char pad_10[2];  // Offset: 10 Size: 2
	float Scale;  // Offset: 12 Size: 4
	enum class ETextureRotationDirection Rotate;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7
	struct UAppleImageUtilsBaseAsyncTaskBlueprintProxy* ReturnValue;  // Offset: 24 Size: 8



 // Functions 
 public:
}; 
 
 