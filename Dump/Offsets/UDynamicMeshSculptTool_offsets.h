namespace offsets
{
	namespace UDynamicMeshSculptTool
	{
			constexpr auto BrushProperties = 0xc0; // Size: 8, Type: struct USculptBrushProperties*
			constexpr auto SculptProperties = 0xc8; // Size: 8, Type: struct UBrushSculptProperties*
			constexpr auto SculptMaxBrushProperties = 0xd0; // Size: 8, Type: struct USculptMaxBrushProperties*
			constexpr auto KelvinBrushProperties = 0xd8; // Size: 8, Type: struct UKelvinBrushProperties*
			constexpr auto RemeshProperties = 0xe0; // Size: 8, Type: struct UBrushRemeshProperties*
			constexpr auto GizmoProperties = 0xe8; // Size: 8, Type: struct UFixedPlaneBrushProperties*
			constexpr auto ViewProperties = 0xf0; // Size: 8, Type: struct UMeshEditingViewProperties*
			constexpr auto SculptToolActions = 0xf8; // Size: 8, Type: struct UDynamicSculptToolActions*
			constexpr auto BrushIndicator = 0x140; // Size: 8, Type: struct UBrushStampIndicator*
			constexpr auto BrushIndicatorMaterial = 0x148; // Size: 8, Type: struct UMaterialInstanceDynamic*
			constexpr auto BrushIndicatorMesh = 0x150; // Size: 8, Type: struct UPreviewMesh*
			constexpr auto DynamicMeshComponent = 0x158; // Size: 8, Type: struct UOctreeDynamicMeshComponent*
			constexpr auto ActiveOverrideMaterial = 0x160; // Size: 8, Type: struct UMaterialInstanceDynamic*
			constexpr auto PlaneTransformGizmo = 0xd08; // Size: 8, Type: struct UTransformGizmo*
			constexpr auto PlaneTransformProxy = 0xd10; // Size: 8, Type: struct UTransformProxy*
	}
} 
