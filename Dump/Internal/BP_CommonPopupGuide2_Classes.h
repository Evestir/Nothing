#pragma once 
#include <BP_CommonPopupGuide2_Structs.h>
 
 
 
//WidgetBlueprintGeneratedClass BP_CommonPopupGuide2.BP_CommonPopupGuide2_C Size 684
// Inherited 632 bytes 
class UBP_CommonPopupGuide2_C : public UModeVictoryGuideWidget
{

 public: 
	struct FPointerToUberGraphFrame UberGraphFrame;  // Offset: 632 Size: 8
	struct UImage* Image;  // Offset: 640 Size: 8
	struct USizeBox* SB_TextSize;  // Offset: 648 Size: 8
	struct FText Inst_DescText;  // Offset: 656 Size: 24
	float Inst_TextBoxWidth;  // Offset: 680 Size: 4



 // Functions 
 public:
	void PreConstruct(bool IsDesignTime); // Function BP_CommonPopupGuide2.BP_CommonPopupGuide2_C.PreConstruct
	void ExecuteUbergraph_BP_CommonPopupGuide2(int32_t EntryPoint); // Function BP_CommonPopupGuide2.BP_CommonPopupGuide2_C.ExecuteUbergraph_BP_CommonPopupGuide2
}; 
 
 


