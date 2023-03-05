#pragma once 
#include <BP_LobbyMain_Challenge_ListItem_SeasonOff_Structs.h>
 
 
 
//WidgetBlueprintGeneratedClass BP_LobbyMain_Challenge_ListItem_SeasonOff.BP_LobbyMain_Challenge_ListItem_SeasonOff_C Size 648
// Inherited 608 bytes 
class UBP_LobbyMain_Challenge_ListItem_SeasonOff_C : public UUserWidget
{

 public: 
	struct FPointerToUberGraphFrame UberGraphFrame;  // Offset: 608 Size: 8
	struct UWidgetAnimation* Anim_Init;  // Offset: 616 Size: 8
	struct UWidgetAnimation* Anim_Complete;  // Offset: 624 Size: 8
	struct FMulticastInlineDelegate Event_SendChalDailyComplete;  // Offset: 632 Size: 16



 // Functions 
 public:
	void SequenceEvent__ENTRYPOINTBP_LobbyMain_Challenge_ListItem_SeasonOff_1(); // Function BP_LobbyMain_Challenge_ListItem_SeasonOff.BP_LobbyMain_Challenge_ListItem_SeasonOff_C.SequenceEvent__ENTRYPOINTBP_LobbyMain_Challenge_ListItem_SeasonOff_1
	void PlayCompleteCover(); // Function BP_LobbyMain_Challenge_ListItem_SeasonOff.BP_LobbyMain_Challenge_ListItem_SeasonOff_C.PlayCompleteCover
	void BP_OnEntryReleased(); // Function BP_LobbyMain_Challenge_ListItem_SeasonOff.BP_LobbyMain_Challenge_ListItem_SeasonOff_C.BP_OnEntryReleased
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function BP_LobbyMain_Challenge_ListItem_SeasonOff.BP_LobbyMain_Challenge_ListItem_SeasonOff_C.BP_OnItemExpansionChanged
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function BP_LobbyMain_Challenge_ListItem_SeasonOff.BP_LobbyMain_Challenge_ListItem_SeasonOff_C.BP_OnItemSelectionChanged
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function BP_LobbyMain_Challenge_ListItem_SeasonOff.BP_LobbyMain_Challenge_ListItem_SeasonOff_C.OnListItemObjectSet
	void Event_ChalDailyComplete(); // Function BP_LobbyMain_Challenge_ListItem_SeasonOff.BP_LobbyMain_Challenge_ListItem_SeasonOff_C.Event_ChalDailyComplete
	void ExecuteUbergraph_BP_LobbyMain_Challenge_ListItem_SeasonOff(int32_t EntryPoint); // Function BP_LobbyMain_Challenge_ListItem_SeasonOff.BP_LobbyMain_Challenge_ListItem_SeasonOff_C.ExecuteUbergraph_BP_LobbyMain_Challenge_ListItem_SeasonOff
	void Event_SendChalDailyComplete__DelegateSignature(); // Function BP_LobbyMain_Challenge_ListItem_SeasonOff.BP_LobbyMain_Challenge_ListItem_SeasonOff_C.Event_SendChalDailyComplete__DelegateSignature
}; 
 
 


