#pragma once 
#include <BP_LobbyMain_Challenge_PremiumPass_Structs.h>
 
 
 
//WidgetBlueprintGeneratedClass BP_LobbyMain_Challenge_PremiumPass.BP_LobbyMain_Challenge_PremiumPass_C Size 648
// Inherited 608 bytes 
class UBP_LobbyMain_Challenge_PremiumPass_C : public UUserWidget
{

 public: 
	struct FPointerToUberGraphFrame UberGraphFrame;  // Offset: 608 Size: 8
	struct UWidgetAnimation* Anim_PassLevelUp;  // Offset: 616 Size: 8
	struct UWidgetAnimation* Anim_GetComplete;  // Offset: 624 Size: 8
	struct UOverlay* OV_Eff;  // Offset: 632 Size: 8
	struct UBP_ButtonTemplate_C* V_ButtonTemplate;  // Offset: 640 Size: 8



 // Functions 
 public:
	void SequenceEvent__ENTRYPOINTBP_LobbyMain_Challenge_PremiumPass_1(); // Function BP_LobbyMain_Challenge_PremiumPass.BP_LobbyMain_Challenge_PremiumPass_C.SequenceEvent__ENTRYPOINTBP_LobbyMain_Challenge_PremiumPass_1
	void PlayPassGlitter(); // Function BP_LobbyMain_Challenge_PremiumPass.BP_LobbyMain_Challenge_PremiumPass_C.PlayPassGlitter
	void PreConstruct(bool IsDesignTime); // Function BP_LobbyMain_Challenge_PremiumPass.BP_LobbyMain_Challenge_PremiumPass_C.PreConstruct
	void ExecuteUbergraph_BP_LobbyMain_Challenge_PremiumPass(int32_t EntryPoint); // Function BP_LobbyMain_Challenge_PremiumPass.BP_LobbyMain_Challenge_PremiumPass_C.ExecuteUbergraph_BP_LobbyMain_Challenge_PremiumPass
}; 
 
 


