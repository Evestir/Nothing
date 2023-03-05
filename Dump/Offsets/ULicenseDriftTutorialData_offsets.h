namespace offsets
{
	namespace ULicenseDriftTutorialData
	{
			constexpr auto ChapterList = 0x40; // Size: 16, Type: struct TArray<struct FLicenseDriftTutorialChapter>
			constexpr auto TitleWidgetClass = 0x50; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto MissionWidgetClass = 0x78; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto NextPointParticle = 0xa0; // Size: 40, Type: struct TSoftObjectPtr<UParticleSystem>
			constexpr auto NextPointOverlappedColor = 0xc8; // Size: 16, Type: struct FLinearColor
			constexpr auto NextPointScale = 0xd8; // Size: 4, Type: float
			constexpr auto NextPointCollisionRadius = 0xdc; // Size: 4, Type: float
			constexpr auto DistanceFromNextChapterZone = 0xe0; // Size: 4, Type: float
			constexpr auto NextPointSpawnDelayTime = 0xe4; // Size: 4, Type: float
			constexpr auto CurrentChapterIndex = 0xe8; // Size: 4, Type: int32_t
	}
} 
