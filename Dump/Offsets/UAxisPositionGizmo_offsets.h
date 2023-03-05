namespace offsets
{
	namespace UAxisPositionGizmo
	{
			constexpr auto AxisSource = 0x48; // Size: 16, Type: struct TScriptInterface<IGizmoAxisSource>
			constexpr auto ParameterSource = 0x58; // Size: 16, Type: struct TScriptInterface<IGizmoFloatParameterSource>
			constexpr auto HitTarget = 0x68; // Size: 16, Type: struct TScriptInterface<IGizmoClickTarget>
			constexpr auto StateTarget = 0x78; // Size: 16, Type: struct TScriptInterface<IGizmoStateTarget>
			constexpr auto bEnableSignedAxis = 0x88; // Size: 1, Type: bool
			constexpr auto bInInteraction = 0x89; // Size: 1, Type: bool
			constexpr auto InteractionOrigin = 0x8c; // Size: 12, Type: struct FVector
			constexpr auto InteractionAxis = 0x98; // Size: 12, Type: struct FVector
			constexpr auto InteractionStartPoint = 0xa4; // Size: 12, Type: struct FVector
			constexpr auto InteractionCurPoint = 0xb0; // Size: 12, Type: struct FVector
			constexpr auto InteractionStartParameter = 0xbc; // Size: 4, Type: float
			constexpr auto InteractionCurParameter = 0xc0; // Size: 4, Type: float
			constexpr auto ParameterSign = 0xc4; // Size: 4, Type: float
	}
} 
