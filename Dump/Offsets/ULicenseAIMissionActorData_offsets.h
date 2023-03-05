namespace offsets
{
	namespace ULicenseAIMissionActorData
	{
			constexpr auto LicenseSpawnActorDataList = 0x40; // Size: 16, Type: struct TArray<struct FText>
			constexpr auto AIPawnOffset = 0x50; // Size: 16, Type: struct TArray<struct FVector>
			constexpr auto AIPawnSpacing_KnockoutMode = 0x60; // Size: 4, Type: float
			constexpr auto Speed = 0x64; // Size: 4, Type: float
			constexpr auto Delay = 0x68; // Size: 4, Type: float
			constexpr auto missionType = 0x6c; // Size: 1, Type: enum class EAIMissionType
			constexpr auto SuccessDistance = 0x70; // Size: 4, Type: float
			constexpr auto WarningDistance = 0x74; // Size: 4, Type: float
			constexpr auto KnockOutTime = 0x78; // Size: 4, Type: float
			constexpr auto bUseShadowIfAvailable = 0x7c; // Size: 1, Type: bool
	}
} 
