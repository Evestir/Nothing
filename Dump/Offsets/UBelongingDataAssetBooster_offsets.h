namespace offsets
{
	namespace UBelongingDataAssetBooster
	{
			constexpr auto SoonBooster = 0x40; // Size: 40, Type: struct TSoftObjectPtr<UParticleSystem>
			constexpr auto MainBooster_Start = 0x68; // Size: 40, Type: struct TSoftObjectPtr<UParticleSystem>
			constexpr auto MainBooster_Loop = 0x90; // Size: 40, Type: struct TSoftObjectPtr<UParticleSystem>
			constexpr auto MainBooster_End = 0xb8; // Size: 40, Type: struct TSoftObjectPtr<UParticleSystem>
			constexpr auto MainBooster_LoopStartTick = 0xe0; // Size: 4, Type: float
			constexpr auto EmissiveColor = 0xe4; // Size: 16, Type: struct FLinearColor
			constexpr auto KartBoostSound = 0xf8; // Size: 8, Type: struct UFMODEvent*
			constexpr auto KartStartBoostSound = 0x100; // Size: 8, Type: struct UFMODEvent*
			constexpr auto KartBurstBoostSound = 0x108; // Size: 8, Type: struct UFMODEvent*
			constexpr auto BoosterPlaySound = 0x110; // Size: 8, Type: struct UFMODEvent*
	}
} 
