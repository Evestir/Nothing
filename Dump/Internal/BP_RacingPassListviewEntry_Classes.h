#pragma once 
#include <BP_RacingPassListviewEntry_Structs.h>
 
 
 
//WidgetBlueprintGeneratedClass BP_RacingPassListviewEntry.BP_RacingPassListviewEntry_C Size 648
// Inherited 608 bytes 
class UBP_RacingPassListviewEntry_C : public UUserWidget
{

 public: 
	struct FPointerToUberGraphFrame UberGraphFrame;  // Offset: 608 Size: 8
	struct UWidgetAnimation* Anim_UnFocus;  // Offset: 616 Size: 8
	struct UWidgetAnimation* Anim_Focus;  // Offset: 624 Size: 8
	struct UBP_RacingPassItem_C* V_PremiumRewardItem;  // Offset: 632 Size: 8
	struct UVerticalBox* VB_Focus;  // Offset: 640 Size: 8



 // Functions 
 public:
	void BP_OnEntryReleased(); // Function BP_RacingPassListviewEntry.BP_RacingPassListviewEntry_C.BP_OnEntryReleased
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function BP_RacingPassListviewEntry.BP_RacingPassListviewEntry_C.BP_OnItemExpansionChanged
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function BP_RacingPassListviewEntry.BP_RacingPassListviewEntry_C.BP_OnItemSelectionChanged
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function BP_RacingPassListviewEntry.BP_RacingPassListviewEntry_C.OnListItemObjectSet
	void PreConstruct(bool IsDesignTime); // Function BP_RacingPassListviewEntry.BP_RacingPassListviewEntry_C.PreConstruct
	void ExecuteUbergraph_BP_RacingPassListviewEntry(int32_t EntryPoint); // Function BP_RacingPassListviewEntry.BP_RacingPassListviewEntry_C.ExecuteUbergraph_BP_RacingPassListviewEntry
}; 
 
 


