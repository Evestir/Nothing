namespace offsets
{
	namespace AScenarioTeleport
	{
			constexpr auto bNewDriveInfo = 0x270; // Size: 1, Type: bool
			constexpr auto KartWLVel = 0x274; // Size: 12, Type: struct FVector
			constexpr auto KartWAVel = 0x280; // Size: 12, Type: struct FVector
			constexpr auto NetWForce = 0x28c; // Size: 12, Type: struct FVector
			constexpr auto NetWTorque = 0x298; // Size: 12, Type: struct FVector
			constexpr auto Speed = 0x2a4; // Size: 4, Type: float
	}
} 
