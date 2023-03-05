#pragma once 
#include <BP_AttendanceMain_ItemBox_Structs.h>
 
 
 
//WidgetBlueprintGeneratedClass BP_AttendanceMain_ItemBox.BP_AttendanceMain_ItemBox_C Size 1152
// Inherited 1000 bytes 
class UBP_AttendanceMain_ItemBox_C : public UButtonTemplate
{

 public: 
	struct FPointerToUberGraphFrame UberGraphFrame;  // Offset: 1000 Size: 8
	struct UWidgetAnimation* On_Unfocus;  // Offset: 1008 Size: 8
	struct UWidgetAnimation* On_Focus;  // Offset: 1016 Size: 8
	struct UImage* Image_2;  // Offset: 1024 Size: 8
	struct UImage* Image_98;  // Offset: 1032 Size: 8
	struct UImage* Image_148;  // Offset: 1040 Size: 8
	struct UImage* Image_277;  // Offset: 1048 Size: 8
	struct UKdButtonImage* KdButtonImage;  // Offset: 1056 Size: 8
	struct UKdButtonImage* KdButtonImage_79;  // Offset: 1064 Size: 8
	struct UKdButtonImage* KdButtonImage_102;  // Offset: 1072 Size: 8
	struct UKdTextBlock* KdTextBlock;  // Offset: 1080 Size: 8
	struct UKdTextBlock* KdTextBlock_2;  // Offset: 1088 Size: 8
	struct UKdTextBlock* KdTextBlock_3;  // Offset: 1096 Size: 8
	struct UOverlay* OV_FocusBack;  // Offset: 1104 Size: 8
	struct UOverlay* OV_ItemBox;  // Offset: 1112 Size: 8
	struct UBP_ItemCommonIcon_C* V_BP_ItemCommonIcon;  // Offset: 1120 Size: 8
	struct UWidgetSwitcher* V_ButtonStatusSwitcher;  // Offset: 1128 Size: 8
	struct UKdTextBlock* V_DateText;  // Offset: 1136 Size: 8
	struct UWidgetSwitcher* V_ItemStatusSwitcher;  // Offset: 1144 Size: 8



 // Functions 
 public:
	void BP_OnEntryReleased(); // Function BP_AttendanceMain_ItemBox.BP_AttendanceMain_ItemBox_C.BP_OnEntryReleased
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function BP_AttendanceMain_ItemBox.BP_AttendanceMain_ItemBox_C.BP_OnItemExpansionChanged
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function BP_AttendanceMain_ItemBox.BP_AttendanceMain_ItemBox_C.BP_OnItemSelectionChanged
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function BP_AttendanceMain_ItemBox.BP_AttendanceMain_ItemBox_C.OnListItemObjectSet
	void PreConstruct(bool IsDesignTime); // Function BP_AttendanceMain_ItemBox.BP_AttendanceMain_ItemBox_C.PreConstruct
	void ExecuteUbergraph_BP_AttendanceMain_ItemBox(int32_t EntryPoint); // Function BP_AttendanceMain_ItemBox.BP_AttendanceMain_ItemBox_C.ExecuteUbergraph_BP_AttendanceMain_ItemBox
}; 
 
 


