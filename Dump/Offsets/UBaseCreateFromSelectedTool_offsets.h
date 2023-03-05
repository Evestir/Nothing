namespace offsets
{
	namespace UBaseCreateFromSelectedTool
	{
			constexpr auto TransformProperties = 0x98; // Size: 8, Type: struct UTransformInputsToolProperties*
			constexpr auto HandleSourcesProperties = 0xa0; // Size: 8, Type: struct UBaseCreateFromSelectedHandleSourceProperties*
			constexpr auto preview = 0xa8; // Size: 8, Type: struct UMeshOpPreviewWithBackgroundCompute*
			constexpr auto TransformProxies = 0xb0; // Size: 16, Type: struct TArray<struct UTransformProxy*>
			constexpr auto TransformGizmos = 0xc0; // Size: 16, Type: struct TArray<struct UTransformGizmo*>
			constexpr auto TransformInitialScales = 0xd0; // Size: 16, Type: struct TArray<struct FVector>
	}
} 
