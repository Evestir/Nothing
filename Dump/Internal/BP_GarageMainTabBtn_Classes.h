#pragma once 
#include <BP_GarageMainTabBtn_Structs.h>
 
 
 
//WidgetBlueprintGeneratedClass BP_GarageMainTabBtn.BP_GarageMainTabBtn_C Size 1152
// Inherited 1000 bytes 
class UBP_GarageMainTabBtn_C : public UButtonTemplate
{

 public: 
	struct FPointerToUberGraphFrame UberGraphFrame;  // Offset: 1000 Size: 8
	struct UWidgetAnimation* UnFocus;  // Offset: 1008 Size: 8
	struct UWidgetAnimation* Focus;  // Offset: 1016 Size: 8
	struct UWidgetAnimation* Anim_LockImage;  // Offset: 1024 Size: 8
	struct UWidgetAnimation* Anim_Enable;  // Offset: 1032 Size: 8
	struct UWidgetAnimation* Anim_Disable;  // Offset: 1040 Size: 8
	struct UWidgetAnimation* UnHover;  // Offset: 1048 Size: 8
	struct UWidgetAnimation* Hover;  // Offset: 1056 Size: 8
	struct UKdButtonImage* img_lock_Disable_Focus;  // Offset: 1064 Size: 8
	struct UKdButtonImage* img_lock_Disable_UnFocus;  // Offset: 1072 Size: 8
	struct USizeBox* SB_BtnName;  // Offset: 1080 Size: 8
	struct UKdTextBlock* txt_titleName_Disable_Focus;  // Offset: 1088 Size: 8
	struct UKdTextBlock* txt_titleName_Disable_UnFocus;  // Offset: 1096 Size: 8
	struct UBP_ItemNewAlert_C* V_Notification;  // Offset: 1104 Size: 8
	struct UWidgetSwitcher* WS_BtnName;  // Offset: 1112 Size: 8
	struct UWidgetSwitcher* WS_Lock;  // Offset: 1120 Size: 8
	struct FText I_Text_BtnName;  // Offset: 1128 Size: 24



 // Functions 
 public:
	void PreConstruct(bool IsDesignTime); // Function BP_GarageMainTabBtn.BP_GarageMainTabBtn_C.PreConstruct
	void ExecuteUbergraph_BP_GarageMainTabBtn(int32_t EntryPoint); // Function BP_GarageMainTabBtn.BP_GarageMainTabBtn_C.ExecuteUbergraph_BP_GarageMainTabBtn
}; 
 
 


