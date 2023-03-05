namespace offsets
{
	namespace ULicenseRemovableObstacleComp
	{
			constexpr auto Data = 0xb0; // Size: 8, Type: struct ULicenseRemovableObstacleData*
			constexpr auto RemovableObstacleList = 0xb8; // Size: 80, Type: struct TMap<int32_t, struct AActor*>
			constexpr auto RemovableObstacleList_Mesh = 0x108; // Size: 80, Type: struct TMap<int32_t, struct USceneComponent*>
			constexpr auto TotalObstacleCount = 0x158; // Size: 4, Type: int32_t
			constexpr auto bOnceGate = 0x15c; // Size: 1, Type: bool
			constexpr auto Particle = 0x160; // Size: 40, Type: struct TSoftObjectPtr<UParticleSystem>
	}
} 
