#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//ScriptStruct MaterialShaderQualitySettings.MaterialQualityOverrides Size 9
class FMaterialQualityOverrides
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bDiscardQualityDuringCook : 1;  // Offset: 0 Size: 1
	char pad_1_1 : 7;  // Offset: 1 Size: 1
	bool bEnableOverride : 1;  // Offset: 1 Size: 1
	char pad_2_1 : 7;  // Offset: 2 Size: 1
	bool bForceFullyRough : 1;  // Offset: 2 Size: 1
	char pad_3_1 : 7;  // Offset: 3 Size: 1
	bool bForceNonMetal : 1;  // Offset: 3 Size: 1
	char pad_4_1 : 7;  // Offset: 4 Size: 1
	bool bForceDisableLMDirectionality : 1;  // Offset: 4 Size: 1
	char pad_5_1 : 7;  // Offset: 5 Size: 1
	bool bForceLQReflections : 1;  // Offset: 5 Size: 1
	char pad_6_1 : 7;  // Offset: 6 Size: 1
	bool bForceDisablePreintegratedGF : 1;  // Offset: 6 Size: 1
	char pad_7_1 : 7;  // Offset: 7 Size: 1
	bool bDisableMaterialNormalCalculation : 1;  // Offset: 7 Size: 1
	enum class EMobileShadowQuality MobileShadowQuality;  // Offset: 8 Size: 1



 // Functions 
 public:
}; 
 
 