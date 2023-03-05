#pragma once 
#include <BP_LicenseMain_Card_Structs.h>
 
 
 
//WidgetBlueprintGeneratedClass BP_LicenseMain_Card.BP_LicenseMain_Card_C Size 1912
// Inherited 1768 bytes 
class UBP_LicenseMain_Card_C : public ULicenseMainCardWidget
{

 public: 
	struct FPointerToUberGraphFrame UberGraphFrame;  // Offset: 1768 Size: 8
	struct UWidgetAnimation* Anim_OnUnHover;  // Offset: 1776 Size: 8
	struct UWidgetAnimation* Anim_OnHover;  // Offset: 1784 Size: 8
	struct UWidgetAnimation* Anim_UnFocus;  // Offset: 1792 Size: 8
	struct UWidgetAnimation* Anim_OnFocus;  // Offset: 1800 Size: 8
	struct UImage* img_GetBG_Checker_bronze;  // Offset: 1808 Size: 8
	struct UImage* img_GetBG_Checker_bronze_2;  // Offset: 1816 Size: 8
	struct UImage* img_GetBG_Checker_Gold;  // Offset: 1824 Size: 8
	struct UImage* img_GetBG_Checker_Silver;  // Offset: 1832 Size: 8
	struct UImage* img_GetBG_Solid_bronze;  // Offset: 1840 Size: 8
	struct UImage* img_GetBG_Solid_bronze_2;  // Offset: 1848 Size: 8
	struct UImage* img_GetBG_Solid_Gold;  // Offset: 1856 Size: 8
	struct UImage* img_GetBG_Solid_Silver;  // Offset: 1864 Size: 8
	struct UImage* img_Line_Main_Pro;  // Offset: 1872 Size: 8
	struct UInvalidationBox* InvalidationBox_1;  // Offset: 1880 Size: 8
	struct UOverlay* OV_Emblem;  // Offset: 1888 Size: 8
	struct UKdTextBlock* txt_NotGain;  // Offset: 1896 Size: 8
	struct UKdTextBlock* V_DateText;  // Offset: 1904 Size: 8



 // Functions 
 public:
	void SequenceEvent__ENTRYPOINTBP_LicenseMain_Card_2(); // Function BP_LicenseMain_Card.BP_LicenseMain_Card_C.SequenceEvent__ENTRYPOINTBP_LicenseMain_Card_2
	void SequenceEvent__ENTRYPOINTBP_LicenseMain_Card_1(); // Function BP_LicenseMain_Card.BP_LicenseMain_Card_C.SequenceEvent__ENTRYPOINTBP_LicenseMain_Card_1
	void Event_EmblemMoveLight_Show(); // Function BP_LicenseMain_Card.BP_LicenseMain_Card_C.Event_EmblemMoveLight_Show
	void Event_EmblemMoveLight_Hide(); // Function BP_LicenseMain_Card.BP_LicenseMain_Card_C.Event_EmblemMoveLight_Hide
	void ExecuteUbergraph_BP_LicenseMain_Card(int32_t EntryPoint); // Function BP_LicenseMain_Card.BP_LicenseMain_Card_C.ExecuteUbergraph_BP_LicenseMain_Card
}; 
 
 


