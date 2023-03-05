namespace offsets
{
	namespace ULicenseSpeedCheckData
	{
			constexpr auto LicenseSpeedGateDefVector = 0x58; // Size: 16, Type: struct TArray<struct FLicenseSpeedGateDef>
			constexpr auto MinSpeed = 0x68; // Size: 16, Type: struct TArray<float>
			constexpr auto MaxSpeed = 0x78; // Size: 16, Type: struct TArray<float>
			constexpr auto MissionPoints = 0x88; // Size: 4, Type: int32_t
			constexpr auto Index = 0x8c; // Size: 4, Type: int32_t
			constexpr auto GateMeshClass = 0x90; // Size: 40, Type: struct TSoftObjectPtr<UStaticMesh>
			constexpr auto GateSize = 0xb8; // Size: 4, Type: float
			constexpr auto ParticleScaleMultiplier = 0xbc; // Size: 4, Type: float
			constexpr auto ParticleLocationOffset = 0xc0; // Size: 12, Type: struct FVector
			constexpr auto GateParticle = 0xd0; // Size: 40, Type: struct TSoftObjectPtr<UParticleSystem>
	}
} 
