#pragma once 
#include <BP_LobbyMain_Challenge_ListItem_Premium_Structs.h>
 
 
 
//WidgetBlueprintGeneratedClass BP_LobbyMain_Challenge_ListItem_Premium.BP_LobbyMain_Challenge_ListItem_Premium_C Size 704
// Inherited 608 bytes 
class UBP_LobbyMain_Challenge_ListItem_Premium_C : public UUserWidget
{

 public: 
	struct FPointerToUberGraphFrame UberGraphFrame;  // Offset: 608 Size: 8
	struct UWidgetAnimation* Anim_Init;  // Offset: 616 Size: 8
	struct UWidgetAnimation* Anim_Complete;  // Offset: 624 Size: 8
	struct UImage* Image;  // Offset: 632 Size: 8
	struct UImage* Image_3;  // Offset: 640 Size: 8
	struct UImage* Image_5;  // Offset: 648 Size: 8
	struct UImage* Image_481;  // Offset: 656 Size: 8
	struct UKdTextBlock* KdTextBlock_312;  // Offset: 664 Size: 8
	struct UBP_ButtonTemplate_C* V_ButtonTemplate;  // Offset: 672 Size: 8
	struct UKdTextBlock* V_QuestCategoryTextBlock;  // Offset: 680 Size: 8
	struct FMulticastInlineDelegate Event_SendChalPremiumComplete;  // Offset: 688 Size: 16



 // Functions 
 public:
	void SequenceEvent__ENTRYPOINTBP_LobbyMain_Challenge_ListItem_Premium_1(); // Function BP_LobbyMain_Challenge_ListItem_Premium.BP_LobbyMain_Challenge_ListItem_Premium_C.SequenceEvent__ENTRYPOINTBP_LobbyMain_Challenge_ListItem_Premium_1
	void PlayCompleteCover(); // Function BP_LobbyMain_Challenge_ListItem_Premium.BP_LobbyMain_Challenge_ListItem_Premium_C.PlayCompleteCover
	void BP_OnEntryReleased(); // Function BP_LobbyMain_Challenge_ListItem_Premium.BP_LobbyMain_Challenge_ListItem_Premium_C.BP_OnEntryReleased
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function BP_LobbyMain_Challenge_ListItem_Premium.BP_LobbyMain_Challenge_ListItem_Premium_C.BP_OnItemExpansionChanged
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function BP_LobbyMain_Challenge_ListItem_Premium.BP_LobbyMain_Challenge_ListItem_Premium_C.BP_OnItemSelectionChanged
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function BP_LobbyMain_Challenge_ListItem_Premium.BP_LobbyMain_Challenge_ListItem_Premium_C.OnListItemObjectSet
	void Event_ChalPremiumComplete(); // Function BP_LobbyMain_Challenge_ListItem_Premium.BP_LobbyMain_Challenge_ListItem_Premium_C.Event_ChalPremiumComplete
	void ExecuteUbergraph_BP_LobbyMain_Challenge_ListItem_Premium(int32_t EntryPoint); // Function BP_LobbyMain_Challenge_ListItem_Premium.BP_LobbyMain_Challenge_ListItem_Premium_C.ExecuteUbergraph_BP_LobbyMain_Challenge_ListItem_Premium
	void Event_SendChalPremiumComplete__DelegateSignature(); // Function BP_LobbyMain_Challenge_ListItem_Premium.BP_LobbyMain_Challenge_ListItem_Premium_C.Event_SendChalPremiumComplete__DelegateSignature
}; 
 
 


