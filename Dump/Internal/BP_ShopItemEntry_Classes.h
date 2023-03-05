#pragma once 
#include <BP_ShopItemEntry_Structs.h>
 
 
 
//WidgetBlueprintGeneratedClass BP_ShopItemEntry.BP_ShopItemEntry_C Size 656
// Inherited 608 bytes 
class UBP_ShopItemEntry_C : public UUserWidget
{

 public: 
	struct FPointerToUberGraphFrame UberGraphFrame;  // Offset: 608 Size: 8
	struct UInvalidationBox* InvalidationBox_3;  // Offset: 616 Size: 8
	struct UBP_ShopMainListButton_Item_C* V_BP_ShopMainListButton_Item_2;  // Offset: 624 Size: 8
	struct UBP_ShopMainListButton_Item_C* V_BP_ShopMainListButton_Item_3;  // Offset: 632 Size: 8
	struct UBP_ShopMainListButton_Package_C* V_BP_ShopMainListButton_Package;  // Offset: 640 Size: 8
	struct UWidgetSwitcher* V_WidgetSwitcher_SlotType;  // Offset: 648 Size: 8



 // Functions 
 public:
	void BP_OnEntryReleased(); // Function BP_ShopItemEntry.BP_ShopItemEntry_C.BP_OnEntryReleased
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function BP_ShopItemEntry.BP_ShopItemEntry_C.BP_OnItemExpansionChanged
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function BP_ShopItemEntry.BP_ShopItemEntry_C.BP_OnItemSelectionChanged
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function BP_ShopItemEntry.BP_ShopItemEntry_C.OnListItemObjectSet
	void ExecuteUbergraph_BP_ShopItemEntry(int32_t EntryPoint); // Function BP_ShopItemEntry.BP_ShopItemEntry_C.ExecuteUbergraph_BP_ShopItemEntry
}; 
 
 


