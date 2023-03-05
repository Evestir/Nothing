namespace offsets
{
	namespace ULicenseDraftTargetSpawnComponent
	{
			constexpr auto Data = 0xc0; // Size: 8, Type: struct ULicenseDraftTargetActorData*
			constexpr auto SpawnLastTime = 0xc8; // Size: 4, Type: float
			constexpr auto DraftLastTime = 0xcc; // Size: 4, Type: float
			constexpr auto ScoreGate = 0xd0; // Size: 1, Type: bool
			constexpr auto SpawnedActors = 0xd8; // Size: 16, Type: struct TArray<struct AActor*>
			constexpr auto SpawnCurve = 0xe8; // Size: 8, Type: struct UCurveFloat*
			constexpr auto DestroyCurve = 0xf0; // Size: 8, Type: struct UCurveFloat*
			constexpr auto Pawn = 0xf8; // Size: 8, Type: struct AActor*
			constexpr auto CurveFloat = 0x128; // Size: 40, Type: struct TSoftObjectPtr<UCurveFloat>
			constexpr auto CurveFloat2 = 0x150; // Size: 40, Type: struct TSoftObjectPtr<UCurveFloat>
			constexpr auto AIKartMesh = 0x178; // Size: 40, Type: struct TSoftObjectPtr<UStaticMesh>
	}
} 
