#pragma once 
#include <BP_ItemCommonIcon_Structs.h>
 
 
 
//WidgetBlueprintGeneratedClass BP_ItemCommonIcon.BP_ItemCommonIcon_C Size 952
// Inherited 888 bytes 
class UBP_ItemCommonIcon_C : public UItemCommonIconWidget
{

 public: 
	struct UWidgetAnimation* Hover;  // Offset: 888 Size: 8
	struct UWidgetAnimation* Focus;  // Offset: 896 Size: 8
	struct UWidgetAnimation* Normal;  // Offset: 904 Size: 8
	struct UImage* Image_682;  // Offset: 912 Size: 8
	struct UImage* Image_BG;  // Offset: 920 Size: 8
	struct UImage* Image_BG_4;  // Offset: 928 Size: 8
	struct UOverlay* OV_Bundle_Text;  // Offset: 936 Size: 8
	struct UOverlay* OV_Text;  // Offset: 944 Size: 8



 // Functions 
 public:
	void ShowState_Hover(); // Function BP_ItemCommonIcon.BP_ItemCommonIcon_C.ShowState_Hover
	void ShowState_Focus(); // Function BP_ItemCommonIcon.BP_ItemCommonIcon_C.ShowState_Focus
	void ShowState_Normal(); // Function BP_ItemCommonIcon.BP_ItemCommonIcon_C.ShowState_Normal
}; 
 
 


