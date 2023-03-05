namespace offsets
{
	namespace ULicenseSpawnTrafficConeData
	{
			constexpr auto bHitLoseRule = 0x48; // Size: 1, Type: bool
			constexpr auto HitScore = 0x4c; // Size: 4, Type: int32_t
			constexpr auto TrafficConeMess = 0x50; // Size: 4, Type: int32_t
			constexpr auto TrafficConeMeshClass = 0x58; // Size: 40, Type: struct TSoftObjectPtr<UStaticMesh>
			constexpr auto CheckPointName = 0x80; // Size: 16, Type: struct FString
			constexpr auto bUpdateObjectSpawnSplineData = 0x90; // Size: 1, Type: bool
			constexpr auto bCreateLicenseObjectSpawnSplines = 0x91; // Size: 1, Type: bool
			constexpr auto LicenseSpawnTransformList = 0x98; // Size: 16, Type: struct TArray<struct FTransform>
			constexpr auto ObjectSpawnSplineDataList = 0xa8; // Size: 16, Type: struct TArray<struct FLicenseObjectSpawnSplineData>
			constexpr auto SoundEvent = 0xb8; // Size: 40, Type: struct TSoftObjectPtr<UFMODEvent>
			constexpr auto TrafficConeList = 0xe0; // Size: 16, Type: struct TArray<struct ALicenseTrafficCone*>
	}
} 
