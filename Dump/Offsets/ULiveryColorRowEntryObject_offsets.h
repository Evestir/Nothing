namespace offsets
{
	namespace ULiveryColorRowEntryObject
	{
			constexpr auto ColorCategory = 0x28; // Size: 1, Type: enum class ELiveryCategoryType
			constexpr auto ColumnIndex = 0x2c; // Size: 4, Type: int32_t
			constexpr auto RowIndex = 0x30; // Size: 4, Type: int32_t
			constexpr auto RowColor = 0x34; // Size: 16, Type: struct FLinearColor
			constexpr auto ColorLabel = 0x48; // Size: 24, Type: struct FText
			constexpr auto IntensityLabel = 0x60; // Size: 16, Type: struct FString
			constexpr auto RowImage = 0x70; // Size: 40, Type: struct TSoftObjectPtr<UTexture2D>
			constexpr auto RowMaterialType = 0x98; // Size: 1, Type: enum class ELiveryMaterialType
			constexpr auto RowBoxSize = 0x9c; // Size: 8, Type: struct FVector2D
			constexpr auto ParentListView = 0xa4; // Size: 8, Type: struct TWeakObjectPtr<UListView>
	}
} 
