namespace offsets
{
	namespace UGizmoUniformScaleParameterSource
	{
			constexpr auto AxisSource = 0x48; // Size: 16, Type: struct TScriptInterface<IGizmoAxisSource>
			constexpr auto TransformSource = 0x58; // Size: 16, Type: struct TScriptInterface<IGizmoTransformSource>
			constexpr auto ScaleMultiplier = 0x68; // Size: 4, Type: float
			constexpr auto Parameter = 0x6c; // Size: 8, Type: struct FVector2D
			constexpr auto LastChange = 0x74; // Size: 16, Type: struct FGizmoVec2ParameterChange
			constexpr auto CurScaleOrigin = 0x84; // Size: 12, Type: struct FVector
			constexpr auto CurScaleNormal = 0x90; // Size: 12, Type: struct FVector
			constexpr auto CurScaleAxisX = 0x9c; // Size: 12, Type: struct FVector
			constexpr auto CurScaleAxisY = 0xa8; // Size: 12, Type: struct FVector
			constexpr auto InitialTransform = 0xc0; // Size: 48, Type: struct FTransform
	}
} 
