namespace offsets
{
	namespace UMeshSculptToolBase
	{
			constexpr auto BrushProperties = 0xc0; // Size: 8, Type: struct USculptBrushProperties*
			constexpr auto GizmoProperties = 0xc8; // Size: 8, Type: struct UWorkPlaneProperties*
			constexpr auto BrushOpPropSets = 0x1b0; // Size: 80, Type: struct TMap<int32_t, struct UMeshSculptBrushOpProps*>
			constexpr auto SecondaryBrushOpPropSets = 0x250; // Size: 80, Type: struct TMap<int32_t, struct UMeshSculptBrushOpProps*>
			constexpr auto ViewProperties = 0x870; // Size: 8, Type: struct UMeshEditingViewProperties*
			constexpr auto ActiveOverrideMaterial = 0x878; // Size: 8, Type: struct UMaterialInstanceDynamic*
			constexpr auto BrushIndicator = 0x880; // Size: 8, Type: struct UBrushStampIndicator*
			constexpr auto BrushIndicatorMaterial = 0x888; // Size: 8, Type: struct UMaterialInstanceDynamic*
			constexpr auto BrushIndicatorMesh = 0x890; // Size: 8, Type: struct UPreviewMesh*
			constexpr auto PlaneTransformGizmo = 0x898; // Size: 8, Type: struct UTransformGizmo*
			constexpr auto PlaneTransformProxy = 0x8a0; // Size: 8, Type: struct UTransformProxy*
	}
} 
