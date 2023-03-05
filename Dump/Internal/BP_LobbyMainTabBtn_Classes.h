#pragma once 
#include <BP_LobbyMainTabBtn_Structs.h>
 
 
 
//WidgetBlueprintGeneratedClass BP_LobbyMainTabBtn.BP_LobbyMainTabBtn_C Size 1144
// Inherited 1000 bytes 
class UBP_LobbyMainTabBtn_C : public UButtonTemplate
{

 public: 
	struct FPointerToUberGraphFrame UberGraphFrame;  // Offset: 1000 Size: 8
	struct UWidgetAnimation* UnFocus;  // Offset: 1008 Size: 8
	struct UWidgetAnimation* Focus;  // Offset: 1016 Size: 8
	struct UWidgetAnimation* Anim_Enable;  // Offset: 1024 Size: 8
	struct UWidgetAnimation* Anim_Disable;  // Offset: 1032 Size: 8
	struct UWidgetAnimation* UnHover;  // Offset: 1040 Size: 8
	struct UWidgetAnimation* Hover;  // Offset: 1048 Size: 8
	struct UKdButtonImage* img_lock_Disable_Focus;  // Offset: 1056 Size: 8
	struct UKdButtonImage* img_lock_Disable_UnFocus;  // Offset: 1064 Size: 8
	struct USizeBox* SB_BtnName;  // Offset: 1072 Size: 8
	struct UKdTextBlock* txt_titleName_Disable_Focus;  // Offset: 1080 Size: 8
	struct UKdTextBlock* txt_titleName_Disable_UnFocus;  // Offset: 1088 Size: 8
	struct UBP_ItemNewAlert_C* V_Notification;  // Offset: 1096 Size: 8
	struct UWidgetSwitcher* WS_BtnNameTxt;  // Offset: 1104 Size: 8
	struct UWidgetSwitcher* WS_Lock;  // Offset: 1112 Size: 8
	struct FText I_txt_menu_name;  // Offset: 1120 Size: 24



 // Functions 
 public:
	void PreConstruct(bool IsDesignTime); // Function BP_LobbyMainTabBtn.BP_LobbyMainTabBtn_C.PreConstruct
	void ExecuteUbergraph_BP_LobbyMainTabBtn(int32_t EntryPoint); // Function BP_LobbyMainTabBtn.BP_LobbyMainTabBtn_C.ExecuteUbergraph_BP_LobbyMainTabBtn
}; 
 
 


