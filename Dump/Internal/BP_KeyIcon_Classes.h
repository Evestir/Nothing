#pragma once 
#include <BP_KeyIcon_Structs.h>
 
 
 
//WidgetBlueprintGeneratedClass BP_KeyIcon.BP_KeyIcon_C Size 1368
// Inherited 1280 bytes 
class UBP_KeyIcon_C : public UKeyIconWidget
{

 public: 
	struct FPointerToUberGraphFrame UberGraphFrame;  // Offset: 1280 Size: 8
	struct UNamedSlot* H_Slot_Left;  // Offset: 1288 Size: 8
	struct UNamedSlot* H_Slot_Right;  // Offset: 1296 Size: 8
	struct UNamedSlot* Overlay_Slot;  // Offset: 1304 Size: 8
	struct UOverlay* String_PC_KEY;  // Offset: 1312 Size: 8
	struct UKdButtonImage* V_KeyDualShock;  // Offset: 1320 Size: 8
	struct UKdButtonImage* V_KeyPC;  // Offset: 1328 Size: 8
	struct UKdButtonImage* V_KeyXBox;  // Offset: 1336 Size: 8
	struct UBP_ItemNewAlert_C* V_Notification;  // Offset: 1344 Size: 8
	struct UNamedSlot* V_Slot_Bottom;  // Offset: 1352 Size: 8
	struct UNamedSlot* V_Slot_Top;  // Offset: 1360 Size: 8



 // Functions 
 public:
	void PreConstruct(bool IsDesignTime); // Function BP_KeyIcon.BP_KeyIcon_C.PreConstruct
	void ExecuteUbergraph_BP_KeyIcon(int32_t EntryPoint); // Function BP_KeyIcon.BP_KeyIcon_C.ExecuteUbergraph_BP_KeyIcon
}; 
 
 


