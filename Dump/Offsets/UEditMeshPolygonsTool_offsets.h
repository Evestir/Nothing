namespace offsets
{
	namespace UEditMeshPolygonsTool
	{
			constexpr auto DynamicMeshComponent = 0xd0; // Size: 8, Type: struct USimpleDynamicMeshComponent*
			constexpr auto CommonProps = 0xd8; // Size: 8, Type: struct UPolyEditCommonProperties*
			constexpr auto EditActions = 0xe0; // Size: 8, Type: struct UEditMeshPolygonsToolActions*
			constexpr auto EditActions_Triangles = 0xe8; // Size: 8, Type: struct UEditMeshPolygonsToolActions_Triangles*
			constexpr auto EditEdgeActions = 0xf0; // Size: 8, Type: struct UEditMeshPolygonsToolEdgeActions*
			constexpr auto EditEdgeActions_Triangles = 0xf8; // Size: 8, Type: struct UEditMeshPolygonsToolEdgeActions_Triangles*
			constexpr auto EditUVActions = 0x100; // Size: 8, Type: struct UEditMeshPolygonsToolUVActions*
			constexpr auto ExtrudeProperties = 0x108; // Size: 8, Type: struct UPolyEditExtrudeProperties*
			constexpr auto OffsetProperties = 0x110; // Size: 8, Type: struct UPolyEditOffsetProperties*
			constexpr auto InsetProperties = 0x118; // Size: 8, Type: struct UPolyEditInsetProperties*
			constexpr auto OutsetProperties = 0x120; // Size: 8, Type: struct UPolyEditOutsetProperties*
			constexpr auto CutProperties = 0x128; // Size: 8, Type: struct UPolyEditCutProperties*
			constexpr auto SetUVProperties = 0x130; // Size: 8, Type: struct UPolyEditSetUVProperties*
			constexpr auto SelectionMechanic = 0x138; // Size: 8, Type: struct UPolygonSelectionMechanic*
			constexpr auto MultiTransformer = 0x148; // Size: 8, Type: struct UMultiTransformer*
			constexpr auto EditPreview = 0x4a0; // Size: 8, Type: struct UPolyEditPreviewMesh*
			constexpr auto ExtrudeHeightMechanic = 0x4b0; // Size: 8, Type: struct UPlaneDistanceFromHitMechanic*
			constexpr auto CurveDistMechanic = 0x4b8; // Size: 8, Type: struct USpatialCurveDistanceMechanic*
			constexpr auto SurfacePathMechanic = 0x4c0; // Size: 8, Type: struct UCollectSurfacePathMechanic*
	}
} 
