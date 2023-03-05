namespace offsets
{
	namespace ULicenseDriftGaugeData
	{
			constexpr auto missionType = 0x58; // Size: 1, Type: enum class ELicenseGaugeMissionType
			constexpr auto Score = 0x5c; // Size: 4, Type: int32_t
			constexpr auto GateMeshClass = 0x60; // Size: 40, Type: struct TSoftObjectPtr<UStaticMesh>
			constexpr auto GateSize = 0x88; // Size: 4, Type: float
			constexpr auto MissionWidgetClass = 0x90; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto LicenseDriftGaugeDefVector = 0xb8; // Size: 16, Type: struct TArray<struct FLicenseDriftGaugeDef>
			constexpr auto ParticleScaleMultiplier = 0xc8; // Size: 4, Type: float
			constexpr auto ParticleLocationOffset = 0xcc; // Size: 12, Type: struct FVector
			constexpr auto GateParticle = 0xd8; // Size: 40, Type: struct TSoftObjectPtr<UParticleSystem>
	}
} 
