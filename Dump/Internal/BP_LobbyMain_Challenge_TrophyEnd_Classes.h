#pragma once 
#include <BP_LobbyMain_Challenge_TrophyEnd_Structs.h>
 
 
 
//WidgetBlueprintGeneratedClass BP_LobbyMain_Challenge_TrophyEnd.BP_LobbyMain_Challenge_TrophyEnd_C Size 660
// Inherited 608 bytes 
class UBP_LobbyMain_Challenge_TrophyEnd_C : public UUserWidget
{

 public: 
	struct FPointerToUberGraphFrame UberGraphFrame;  // Offset: 608 Size: 8
	struct UWidgetAnimation* Anim_EndTrophy;  // Offset: 616 Size: 8
	struct UBP_KdSoundWidget_C* BP_KdSoundWidget;  // Offset: 624 Size: 8
	struct UKdTextBlock* KdTextBlock;  // Offset: 632 Size: 8
	struct UKdTextBlock* V_KdTextBlock_Reward;  // Offset: 640 Size: 8
	struct UWidgetSwitcher* V_WidgetSwitcher_BackLight;  // Offset: 648 Size: 8
	int32_t SetBackLight;  // Offset: 656 Size: 4



 // Functions 
 public:
	void SequenceEvent__ENTRYPOINTBP_LobbyMain_Challenge_TrophyEnd_2(struct UBP_KdSoundWidget_C* BP_KdSoundWidget); // Function BP_LobbyMain_Challenge_TrophyEnd.BP_LobbyMain_Challenge_TrophyEnd_C.SequenceEvent__ENTRYPOINTBP_LobbyMain_Challenge_TrophyEnd_2
	void SequenceEvent__ENTRYPOINTBP_LobbyMain_Challenge_TrophyEnd_1(struct UBP_KdSoundWidget_C* BP_KdSoundWidget); // Function BP_LobbyMain_Challenge_TrophyEnd.BP_LobbyMain_Challenge_TrophyEnd_C.SequenceEvent__ENTRYPOINTBP_LobbyMain_Challenge_TrophyEnd_1
	void BP_KdSoundWidget_Event_1(struct UBP_KdSoundWidget_C* BP_KdSoundWidget); // Function BP_LobbyMain_Challenge_TrophyEnd.BP_LobbyMain_Challenge_TrophyEnd_C.BP_KdSoundWidget_Event_1
	void BP_KdSoundWidget_Event_2(struct UBP_KdSoundWidget_C* BP_KdSoundWidget); // Function BP_LobbyMain_Challenge_TrophyEnd.BP_LobbyMain_Challenge_TrophyEnd_C.BP_KdSoundWidget_Event_2
	void ExecuteUbergraph_BP_LobbyMain_Challenge_TrophyEnd(int32_t EntryPoint); // Function BP_LobbyMain_Challenge_TrophyEnd.BP_LobbyMain_Challenge_TrophyEnd_C.ExecuteUbergraph_BP_LobbyMain_Challenge_TrophyEnd
}; 
 
 


