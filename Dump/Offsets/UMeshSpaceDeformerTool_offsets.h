namespace offsets
{
	namespace UMeshSpaceDeformerTool
	{
			constexpr auto SelectedOperationType = 0xc0; // Size: 1, Type: enum class ENonlinearOperationType
			constexpr auto UpperBoundsInterval = 0xc4; // Size: 4, Type: float
			constexpr auto LowerBoundsInterval = 0xc8; // Size: 4, Type: float
			constexpr auto ModifierPercent = 0xcc; // Size: 4, Type: float
			constexpr auto bSnapToWorldGrid = 0xd0; // Size: 1, Type: bool
			constexpr auto StateTarget = 0xd8; // Size: 8, Type: struct UGizmoTransformChangeStateTarget*
			constexpr auto preview = 0xe8; // Size: 8, Type: struct UMeshOpPreviewWithBackgroundCompute*
			constexpr auto GizmoCenter = 0x110; // Size: 12, Type: struct FVector
			constexpr auto GizmoOrientation = 0x120; // Size: 16, Type: struct FQuat
			constexpr auto IntervalGizmo = 0x130; // Size: 8, Type: struct UIntervalGizmo*
			constexpr auto TransformGizmo = 0x138; // Size: 8, Type: struct UTransformGizmo*
			constexpr auto TransformProxy = 0x140; // Size: 8, Type: struct UTransformProxy*
			constexpr auto UpIntervalSource = 0x148; // Size: 8, Type: struct UGizmoLocalFloatParameterSource*
			constexpr auto DownIntervalSource = 0x150; // Size: 8, Type: struct UGizmoLocalFloatParameterSource*
			constexpr auto ForwardIntervalSource = 0x158; // Size: 8, Type: struct UGizmoLocalFloatParameterSource*
	}
} 
