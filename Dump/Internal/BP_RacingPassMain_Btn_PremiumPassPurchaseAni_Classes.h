#pragma once 
#include <BP_RacingPassMain_Btn_PremiumPassPurchaseAni_Structs.h>
 
 
 
//WidgetBlueprintGeneratedClass BP_RacingPassMain_Btn_PremiumPassPurchaseAni.BP_RacingPassMain_Btn_PremiumPassPurchaseAni_C Size 1416
// Inherited 1280 bytes 
class UBP_RacingPassMain_Btn_PremiumPassPurchaseAni_C : public UKeyIconWidget
{

 public: 
	struct FPointerToUberGraphFrame UberGraphFrame;  // Offset: 1280 Size: 8
	struct UWidgetAnimation* Anim_Show;  // Offset: 1288 Size: 8
	struct UImage* ani_box_cyan;  // Offset: 1296 Size: 8
	struct UImage* ani_line_Bottom;  // Offset: 1304 Size: 8
	struct UImage* ani_line_Top;  // Offset: 1312 Size: 8
	struct UImage* ani_moveline;  // Offset: 1320 Size: 8
	struct UImage* img_diagonalLine;  // Offset: 1328 Size: 8
	struct UOverlay* String_PC_KEY;  // Offset: 1336 Size: 8
	struct UKdTextBlock* txt_BtnName;  // Offset: 1344 Size: 8
	struct UBP_KdSoundWidget_C* V_BP_KdSoundWidget;  // Offset: 1352 Size: 8
	struct UKdButtonImage* V_KeyDualShock;  // Offset: 1360 Size: 8
	struct UKdButtonImage* V_KeyPC;  // Offset: 1368 Size: 8
	struct UKdButtonImage* V_KeyXBox;  // Offset: 1376 Size: 8
	struct UOverlay* V_Overlay_All;  // Offset: 1384 Size: 8
	struct FText Inst_BtnName;  // Offset: 1392 Size: 24



 // Functions 
 public:
	void SequenceEvent__ENTRYPOINTBP_RacingPassMain_Btn_PremiumPassPurchaseAni_3(struct UBP_KdSoundWidget_C* BP_KdSoundWidget); // Function BP_RacingPassMain_Btn_PremiumPassPurchaseAni.BP_RacingPassMain_Btn_PremiumPassPurchaseAni_C.SequenceEvent__ENTRYPOINTBP_RacingPassMain_Btn_PremiumPassPurchaseAni_3
	void SequenceEvent__ENTRYPOINTBP_RacingPassMain_Btn_PremiumPassPurchaseAni_2(struct UBP_KdSoundWidget_C* BP_KdSoundWidget); // Function BP_RacingPassMain_Btn_PremiumPassPurchaseAni.BP_RacingPassMain_Btn_PremiumPassPurchaseAni_C.SequenceEvent__ENTRYPOINTBP_RacingPassMain_Btn_PremiumPassPurchaseAni_2
	void SequenceEvent__ENTRYPOINTBP_RacingPassMain_Btn_PremiumPassPurchaseAni_1(struct UBP_KdSoundWidget_C* BP_KdSoundWidget); // Function BP_RacingPassMain_Btn_PremiumPassPurchaseAni.BP_RacingPassMain_Btn_PremiumPassPurchaseAni_C.SequenceEvent__ENTRYPOINTBP_RacingPassMain_Btn_PremiumPassPurchaseAni_1
	void ResetAnim(); // Function BP_RacingPassMain_Btn_PremiumPassPurchaseAni.BP_RacingPassMain_Btn_PremiumPassPurchaseAni_C.ResetAnim
	void BP_KdSoundWidget_Event_1(struct UBP_KdSoundWidget_C* BP_KdSoundWidget); // Function BP_RacingPassMain_Btn_PremiumPassPurchaseAni.BP_RacingPassMain_Btn_PremiumPassPurchaseAni_C.BP_KdSoundWidget_Event_1
	void BP_KdSoundWidget_Event_2(struct UBP_KdSoundWidget_C* BP_KdSoundWidget); // Function BP_RacingPassMain_Btn_PremiumPassPurchaseAni.BP_RacingPassMain_Btn_PremiumPassPurchaseAni_C.BP_KdSoundWidget_Event_2
	void PreConstruct(bool IsDesignTime); // Function BP_RacingPassMain_Btn_PremiumPassPurchaseAni.BP_RacingPassMain_Btn_PremiumPassPurchaseAni_C.PreConstruct
	void ExecuteUbergraph_BP_RacingPassMain_Btn_PremiumPassPurchaseAni(int32_t EntryPoint); // Function BP_RacingPassMain_Btn_PremiumPassPurchaseAni.BP_RacingPassMain_Btn_PremiumPassPurchaseAni_C.ExecuteUbergraph_BP_RacingPassMain_Btn_PremiumPassPurchaseAni
}; 
 
 


