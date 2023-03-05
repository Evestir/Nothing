namespace offsets
{
	namespace UDrawPolygonTool
	{
			constexpr auto PolygonProperties = 0x88; // Size: 8, Type: struct UDrawPolygonToolStandardProperties*
			constexpr auto SnapProperties = 0x90; // Size: 8, Type: struct UDrawPolygonToolSnapProperties*
			constexpr auto MaterialProperties = 0x98; // Size: 8, Type: struct UNewMeshMaterialProperties*
			constexpr auto PreviewMesh = 0x150; // Size: 8, Type: struct UPreviewMesh*
			constexpr auto PlaneTransformGizmo = 0x158; // Size: 8, Type: struct UTransformGizmo*
			constexpr auto PlaneTransformProxy = 0x160; // Size: 8, Type: struct UTransformProxy*
			constexpr auto HeightMechanic = 0x540; // Size: 8, Type: struct UPlaneDistanceFromHitMechanic*
	}
} 
