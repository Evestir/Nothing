namespace offsets
{
	namespace ULicenseAllySpawnComponent
	{
			constexpr auto Data = 0xc0; // Size: 8, Type: struct ULicenseAllyActorData*
			constexpr auto Pawn = 0xc8; // Size: 8, Type: struct AActor*
			constexpr auto SpawnedActors = 0xd0; // Size: 80, Type: struct TMap<struct AActor*, int32_t>
			constexpr auto LastUseItemType = 0x120; // Size: 1, Type: enum class EItemType
			constexpr auto EventLastTime = 0x124; // Size: 4, Type: float
			constexpr auto bSuccess = 0x128; // Size: 1, Type: bool
			constexpr auto bFail = 0x129; // Size: 1, Type: bool
			constexpr auto SpawnCurve = 0x130; // Size: 8, Type: struct UCurveFloat*
			constexpr auto DestroyCurve = 0x138; // Size: 8, Type: struct UCurveFloat*
			constexpr auto Combo = 0x140; // Size: 4, Type: int32_t
			constexpr auto Score = 0x144; // Size: 4, Type: int32_t
			constexpr auto CurveFloat = 0x168; // Size: 40, Type: struct TSoftObjectPtr<UCurveFloat>
			constexpr auto CurveFloat2 = 0x190; // Size: 40, Type: struct TSoftObjectPtr<UCurveFloat>
			constexpr auto AIKartMesh = 0x1b8; // Size: 40, Type: struct TSoftObjectPtr<UStaticMesh>
	}
} 
