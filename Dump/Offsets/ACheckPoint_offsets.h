namespace offsets
{
	namespace ACheckPoint
	{
			constexpr auto Next = 0x220; // Size: 8, Type: struct ACheckPoint*
			constexpr auto NextAdditional = 0x228; // Size: 16, Type: struct TArray<struct ACheckPoint*>
			constexpr auto prev = 0x238; // Size: 8, Type: struct ACheckPoint*
			constexpr auto CPtoCP_Distance = 0x240; // Size: 4, Type: float
			constexpr auto bInDoor = 0x244; // Size: 1, Type: bool
			constexpr auto bResetPoint = 0x245; // Size: 1, Type: bool
			constexpr auto bDoNotCheckWrongWay = 0x246; // Size: 1, Type: bool
			constexpr auto TriggerComponent = 0x248; // Size: 8, Type: struct UBoxComponent*
			constexpr auto IsStartCheckPoint = 0x250; // Size: 1, Type: bool
			constexpr auto IsEndCheckPoint = 0x251; // Size: 1, Type: bool
			constexpr auto CheckPointFogState = 0x252; // Size: 1, Type: enum class ECheckPointFogState
			constexpr auto FogData = 0x258; // Size: 104, Type: struct FCPFogData
			constexpr auto BlendInTime = 0x2c0; // Size: 4, Type: float
			constexpr auto BlendOutTime = 0x2c4; // Size: 4, Type: float
	}
} 
