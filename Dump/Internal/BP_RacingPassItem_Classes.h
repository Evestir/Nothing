#pragma once 
#include <BP_RacingPassItem_Structs.h>
 
 
 
//WidgetBlueprintGeneratedClass BP_RacingPassItem.BP_RacingPassItem_C Size 1088
// Inherited 1008 bytes 
class UBP_RacingPassItem_C : public UKdListEntryButton
{

 public: 
	struct FPointerToUberGraphFrame UberGraphFrame;  // Offset: 1008 Size: 8
	struct UWidgetAnimation* Anim_OpenReward;  // Offset: 1016 Size: 8
	struct UWidgetAnimation* Anim_Purchase;  // Offset: 1024 Size: 8
	struct UWidgetAnimation* Anim_UnFocus;  // Offset: 1032 Size: 8
	struct UWidgetAnimation* Anim_Focus;  // Offset: 1040 Size: 8
	struct UBP_KdSoundWidget_C* BP_KdSoundWidget;  // Offset: 1048 Size: 8
	struct UFocusAnimSet_Stroke_C* FocusAnimSet_Stroke;  // Offset: 1056 Size: 8
	struct UOverlay* OV_Anim_OpenReward;  // Offset: 1064 Size: 8
	struct UOverlay* OV_Anim_Purchase;  // Offset: 1072 Size: 8
	struct UImage* Right;  // Offset: 1080 Size: 8



 // Functions 
 public:
	void SequenceEvent__ENTRYPOINTBP_RacingPassItem_2(struct UBP_KdSoundWidget_C* BP_KdSoundWidget); // Function BP_RacingPassItem.BP_RacingPassItem_C.SequenceEvent__ENTRYPOINTBP_RacingPassItem_2
	void SequenceEvent__ENTRYPOINTBP_RacingPassItem_1(struct UBP_KdSoundWidget_C* BP_KdSoundWidget); // Function BP_RacingPassItem.BP_RacingPassItem_C.SequenceEvent__ENTRYPOINTBP_RacingPassItem_1
	void BP_OnEntryReleased(); // Function BP_RacingPassItem.BP_RacingPassItem_C.BP_OnEntryReleased
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function BP_RacingPassItem.BP_RacingPassItem_C.BP_OnItemExpansionChanged
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function BP_RacingPassItem.BP_RacingPassItem_C.BP_OnItemSelectionChanged
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function BP_RacingPassItem.BP_RacingPassItem_C.OnListItemObjectSet
	void BP_KdSoundWidget_Event_1(struct UBP_KdSoundWidget_C* BP_KdSoundWidget); // Function BP_RacingPassItem.BP_RacingPassItem_C.BP_KdSoundWidget_Event_1
	void BP_KdSoundWidget_Event_2(struct UBP_KdSoundWidget_C* BP_KdSoundWidget); // Function BP_RacingPassItem.BP_RacingPassItem_C.BP_KdSoundWidget_Event_2
	void PreConstruct(bool IsDesignTime); // Function BP_RacingPassItem.BP_RacingPassItem_C.PreConstruct
	void ExecuteUbergraph_BP_RacingPassItem(int32_t EntryPoint); // Function BP_RacingPassItem.BP_RacingPassItem_C.ExecuteUbergraph_BP_RacingPassItem
}; 
 
 


