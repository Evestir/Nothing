#pragma once 
#include <BP_FX_ButterFlyPt_Structs.h>
 
 
 
//BlueprintGeneratedClass BP_FX_ButterFlyPt.BP_FX_ButterFlyPt_C Size 668
// Inherited 544 bytes 
class ABP_FX_ButterFlyPt_C : public AActor
{

 public: 
	struct FPointerToUberGraphFrame UberGraphFrame;  // Offset: 544 Size: 8
	struct UParticleSystemComponent* PS_BG_ButterFlyPt;  // Offset: 552 Size: 8
	struct UTextRenderComponent* TextRender;  // Offset: 560 Size: 8
	struct USphereComponent* Sphere;  // Offset: 568 Size: 8
	struct USceneComponent* DefaultSceneRoot;  // Offset: 576 Size: 8
	struct UMaterialInstanceDynamic* Mat_ButterFlyA;  // Offset: 584 Size: 8
	float ButterFly_Str;  // Offset: 592 Size: 4
	float ButterFly_Pow;  // Offset: 596 Size: 4
	struct UTexture* ButterFlyTex;  // Offset: 600 Size: 8
	struct FLinearColor ButterFly_12XYAdd;  // Offset: 608 Size: 16
	float ButterFlyTex_Rot;  // Offset: 624 Size: 4
	float WPO_YScale;  // Offset: 628 Size: 4
	float WPO_ZScale;  // Offset: 632 Size: 4
	float ButterFlySpawn;  // Offset: 636 Size: 4
	float ButterFlySizeScale;  // Offset: 640 Size: 4
	float ButterFlyRadius;  // Offset: 644 Size: 4
	float ButterFly_AttractorStr;  // Offset: 648 Size: 4
	struct FLinearColor ButterFly_Color;  // Offset: 652 Size: 16



 // Functions 
 public:
	void UserConstructionScript(); // Function BP_FX_ButterFlyPt.BP_FX_ButterFlyPt_C.UserConstructionScript
	void ReceiveBeginPlay(); // Function BP_FX_ButterFlyPt.BP_FX_ButterFlyPt_C.ReceiveBeginPlay
	void ExecuteUbergraph_BP_FX_ButterFlyPt(int32_t EntryPoint); // Function BP_FX_ButterFlyPt.BP_FX_ButterFlyPt_C.ExecuteUbergraph_BP_FX_ButterFlyPt
}; 
 
 


