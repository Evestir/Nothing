namespace offsets
{
	namespace ULicenseTargetActorSpawnComponent
	{
			constexpr auto Data = 0xc0; // Size: 8, Type: struct ULicenseTargetActorData*
			constexpr auto SpawnedActors = 0xc8; // Size: 80, Type: struct TMap<struct AActor*, enum class EItemType>
			constexpr auto bSuccess = 0x118; // Size: 1, Type: bool
			constexpr auto EventLastTime = 0x11c; // Size: 4, Type: float
			constexpr auto PatternIndex = 0x120; // Size: 4, Type: int32_t
			constexpr auto PatternChangeTime = 0x124; // Size: 4, Type: float
			constexpr auto CurrentPattern = 0x128; // Size: 16, Type: struct FString
			constexpr auto SpawnCurve = 0x138; // Size: 8, Type: struct UCurveFloat*
			constexpr auto DestroyCurve = 0x140; // Size: 8, Type: struct UCurveFloat*
			constexpr auto Pawn = 0x148; // Size: 8, Type: struct AActor*
			constexpr auto CurveFloat = 0x170; // Size: 40, Type: struct TSoftObjectPtr<UCurveFloat>
			constexpr auto CurveFloat2 = 0x198; // Size: 40, Type: struct TSoftObjectPtr<UCurveFloat>
			constexpr auto AIKartMesh = 0x1c0; // Size: 40, Type: struct TSoftObjectPtr<UStaticMesh>
	}
} 
