#pragma once 
#include <BP_ShopKoinShopbutton_Structs.h>
 
 
 
//WidgetBlueprintGeneratedClass BP_ShopKoinShopbutton.BP_ShopKoinShopbutton_C Size 1088
// Inherited 1000 bytes 
class UBP_ShopKoinShopbutton_C : public UButtonTemplate
{

 public: 
	struct FPointerToUberGraphFrame UberGraphFrame;  // Offset: 1000 Size: 8
	struct UWidgetAnimation* Anim_UnFocus;  // Offset: 1008 Size: 8
	struct UWidgetAnimation* Anim_Focus;  // Offset: 1016 Size: 8
	struct UFocusAnimSet_Stroke_C* FocusAnimSet_Stroke;  // Offset: 1024 Size: 8
	struct UImage* Image_KoinList;  // Offset: 1032 Size: 8
	struct UKdTextBlock* KdTextBlock_110;  // Offset: 1040 Size: 8
	struct UKdTextBlock* KdTextBlock_368;  // Offset: 1048 Size: 8
	struct UKdTextBlock* KdTextBlock_454;  // Offset: 1056 Size: 8
	struct UOverlay* OV_KoinBox;  // Offset: 1064 Size: 8
	struct USizeBox* SizeBox_1;  // Offset: 1072 Size: 8
	struct UKdTextBlock* V_KdTextBlock_EventTime;  // Offset: 1080 Size: 8



 // Functions 
 public:
	void PreConstruct(bool IsDesignTime); // Function BP_ShopKoinShopbutton.BP_ShopKoinShopbutton_C.PreConstruct
	void ExecuteUbergraph_BP_ShopKoinShopbutton(int32_t EntryPoint); // Function BP_ShopKoinShopbutton.BP_ShopKoinShopbutton_C.ExecuteUbergraph_BP_ShopKoinShopbutton
}; 
 
 


