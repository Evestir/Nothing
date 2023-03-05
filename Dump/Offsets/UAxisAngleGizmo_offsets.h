namespace offsets
{
	namespace UAxisAngleGizmo
	{
			constexpr auto AxisSource = 0x48; // Size: 16, Type: struct TScriptInterface<IGizmoAxisSource>
			constexpr auto AngleSource = 0x58; // Size: 16, Type: struct TScriptInterface<IGizmoFloatParameterSource>
			constexpr auto HitTarget = 0x68; // Size: 16, Type: struct TScriptInterface<IGizmoClickTarget>
			constexpr auto StateTarget = 0x78; // Size: 16, Type: struct TScriptInterface<IGizmoStateTarget>
			constexpr auto bInInteraction = 0x88; // Size: 1, Type: bool
			constexpr auto RotationOrigin = 0x8c; // Size: 12, Type: struct FVector
			constexpr auto RotationAxis = 0x98; // Size: 12, Type: struct FVector
			constexpr auto RotationPlaneX = 0xa4; // Size: 12, Type: struct FVector
			constexpr auto RotationPlaneY = 0xb0; // Size: 12, Type: struct FVector
			constexpr auto InteractionStartPoint = 0xbc; // Size: 12, Type: struct FVector
			constexpr auto InteractionCurPoint = 0xc8; // Size: 12, Type: struct FVector
			constexpr auto InteractionStartAngle = 0xd4; // Size: 4, Type: float
			constexpr auto InteractionCurAngle = 0xd8; // Size: 4, Type: float
	}
} 
