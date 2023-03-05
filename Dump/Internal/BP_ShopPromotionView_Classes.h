#pragma once 
#include <BP_ShopPromotionView_Structs.h>
 
 
 
//WidgetBlueprintGeneratedClass BP_ShopPromotionView.BP_ShopPromotionView_C Size 1104
// Inherited 1000 bytes 
class UBP_ShopPromotionView_C : public UButtonTemplate
{

 public: 
	struct FPointerToUberGraphFrame UberGraphFrame;  // Offset: 1000 Size: 8
	struct UWidgetAnimation* Anim_UnFocus;  // Offset: 1008 Size: 8
	struct UWidgetAnimation* Anim_Focus;  // Offset: 1016 Size: 8
	struct UFocusAnimSet_Stroke_C* FocusAnimSet_Stroke;  // Offset: 1024 Size: 8
	struct UImage* Img_TextBg;  // Offset: 1032 Size: 8
	struct UOverlay* OV_Promotion;  // Offset: 1040 Size: 8
	struct UKdTextBlock* TextBlock_New;  // Offset: 1048 Size: 8
	struct UKdTextBlock* TextBlock_Recommandation;  // Offset: 1056 Size: 8
	struct UBP_PageButtonList_C* V_BP_ShopPromotionSubTab;  // Offset: 1064 Size: 8
	struct UBP_ShopPromotionSubTab_C* V_BP_ShopPromotionSubTab__;  // Offset: 1072 Size: 8
	struct UKdImage* V_Image_Promotion;  // Offset: 1080 Size: 8
	struct UKdTextBlock* V_TextBlock_Desc;  // Offset: 1088 Size: 8
	struct UKdTextBlock* V_TextBlock_Title;  // Offset: 1096 Size: 8



 // Functions 
 public:
	void PreConstruct(bool IsDesignTime); // Function BP_ShopPromotionView.BP_ShopPromotionView_C.PreConstruct
	void ExecuteUbergraph_BP_ShopPromotionView(int32_t EntryPoint); // Function BP_ShopPromotionView.BP_ShopPromotionView_C.ExecuteUbergraph_BP_ShopPromotionView
}; 
 
 


