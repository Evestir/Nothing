#pragma once 
#include <BP_ShopSimpleItemEntry_Structs.h>
 
 
 
//WidgetBlueprintGeneratedClass BP_ShopSimpleItemEntry.BP_ShopSimpleItemEntry_C Size 1072
// Inherited 1000 bytes 
class UBP_ShopSimpleItemEntry_C : public UButtonTemplate
{

 public: 
	struct FPointerToUberGraphFrame UberGraphFrame;  // Offset: 1000 Size: 8
	struct UWidgetAnimation* Anim_Enable;  // Offset: 1008 Size: 8
	struct UWidgetAnimation* Anim_Disable;  // Offset: 1016 Size: 8
	struct UWidgetAnimation* Anim_UnFocus;  // Offset: 1024 Size: 8
	struct UWidgetAnimation* Anim_Focus;  // Offset: 1032 Size: 8
	struct UImage* img_Disable;  // Offset: 1040 Size: 8
	struct UInvalidationBox* InvalidationBox_1;  // Offset: 1048 Size: 8
	struct UImage* stroke;  // Offset: 1056 Size: 8
	struct UBP_ItemCommonIcon_C* V_BP_ItemCommonIcon;  // Offset: 1064 Size: 8



 // Functions 
 public:
	void BP_OnEntryReleased(); // Function BP_ShopSimpleItemEntry.BP_ShopSimpleItemEntry_C.BP_OnEntryReleased
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function BP_ShopSimpleItemEntry.BP_ShopSimpleItemEntry_C.BP_OnItemExpansionChanged
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function BP_ShopSimpleItemEntry.BP_ShopSimpleItemEntry_C.BP_OnItemSelectionChanged
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function BP_ShopSimpleItemEntry.BP_ShopSimpleItemEntry_C.OnListItemObjectSet
	void PreConstruct(bool IsDesignTime); // Function BP_ShopSimpleItemEntry.BP_ShopSimpleItemEntry_C.PreConstruct
	void ExecuteUbergraph_BP_ShopSimpleItemEntry(int32_t EntryPoint); // Function BP_ShopSimpleItemEntry.BP_ShopSimpleItemEntry_C.ExecuteUbergraph_BP_ShopSimpleItemEntry
}; 
 
 


