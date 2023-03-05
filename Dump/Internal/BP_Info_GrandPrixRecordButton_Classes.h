#pragma once 
#include <BP_Info_GrandPrixRecordButton_Structs.h>
 
 
 
//WidgetBlueprintGeneratedClass BP_Info_GrandPrixRecordButton.BP_Info_GrandPrixRecordButton_C Size 1064
// Inherited 1000 bytes 
class UBP_Info_GrandPrixRecordButton_C : public UButtonTemplate
{

 public: 
	struct FPointerToUberGraphFrame UberGraphFrame;  // Offset: 1000 Size: 8
	struct UWidgetAnimation* UnFocus;  // Offset: 1008 Size: 8
	struct UWidgetAnimation* Focus;  // Offset: 1016 Size: 8
	struct UInvalidationBox* InvalidationBox_15;  // Offset: 1024 Size: 8
	struct UKdTextBlock* KdTextBlock_12;  // Offset: 1032 Size: 8
	struct UKdTextBlock* KdTextBlock_209;  // Offset: 1040 Size: 8
	struct UOverlay* OV_Stroke;  // Offset: 1048 Size: 8
	struct UKdTextBlock* V_Text_GameMode;  // Offset: 1056 Size: 8



 // Functions 
 public:
	void BP_OnEntryReleased(); // Function BP_Info_GrandPrixRecordButton.BP_Info_GrandPrixRecordButton_C.BP_OnEntryReleased
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function BP_Info_GrandPrixRecordButton.BP_Info_GrandPrixRecordButton_C.BP_OnItemExpansionChanged
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function BP_Info_GrandPrixRecordButton.BP_Info_GrandPrixRecordButton_C.BP_OnItemSelectionChanged
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function BP_Info_GrandPrixRecordButton.BP_Info_GrandPrixRecordButton_C.OnListItemObjectSet
	void PreConstruct(bool IsDesignTime); // Function BP_Info_GrandPrixRecordButton.BP_Info_GrandPrixRecordButton_C.PreConstruct
	void ExecuteUbergraph_BP_Info_GrandPrixRecordButton(int32_t EntryPoint); // Function BP_Info_GrandPrixRecordButton.BP_Info_GrandPrixRecordButton_C.ExecuteUbergraph_BP_Info_GrandPrixRecordButton
}; 
 
 


