namespace offsets
{
	namespace ULiveryColorSubEntryObject
	{
			constexpr auto ColorCategory = 0x28; // Size: 1, Type: enum class ELiveryCategoryType
			constexpr auto ColumnIndex = 0x2c; // Size: 4, Type: int32_t
			constexpr auto SubIndex = 0x30; // Size: 4, Type: int32_t
			constexpr auto SubColor = 0x34; // Size: 16, Type: struct FLinearColor
			constexpr auto SubColorLabel = 0x48; // Size: 24, Type: struct FText
			constexpr auto SubIntensityLabel = 0x60; // Size: 16, Type: struct FString
			constexpr auto SubMaterialType = 0x70; // Size: 1, Type: enum class ELiveryMaterialType
			constexpr auto OwnerListView = 0x74; // Size: 8, Type: struct TWeakObjectPtr<UListView>
	}
} 
