#pragma once 
#include <FocusAnimSet_Stroke_CommonBtn_Structs.h>
 
 
 
//WidgetBlueprintGeneratedClass FocusAnimSet_Stroke_CommonBtn.FocusAnimSet_Stroke_CommonBtn_C Size 960
// Inherited 776 bytes 
class UFocusAnimSet_Stroke_CommonBtn_C : public UAnimationPresetWidget
{

 public: 
	struct FPointerToUberGraphFrame UberGraphFrame;  // Offset: 776 Size: 8
	struct UWidgetAnimation* On_Unfocus;  // Offset: 784 Size: 8
	struct UWidgetAnimation* On_Focus;  // Offset: 792 Size: 8
	struct UBP_KdSoundWidget_C* BP_KdSoundWidget;  // Offset: 800 Size: 8
	struct UImage* img_stroke;  // Offset: 808 Size: 8
	struct UOverlay* Overlay_63;  // Offset: 816 Size: 8
	struct FSlateBrush Inst_ImgStroke;  // Offset: 824 Size: 136



 // Functions 
 public:
	void SequenceEvent__ENTRYPOINTFocusAnimSet_Stroke_CommonBtn_1(struct UBP_KdSoundWidget_C* BP_KdSoundWidget); // Function FocusAnimSet_Stroke_CommonBtn.FocusAnimSet_Stroke_CommonBtn_C.SequenceEvent__ENTRYPOINTFocusAnimSet_Stroke_CommonBtn_1
	void BP_KdSoundWidget_Event_1(struct UBP_KdSoundWidget_C* BP_KdSoundWidget); // Function FocusAnimSet_Stroke_CommonBtn.FocusAnimSet_Stroke_CommonBtn_C.BP_KdSoundWidget_Event_1
	void PreConstruct(bool IsDesignTime); // Function FocusAnimSet_Stroke_CommonBtn.FocusAnimSet_Stroke_CommonBtn_C.PreConstruct
	void ExecuteUbergraph_FocusAnimSet_Stroke_CommonBtn(int32_t EntryPoint); // Function FocusAnimSet_Stroke_CommonBtn.FocusAnimSet_Stroke_CommonBtn_C.ExecuteUbergraph_FocusAnimSet_Stroke_CommonBtn
}; 
 
 


