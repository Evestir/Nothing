namespace offsets
{
	namespace USCS_Node
	{
			constexpr auto ComponentClass = 0x28; // Size: 8, Type: UObject*
			constexpr auto ComponentTemplate = 0x30; // Size: 8, Type: struct UActorComponent*
			constexpr auto CookedComponentInstancingData = 0x38; // Size: 72, Type: struct FBlueprintCookedComponentInstancingData
			constexpr auto AttachToName = 0x80; // Size: 8, Type: struct FName
			constexpr auto ParentComponentOrVariableName = 0x88; // Size: 8, Type: struct FName
			constexpr auto ParentComponentOwnerClassName = 0x90; // Size: 8, Type: struct FName
			constexpr auto bIsParentComponentNative = 0x98; // Size: 1, Type: bool
			constexpr auto ChildNodes = 0xa0; // Size: 16, Type: struct TArray<struct USCS_Node*>
			constexpr auto MetaDataArray = 0xb0; // Size: 16, Type: struct TArray<struct FBPVariableMetaDataEntry>
			constexpr auto VariableGuid = 0xc0; // Size: 16, Type: struct FGuid
			constexpr auto InternalVariableName = 0xd0; // Size: 8, Type: struct FName
	}
} 
