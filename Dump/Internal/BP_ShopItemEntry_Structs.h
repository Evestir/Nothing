#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//Function BP_ShopItemEntry.BP_ShopItemEntry_C.ExecuteUbergraph_BP_ShopItemEntry Size 18
class FExecuteUbergraph_BP_ShopItemEntry
{

 public: 
	int32_t EntryPoint;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct UObject* K2Node_Event_ListItemObject;  // Offset: 8 Size: 8
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool K2Node_Event_bIsExpanded : 1;  // Offset: 16 Size: 1
	char pad_17_1 : 7;  // Offset: 17 Size: 1
	bool K2Node_Event_bIsSelected : 1;  // Offset: 17 Size: 1



 // Functions 
 public:
}; 
 
 //Function BP_ShopItemEntry.BP_ShopItemEntry_C.OnListItemObjectSet Size 8
class FOnListItemObjectSet
{

 public: 
	struct UObject* ListItemObject;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function BP_ShopItemEntry.BP_ShopItemEntry_C.BP_OnItemSelectionChanged Size 1
class FBP_OnItemSelectionChanged
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bIsSelected : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function BP_ShopItemEntry.BP_ShopItemEntry_C.BP_OnItemExpansionChanged Size 1
class FBP_OnItemExpansionChanged
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bIsExpanded : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 