namespace offsets
{
	namespace UGizmoAxisTranslationParameterSource
	{
			constexpr auto AxisSource = 0x90; // Size: 16, Type: struct TScriptInterface<IGizmoAxisSource>
			constexpr auto TransformSource = 0xa0; // Size: 16, Type: struct TScriptInterface<IGizmoTransformSource>
			constexpr auto Parameter = 0xb0; // Size: 4, Type: float
			constexpr auto LastChange = 0xb4; // Size: 8, Type: struct FGizmoFloatParameterChange
			constexpr auto CurTranslationAxis = 0xbc; // Size: 12, Type: struct FVector
			constexpr auto CurTranslationOrigin = 0xc8; // Size: 12, Type: struct FVector
			constexpr auto InitialTransform = 0xe0; // Size: 48, Type: struct FTransform
	}
} 
