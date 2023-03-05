namespace offsets
{
	namespace UGizmoPlaneTranslationParameterSource
	{
			constexpr auto AxisSource = 0x90; // Size: 16, Type: struct TScriptInterface<IGizmoAxisSource>
			constexpr auto TransformSource = 0xa0; // Size: 16, Type: struct TScriptInterface<IGizmoTransformSource>
			constexpr auto Parameter = 0xb0; // Size: 8, Type: struct FVector2D
			constexpr auto LastChange = 0xb8; // Size: 16, Type: struct FGizmoVec2ParameterChange
			constexpr auto CurTranslationOrigin = 0xc8; // Size: 12, Type: struct FVector
			constexpr auto CurTranslationNormal = 0xd4; // Size: 12, Type: struct FVector
			constexpr auto CurTranslationAxisX = 0xe0; // Size: 12, Type: struct FVector
			constexpr auto CurTranslationAxisY = 0xec; // Size: 12, Type: struct FVector
			constexpr auto InitialTransform = 0x100; // Size: 48, Type: struct FTransform
	}
} 
