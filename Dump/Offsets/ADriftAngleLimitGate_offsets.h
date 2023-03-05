namespace offsets
{
	namespace ADriftAngleLimitGate
	{
			constexpr auto DriftLimitAngle = 0x220; // Size: 4, Type: float
			constexpr auto DriftLimitAngleAddtional = 0x224; // Size: 4, Type: float
			constexpr auto DriftLimitAngleReverse = 0x228; // Size: 4, Type: float
			constexpr auto DriftLimitAngleReverseAddtional = 0x22c; // Size: 4, Type: float
			constexpr auto bHideGuide = 0x230; // Size: 1, Type: bool
			constexpr auto bUseHeightLimit = 0x231; // Size: 1, Type: bool
			constexpr auto HeightLimit = 0x234; // Size: 8, Type: struct FVector2D
			constexpr auto SceneComponent = 0x240; // Size: 8, Type: struct USceneComponent*
			constexpr auto LeftPosition = 0x248; // Size: 12, Type: struct FVector
			constexpr auto RightPosition = 0x254; // Size: 12, Type: struct FVector
			constexpr auto Width = 0x264; // Size: 4, Type: float
			constexpr auto LeftMin = 0x268; // Size: 4, Type: float
			constexpr auto LeftMax = 0x26c; // Size: 4, Type: float
			constexpr auto RightMin = 0x270; // Size: 4, Type: float
			constexpr auto RightMax = 0x274; // Size: 4, Type: float
			constexpr auto GateIndex = 0x278; // Size: 4, Type: int32_t
			constexpr auto TaregtDriftGuide = 0x280; // Size: 8, Type: struct ADriftGuide*
	}
} 
