namespace offsets
{
	namespace UGizmoAxisScaleParameterSource
	{
			constexpr auto AxisSource = 0x48; // Size: 16, Type: struct TScriptInterface<IGizmoAxisSource>
			constexpr auto TransformSource = 0x58; // Size: 16, Type: struct TScriptInterface<IGizmoTransformSource>
			constexpr auto ScaleMultiplier = 0x68; // Size: 4, Type: float
			constexpr auto Parameter = 0x6c; // Size: 4, Type: float
			constexpr auto LastChange = 0x70; // Size: 8, Type: struct FGizmoFloatParameterChange
			constexpr auto CurScaleAxis = 0x78; // Size: 12, Type: struct FVector
			constexpr auto CurScaleOrigin = 0x84; // Size: 12, Type: struct FVector
			constexpr auto InitialTransform = 0x90; // Size: 48, Type: struct FTransform
	}
} 
