namespace offsets
{
	namespace UIntervalGizmo
	{
			constexpr auto StateTarget = 0x38; // Size: 8, Type: struct UGizmoTransformChangeStateTarget*
			constexpr auto TransformProxy = 0x50; // Size: 8, Type: struct UTransformProxy*
			constexpr auto ActiveComponents = 0x58; // Size: 16, Type: struct TArray<struct UPrimitiveComponent*>
			constexpr auto ActiveGizmos = 0x68; // Size: 16, Type: struct TArray<struct UInteractiveGizmo*>
			constexpr auto AxisYSource = 0x90; // Size: 8, Type: struct UGizmoComponentAxisSource*
			constexpr auto AxisZSource = 0x98; // Size: 8, Type: struct UGizmoComponentAxisSource*
	}
} 
