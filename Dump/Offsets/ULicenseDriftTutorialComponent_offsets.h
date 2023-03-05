namespace offsets
{
	namespace ULicenseDriftTutorialComponent
	{
			constexpr auto Data = 0xb0; // Size: 8, Type: struct ULicenseDriftTutorialData*
			constexpr auto PlayerController = 0xb8; // Size: 8, Type: struct APlayerController*
			constexpr auto Pawn = 0xc0; // Size: 8, Type: struct AKdPawn*
			constexpr auto Movement = 0xc8; // Size: 8, Type: struct UKartMovementComponent*
			constexpr auto MissionWidget = 0xd0; // Size: 8, Type: struct ULicenseDriftMissionWidget*
			constexpr auto TitleWidget = 0xd8; // Size: 8, Type: struct ULicenseStartTitleWidget*
			constexpr auto NextChapterZone = 0xe0; // Size: 8, Type: struct ALicenseNextChapterZone*
			constexpr auto TeleportStartWeightCurve = 0xe8; // Size: 40, Type: struct TSoftObjectPtr<UCurveFloat>
			constexpr auto TeleportStartCycleCurve = 0x110; // Size: 40, Type: struct TSoftObjectPtr<UCurveFloat>
			constexpr auto TeleportEndWeightCurve = 0x138; // Size: 40, Type: struct TSoftObjectPtr<UCurveFloat>
			constexpr auto TeleportEndCycleCurve = 0x160; // Size: 40, Type: struct TSoftObjectPtr<UCurveFloat>
			constexpr auto TeleportParticleClass = 0x188; // Size: 40, Type: struct TSoftObjectPtr<UParticleSystem>
			constexpr auto TeleportParticle = 0x1b0; // Size: 8, Type: struct UParticleSystemComponent*
			constexpr auto TeleportInSound = 0x1b8; // Size: 8, Type: struct UFMODEvent*
			constexpr auto TeleportOutSound = 0x1c0; // Size: 8, Type: struct UFMODEvent*
			constexpr auto WarpZoneSound = 0x1c8; // Size: 8, Type: struct UFMODEvent*
	}
} 
