#pragma once 
#include <BP_ShopMainListButton_Item_Structs.h>
 
 
 
//WidgetBlueprintGeneratedClass BP_ShopMainListButton_Item.BP_ShopMainListButton_Item_C Size 1136
// Inherited 1000 bytes 
class UBP_ShopMainListButton_Item_C : public UButtonTemplate
{

 public: 
	struct FPointerToUberGraphFrame UberGraphFrame;  // Offset: 1000 Size: 8
	struct UWidgetAnimation* Anim_UnFocus;  // Offset: 1008 Size: 8
	struct UWidgetAnimation* Anim_Focus;  // Offset: 1016 Size: 8
	struct UFocusAnimSet_Stroke_C* FocusAnimSet_Stroke;  // Offset: 1024 Size: 8
	struct UImage* Image;  // Offset: 1032 Size: 8
	struct UImage* Image_235;  // Offset: 1040 Size: 8
	struct UKdImage* KdImage_157;  // Offset: 1048 Size: 8
	struct UKdImage* KdImage_444;  // Offset: 1056 Size: 8
	struct UKdTextBlock* KdTextBlock_201;  // Offset: 1064 Size: 8
	struct UOverlay* OV_ShopBoxSmall;  // Offset: 1072 Size: 8
	struct UKdTextBlock* TextBlock_New;  // Offset: 1080 Size: 8
	struct UKdTextBlock* TextBlock_Package;  // Offset: 1088 Size: 8
	struct UKdTextBlock* TextBlock_Recommandation;  // Offset: 1096 Size: 8
	struct UWidgetSwitcher* V_Item_Switcher;  // Offset: 1104 Size: 8
	struct UKdTextBlock* V_TextBlock_ItemDesc;  // Offset: 1112 Size: 8
	struct UKdTextBlock* V_TextBlock_ItemName;  // Offset: 1120 Size: 8
	struct UKdTextBlock* V_TextBlock_Time;  // Offset: 1128 Size: 8



 // Functions 
 public:
	void PreConstruct(bool IsDesignTime); // Function BP_ShopMainListButton_Item.BP_ShopMainListButton_Item_C.PreConstruct
	void ExecuteUbergraph_BP_ShopMainListButton_Item(int32_t EntryPoint); // Function BP_ShopMainListButton_Item.BP_ShopMainListButton_Item_C.ExecuteUbergraph_BP_ShopMainListButton_Item
}; 
 
 


