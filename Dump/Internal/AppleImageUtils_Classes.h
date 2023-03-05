#pragma once 
#include <AppleImageUtils_Structs.h>
 
 
 
//Class AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy Size 136
// Inherited 40 bytes 
class UAppleImageUtilsBaseAsyncTaskBlueprintProxy : public UObject
{

 public: 
	char pad_40[8];  // Offset: 40 Size: 8
	struct FMulticastInlineDelegate OnSuccess;  // Offset: 48 Size: 16
	struct FMulticastInlineDelegate OnFailure;  // Offset: 64 Size: 16
	char pad_80[16];  // Offset: 80 Size: 16
	struct FAppleImageUtilsImageConversionResult ConversionResult;  // Offset: 96 Size: 32
	char pad_128[8];  // Offset: 128 Size: 8



 // Functions 
 public:
	struct UAppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToTIFF(struct UTexture* SourceImage, bool bWantColor, bool bUseGpu, float Scale, enum class ETextureRotationDirection Rotate); // Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToTIFF
	struct UAppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToPNG(struct UTexture* SourceImage, bool bWantColor, bool bUseGpu, float Scale, enum class ETextureRotationDirection Rotate); // Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToPNG
	struct UAppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToJPEG(struct UTexture* SourceImage, int32_t Quality, bool bWantColor, bool bUseGpu, float Scale, enum class ETextureRotationDirection Rotate); // Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToJPEG
	struct UAppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToHEIF(struct UTexture* SourceImage, int32_t Quality, bool bWantColor, bool bUseGpu, float Scale, enum class ETextureRotationDirection Rotate); // Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToHEIF
}; 
 
 


//Class AppleImageUtils.AppleImageInterface Size 40
// Inherited 40 bytes 
class UAppleImageInterface : public UInterface
{

 public: 



 // Functions 
 public:
}; 
 
 


