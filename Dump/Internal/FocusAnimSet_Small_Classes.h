#pragma once 
#include <FocusAnimSet_Small_Structs.h>
 
 
 
//WidgetBlueprintGeneratedClass FocusAnimSet_Small.FocusAnimSet_Small_C Size 976
// Inherited 776 bytes 
class UFocusAnimSet_Small_C : public UAnimationPresetWidget
{

 public: 
	struct FPointerToUberGraphFrame UberGraphFrame;  // Offset: 776 Size: 8
	struct UWidgetAnimation* On_Unfocus;  // Offset: 784 Size: 8
	struct UWidgetAnimation* On_Focus;  // Offset: 792 Size: 8
	struct UImage* img_stroke;  // Offset: 800 Size: 8
	struct FMulticastInlineDelegate Event_Show;  // Offset: 808 Size: 16
	struct FMulticastInlineDelegate Event_Hide;  // Offset: 824 Size: 16
	struct FSlateBrush Material;  // Offset: 840 Size: 136



 // Functions 
 public:
	void SequenceEvent__ENTRYPOINTFocusAnimSet_Small_2(); // Function FocusAnimSet_Small.FocusAnimSet_Small_C.SequenceEvent__ENTRYPOINTFocusAnimSet_Small_2
	void SequenceEvent__ENTRYPOINTFocusAnimSet_Small_1(); // Function FocusAnimSet_Small.FocusAnimSet_Small_C.SequenceEvent__ENTRYPOINTFocusAnimSet_Small_1
	void Event_OnFocus(); // Function FocusAnimSet_Small.FocusAnimSet_Small_C.Event_OnFocus
	void Event_UnFocus(); // Function FocusAnimSet_Small.FocusAnimSet_Small_C.Event_UnFocus
	void PreConstruct(bool IsDesignTime); // Function FocusAnimSet_Small.FocusAnimSet_Small_C.PreConstruct
	void ExecuteUbergraph_FocusAnimSet_Small(int32_t EntryPoint); // Function FocusAnimSet_Small.FocusAnimSet_Small_C.ExecuteUbergraph_FocusAnimSet_Small
	void Event_Hide__DelegateSignature(); // Function FocusAnimSet_Small.FocusAnimSet_Small_C.Event_Hide__DelegateSignature
	void Event_Show__DelegateSignature(); // Function FocusAnimSet_Small.FocusAnimSet_Small_C.Event_Show__DelegateSignature
}; 
 
 


