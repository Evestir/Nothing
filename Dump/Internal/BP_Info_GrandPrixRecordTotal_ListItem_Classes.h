#pragma once 
#include <BP_Info_GrandPrixRecordTotal_ListItem_Structs.h>
 
 
 
//WidgetBlueprintGeneratedClass BP_Info_GrandPrixRecordTotal_ListItem.BP_Info_GrandPrixRecordTotal_ListItem_C Size 1088
// Inherited 1000 bytes 
class UBP_Info_GrandPrixRecordTotal_ListItem_C : public UButtonTemplate
{

 public: 
	struct FPointerToUberGraphFrame UberGraphFrame;  // Offset: 1000 Size: 8
	struct UImage* Image_256;  // Offset: 1008 Size: 8
	struct UInvalidationBox* InvalidationBox_20;  // Offset: 1016 Size: 8
	struct UKdTextBlock* V_ResultText;  // Offset: 1024 Size: 8
	struct UKdTextBlock* V_TitleText;  // Offset: 1032 Size: 8
	struct FText Total_Title_Inst;  // Offset: 1040 Size: 24
	struct FText Total_Result_Inst;  // Offset: 1064 Size: 24



 // Functions 
 public:
	void BP_OnEntryReleased(); // Function BP_Info_GrandPrixRecordTotal_ListItem.BP_Info_GrandPrixRecordTotal_ListItem_C.BP_OnEntryReleased
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function BP_Info_GrandPrixRecordTotal_ListItem.BP_Info_GrandPrixRecordTotal_ListItem_C.BP_OnItemExpansionChanged
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function BP_Info_GrandPrixRecordTotal_ListItem.BP_Info_GrandPrixRecordTotal_ListItem_C.BP_OnItemSelectionChanged
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function BP_Info_GrandPrixRecordTotal_ListItem.BP_Info_GrandPrixRecordTotal_ListItem_C.OnListItemObjectSet
	void PreConstruct(bool IsDesignTime); // Function BP_Info_GrandPrixRecordTotal_ListItem.BP_Info_GrandPrixRecordTotal_ListItem_C.PreConstruct
	void ExecuteUbergraph_BP_Info_GrandPrixRecordTotal_ListItem(int32_t EntryPoint); // Function BP_Info_GrandPrixRecordTotal_ListItem.BP_Info_GrandPrixRecordTotal_ListItem_C.ExecuteUbergraph_BP_Info_GrandPrixRecordTotal_ListItem
}; 
 
 


