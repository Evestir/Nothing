#pragma once 
#include <BP_LobbyMain_Challenge_View_Structs.h>
 
 
 
//WidgetBlueprintGeneratedClass BP_LobbyMain_Challenge_View.BP_LobbyMain_Challenge_View_C Size 680
// Inherited 608 bytes 
class UBP_LobbyMain_Challenge_View_C : public UUserWidget
{

 public: 
	struct UWidgetAnimation* Anim_ChangeEvent;  // Offset: 608 Size: 8
	struct UWidgetAnimation* Anim_ChangePremiumPass;  // Offset: 616 Size: 8
	struct UBP_LobbyMain_Challenge_List_Daily_C* V_ChalList_Daily;  // Offset: 624 Size: 8
	struct UBP_LobbyMain_Challenge_List_Premium_C* V_ChalList_Premium;  // Offset: 632 Size: 8
	struct UWidgetSwitcher* V_WidgetSwitcher_Season;  // Offset: 640 Size: 8
	struct FMulticastInlineDelegate SendChalTrophySetCompleteNormal;  // Offset: 648 Size: 16
	struct FMulticastInlineDelegate SendChalTrophySetCompletePremium;  // Offset: 664 Size: 16



 // Functions 
 public:
	void SendChalTrophySetCompletePremium__DelegateSignature(); // Function BP_LobbyMain_Challenge_View.BP_LobbyMain_Challenge_View_C.SendChalTrophySetCompletePremium__DelegateSignature
	void SendChalTrophySetCompleteNormal__DelegateSignature(); // Function BP_LobbyMain_Challenge_View.BP_LobbyMain_Challenge_View_C.SendChalTrophySetCompleteNormal__DelegateSignature
}; 
 
 


