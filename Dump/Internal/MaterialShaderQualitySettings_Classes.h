#pragma once 
#include <MaterialShaderQualitySettings_Structs.h>
 
 
 
//Class MaterialShaderQualitySettings.MaterialShaderQualitySettings Size 120
// Inherited 40 bytes 
class UMaterialShaderQualitySettings : public UObject
{

 public: 
	struct TMap<struct FName, struct UShaderPlatformQualitySettings*> ForwardSettingMap;  // Offset: 40 Size: 80



 // Functions 
 public:
}; 
 
 


//Class MaterialShaderQualitySettings.ShaderPlatformQualitySettings Size 96
// Inherited 40 bytes 
class UShaderPlatformQualitySettings : public UObject
{

 public: 
	struct FMaterialQualityOverrides QualityOverrides[4];  // Offset: 40 Size: 36
	char pad_76[20];  // Offset: 76 Size: 20



 // Functions 
 public:
}; 
 
 


