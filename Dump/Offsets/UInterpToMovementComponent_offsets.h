namespace offsets
{
	namespace UInterpToMovementComponent
	{
			constexpr auto Duration = 0xf0; // Size: 4, Type: float
			constexpr auto bPauseOnImpact = 0xf4; // Size: 1, Type: char
			constexpr auto bSweep = 0xf8; // Size: 1, Type: bool
			constexpr auto TeleportType = 0xf9; // Size: 1, Type: enum class ETeleportType
			constexpr auto BehaviourType = 0xfa; // Size: 1, Type: enum class EInterpToBehaviourType
			constexpr auto bCheckIfStillInWorld = 0xfb; // Size: 1, Type: bool
			constexpr auto bForceSubStepping = 0xfc; // Size: 1, Type: char
			constexpr auto OnInterpToReverse = 0x100; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnInterpToStop = 0x110; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnWaitBeginDelegate = 0x120; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnWaitEndDelegate = 0x130; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnResetDelegate = 0x140; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto MaxSimulationTimeStep = 0x150; // Size: 4, Type: float
			constexpr auto MaxSimulationIterations = 0x154; // Size: 4, Type: int32_t
			constexpr auto ControlPoints = 0x158; // Size: 16, Type: struct TArray<struct FInterpControlPoint>
	}
} 
