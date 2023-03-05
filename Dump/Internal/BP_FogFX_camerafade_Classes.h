#pragma once 
#include <BP_FogFX_camerafade_Structs.h>
 
 
 
//BlueprintGeneratedClass BP_FogFX_camerafade.BP_FogFX_camerafade_C Size 608
// Inherited 544 bytes 
class ABP_FogFX_camerafade_C : public AActor
{

 public: 
	struct UStaticMeshComponent* billboardFX;  // Offset: 544 Size: 8
	struct UMaterialInstanceDynamic* Mat_BillboardFX;  // Offset: 552 Size: 8
	float LightColor_Intensity;  // Offset: 560 Size: 4
	float Mask_Range;  // Offset: 564 Size: 4
	struct FLinearColor LightColor;  // Offset: 568 Size: 16
	float Opacity_Depth;  // Offset: 584 Size: 4
	float Distance_Fade;  // Offset: 588 Size: 4
	float Distance_Range;  // Offset: 592 Size: 4
	char pad_596[4];  // Offset: 596 Size: 4
	struct UTexture* LightMask;  // Offset: 600 Size: 8



 // Functions 
 public:
	void UserConstructionScript(); // Function BP_FogFX_camerafade.BP_FogFX_camerafade_C.UserConstructionScript
}; 
 
 


