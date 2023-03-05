namespace offsets
{
	namespace UDrawPolyPathTool
	{
			constexpr auto TransformProps = 0xa0; // Size: 8, Type: struct UDrawPolyPathProperties*
			constexpr auto ExtrudeProperties = 0xa8; // Size: 8, Type: struct UDrawPolyPathExtrudeProperties*
			constexpr auto MaterialProperties = 0xb0; // Size: 8, Type: struct UNewMeshMaterialProperties*
			constexpr auto PlaneMechanic = 0x140; // Size: 8, Type: struct UConstructionPlaneMechanic*
			constexpr auto EditPreview = 0x1e8; // Size: 8, Type: struct UPolyEditPreviewMesh*
			constexpr auto ExtrudeHeightMechanic = 0x1f0; // Size: 8, Type: struct UPlaneDistanceFromHitMechanic*
			constexpr auto CurveDistMechanic = 0x1f8; // Size: 8, Type: struct USpatialCurveDistanceMechanic*
			constexpr auto SurfacePathMechanic = 0x200; // Size: 8, Type: struct UCollectSurfacePathMechanic*
	}
} 
