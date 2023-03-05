namespace offsets
{
	namespace UPlanePositionGizmo
	{
			constexpr auto AxisSource = 0x48; // Size: 16, Type: struct TScriptInterface<IGizmoAxisSource>
			constexpr auto ParameterSource = 0x58; // Size: 16, Type: struct TScriptInterface<IGizmoVec2ParameterSource>
			constexpr auto HitTarget = 0x68; // Size: 16, Type: struct TScriptInterface<IGizmoClickTarget>
			constexpr auto StateTarget = 0x78; // Size: 16, Type: struct TScriptInterface<IGizmoStateTarget>
			constexpr auto bEnableSignedAxis = 0x88; // Size: 1, Type: bool
			constexpr auto bFlipX = 0x89; // Size: 1, Type: bool
			constexpr auto bFlipY = 0x8a; // Size: 1, Type: bool
			constexpr auto bInInteraction = 0x8b; // Size: 1, Type: bool
			constexpr auto InteractionOrigin = 0x8c; // Size: 12, Type: struct FVector
			constexpr auto InteractionNormal = 0x98; // Size: 12, Type: struct FVector
			constexpr auto InteractionAxisX = 0xa4; // Size: 12, Type: struct FVector
			constexpr auto InteractionAxisY = 0xb0; // Size: 12, Type: struct FVector
			constexpr auto InteractionStartPoint = 0xbc; // Size: 12, Type: struct FVector
			constexpr auto InteractionCurPoint = 0xc8; // Size: 12, Type: struct FVector
			constexpr auto InteractionStartParameter = 0xd4; // Size: 8, Type: struct FVector2D
			constexpr auto InteractionCurParameter = 0xdc; // Size: 8, Type: struct FVector2D
			constexpr auto ParameterSigns = 0xe4; // Size: 8, Type: struct FVector2D
	}
} 
