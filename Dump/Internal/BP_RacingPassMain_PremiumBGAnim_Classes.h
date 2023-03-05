#pragma once 
#include <BP_RacingPassMain_PremiumBGAnim_Structs.h>
 
 
 
//WidgetBlueprintGeneratedClass BP_RacingPassMain_PremiumBGAnim.BP_RacingPassMain_PremiumBGAnim_C Size 648
// Inherited 608 bytes 
class UBP_RacingPassMain_PremiumBGAnim_C : public UUserWidget
{

 public: 
	struct FPointerToUberGraphFrame UberGraphFrame;  // Offset: 608 Size: 8
	struct UWidgetAnimation* anim_PremiumPurchase_Idle;  // Offset: 616 Size: 8
	struct UWidgetAnimation* anim_PremiumPurchase_Show;  // Offset: 624 Size: 8
	struct UHorizontalBox* ain_HB;  // Offset: 632 Size: 8
	struct UWidgetSwitcher* V_BGSwitcher;  // Offset: 640 Size: 8



 // Functions 
 public:
	void PreConstruct(bool IsDesignTime); // Function BP_RacingPassMain_PremiumBGAnim.BP_RacingPassMain_PremiumBGAnim_C.PreConstruct
	void Construct(); // Function BP_RacingPassMain_PremiumBGAnim.BP_RacingPassMain_PremiumBGAnim_C.Construct
	void CustomEvent_1(); // Function BP_RacingPassMain_PremiumBGAnim.BP_RacingPassMain_PremiumBGAnim_C.CustomEvent_1
	void ExecuteUbergraph_BP_RacingPassMain_PremiumBGAnim(int32_t EntryPoint); // Function BP_RacingPassMain_PremiumBGAnim.BP_RacingPassMain_PremiumBGAnim_C.ExecuteUbergraph_BP_RacingPassMain_PremiumBGAnim
}; 
 
 


