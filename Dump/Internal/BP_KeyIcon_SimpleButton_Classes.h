#pragma once 
#include <BP_KeyIcon_SimpleButton_Structs.h>
 
 
 
//WidgetBlueprintGeneratedClass BP_KeyIcon_SimpleButton.BP_KeyIcon_SimpleButton_C Size 1356
// Inherited 1280 bytes 
class UBP_KeyIcon_SimpleButton_C : public UKeyIconWidget
{

 public: 
	struct FPointerToUberGraphFrame UberGraphFrame;  // Offset: 1280 Size: 8
	struct UKdButtonImage* KdButtonImage_173;  // Offset: 1288 Size: 8
	struct UNamedSlot* NS_BG;  // Offset: 1296 Size: 8
	struct UNamedSlot* NS_Hover;  // Offset: 1304 Size: 8
	struct UNamedSlot* NS_TextName;  // Offset: 1312 Size: 8
	struct UOverlay* String_PC_KEY;  // Offset: 1320 Size: 8
	struct UKdButtonImage* V_KeyDualShock;  // Offset: 1328 Size: 8
	struct UKdButtonImage* V_KeyPC;  // Offset: 1336 Size: 8
	struct UKdButtonImage* V_KeyXBox;  // Offset: 1344 Size: 8
	float Inst_GuideKey_Opacity;  // Offset: 1352 Size: 4



 // Functions 
 public:
	void PreConstruct(bool IsDesignTime); // Function BP_KeyIcon_SimpleButton.BP_KeyIcon_SimpleButton_C.PreConstruct
	void ExecuteUbergraph_BP_KeyIcon_SimpleButton(int32_t EntryPoint); // Function BP_KeyIcon_SimpleButton.BP_KeyIcon_SimpleButton_C.ExecuteUbergraph_BP_KeyIcon_SimpleButton
}; 
 
 


