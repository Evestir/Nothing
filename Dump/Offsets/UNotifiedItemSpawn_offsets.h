namespace offsets
{
	namespace UNotifiedItemSpawn
	{
			constexpr auto Distance = 0x70; // Size: 16, Type: struct TArray<float>
			constexpr auto DistanceFromCubeSpawnLine = 0x80; // Size: 4, Type: float
			constexpr auto DistanceFromItemCube = 0x84; // Size: 4, Type: float
			constexpr auto DistanceFromNotifier = 0x88; // Size: 4, Type: float
			constexpr auto DistanceFromAttack = 0x8c; // Size: 4, Type: float
			constexpr auto Index = 0x90; // Size: 4, Type: int32_t
			constexpr auto RandomType = 0x98; // Size: 16, Type: struct TArray<enum class EItemType>
			constexpr auto TempRandomType = 0xa8; // Size: 16, Type: struct TArray<enum class EItemType>
			constexpr auto bNeedNotify = 0xb8; // Size: 1, Type: bool
			constexpr auto Notifier = 0xc0; // Size: 8, Type: struct AActor*
			constexpr auto ItemTypeList = 0xc8; // Size: 16, Type: struct TArray<enum class EItemType>
			constexpr auto CubeCount = 0xd8; // Size: 4, Type: int32_t
			constexpr auto NotifierClass = 0xe0; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto DiffuseTextureObject1 = 0x108; // Size: 40, Type: struct TSoftObjectPtr<UTexture2D>
			constexpr auto DiffuseTextureObject2 = 0x130; // Size: 40, Type: struct TSoftObjectPtr<UTexture2D>
			constexpr auto DiffuseTextureObject3 = 0x158; // Size: 40, Type: struct TSoftObjectPtr<UTexture2D>
	}
} 
