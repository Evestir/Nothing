namespace offsets
{
	namespace UPlaneCutTool
	{
			constexpr auto BasicProperties = 0x98; // Size: 8, Type: struct UPlaneCutToolProperties*
			constexpr auto AcceptProperties = 0xa0; // Size: 8, Type: struct UAcceptOutputProperties*
			constexpr auto CutPlaneOrigin = 0xa8; // Size: 12, Type: struct FVector
			constexpr auto CutPlaneOrientation = 0xc0; // Size: 16, Type: struct FQuat
			constexpr auto Previews = 0xd0; // Size: 16, Type: struct TArray<struct UMeshOpPreviewWithBackgroundCompute*>
			constexpr auto MeshesToCut = 0xe0; // Size: 16, Type: struct TArray<struct UDynamicMeshReplacementChangeTarget*>
			constexpr auto PlaneTransformGizmo = 0x148; // Size: 8, Type: struct UTransformGizmo*
			constexpr auto PlaneTransformProxy = 0x150; // Size: 8, Type: struct UTransformProxy*
	}
} 
