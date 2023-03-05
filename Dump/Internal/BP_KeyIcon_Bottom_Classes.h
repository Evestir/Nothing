#pragma once 
#include <BP_KeyIcon_Bottom_Structs.h>
 
 
 
//WidgetBlueprintGeneratedClass BP_KeyIcon_Bottom.BP_KeyIcon_Bottom_C Size 1364
// Inherited 1280 bytes 
class UBP_KeyIcon_Bottom_C : public UKeyIconWidget
{

 public: 
	struct FPointerToUberGraphFrame UberGraphFrame;  // Offset: 1280 Size: 8
	struct UNamedSlot* H_Slot_Right;  // Offset: 1288 Size: 8
	struct USpacer* Spacer_Left;  // Offset: 1296 Size: 8
	struct USpacer* Spacer_Right;  // Offset: 1304 Size: 8
	struct UOverlay* String_PC_KEY;  // Offset: 1312 Size: 8
	struct UKdButtonImage* V_KeyDualShock;  // Offset: 1320 Size: 8
	struct UKdButtonImage* V_KeyPC;  // Offset: 1328 Size: 8
	struct UKdButtonImage* V_KeyXBox;  // Offset: 1336 Size: 8
	struct UBP_ItemNewAlert_C* V_Notification;  // Offset: 1344 Size: 8
	char pad_1352_1 : 7;  // Offset: 1352 Size: 1
	bool Inst_UseRight : 1;  // Offset: 1352 Size: 1
	char pad_1353[3];  // Offset: 1353 Size: 3
	struct FVector2D Vector2D_Zero;  // Offset: 1356 Size: 8



 // Functions 
 public:
	void PreConstruct(bool IsDesignTime); // Function BP_KeyIcon_Bottom.BP_KeyIcon_Bottom_C.PreConstruct
	void ExecuteUbergraph_BP_KeyIcon_Bottom(int32_t EntryPoint); // Function BP_KeyIcon_Bottom.BP_KeyIcon_Bottom_C.ExecuteUbergraph_BP_KeyIcon_Bottom
}; 
 
 


