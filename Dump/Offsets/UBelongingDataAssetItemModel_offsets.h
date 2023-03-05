namespace offsets
{
	namespace UBelongingDataAssetItemModel
	{
			constexpr auto ItemId = 0x40; // Size: 16, Type: struct FString
			constexpr auto ItemModelType = 0x50; // Size: 1, Type: enum class EItemModelType
			constexpr auto bItemTypeDefaultModel = 0x51; // Size: 1, Type: bool
			constexpr auto ItemModelSkeletalMesh = 0x58; // Size: 40, Type: struct TSoftObjectPtr<USkeletalMesh>
			constexpr auto ItemModelAnimClass = 0x80; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto ItemModelIdleAnimSequence = 0xa8; // Size: 40, Type: struct TSoftObjectPtr<UAnimSequence>
	}
} 
