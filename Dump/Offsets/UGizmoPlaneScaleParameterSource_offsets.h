namespace offsets
{
	namespace UGizmoPlaneScaleParameterSource
	{
			constexpr auto AxisSource = 0x90; // Size: 16, Type: struct TScriptInterface<IGizmoAxisSource>
			constexpr auto TransformSource = 0xa0; // Size: 16, Type: struct TScriptInterface<IGizmoTransformSource>
			constexpr auto ScaleMultiplier = 0xb0; // Size: 4, Type: float
			constexpr auto Parameter = 0xb4; // Size: 8, Type: struct FVector2D
			constexpr auto LastChange = 0xbc; // Size: 16, Type: struct FGizmoVec2ParameterChange
			constexpr auto CurScaleOrigin = 0xcc; // Size: 12, Type: struct FVector
			constexpr auto CurScaleNormal = 0xd8; // Size: 12, Type: struct FVector
			constexpr auto CurScaleAxisX = 0xe4; // Size: 12, Type: struct FVector
			constexpr auto CurScaleAxisY = 0xf0; // Size: 12, Type: struct FVector
			constexpr auto InitialTransform = 0x100; // Size: 48, Type: struct FTransform
	}
} 
