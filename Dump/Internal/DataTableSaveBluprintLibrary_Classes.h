#pragma once 
#include <DataTableSaveBluprintLibrary_Structs.h>
 
 
 
//Class DataTableSaveBluprintLibrary.DataTableSaveFunctionLibrary Size 40
// Inherited 40 bytes 
class UDataTableSaveFunctionLibrary : public UBlueprintFunctionLibrary
{

 public: 



 // Functions 
 public:
	bool SaveDataTableRowFromName(struct UDataTable* Table, struct FName RowName, struct FGenericStruct& Value); // Function DataTableSaveBluprintLibrary.DataTableSaveFunctionLibrary.SaveDataTableRowFromName
	void SaveDataTable(struct UDataTable* Table); // Function DataTableSaveBluprintLibrary.DataTableSaveFunctionLibrary.SaveDataTable
	void RemoveDataTableRowFromName(struct UDataTable* Table, struct FName RowName); // Function DataTableSaveBluprintLibrary.DataTableSaveFunctionLibrary.RemoveDataTableRowFromName
	struct UDataTable* GetDataTable(struct UObject* WorldContextObject, struct FString TablePath); // Function DataTableSaveBluprintLibrary.DataTableSaveFunctionLibrary.GetDataTable
	void ClearDataTable(struct UDataTable* Table); // Function DataTableSaveBluprintLibrary.DataTableSaveFunctionLibrary.ClearDataTable
}; 
 
 


