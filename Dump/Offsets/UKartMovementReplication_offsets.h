namespace offsets
{
	namespace UKartMovementReplication
	{
			constexpr auto ReplicatedStates = 0xc8; // Size: 16, Type: struct FReplicatedKartState
			constexpr auto Spec = 0xfc; // Size: 200, Type: struct FPhysicSpec
			constexpr auto bStuck = 0x270; // Size: 1, Type: bool
			constexpr auto bForcing = 0x271; // Size: 1, Type: bool
			constexpr auto bKartCollisionEnable = 0x278; // Size: 1, Type: bool
			constexpr auto bSlip = 0x284; // Size: 1, Type: bool
			constexpr auto bHitThunderbolt = 0x285; // Size: 1, Type: bool
			constexpr auto ItemDragFactor = 0x28c; // Size: 4, Type: float
			constexpr auto WheelAxisOffset = 0x294; // Size: 4, Type: float
			constexpr auto SuspensionOffset = 0x298; // Size: 4, Type: float
			constexpr auto LowLatencyActor = 0x2a8; // Size: 8, Type: struct ALowLatencyActor*
			constexpr auto KartRepMovement = 0x2c0; // Size: 64, Type: struct FKartRepMovement
			constexpr auto Recorder = 0x308; // Size: 8, Type: struct UMovementRecordComponent*
	}
} 
