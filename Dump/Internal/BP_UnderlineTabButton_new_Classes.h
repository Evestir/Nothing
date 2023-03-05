#pragma once 
#include <BP_UnderlineTabButton_new_Structs.h>
 
 
 
//WidgetBlueprintGeneratedClass BP_UnderlineTabButton_new.BP_UnderlineTabButton_new_C Size 1072
// Inherited 1000 bytes 
class UBP_UnderlineTabButton_new_C : public UButtonTemplate
{

 public: 
	struct FPointerToUberGraphFrame UberGraphFrame;  // Offset: 1000 Size: 8
	struct UWidgetAnimation* UnHover;  // Offset: 1008 Size: 8
	struct UWidgetAnimation* Hover;  // Offset: 1016 Size: 8
	struct UFocusAnimSet_Underline_C* FocusAnimSet_Underline;  // Offset: 1024 Size: 8
	struct UKdTextBlock* txt_BtnName;  // Offset: 1032 Size: 8
	struct UBP_ItemNewAlert_C* V_Notification;  // Offset: 1040 Size: 8
	struct FText I_TabBtnName;  // Offset: 1048 Size: 24



 // Functions 
 public:
	void PreConstruct(bool IsDesignTime); // Function BP_UnderlineTabButton_new.BP_UnderlineTabButton_new_C.PreConstruct
	void ExecuteUbergraph_BP_UnderlineTabButton_new(int32_t EntryPoint); // Function BP_UnderlineTabButton_new.BP_UnderlineTabButton_new_C.ExecuteUbergraph_BP_UnderlineTabButton_new
}; 
 
 


