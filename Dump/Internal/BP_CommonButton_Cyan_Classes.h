#pragma once 
#include <BP_CommonButton_Cyan_Structs.h>
 
 
 
//WidgetBlueprintGeneratedClass BP_CommonButton_Cyan.BP_CommonButton_Cyan_C Size 1220
// Inherited 1000 bytes 
class UBP_CommonButton_Cyan_C : public UButtonTemplate
{

 public: 
	struct FPointerToUberGraphFrame UberGraphFrame;  // Offset: 1000 Size: 8
	struct UKdButtonImage* Btn_BG;  // Offset: 1008 Size: 8
	struct UFocusAnimSet_Stroke_CommonBtn_C* FocusAnimSet_Stroke_CommonBtn;  // Offset: 1016 Size: 8
	struct USizeBox* SB_BtnSize;  // Offset: 1024 Size: 8
	struct UKdTextBlock* V_ButtonText;  // Offset: 1032 Size: 8
	char pad_1040_1 : 7;  // Offset: 1040 Size: 1
	bool Inst_SizeSet : 1;  // Offset: 1040 Size: 1
	char pad_1041[3];  // Offset: 1041 Size: 3
	struct FVector2D BtnSize;  // Offset: 1044 Size: 8
	char pad_1052[4];  // Offset: 1052 Size: 4
	struct FSlateBrush BtnBG_Brush;  // Offset: 1056 Size: 136
	struct FText Inst_ButtonName;  // Offset: 1192 Size: 24
	float BtnSize_MinWidth;  // Offset: 1216 Size: 4



 // Functions 
 public:
	void PreConstruct(bool IsDesignTime); // Function BP_CommonButton_Cyan.BP_CommonButton_Cyan_C.PreConstruct
	void ExecuteUbergraph_BP_CommonButton_Cyan(int32_t EntryPoint); // Function BP_CommonButton_Cyan.BP_CommonButton_Cyan_C.ExecuteUbergraph_BP_CommonButton_Cyan
}; 
 
 


