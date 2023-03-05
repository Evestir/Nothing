#pragma once 
#include <BP_CommonButtonKeyIcon_Cyan_Structs.h>
 
 
 
//WidgetBlueprintGeneratedClass BP_CommonButtonKeyIcon_Cyan.BP_CommonButtonKeyIcon_Cyan_C Size 1508
// Inherited 1280 bytes 
class UBP_CommonButtonKeyIcon_Cyan_C : public UKeyIconWidget
{

 public: 
	struct FPointerToUberGraphFrame UberGraphFrame;  // Offset: 1280 Size: 8
	struct UKdButtonImage* Btn_BG;  // Offset: 1288 Size: 8
	struct UNamedSlot* NamedSlot_1;  // Offset: 1296 Size: 8
	struct USizeBox* SB_BtnSize;  // Offset: 1304 Size: 8
	struct UOverlay* String_PC_KEY;  // Offset: 1312 Size: 8
	struct UKdTextBlock* V_ButtonText;  // Offset: 1320 Size: 8
	char pad_1328_1 : 7;  // Offset: 1328 Size: 1
	bool Inst_SizeSet : 1;  // Offset: 1328 Size: 1
	char pad_1329[3];  // Offset: 1329 Size: 3
	struct FVector2D BtnSize;  // Offset: 1332 Size: 8
	char pad_1340[4];  // Offset: 1340 Size: 4
	struct FSlateBrush BtnBG_Brush;  // Offset: 1344 Size: 136
	struct FText Inst_ButtonName;  // Offset: 1480 Size: 24
	float BtnSize_MinWidth;  // Offset: 1504 Size: 4



 // Functions 
 public:
	void PreConstruct(bool IsDesignTime); // Function BP_CommonButtonKeyIcon_Cyan.BP_CommonButtonKeyIcon_Cyan_C.PreConstruct
	void ExecuteUbergraph_BP_CommonButtonKeyIcon_Cyan(int32_t EntryPoint); // Function BP_CommonButtonKeyIcon_Cyan.BP_CommonButtonKeyIcon_Cyan_C.ExecuteUbergraph_BP_CommonButtonKeyIcon_Cyan
}; 
 
 


