namespace offsets
{
	namespace ULicenseNotifiedItemCubeComponent
	{
			constexpr auto Index = 0xb0; // Size: 4, Type: int32_t
			constexpr auto Pawn = 0xb8; // Size: 8, Type: struct AActor*
			constexpr auto Data = 0xc0; // Size: 8, Type: struct UNotifiedItemSpawn*
			constexpr auto ItemCubeList = 0xc8; // Size: 16, Type: struct TArray<struct AGoItem_Cube*>
			constexpr auto ItemCubeClass = 0xd8; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto ItemCubeMeshClass = 0x100; // Size: 40, Type: struct TSoftObjectPtr<UStaticMesh>
			constexpr auto DiffuseTextureObject1 = 0x128; // Size: 40, Type: struct TSoftObjectPtr<UTexture2D>
			constexpr auto DiffuseTextureObject2 = 0x150; // Size: 40, Type: struct TSoftObjectPtr<UTexture2D>
			constexpr auto DiffuseTextureObject3 = 0x178; // Size: 40, Type: struct TSoftObjectPtr<UTexture2D>
	}
} 
