namespace offsets
{
	namespace ULicenseCoinData
	{
			constexpr auto HitWallLoseCoinNum = 0x48; // Size: 4, Type: int32_t
			constexpr auto CoinMeshClass = 0x50; // Size: 40, Type: struct TSoftObjectPtr<UStaticMesh>
			constexpr auto Particle = 0x78; // Size: 40, Type: struct TSoftObjectPtr<UParticleSystem>
			constexpr auto CoinTypeMap = 0xa0; // Size: 80, Type: struct TMap<enum class ELicenseCoinType, struct FLicenseCoinTypeInfo>
			constexpr auto CheckPointName = 0xf0; // Size: 16, Type: struct FString
			constexpr auto bUpdateObjectSpawnSplineData = 0x100; // Size: 1, Type: bool
			constexpr auto bCreateLicenseObjectSpawnSplines = 0x101; // Size: 1, Type: bool
			constexpr auto SpawnActorDataList = 0x108; // Size: 16, Type: struct TArray<struct FLicenseCoinActorInfo>
			constexpr auto ObjectSpawnSplineDataList = 0x118; // Size: 16, Type: struct TArray<struct FLicenseObjectSpawnSplineData>
	}
} 
