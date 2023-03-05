#pragma once 
#include <FocusAnimSet_Underline_B_Structs.h>
 
 
 
//WidgetBlueprintGeneratedClass FocusAnimSet_Underline_B.FocusAnimSet_Underline_B_C Size 816
// Inherited 776 bytes 
class UFocusAnimSet_Underline_B_C : public UAnimationPresetWidget
{

 public: 
	struct FPointerToUberGraphFrame UberGraphFrame;  // Offset: 776 Size: 8
	struct UWidgetAnimation* On_Unchecked;  // Offset: 784 Size: 8
	struct UWidgetAnimation* On_Unfocus;  // Offset: 792 Size: 8
	struct UWidgetAnimation* On_Focus;  // Offset: 800 Size: 8
	struct UBP_KdSoundWidget_C* BP_KdSoundWidget;  // Offset: 808 Size: 8



 // Functions 
 public:
	void SequenceEvent__ENTRYPOINTFocusAnimSet_Underline_B_1(struct UBP_KdSoundWidget_C* BP_KdSoundWidget); // Function FocusAnimSet_Underline_B.FocusAnimSet_Underline_B_C.SequenceEvent__ENTRYPOINTFocusAnimSet_Underline_B_1
	void BP_KdSoundWidget_Event_1(struct UBP_KdSoundWidget_C* BP_KdSoundWidget); // Function FocusAnimSet_Underline_B.FocusAnimSet_Underline_B_C.BP_KdSoundWidget_Event_1
	void ExecuteUbergraph_FocusAnimSet_Underline_B(int32_t EntryPoint); // Function FocusAnimSet_Underline_B.FocusAnimSet_Underline_B_C.ExecuteUbergraph_FocusAnimSet_Underline_B
}; 
 
 


