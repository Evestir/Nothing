#pragma once 
#include <BP_Chat_Row_Structs.h>
 
 
 
//WidgetBlueprintGeneratedClass BP_Chat_Row.BP_Chat_Row_C Size 632
// Inherited 608 bytes 
class UBP_Chat_Row_C : public UUserWidget
{

 public: 
	struct FPointerToUberGraphFrame UberGraphFrame;  // Offset: 608 Size: 8
	struct UBP_Chat_Category_C* V_BP_ChatCategory;  // Offset: 616 Size: 8
	struct UKdTextBlock* V_ChatTxt;  // Offset: 624 Size: 8



 // Functions 
 public:
	void BP_OnEntryReleased(); // Function BP_Chat_Row.BP_Chat_Row_C.BP_OnEntryReleased
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function BP_Chat_Row.BP_Chat_Row_C.BP_OnItemExpansionChanged
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function BP_Chat_Row.BP_Chat_Row_C.BP_OnItemSelectionChanged
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function BP_Chat_Row.BP_Chat_Row_C.OnListItemObjectSet
	void ExecuteUbergraph_BP_Chat_Row(int32_t EntryPoint); // Function BP_Chat_Row.BP_Chat_Row_C.ExecuteUbergraph_BP_Chat_Row
}; 
 
 


