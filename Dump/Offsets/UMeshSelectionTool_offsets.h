namespace offsets
{
	namespace UMeshSelectionTool
	{
			constexpr auto SelectionProps = 0x1f8; // Size: 8, Type: struct UMeshSelectionToolProperties*
			constexpr auto SelectionActions = 0x200; // Size: 8, Type: struct UMeshSelectionEditActions*
			constexpr auto EditActions = 0x208; // Size: 8, Type: struct UMeshSelectionToolActionPropertySet*
			constexpr auto Selection = 0x210; // Size: 8, Type: struct UMeshSelectionSet*
			constexpr auto SpawnedActors = 0x218; // Size: 16, Type: struct TArray<struct AActor*>
	}
} 
