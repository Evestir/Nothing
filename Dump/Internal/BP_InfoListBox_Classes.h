#pragma once 
#include <BP_InfoListBox_Structs.h>
 
 
 
//WidgetBlueprintGeneratedClass BP_InfoListBox.BP_InfoListBox_C Size 1152
// Inherited 1000 bytes 
class UBP_InfoListBox_C : public UButtonTemplate
{

 public: 
	struct FPointerToUberGraphFrame UberGraphFrame;  // Offset: 1000 Size: 8
	struct UWidgetAnimation* UnFocus;  // Offset: 1008 Size: 8
	struct UWidgetAnimation* Focus;  // Offset: 1016 Size: 8
	struct UFocusAnimSet_Stroke_C* FocusAnimSet_Stroke;  // Offset: 1024 Size: 8
	struct UImage* Image;  // Offset: 1032 Size: 8
	struct UImage* Image_59;  // Offset: 1040 Size: 8
	struct UImage* Image_103;  // Offset: 1048 Size: 8
	struct UImage* Image_228;  // Offset: 1056 Size: 8
	struct UImage* Image_320;  // Offset: 1064 Size: 8
	struct UImage* Image_393;  // Offset: 1072 Size: 8
	struct UKdTextBlock* KdTextBlock;  // Offset: 1080 Size: 8
	struct UKdTextBlock* KdTextBlock_107;  // Offset: 1088 Size: 8
	struct UOverlay* OV_EventBox;  // Offset: 1096 Size: 8
	struct UBP_ItemCommonIcon_C* V_BP_ItemCommonIcon_Two1;  // Offset: 1104 Size: 8
	struct UBP_ItemCommonIcon_C* V_BP_ItemCommonIcon_Two2;  // Offset: 1112 Size: 8
	struct UVerticalBox* V_Item2;  // Offset: 1120 Size: 8
	struct UKdTextBlock* V_ItemName_Two1;  // Offset: 1128 Size: 8
	struct UKdTextBlock* V_ItemName_Two2;  // Offset: 1136 Size: 8
	struct UBP_ItemNewAlert_C* V_Notification;  // Offset: 1144 Size: 8



 // Functions 
 public:
	void BP_OnEntryReleased(); // Function BP_InfoListBox.BP_InfoListBox_C.BP_OnEntryReleased
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function BP_InfoListBox.BP_InfoListBox_C.BP_OnItemExpansionChanged
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function BP_InfoListBox.BP_InfoListBox_C.BP_OnItemSelectionChanged
	void PreConstruct(bool IsDesignTime); // Function BP_InfoListBox.BP_InfoListBox_C.PreConstruct
	void ExecuteUbergraph_BP_InfoListBox(int32_t EntryPoint); // Function BP_InfoListBox.BP_InfoListBox_C.ExecuteUbergraph_BP_InfoListBox
}; 
 
 


