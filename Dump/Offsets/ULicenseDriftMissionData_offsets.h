namespace offsets
{
	namespace ULicenseDriftMissionData
	{
			constexpr auto LicenseDriftMissionGateDefVector = 0x58; // Size: 16, Type: struct TArray<struct FLicenseDriftMissionGateDef>
			constexpr auto DriftCountDuration = 0x68; // Size: 16, Type: struct TArray<struct FDriftMissionStruct>
			constexpr auto MissionPoints = 0x78; // Size: 4, Type: int32_t
			constexpr auto DriftBonusPoints = 0x7c; // Size: 4, Type: int32_t
			constexpr auto bIgnoreHitWall = 0x80; // Size: 1, Type: bool
			constexpr auto bConstantMission = 0x81; // Size: 1, Type: bool
			constexpr auto Index = 0x84; // Size: 4, Type: int32_t
			constexpr auto GateMeshClass = 0x88; // Size: 40, Type: struct TSoftObjectPtr<UStaticMesh>
			constexpr auto GateSize = 0xb0; // Size: 4, Type: float
			constexpr auto ParticleScaleMultiplier = 0xb4; // Size: 4, Type: float
			constexpr auto ParticleLocationOffset = 0xb8; // Size: 12, Type: struct FVector
			constexpr auto GateParticle = 0xc8; // Size: 40, Type: struct TSoftObjectPtr<UParticleSystem>
	}
} 
