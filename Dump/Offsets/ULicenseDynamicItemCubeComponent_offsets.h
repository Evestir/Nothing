namespace offsets
{
	namespace ULicenseDynamicItemCubeComponent
	{
			constexpr auto Index = 0xb0; // Size: 4, Type: int32_t
			constexpr auto Pawn = 0xb8; // Size: 8, Type: struct AActor*
			constexpr auto Data = 0xc0; // Size: 8, Type: struct ULicenseDynamicItemCubeData*
			constexpr auto ItemCubeList = 0xc8; // Size: 16, Type: struct TArray<struct AGoItem_Cube*>
			constexpr auto LastUseItem = 0xd8; // Size: 1, Type: enum class EItemType
			constexpr auto ItemCubeClass = 0xe0; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto ItemCubeMeshClass = 0x108; // Size: 40, Type: struct TSoftObjectPtr<UStaticMesh>
	}
} 
