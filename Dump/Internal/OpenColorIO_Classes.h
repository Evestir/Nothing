#pragma once 
#include <OpenColorIO_Structs.h>
 
 
 
//Class OpenColorIO.OpenColorIOColorTransform Size 152
// Inherited 40 bytes 
class UOpenColorIOColorTransform : public UObject
{

 public: 
	struct UOpenColorIOConfiguration* ConfigurationOwner;  // Offset: 40 Size: 8
	struct FString SourceColorSpace;  // Offset: 48 Size: 16
	struct FString DestinationColorSpace;  // Offset: 64 Size: 16
	char pad_80[72];  // Offset: 80 Size: 72



 // Functions 
 public:
}; 
 
 


//Class OpenColorIO.OpenColorIOBlueprintLibrary Size 40
// Inherited 40 bytes 
class UOpenColorIOBlueprintLibrary : public UBlueprintFunctionLibrary
{

 public: 



 // Functions 
 public:
	bool ApplyColorSpaceTransform(struct UObject* WorldContextObject, struct FOpenColorIOColorConversionSettings& ConversionSettings, struct UTexture* InputTexture, struct UTextureRenderTarget2D* OutputRenderTarget); // Function OpenColorIO.OpenColorIOBlueprintLibrary.ApplyColorSpaceTransform
}; 
 
 


//Class OpenColorIO.OpenColorIOConfiguration Size 128
// Inherited 40 bytes 
class UOpenColorIOConfiguration : public UObject
{

 public: 
	struct FFilePath ConfigurationFile;  // Offset: 40 Size: 16
	struct TArray<struct FOpenColorIOColorSpace> DesiredColorSpaces;  // Offset: 56 Size: 16
	struct TArray<struct UOpenColorIOColorTransform*> ColorTransforms;  // Offset: 72 Size: 16
	char pad_88[40];  // Offset: 88 Size: 40



 // Functions 
 public:
}; 
 
 


//Class OpenColorIO.OpenColorIODisplayExtensionWrapper Size 56
// Inherited 40 bytes 
class UOpenColorIODisplayExtensionWrapper : public UObject
{

 public: 
	char pad_40[16];  // Offset: 40 Size: 16



 // Functions 
 public:
	void SetSceneExtensionIsActiveFunctions(struct TArray<struct FSceneViewExtensionIsActiveFunctor>& IsActiveFunctions); // Function OpenColorIO.OpenColorIODisplayExtensionWrapper.SetSceneExtensionIsActiveFunctions
	void SetSceneExtensionIsActiveFunction(struct FSceneViewExtensionIsActiveFunctor& IsActiveFunction); // Function OpenColorIO.OpenColorIODisplayExtensionWrapper.SetSceneExtensionIsActiveFunction
	void SetOpenColorIOConfiguration(struct FOpenColorIODisplayConfiguration InDisplayConfiguration); // Function OpenColorIO.OpenColorIODisplayExtensionWrapper.SetOpenColorIOConfiguration
	void RemoveSceneExtension(); // Function OpenColorIO.OpenColorIODisplayExtensionWrapper.RemoveSceneExtension
	struct UOpenColorIODisplayExtensionWrapper* CreateOpenColorIODisplayExtension(struct FOpenColorIODisplayConfiguration InDisplayConfiguration, struct FSceneViewExtensionIsActiveFunctor& IsActiveFunction); // Function OpenColorIO.OpenColorIODisplayExtensionWrapper.CreateOpenColorIODisplayExtension
}; 
 
 


