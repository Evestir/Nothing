namespace offsets
{
	namespace UMinimapWidget
	{
			constexpr auto MapImg = 0x260; // Size: 8, Type: struct UImage*
			constexpr auto ArrowImg = 0x268; // Size: 8, Type: struct UImage*
			constexpr auto DotPanelWidget = 0x270; // Size: 8, Type: struct UPanelWidget*
			constexpr auto BirdViewMinimapImg = 0x278; // Size: 8, Type: struct UImage*
			constexpr auto Anim_Intro = 0x280; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto Minimap = 0x288; // Size: 8, Type: struct AMinimapActor*
			constexpr auto KdPawnCameraComponent = 0x290; // Size: 8, Type: struct UCameraComponent*
			constexpr auto PlayerArrows = 0x298; // Size: 16, Type: struct TArray<struct TSoftObjectPtr<UTexture2D>>
			constexpr auto PawnList = 0x2a8; // Size: 16, Type: struct TArray<struct AKdPawn*>
			constexpr auto InitialUserCount = 0x2b8; // Size: 4, Type: int32_t
			constexpr auto PossessedPawn = 0x2c0; // Size: 8, Type: struct APawn*
			constexpr auto PossessedPawnTeamIndex = 0x2c8; // Size: 4, Type: int32_t
			constexpr auto DotIdxMapNameList = 0x350; // Size: 16, Type: struct TArray<struct FName>
			constexpr auto DotPosMapNameList = 0x360; // Size: 16, Type: struct TArray<struct FName>
			constexpr auto DotIdxMap = 0x370; // Size: 80, Type: struct TMap<struct FName, float>
			constexpr auto DotPosMap = 0x3c0; // Size: 80, Type: struct TMap<struct FName, struct FVector>
	}
} 
