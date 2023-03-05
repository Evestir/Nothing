#pragma once 
#include <BP_FX_BGLeafPtA_Structs.h>
 
 
 
//BlueprintGeneratedClass BP_FX_BGLeafPtA.BP_FX_BGLeafPtA_C Size 664
// Inherited 544 bytes 
class ABP_FX_BGLeafPtA_C : public AActor
{

 public: 
	struct FPointerToUberGraphFrame UberGraphFrame;  // Offset: 544 Size: 8
	struct UTextRenderComponent* TextRender;  // Offset: 552 Size: 8
	struct UArrowComponent* Arrow;  // Offset: 560 Size: 8
	struct USphereComponent* Sphere;  // Offset: 568 Size: 8
	struct UParticleSystemComponent* LeafPt;  // Offset: 576 Size: 8
	struct USceneComponent* DefaultSceneRoot;  // Offset: 584 Size: 8
	struct UMaterialInstanceDynamic* Mat_LeafPt;  // Offset: 592 Size: 8
	float LeafPt_Emissive;  // Offset: 600 Size: 4
	char pad_604[4];  // Offset: 604 Size: 4
	struct UTexture* LeafPtTex;  // Offset: 608 Size: 8
	float LeafPtSpawn;  // Offset: 616 Size: 4
	float LeafPtLifeTime;  // Offset: 620 Size: 4
	float LeafPtScaleAdd;  // Offset: 624 Size: 4
	struct FVector LeafPtVAdd;  // Offset: 628 Size: 12
	float LeafPtERadius;  // Offset: 640 Size: 4
	float LeafPtZLocation;  // Offset: 644 Size: 4
	struct FLinearColor LeafPtColor;  // Offset: 648 Size: 16



 // Functions 
 public:
	void UserConstructionScript(); // Function BP_FX_BGLeafPtA.BP_FX_BGLeafPtA_C.UserConstructionScript
	void ReceiveBeginPlay(); // Function BP_FX_BGLeafPtA.BP_FX_BGLeafPtA_C.ReceiveBeginPlay
	void ExecuteUbergraph_BP_FX_BGLeafPtA(int32_t EntryPoint); // Function BP_FX_BGLeafPtA.BP_FX_BGLeafPtA_C.ExecuteUbergraph_BP_FX_BGLeafPtA
}; 
 
 


