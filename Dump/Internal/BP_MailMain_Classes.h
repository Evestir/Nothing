#pragma once 
#include <BP_MailMain_Structs.h>
 
 
 
//WidgetBlueprintGeneratedClass BP_MailMain.BP_MailMain_C Size 960
// Inherited 800 bytes 
class UBP_MailMain_C : public UC_MailPageWidget
{

 public: 
	struct FPointerToUberGraphFrame UberGraphFrame;  // Offset: 800 Size: 8
	struct UWidgetAnimation* GuideClose;  // Offset: 808 Size: 8
	struct UWidgetAnimation* GuideOpen;  // Offset: 816 Size: 8
	struct UWidgetAnimation* OnEnter;  // Offset: 824 Size: 8
	struct UBP_MailMainBtn_PartyFriends_Keyicon_C* BP_MailMainBtn_PartyFriends_Keyicon;  // Offset: 832 Size: 8
	struct UBP_PageKeySlotTemplate_new_C* BP_PageKeySlotTemplate_new;  // Offset: 840 Size: 8
	struct UImage* CircularThrobber_Loading;  // Offset: 848 Size: 8
	struct UImage* Image_126;  // Offset: 856 Size: 8
	struct UInvalidationBox* InvalidationBox_1;  // Offset: 864 Size: 8
	struct UInvalidationBox* InvalidationBox_2;  // Offset: 872 Size: 8
	struct UInvalidationBox* InvalidationBox_3;  // Offset: 880 Size: 8
	struct UInvalidationBox* InvalidationBox_4;  // Offset: 888 Size: 8
	struct UKdTextBlock* KdTextBlock_4;  // Offset: 896 Size: 8
	struct UKdTextBlock* KdTextBlock_10;  // Offset: 904 Size: 8
	struct UBP_Price_C* V_BP_Cash;  // Offset: 912 Size: 8
	struct UBP_Price_C* V_BP_KCOIN;  // Offset: 920 Size: 8
	struct UBP_Price_C* V_BP_Lucci;  // Offset: 928 Size: 8
	struct UBP_KeyIcon_Bottom_C* V_ChattingButton;  // Offset: 936 Size: 8
	struct UBP_KeyIcon_Bottom_C* V_KeyIcon_DeleteMailButton;  // Offset: 944 Size: 8
	struct UBP_CommonButtonKeyIcon_Cyan_C* V_KeyIcon_ReceiveAllMailButton;  // Offset: 952 Size: 8



 // Functions 
 public:
	void SequenceEvent__ENTRYPOINTBP_MailMain_3(); // Function BP_MailMain.BP_MailMain_C.SequenceEvent__ENTRYPOINTBP_MailMain_3
	void SequenceEvent__ENTRYPOINTBP_MailMain_2(); // Function BP_MailMain.BP_MailMain_C.SequenceEvent__ENTRYPOINTBP_MailMain_2
	void SequenceEvent__ENTRYPOINTBP_MailMain_1(); // Function BP_MailMain.BP_MailMain_C.SequenceEvent__ENTRYPOINTBP_MailMain_1
	void Event_GuideKeyShow(); // Function BP_MailMain.BP_MailMain_C.Event_GuideKeyShow
	void Event_GuideKeyHide(); // Function BP_MailMain.BP_MailMain_C.Event_GuideKeyHide
	void ExecuteUbergraph_BP_MailMain(int32_t EntryPoint); // Function BP_MailMain.BP_MailMain_C.ExecuteUbergraph_BP_MailMain
}; 
 
 


