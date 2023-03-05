namespace offsets
{
	namespace UMirrorTool
	{
			constexpr auto Settings = 0x98; // Size: 8, Type: struct UMirrorToolProperties*
			constexpr auto ToolActions = 0xa0; // Size: 8, Type: struct UMirrorToolActionPropertySet*
			constexpr auto MeshesToMirror = 0xa8; // Size: 16, Type: struct TArray<struct UDynamicMeshReplacementChangeTarget*>
			constexpr auto Previews = 0xb8; // Size: 16, Type: struct TArray<struct UMeshOpPreviewWithBackgroundCompute*>
			constexpr auto PlaneMechanic = 0x110; // Size: 8, Type: struct UConstructionPlaneMechanic*
	}
} 
