namespace offsets
{
	namespace UGrandPrixTierIconWidget
	{
			constexpr auto TierImage = 0x260; // Size: 8, Type: struct UKdImage*
			constexpr auto subTier = 0x268; // Size: 1, Type: enum class EKtGrandPrixSubTier
			constexpr auto mainTier = 0x269; // Size: 1, Type: enum class EKtGrandPrixMainTier
			constexpr auto SubTierIconContainer = 0x270; // Size: 80, Type: struct TMap<enum class EKtGrandPrixSubTier, struct TSoftObjectPtr<UTexture2D>>
			constexpr auto MainTierIconContainer = 0x2c0; // Size: 80, Type: struct TMap<enum class EKtGrandPrixMainTier, struct TSoftObjectPtr<UTexture2D>>
	}
} 
