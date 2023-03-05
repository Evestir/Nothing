namespace offsets
{
	namespace UKartUpgradeEffectAsset
	{
			constexpr auto UpgradeParticleList = 0x30; // Size: 16, Type: struct TArray<struct FKartUpgradeFxParticleInfo>
			constexpr auto UpgradeMatFxList = 0x40; // Size: 16, Type: struct TArray<struct FKartUpgradeFxMaterialInfo>
			constexpr auto ParameterCollection = 0x50; // Size: 40, Type: struct TSoftObjectPtr<UMaterialParameterCollection>
			constexpr auto UpgradeColorParamList = 0x78; // Size: 16, Type: struct TArray<struct FKartUpgradeFxGradeColorInfo>
			constexpr auto UpgradeFxSound = 0x88; // Size: 8, Type: struct UFMODEvent*
			constexpr auto GearApplyParticleList = 0x90; // Size: 16, Type: struct TArray<struct FKartUpgradeFxParticleInfo>
			constexpr auto GearApplyMatFxList = 0xa0; // Size: 16, Type: struct TArray<struct FKartUpgradeFxMaterialInfo>
			constexpr auto GearApplyFxSound = 0xb0; // Size: 8, Type: struct UFMODEvent*
			constexpr auto PlayDuration = 0xb8; // Size: 4, Type: float
	}
} 
