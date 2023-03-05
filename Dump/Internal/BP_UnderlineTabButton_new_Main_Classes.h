#pragma once 
#include <BP_UnderlineTabButton_new_Main_Structs.h>
 
 
 
//WidgetBlueprintGeneratedClass BP_UnderlineTabButton_new_Main.BP_UnderlineTabButton_new_Main_C Size 1072
// Inherited 1000 bytes 
class UBP_UnderlineTabButton_new_Main_C : public UButtonTemplate
{

 public: 
	struct FPointerToUberGraphFrame UberGraphFrame;  // Offset: 1000 Size: 8
	struct UWidgetAnimation* UnHover;  // Offset: 1008 Size: 8
	struct UWidgetAnimation* Hover;  // Offset: 1016 Size: 8
	struct UFocusAnimSet_Underline_B_C* FocusAnimSet_Underline_B;  // Offset: 1024 Size: 8
	struct UKdTextBlock* V_BtnName;  // Offset: 1032 Size: 8
	struct UBP_ItemNewAlert_C* V_Notification;  // Offset: 1040 Size: 8
	struct FText I_TabBtnName;  // Offset: 1048 Size: 24



 // Functions 
 public:
	void PreConstruct(bool IsDesignTime); // Function BP_UnderlineTabButton_new_Main.BP_UnderlineTabButton_new_Main_C.PreConstruct
	void ExecuteUbergraph_BP_UnderlineTabButton_new_Main(int32_t EntryPoint); // Function BP_UnderlineTabButton_new_Main.BP_UnderlineTabButton_new_Main_C.ExecuteUbergraph_BP_UnderlineTabButton_new_Main
}; 
 
 


