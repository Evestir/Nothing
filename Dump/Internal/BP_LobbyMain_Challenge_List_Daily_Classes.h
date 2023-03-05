#pragma once 
#include <BP_LobbyMain_Challenge_List_Daily_Structs.h>
 
 
 
//WidgetBlueprintGeneratedClass BP_LobbyMain_Challenge_List_Daily.BP_LobbyMain_Challenge_List_Daily_C Size 672
// Inherited 608 bytes 
class UBP_LobbyMain_Challenge_List_Daily_C : public UUserWidget
{

 public: 
	struct UWidgetAnimation* Anim_ListChange02;  // Offset: 608 Size: 8
	struct UWidgetAnimation* Anim_ListChange01;  // Offset: 616 Size: 8
	struct UButton* Button_Test;  // Offset: 624 Size: 8
	struct UBP_LobbyMain_Challenge_ListItem_Daily_C* V_ChallengeInfo1;  // Offset: 632 Size: 8
	struct UBP_LobbyMain_Challenge_ListItem_Daily_C* V_ChallengeInfo2;  // Offset: 640 Size: 8
	struct UBP_LobbyMain_Challenge_TrophyStart_C* V_LobbyMain_Challenge_TrophyStart;  // Offset: 648 Size: 8
	struct FMulticastInlineDelegate Event_SendChalDailySetComplete;  // Offset: 656 Size: 16



 // Functions 
 public:
	void Event_SendChalDailySetComplete__DelegateSignature(); // Function BP_LobbyMain_Challenge_List_Daily.BP_LobbyMain_Challenge_List_Daily_C.Event_SendChalDailySetComplete__DelegateSignature
}; 
 
 


