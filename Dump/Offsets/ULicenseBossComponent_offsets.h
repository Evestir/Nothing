namespace offsets
{
	namespace ULicenseBossComponent
	{
			constexpr auto BossTransform = 0xe0; // Size: 48, Type: struct FTransform
			constexpr auto Data = 0x110; // Size: 8, Type: struct ULicenseBossData*
			constexpr auto HP = 0x118; // Size: 4, Type: float
			constexpr auto bRageState = 0x11c; // Size: 1, Type: bool
			constexpr auto RageLastTime = 0x120; // Size: 4, Type: float
			constexpr auto bLastRage = 0x124; // Size: 1, Type: bool
			constexpr auto SlipRadius = 0x128; // Size: 4, Type: float
			constexpr auto RageIndex = 0x12c; // Size: 4, Type: int32_t
			constexpr auto LastBananaDistance = 0x130; // Size: 4, Type: float
			constexpr auto BossPawn = 0x138; // Size: 8, Type: struct AKdPawn*
			constexpr auto PlayerPawn = 0x140; // Size: 8, Type: struct AKdPawn*
			constexpr auto BossItemComp = 0x148; // Size: 8, Type: struct UItemComponent*
			constexpr auto SpawnItemComp = 0x150; // Size: 8, Type: struct UItemComponent*
			constexpr auto CurrentDistance = 0x158; // Size: 4, Type: float
			constexpr auto bFinish = 0x15c; // Size: 1, Type: bool
			constexpr auto BossState = 0x168; // Size: 4, Type: enum class ELicenseBossState
			constexpr auto CurrentStateTimer = 0x16c; // Size: 4, Type: float
			constexpr auto SelectedNormalAttackPattern = 0x170; // Size: 4, Type: int32_t
			constexpr auto SelectedRageAttackPattern = 0x174; // Size: 4, Type: int32_t
			constexpr auto PatternIndex = 0x178; // Size: 4, Type: int32_t
			constexpr auto NormalAttackStartDistance = 0x17c; // Size: 4, Type: float
			constexpr auto RageAttackStartDistance = 0x180; // Size: 4, Type: float
			constexpr auto NormalAttackTimer = 0x184; // Size: 4, Type: float
			constexpr auto bPlayStartAnim = 0x188; // Size: 1, Type: bool
			constexpr auto ItemCubeList = 0x190; // Size: 16, Type: struct TArray<struct AGoItem_Cube*>
			constexpr auto SplineGuide = 0x1a0; // Size: 8, Type: struct USplineComponent*
			constexpr auto DamageWidgetClass = 0x1a8; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto ItemCubeClass = 0x1d0; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto ItemCubeMeshClass = 0x1f8; // Size: 40, Type: struct TSoftObjectPtr<UStaticMesh>
			constexpr auto DiffuseTextureObject = 0x220; // Size: 40, Type: struct TSoftObjectPtr<UTexture2D>
	}
} 
