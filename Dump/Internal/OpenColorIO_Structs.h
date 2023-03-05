#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//Function OpenColorIO.OpenColorIODisplayExtensionWrapper.SetSceneExtensionIsActiveFunction Size 80
class FSetSceneExtensionIsActiveFunction
{

 public: 
	struct FSceneViewExtensionIsActiveFunctor IsActiveFunction;  // Offset: 0 Size: 80



 // Functions 
 public:
}; 
 
 //Function OpenColorIO.OpenColorIODisplayExtensionWrapper.SetOpenColorIOConfiguration Size 96
class FSetOpenColorIOConfiguration
{

 public: 
	struct FOpenColorIODisplayConfiguration InDisplayConfiguration;  // Offset: 0 Size: 96



 // Functions 
 public:
}; 
 
 //ScriptStruct OpenColorIO.OpenColorIODisplayConfiguration Size 96
class FOpenColorIODisplayConfiguration
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bIsEnabled : 1;  // Offset: 0 Size: 1
	char pad_1[7];  // Offset: 1 Size: 7
	struct FOpenColorIOColorConversionSettings ColorConfiguration;  // Offset: 8 Size: 88



 // Functions 
 public:
}; 
 
 //ScriptStruct OpenColorIO.OpenColorIOColorConversionSettings Size 88
class FOpenColorIOColorConversionSettings
{

 public: 
	struct UOpenColorIOConfiguration* ConfigurationSource;  // Offset: 0 Size: 8
	struct FOpenColorIOColorSpace SourceColorSpace;  // Offset: 8 Size: 40
	struct FOpenColorIOColorSpace DestinationColorSpace;  // Offset: 48 Size: 40



 // Functions 
 public:
}; 
 
 //ScriptStruct OpenColorIO.OpenColorIOColorSpace Size 40
class FOpenColorIOColorSpace
{

 public: 
	struct FString ColorSpaceName;  // Offset: 0 Size: 16
	int32_t ColorSpaceIndex;  // Offset: 16 Size: 4
	char pad_20[4];  // Offset: 20 Size: 4
	struct FString FamilyName;  // Offset: 24 Size: 16



 // Functions 
 public:
}; 
 
 //Function OpenColorIO.OpenColorIOBlueprintLibrary.ApplyColorSpaceTransform Size 120
class FApplyColorSpaceTransform
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct FOpenColorIOColorConversionSettings ConversionSettings;  // Offset: 8 Size: 88
	struct UTexture* InputTexture;  // Offset: 96 Size: 8
	struct UTextureRenderTarget2D* OutputRenderTarget;  // Offset: 104 Size: 8
	char pad_112_1 : 7;  // Offset: 112 Size: 1
	bool ReturnValue : 1;  // Offset: 112 Size: 1
	char pad_113[7];  // Offset: 113 Size: 7



 // Functions 
 public:
}; 
 
 //Function OpenColorIO.OpenColorIODisplayExtensionWrapper.CreateOpenColorIODisplayExtension Size 192
class FCreateOpenColorIODisplayExtension
{

 public: 
	struct FOpenColorIODisplayConfiguration InDisplayConfiguration;  // Offset: 0 Size: 96
	struct FSceneViewExtensionIsActiveFunctor IsActiveFunction;  // Offset: 96 Size: 80
	struct UOpenColorIODisplayExtensionWrapper* ReturnValue;  // Offset: 176 Size: 8
	char pad_184[8];  // Offset: 184 Size: 8



 // Functions 
 public:
}; 
 
 //Function OpenColorIO.OpenColorIODisplayExtensionWrapper.SetSceneExtensionIsActiveFunctions Size 16
class FSetSceneExtensionIsActiveFunctions
{

 public: 
	struct TArray<struct FSceneViewExtensionIsActiveFunctor> IsActiveFunctions;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 