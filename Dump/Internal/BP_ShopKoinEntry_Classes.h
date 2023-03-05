#pragma once 
#include <BP_ShopKoinEntry_Structs.h>
 
 
 
//WidgetBlueprintGeneratedClass BP_ShopKoinEntry.BP_ShopKoinEntry_C Size 1152
// Inherited 1000 bytes 
class UBP_ShopKoinEntry_C : public UButtonTemplate
{

 public: 
	struct FPointerToUberGraphFrame UberGraphFrame;  // Offset: 1000 Size: 8
	struct UWidgetAnimation* Anim_UnFocus;  // Offset: 1008 Size: 8
	struct UWidgetAnimation* Anim_Focus;  // Offset: 1016 Size: 8
	struct UFocusAnimSet_Stroke_C* FocusAnimSet_Stroke;  // Offset: 1024 Size: 8
	struct UImage* Image_265;  // Offset: 1032 Size: 8
	struct UImage* Image_BG_gra;  // Offset: 1040 Size: 8
	struct UImage* Image_BonusBG;  // Offset: 1048 Size: 8
	struct UImage* img-bg;  // Offset: 1056 Size: 8
	struct UInvalidationBox* InvalidationBox_1;  // Offset: 1064 Size: 8
	struct UKdTextBlock* TextBlock_EventDesc;  // Offset: 1072 Size: 8
	struct UKdTextBlock* TextBlock_Package;  // Offset: 1080 Size: 8
	struct UKdTextBlock* TextBlock_TotalKoin;  // Offset: 1088 Size: 8
	struct UBP_Price_C* V_BP_Price;  // Offset: 1096 Size: 8
	struct UImage* V_Image_Item;  // Offset: 1104 Size: 8
	struct UKdTextBlock* V_TextBlock_ItemDesc;  // Offset: 1112 Size: 8
	struct UKdTextBlock* V_TextBlock_ItemName;  // Offset: 1120 Size: 8
	struct UKdTextBlock* V_TextBlock_Time;  // Offset: 1128 Size: 8
	struct UKdTextBlock* V_TextBlock_TotalKoin;  // Offset: 1136 Size: 8
	struct UKdTextBlock* V_TotalKoin_shadow;  // Offset: 1144 Size: 8



 // Functions 
 public:
	void BP_OnEntryReleased(); // Function BP_ShopKoinEntry.BP_ShopKoinEntry_C.BP_OnEntryReleased
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function BP_ShopKoinEntry.BP_ShopKoinEntry_C.BP_OnItemExpansionChanged
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function BP_ShopKoinEntry.BP_ShopKoinEntry_C.BP_OnItemSelectionChanged
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function BP_ShopKoinEntry.BP_ShopKoinEntry_C.OnListItemObjectSet
	void PreConstruct(bool IsDesignTime); // Function BP_ShopKoinEntry.BP_ShopKoinEntry_C.PreConstruct
	void ExecuteUbergraph_BP_ShopKoinEntry(int32_t EntryPoint); // Function BP_ShopKoinEntry.BP_ShopKoinEntry_C.ExecuteUbergraph_BP_ShopKoinEntry
}; 
 
 


