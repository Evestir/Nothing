#pragma once 
#include <BP_RacingPassMain_Structs.h>
 
 
 
//WidgetBlueprintGeneratedClass BP_RacingPassMain.BP_RacingPassMain_C Size 1120
// Inherited 928 bytes 
class UBP_RacingPassMain_C : public UC_RacingPassPageWidget
{

 public: 
	struct FPointerToUberGraphFrame UberGraphFrame;  // Offset: 928 Size: 8
	struct UWidgetAnimation* GuideOpen;  // Offset: 936 Size: 8
	struct UWidgetAnimation* GuideClose;  // Offset: 944 Size: 8
	struct UWidgetAnimation* OnEnter;  // Offset: 952 Size: 8
	struct UBP_ItemViewBack_C* BP_ItemViewBack;  // Offset: 960 Size: 8
	struct UBP_RacingPassMain_PremiumSymbolBGAnim_C* BP_RacingPassMain_PremiumSymbolBGAnim;  // Offset: 968 Size: 8
	struct UKdButtonImage* Btn_BG;  // Offset: 976 Size: 8
	struct UImage* Image_126;  // Offset: 984 Size: 8
	struct UImage* Image_559;  // Offset: 992 Size: 8
	struct UImage* Image_965;  // Offset: 1000 Size: 8
	struct UImage* Image_CircularLoading;  // Offset: 1008 Size: 8
	struct UImage* img_Clock;  // Offset: 1016 Size: 8
	struct UKdTextBlock* KdTextBlock_10;  // Offset: 1024 Size: 8
	struct UBP_PageKeySlotTemplate_new_C* V_BP_PageKeySlotTemplate_new_Racing;  // Offset: 1032 Size: 8
	struct UKdTextBlock* V_ButtonText;  // Offset: 1040 Size: 8
	struct UBP_KeyIcon_Bottom_C* V_ChattingButton;  // Offset: 1048 Size: 8
	struct UWidgetSwitcher* V_EmoticonStickerEmblemBgSwitcher;  // Offset: 1056 Size: 8
	struct UBP_PageTitle_C* V_PageTitle;  // Offset: 1064 Size: 8
	struct UWidgetSwitcher* V_PremiumSymbolSwitcher;  // Offset: 1072 Size: 8
	struct UBP_RacingPassMain_Btn_PremiumPassPurchaseAni_C* V_PurchaseButton;  // Offset: 1080 Size: 8
	struct UWidgetSwitcher* V_RacingPassItemSwitcher;  // Offset: 1088 Size: 8
	struct UBP_RacingPassMain_PremiumBGAnim_C* V_RacingPassMain_PremiumBGAnim;  // Offset: 1096 Size: 8
	struct UKdListView* V_RewardListView;  // Offset: 1104 Size: 8
	struct UWidgetSwitcher* V_Switcher_ItemListBG_Premium;  // Offset: 1112 Size: 8



 // Functions 
 public:
	void SequenceEvent__ENTRYPOINTBP_RacingPassMain_4(); // Function BP_RacingPassMain.BP_RacingPassMain_C.SequenceEvent__ENTRYPOINTBP_RacingPassMain_4
	void SequenceEvent__ENTRYPOINTBP_RacingPassMain_3(); // Function BP_RacingPassMain.BP_RacingPassMain_C.SequenceEvent__ENTRYPOINTBP_RacingPassMain_3
	void SequenceEvent__ENTRYPOINTBP_RacingPassMain_2(); // Function BP_RacingPassMain.BP_RacingPassMain_C.SequenceEvent__ENTRYPOINTBP_RacingPassMain_2
	void SequenceEvent__ENTRYPOINTBP_RacingPassMain_1(); // Function BP_RacingPassMain.BP_RacingPassMain_C.SequenceEvent__ENTRYPOINTBP_RacingPassMain_1
	void Event_GuideKeyShow(); // Function BP_RacingPassMain.BP_RacingPassMain_C.Event_GuideKeyShow
	void Event_GuideKeyHide(); // Function BP_RacingPassMain.BP_RacingPassMain_C.Event_GuideKeyHide
	void Event_PurchaseButtonReset(); // Function BP_RacingPassMain.BP_RacingPassMain_C.Event_PurchaseButtonReset
	void ExecuteUbergraph_BP_RacingPassMain(int32_t EntryPoint); // Function BP_RacingPassMain.BP_RacingPassMain_C.ExecuteUbergraph_BP_RacingPassMain
}; 
 
 


