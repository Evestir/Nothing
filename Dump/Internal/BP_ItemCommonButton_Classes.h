#pragma once 
#include <BP_ItemCommonButton_Structs.h>
 
 
 
//WidgetBlueprintGeneratedClass BP_ItemCommonButton.BP_ItemCommonButton_C Size 1096
// Inherited 1000 bytes 
class UBP_ItemCommonButton_C : public UButtonTemplate
{

 public: 
	struct FPointerToUberGraphFrame UberGraphFrame;  // Offset: 1000 Size: 8
	struct UWidgetAnimation* Anim_UnFocus;  // Offset: 1008 Size: 8
	struct UWidgetAnimation* Anim_Focus;  // Offset: 1016 Size: 8
	struct UImage* img_focus;  // Offset: 1024 Size: 8
	struct UKdTextBlock* KdTextBlock;  // Offset: 1032 Size: 8
	struct UKdTextBlock* KdTextBlock_2;  // Offset: 1040 Size: 8
	struct UKdTextBlock* KdTextBlock_3;  // Offset: 1048 Size: 8
	struct UKdTextBlock* KdTextBlock_6;  // Offset: 1056 Size: 8
	struct UKdTextBlock* KdTextBlock_115;  // Offset: 1064 Size: 8
	struct UBP_ButtonTemplate_C* V_BP_BtnFocused;  // Offset: 1072 Size: 8
	struct UWidgetSwitcher* V_FocusedEquipSwitcher;  // Offset: 1080 Size: 8
	struct UBP_ItemNewAlert_C* V_Notification;  // Offset: 1088 Size: 8



 // Functions 
 public:
	void PreConstruct(bool IsDesignTime); // Function BP_ItemCommonButton.BP_ItemCommonButton_C.PreConstruct
	void ExecuteUbergraph_BP_ItemCommonButton(int32_t EntryPoint); // Function BP_ItemCommonButton.BP_ItemCommonButton_C.ExecuteUbergraph_BP_ItemCommonButton
}; 
 
 


