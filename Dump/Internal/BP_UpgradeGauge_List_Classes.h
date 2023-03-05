#pragma once 
#include <BP_UpgradeGauge_List_Structs.h>
 
 
 
//WidgetBlueprintGeneratedClass BP_UpgradeGauge_List.BP_UpgradeGauge_List_C Size 664
// Inherited 608 bytes 
class UBP_UpgradeGauge_List_C : public UUserWidget
{

 public: 
	struct FPointerToUberGraphFrame UberGraphFrame;  // Offset: 608 Size: 8
	struct UWidgetAnimation* Anim_Reset;  // Offset: 616 Size: 8
	struct UWidgetAnimation* Anim_Apply;  // Offset: 624 Size: 8
	struct UImage* Gauge_Empty_W;  // Offset: 632 Size: 8
	struct UWidgetSwitcher* V_GaugeSwitcher;  // Offset: 640 Size: 8
	struct FLinearColor Empty Color;  // Offset: 648 Size: 16



 // Functions 
 public:
	void PreConstruct(bool IsDesignTime); // Function BP_UpgradeGauge_List.BP_UpgradeGauge_List_C.PreConstruct
	void ExecuteUbergraph_BP_UpgradeGauge_List(int32_t EntryPoint); // Function BP_UpgradeGauge_List.BP_UpgradeGauge_List_C.ExecuteUbergraph_BP_UpgradeGauge_List
}; 
 
 


