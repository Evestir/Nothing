#pragma once 
#include <BP_BillboardLightShift_02_Structs.h>
 
 
 
//BlueprintGeneratedClass BP_BillboardLightShift_02.BP_BillboardLightShift_02_C Size 812
// Inherited 544 bytes 
class ABP_BillboardLightShift_02_C : public AActor
{

 public: 
	struct FPointerToUberGraphFrame UberGraphFrame;  // Offset: 544 Size: 8
	struct UTextRenderComponent* TextRender;  // Offset: 552 Size: 8
	struct UArrowComponent* Arrow;  // Offset: 560 Size: 8
	struct USceneComponent* DefaultSceneRoot1;  // Offset: 568 Size: 8
	struct UStaticMeshComponent* billboardFX;  // Offset: 576 Size: 8
	char pad_584_1 : 7;  // Offset: 584 Size: 1
	bool BillboradType_Selet : 1;  // Offset: 584 Size: 1
	char pad_585[3];  // Offset: 585 Size: 3
	float Base_Str;  // Offset: 588 Size: 4
	struct FLinearColor Base_Color1;  // Offset: 592 Size: 16
	struct FLinearColor Base_Color2;  // Offset: 608 Size: 16
	float Base_DepthFade;  // Offset: 624 Size: 4
	float LocationMask_Power;  // Offset: 628 Size: 4
	float LocationMask_Range;  // Offset: 632 Size: 4
	char pad_636[4];  // Offset: 636 Size: 4
	struct UTexture* Base_Tex1;  // Offset: 640 Size: 8
	struct UTexture* Base_Tex2;  // Offset: 648 Size: 8
	struct FLinearColor BaseTexPanner1,2;  // Offset: 656 Size: 16
	struct FLinearColor BaseTexScale1,2;  // Offset: 672 Size: 16
	float Base_Time;  // Offset: 688 Size: 4
	float Mask_Power;  // Offset: 692 Size: 4
	float Distortion_Str;  // Offset: 696 Size: 4
	char pad_700[4];  // Offset: 700 Size: 4
	struct UTexture* Distortion_Tex;  // Offset: 704 Size: 8
	enum class BP_Enum_BillboardLightShift Billboard_Type2;  // Offset: 712 Size: 1
	char pad_713[3];  // Offset: 713 Size: 3
	struct FLinearColor Distortion_Scale_Speed;  // Offset: 716 Size: 16
	float Distortion_Time;  // Offset: 732 Size: 4
	struct UTexture* MaskTex;  // Offset: 736 Size: 8
	float SphereMask_Radius;  // Offset: 744 Size: 4
	float SphereMask_Density;  // Offset: 748 Size: 4
	float LocationMask_Max;  // Offset: 752 Size: 4
	float MaskTex_Rot;  // Offset: 756 Size: 4
	int32_t Billboard_Type;  // Offset: 760 Size: 4
	char pad_764[4];  // Offset: 764 Size: 4
	struct UMaterialInstanceDynamic* Mat_BillboardFX;  // Offset: 768 Size: 8
	float BaseTex_Rot;  // Offset: 776 Size: 4
	float BaseTex_UVAddOffset;  // Offset: 780 Size: 4
	float Filcker_UnUse;  // Offset: 784 Size: 4
	struct FLinearColor Filcker_SinRemap;  // Offset: 788 Size: 16
	float FlickerTime;  // Offset: 804 Size: 4
	float DrawDistance;  // Offset: 808 Size: 4



 // Functions 
 public:
	void UserConstructionScript(); // Function BP_BillboardLightShift_02.BP_BillboardLightShift_02_C.UserConstructionScript
	void ReceiveBeginPlay(); // Function BP_BillboardLightShift_02.BP_BillboardLightShift_02_C.ReceiveBeginPlay
	void ExecuteUbergraph_BP_BillboardLightShift_02(int32_t EntryPoint); // Function BP_BillboardLightShift_02.BP_BillboardLightShift_02_C.ExecuteUbergraph_BP_BillboardLightShift_02
}; 
 
 


