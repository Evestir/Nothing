#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//Function DataTableSaveBluprintLibrary.DataTableSaveFunctionLibrary.RemoveDataTableRowFromName Size 16
class FRemoveDataTableRowFromName
{

 public: 
	struct UDataTable* Table;  // Offset: 0 Size: 8
	struct FName RowName;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function DataTableSaveBluprintLibrary.DataTableSaveFunctionLibrary.ClearDataTable Size 8
class FClearDataTable
{

 public: 
	struct UDataTable* Table;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function DataTableSaveBluprintLibrary.DataTableSaveFunctionLibrary.GetDataTable Size 32
class FGetDataTable
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct FString TablePath;  // Offset: 8 Size: 16
	struct UDataTable* ReturnValue;  // Offset: 24 Size: 8



 // Functions 
 public:
}; 
 
 //Function DataTableSaveBluprintLibrary.DataTableSaveFunctionLibrary.SaveDataTable Size 8
class FSaveDataTable
{

 public: 
	struct UDataTable* Table;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function DataTableSaveBluprintLibrary.DataTableSaveFunctionLibrary.SaveDataTableRowFromName Size 24
class FSaveDataTableRowFromName
{

 public: 
	struct UDataTable* Table;  // Offset: 0 Size: 8
	struct FName RowName;  // Offset: 8 Size: 8
	struct FGenericStruct Value;  // Offset: 16 Size: 4
	char pad_20_1 : 7;  // Offset: 20 Size: 1
	bool ReturnValue : 1;  // Offset: 20 Size: 1
	char pad_21[3];  // Offset: 21 Size: 3



 // Functions 
 public:
}; 
 
 