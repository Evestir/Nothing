namespace offsets
{
	namespace AOutGamePawn
	{
			constexpr auto PawnType = 0x3a8; // Size: 1, Type: enum class EOutGamePawnType
			constexpr auto AppliedStockItemId = 0x3b0; // Size: 16, Type: struct FString
			constexpr auto RotationEffectDecal = 0x3c0; // Size: 8, Type: struct UDecalComponent*
			constexpr auto RotationEffectDecalChar = 0x3c8; // Size: 8, Type: struct UDecalComponent*
			constexpr auto SceneCaptureComponents = 0x3d8; // Size: 16, Type: struct TArray<struct TWeakObjectPtr<USceneCaptureComponent2D>>
			constexpr auto NameTagPosition = 0x3e8; // Size: 12, Type: struct FVector
			constexpr auto bVisibleKart = 0x450; // Size: 1, Type: bool
			constexpr auto bVisibleCharacter = 0x451; // Size: 1, Type: bool
			constexpr auto bVisibleItemModel = 0x452; // Size: 1, Type: bool
			constexpr auto bVisibleWidgetComponent = 0x453; // Size: 1, Type: bool
			constexpr auto bStandBesideOwnKart = 0x454; // Size: 1, Type: bool
			constexpr auto bActiveLookat = 0x455; // Size: 1, Type: bool
			constexpr auto KartSequenceDelegateInfos = 0x458; // Size: 16, Type: struct TArray<struct FKartSequenceDelegateInfo>
			constexpr auto RotationMaterial = 0x478; // Size: 8, Type: struct UMaterialInstanceDynamic*
			constexpr auto RotationMaterialChar = 0x480; // Size: 8, Type: struct UMaterialInstanceDynamic*
			constexpr auto FadeInTime = 0x4d0; // Size: 4, Type: float
			constexpr auto FadeOutTimeNormal = 0x4d4; // Size: 4, Type: float
			constexpr auto FadeOutWaitTimeNormal = 0x4d8; // Size: 4, Type: float
			constexpr auto FadeOutTimeReset = 0x4dc; // Size: 4, Type: float
			constexpr auto FadeOutWaitTimeReset = 0x4e0; // Size: 4, Type: float
	}
} 
