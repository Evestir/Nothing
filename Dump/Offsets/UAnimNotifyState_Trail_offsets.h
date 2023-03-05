namespace offsets
{
	namespace UAnimNotifyState_Trail
	{
			constexpr auto PSTemplate = 0x30; // Size: 8, Type: struct UParticleSystem*
			constexpr auto MirrorDetailLevel = 0x38; // Size: 4, Type: int32_t
			constexpr auto FirstSocketName = 0x3c; // Size: 8, Type: struct FName
			constexpr auto SecondSocketName = 0x44; // Size: 8, Type: struct FName
			constexpr auto WidthScaleMode = 0x4c; // Size: 1, Type: enum class ETrailWidthMode
			constexpr auto WidthScaleCurve = 0x50; // Size: 8, Type: struct FName
			constexpr auto bRecycleSpawnedSystems = 0x58; // Size: 1, Type: char
	}
} 
