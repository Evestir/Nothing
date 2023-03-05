namespace offsets
{
	namespace ULicenseAIMissionComponent
	{
			constexpr auto Data = 0xc8; // Size: 8, Type: struct ULicenseAIMissionActorData*
			constexpr auto ShadowPlaySetupComponent = 0xd0; // Size: 8, Type: struct UShadowPlaySetupComponent*
			constexpr auto DraftLastTime = 0xd8; // Size: 4, Type: float
			constexpr auto ScoreGate = 0xdc; // Size: 1, Type: bool
			constexpr auto SpawnedActors = 0xe0; // Size: 16, Type: struct TArray<struct AActor*>
			constexpr auto SpawnCurve = 0xf0; // Size: 8, Type: struct UCurveFloat*
			constexpr auto DestroyCurve = 0xf8; // Size: 8, Type: struct UCurveFloat*
			constexpr auto Pawn = 0x100; // Size: 8, Type: struct AActor*
			constexpr auto CurveFloat = 0x158; // Size: 40, Type: struct TSoftObjectPtr<UCurveFloat>
			constexpr auto CurveFloat2 = 0x180; // Size: 40, Type: struct TSoftObjectPtr<UCurveFloat>
			constexpr auto AIKartMesh = 0x1a8; // Size: 40, Type: struct TSoftObjectPtr<UStaticMesh>
	}
} 
