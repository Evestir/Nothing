#pragma once 
#include <BP_ModeSelectSubPage_Common_Title_Structs.h>
 
 
 
//WidgetBlueprintGeneratedClass BP_ModeSelectSubPage_Common_Title.BP_ModeSelectSubPage_Common_Title_C Size 696
// Inherited 608 bytes 
class UBP_ModeSelectSubPage_Common_Title_C : public UUserWidget
{

 public: 
	struct FPointerToUberGraphFrame UberGraphFrame;  // Offset: 608 Size: 8
	struct UKdTextBlock* DescText;  // Offset: 616 Size: 8
	struct UKdTextBlock* TitleText;  // Offset: 624 Size: 8
	struct UBP_CommonPopupGuide_C* V_BP_CommonPopupGuide;  // Offset: 632 Size: 8
	struct USizeBox* V_SB_LicenseAlert;  // Offset: 640 Size: 8
	struct FText Text_Title;  // Offset: 648 Size: 24
	struct FText Text_description;  // Offset: 672 Size: 24



 // Functions 
 public:
	void PreConstruct(bool IsDesignTime); // Function BP_ModeSelectSubPage_Common_Title.BP_ModeSelectSubPage_Common_Title_C.PreConstruct
	void ExecuteUbergraph_BP_ModeSelectSubPage_Common_Title(int32_t EntryPoint); // Function BP_ModeSelectSubPage_Common_Title.BP_ModeSelectSubPage_Common_Title_C.ExecuteUbergraph_BP_ModeSelectSubPage_Common_Title
}; 
 
 


