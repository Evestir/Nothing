#pragma once 
#include <FocusAnimSet_Stroke_Structs.h>
 
 
 
//WidgetBlueprintGeneratedClass FocusAnimSet_Stroke.FocusAnimSet_Stroke_C Size 952
// Inherited 776 bytes 
class UFocusAnimSet_Stroke_C : public UAnimationPresetWidget
{

 public: 
	struct FPointerToUberGraphFrame UberGraphFrame;  // Offset: 776 Size: 8
	struct UWidgetAnimation* On_Unfocus;  // Offset: 784 Size: 8
	struct UWidgetAnimation* On_Focus;  // Offset: 792 Size: 8
	struct UImage* img_stroke;  // Offset: 800 Size: 8
	struct UOverlay* Overlay_63;  // Offset: 808 Size: 8
	struct FSlateBrush Inst_ImgStroke;  // Offset: 816 Size: 136



 // Functions 
 public:
	void PreConstruct(bool IsDesignTime); // Function FocusAnimSet_Stroke.FocusAnimSet_Stroke_C.PreConstruct
	void ExecuteUbergraph_FocusAnimSet_Stroke(int32_t EntryPoint); // Function FocusAnimSet_Stroke.FocusAnimSet_Stroke_C.ExecuteUbergraph_FocusAnimSet_Stroke
}; 
 
 


