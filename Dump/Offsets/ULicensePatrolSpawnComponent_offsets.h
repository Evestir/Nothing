namespace offsets
{
	namespace ULicensePatrolSpawnComponent
	{
			constexpr auto Data = 0xc0; // Size: 8, Type: struct ULicensePatrolActorData*
			constexpr auto EventLastTime = 0xc8; // Size: 4, Type: float
			constexpr auto SpawnedActors = 0xd0; // Size: 16, Type: struct TArray<struct AActor*>
			constexpr auto SpawnCurve = 0xe0; // Size: 8, Type: struct UCurveFloat*
			constexpr auto DestroyCurve = 0xe8; // Size: 8, Type: struct UCurveFloat*
			constexpr auto Pawn = 0xf0; // Size: 8, Type: struct AActor*
			constexpr auto AudioComponent = 0x118; // Size: 8, Type: struct UFMODAudioComponent*
			constexpr auto CurveFloat = 0x120; // Size: 40, Type: struct TSoftObjectPtr<UCurveFloat>
			constexpr auto CurveFloat2 = 0x148; // Size: 40, Type: struct TSoftObjectPtr<UCurveFloat>
			constexpr auto Particle = 0x170; // Size: 40, Type: struct TSoftObjectPtr<UParticleSystem>
			constexpr auto AIKartMesh = 0x198; // Size: 40, Type: struct TSoftObjectPtr<UStaticMesh>
	}
} 
