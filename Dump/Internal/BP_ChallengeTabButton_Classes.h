#pragma once 
#include <BP_ChallengeTabButton_Structs.h>
 
 
 
//WidgetBlueprintGeneratedClass BP_ChallengeTabButton.BP_ChallengeTabButton_C Size 1568
// Inherited 1000 bytes 
class UBP_ChallengeTabButton_C : public UButtonTemplate
{

 public: 
	struct FPointerToUberGraphFrame UberGraphFrame;  // Offset: 1000 Size: 8
	struct UWidgetAnimation* Enable;  // Offset: 1008 Size: 8
	struct UWidgetAnimation* disable;  // Offset: 1016 Size: 8
	struct UWidgetAnimation* UnFocus;  // Offset: 1024 Size: 8
	struct UWidgetAnimation* Focus;  // Offset: 1032 Size: 8
	struct UFocusAnimSet_Stroke_C* FocusAnimSet_Stroke;  // Offset: 1040 Size: 8
	struct UImage* Image_309;  // Offset: 1048 Size: 8
	struct UImage* img_bg;  // Offset: 1056 Size: 8
	struct UImage* img_BtnImage;  // Offset: 1064 Size: 8
	struct UImage* img_chal_Picto;  // Offset: 1072 Size: 8
	struct UKdTextBlock* KdTextBlock_SeasonOff;  // Offset: 1080 Size: 8
	struct UNamedSlot* SubButtonSlot;  // Offset: 1088 Size: 8
	struct UKdTextBlock* txt_BtnName;  // Offset: 1096 Size: 8
	char pad_1104_1 : 7;  // Offset: 1104 Size: 1
	bool Inst_IsPremium : 1;  // Offset: 1104 Size: 1
	char pad_1105[7];  // Offset: 1105 Size: 7
	struct FSlateBrush Inst_ImageBG;  // Offset: 1112 Size: 136
	struct FSlateBrush Inst_ImageBtn;  // Offset: 1248 Size: 136
	struct FText Inst_Text_BtnName;  // Offset: 1384 Size: 24
	struct FSlateBrush Inst_ImageChalPicto;  // Offset: 1408 Size: 136
	struct FText Inst_Text_SeasonOff;  // Offset: 1544 Size: 24



 // Functions 
 public:
	void PreConstruct(bool IsDesignTime); // Function BP_ChallengeTabButton.BP_ChallengeTabButton_C.PreConstruct
	void ExecuteUbergraph_BP_ChallengeTabButton(int32_t EntryPoint); // Function BP_ChallengeTabButton.BP_ChallengeTabButton_C.ExecuteUbergraph_BP_ChallengeTabButton
}; 
 
 


