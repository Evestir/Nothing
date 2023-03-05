namespace offsets
{
	namespace ULiveryColorColumnEntryObject
	{
			constexpr auto ColorCategory = 0x28; // Size: 1, Type: enum class ELiveryCategoryType
			constexpr auto ColumnIndex = 0x2c; // Size: 4, Type: int32_t
			constexpr auto ColorRows = 0x30; // Size: 16, Type: struct TArray<struct FLinearColor>
			constexpr auto ColorLabels = 0x40; // Size: 16, Type: struct TArray<struct FText>
			constexpr auto IntensityLabels = 0x50; // Size: 16, Type: struct TArray<struct FString>
			constexpr auto ImageRows = 0x60; // Size: 16, Type: struct TArray<struct TSoftObjectPtr<UTexture2D>>
			constexpr auto RowMaterialType = 0x70; // Size: 1, Type: enum class ELiveryMaterialType
			constexpr auto OwnerListView = 0x74; // Size: 8, Type: struct TWeakObjectPtr<UListView>
			constexpr auto bFakeSelect = 0x7c; // Size: 1, Type: bool
	}
} 
