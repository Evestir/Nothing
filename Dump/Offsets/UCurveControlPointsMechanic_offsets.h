namespace offsets
{
	namespace UCurveControlPointsMechanic
	{
			constexpr auto ClickBehavior = 0x40; // Size: 8, Type: struct USingleClickInputBehavior*
			constexpr auto HoverBehavior = 0x48; // Size: 8, Type: struct UMouseHoverBehavior*
			constexpr auto PreviewGeometryActor = 0x4e8; // Size: 8, Type: struct APreviewGeometryActor*
			constexpr auto DrawnControlPoints = 0x4f0; // Size: 8, Type: struct UPointSetComponent*
			constexpr auto DrawnControlSegments = 0x4f8; // Size: 8, Type: struct ULineSetComponent*
			constexpr auto PreviewPoint = 0x500; // Size: 8, Type: struct UPointSetComponent*
			constexpr auto PreviewSegment = 0x508; // Size: 8, Type: struct ULineSetComponent*
			constexpr auto PointTransformProxy = 0x588; // Size: 8, Type: struct UTransformProxy*
			constexpr auto PointTransformGizmo = 0x590; // Size: 8, Type: struct UTransformGizmo*
	}
} 
