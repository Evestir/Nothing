#pragma once 
#include <BP_MailInboxRow_Structs.h>
 
 
 
//WidgetBlueprintGeneratedClass BP_MailInboxRow.BP_MailInboxRow_C Size 1056
// Inherited 1000 bytes 
class UBP_MailInboxRow_C : public UButtonTemplate
{

 public: 
	struct FPointerToUberGraphFrame UberGraphFrame;  // Offset: 1000 Size: 8
	struct UImage* Image_728;  // Offset: 1008 Size: 8
	struct UInvalidationBox* InvalidationBox_1;  // Offset: 1016 Size: 8
	struct UBP_ItemCommonIcon_C* V_BP_ItemCommonIcon;  // Offset: 1024 Size: 8
	struct UBP_ItemNewAlert_C* V_Notification;  // Offset: 1032 Size: 8
	struct UWidgetSwitcher* V_SystemSwitcher;  // Offset: 1040 Size: 8
	struct UWidgetSwitcher* V_WidgetSwitcher_RemainTime;  // Offset: 1048 Size: 8



 // Functions 
 public:
	void PreConstruct(bool IsDesignTime); // Function BP_MailInboxRow.BP_MailInboxRow_C.PreConstruct
	void ExecuteUbergraph_BP_MailInboxRow(int32_t EntryPoint); // Function BP_MailInboxRow.BP_MailInboxRow_C.ExecuteUbergraph_BP_MailInboxRow
}; 
 
 


