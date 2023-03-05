namespace offsets
{
	namespace ULicenseObjectSpawnComponent
	{
			constexpr auto Data = 0xe0; // Size: 8, Type: struct ULicenseRocketActorData*
			constexpr auto Pawn = 0xe8; // Size: 8, Type: struct AActor*
			constexpr auto SpawnedActors = 0xf0; // Size: 80, Type: struct TMap<struct AActor*, int32_t>
			constexpr auto QuestList = 0x140; // Size: 16, Type: struct TArray<int32_t>
			constexpr auto QuestIndex = 0x150; // Size: 4, Type: int32_t
			constexpr auto bSuccess = 0x154; // Size: 1, Type: bool
			constexpr auto bFail = 0x155; // Size: 1, Type: bool
			constexpr auto EventLastTime = 0x158; // Size: 4, Type: float
			constexpr auto SpawnCurve = 0x160; // Size: 8, Type: struct UCurveFloat*
			constexpr auto DestroyCurve = 0x168; // Size: 8, Type: struct UCurveFloat*
			constexpr auto CurveFloat = 0x190; // Size: 40, Type: struct TSoftObjectPtr<UCurveFloat>
			constexpr auto CurveFloat2 = 0x1b8; // Size: 40, Type: struct TSoftObjectPtr<UCurveFloat>
			constexpr auto AIKartMesh = 0x1e0; // Size: 40, Type: struct TSoftObjectPtr<UStaticMesh>
	}
} 
