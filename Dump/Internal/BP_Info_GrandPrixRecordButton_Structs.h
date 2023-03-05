#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//Function BP_Info_GrandPrixRecordButton.BP_Info_GrandPrixRecordButton_C.ExecuteUbergraph_BP_Info_GrandPrixRecordButton Size 17
class FExecuteUbergraph_BP_Info_GrandPrixRecordButton
{

 public: 
	int32_t EntryPoint;  // Offset: 0 Size: 4
	char pad_4_1 : 7;  // Offset: 4 Size: 1
	bool K2Node_Event_bIsExpanded : 1;  // Offset: 4 Size: 1
	char pad_5_1 : 7;  // Offset: 5 Size: 1
	bool K2Node_Event_bIsSelected : 1;  // Offset: 5 Size: 1
	char pad_6[2];  // Offset: 6 Size: 2
	struct UObject* K2Node_Event_ListItemObject;  // Offset: 8 Size: 8
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool K2Node_Event_IsDesignTime : 1;  // Offset: 16 Size: 1



 // Functions 
 public:
}; 
 
 //Function BP_Info_GrandPrixRecordButton.BP_Info_GrandPrixRecordButton_C.PreConstruct Size 1
// Inherited 1 bytes 
class FPreConstruct : public FPreConstruct
{

 public: 
	char pad_1_1 : 7;  // Offset: 1 Size: 1
	bool IsDesignTime : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function BP_Info_GrandPrixRecordButton.BP_Info_GrandPrixRecordButton_C.OnListItemObjectSet Size 8
class FOnListItemObjectSet
{

 public: 
	struct UObject* ListItemObject;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function BP_Info_GrandPrixRecordButton.BP_Info_GrandPrixRecordButton_C.BP_OnItemSelectionChanged Size 1
class FBP_OnItemSelectionChanged
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bIsSelected : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function BP_Info_GrandPrixRecordButton.BP_Info_GrandPrixRecordButton_C.BP_OnItemExpansionChanged Size 1
class FBP_OnItemExpansionChanged
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bIsExpanded : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 