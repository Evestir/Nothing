#pragma once 
#include <BP_ShopMainListButton_Package_Structs.h>
 
 
 
//WidgetBlueprintGeneratedClass BP_ShopMainListButton_Package.BP_ShopMainListButton_Package_C Size 1104
// Inherited 1000 bytes 
class UBP_ShopMainListButton_Package_C : public UButtonTemplate
{

 public: 
	struct FPointerToUberGraphFrame UberGraphFrame;  // Offset: 1000 Size: 8
	struct UWidgetAnimation* Anim_UnFocus;  // Offset: 1008 Size: 8
	struct UWidgetAnimation* Anim_Focus;  // Offset: 1016 Size: 8
	struct UFocusAnimSet_Stroke_C* FocusAnimSet_Stroke;  // Offset: 1024 Size: 8
	struct UImage* Image_81;  // Offset: 1032 Size: 8
	struct UOverlay* OV_ShopBoxBig;  // Offset: 1040 Size: 8
	struct UKdTextBlock* TextBlock_New;  // Offset: 1048 Size: 8
	struct UKdTextBlock* TextBlock_Package;  // Offset: 1056 Size: 8
	struct UKdTextBlock* TextBlock_Recommandation;  // Offset: 1064 Size: 8
	struct UKdTextBlock* V_TextBlock_EventDesc;  // Offset: 1072 Size: 8
	struct UKdTextBlock* V_TextBlock_ItemDesc;  // Offset: 1080 Size: 8
	struct UKdTextBlock* V_TextBlock_ItemName;  // Offset: 1088 Size: 8
	struct UKdTextBlock* V_TextBlock_Time;  // Offset: 1096 Size: 8



 // Functions 
 public:
	void PreConstruct(bool IsDesignTime); // Function BP_ShopMainListButton_Package.BP_ShopMainListButton_Package_C.PreConstruct
	void ExecuteUbergraph_BP_ShopMainListButton_Package(int32_t EntryPoint); // Function BP_ShopMainListButton_Package.BP_ShopMainListButton_Package_C.ExecuteUbergraph_BP_ShopMainListButton_Package
}; 
 
 


