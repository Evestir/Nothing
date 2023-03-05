#pragma once 
#include <FocusAnimSet_Underline_Structs.h>
 
 
 
//WidgetBlueprintGeneratedClass FocusAnimSet_Underline.FocusAnimSet_Underline_C Size 824
// Inherited 776 bytes 
class UFocusAnimSet_Underline_C : public UAnimationPresetWidget
{

 public: 
	struct FPointerToUberGraphFrame UberGraphFrame;  // Offset: 776 Size: 8
	struct UWidgetAnimation* On_Unchecked;  // Offset: 784 Size: 8
	struct UWidgetAnimation* On_Unfocus;  // Offset: 792 Size: 8
	struct UWidgetAnimation* On_Focus;  // Offset: 800 Size: 8
	struct UBP_KdSoundWidget_C* BP_KdSoundWidget;  // Offset: 808 Size: 8
	struct UImage* Image;  // Offset: 816 Size: 8



 // Functions 
 public:
	void SequenceEvent__ENTRYPOINTFocusAnimSet_Underline_1(struct UBP_KdSoundWidget_C* BP_KdSoundWidget); // Function FocusAnimSet_Underline.FocusAnimSet_Underline_C.SequenceEvent__ENTRYPOINTFocusAnimSet_Underline_1
	void BP_KdSoundWidget_Event_1(struct UBP_KdSoundWidget_C* BP_KdSoundWidget); // Function FocusAnimSet_Underline.FocusAnimSet_Underline_C.BP_KdSoundWidget_Event_1
	void ExecuteUbergraph_FocusAnimSet_Underline(int32_t EntryPoint); // Function FocusAnimSet_Underline.FocusAnimSet_Underline_C.ExecuteUbergraph_FocusAnimSet_Underline
}; 
 
 


