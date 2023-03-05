namespace offsets
{
	namespace UAnimNotify_PlayMaterialFx
	{
			constexpr auto FxTypeString = 0x38; // Size: 16, Type: struct FString
			constexpr auto PlayTime = 0x48; // Size: 4, Type: float
			constexpr auto StartFadeTime = 0x4c; // Size: 4, Type: float
			constexpr auto EndFadeTime = 0x50; // Size: 4, Type: float
			constexpr auto CycleTime = 0x54; // Size: 4, Type: float
			constexpr auto bLoop = 0x58; // Size: 1, Type: bool
			constexpr auto bReverse = 0x59; // Size: 1, Type: bool
			constexpr auto WeightCurve = 0x60; // Size: 8, Type: struct UCurveFloat*
			constexpr auto CycleCurve = 0x68; // Size: 8, Type: struct UCurveFloat*
	}
} 
