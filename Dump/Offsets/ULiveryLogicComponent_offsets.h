namespace offsets
{
	namespace ULiveryLogicComponent
	{
			constexpr auto LiveryEditTexture = 0x108; // Size: 8, Type: struct UTexture2D*
			constexpr auto TickUpdateLiveryInfo = 0x110; // Size: 80, Type: struct FTickUpdateLiveryInfo
			constexpr auto PreviewLiveryDesignDesc = 0x160; // Size: 64, Type: struct FLiveryDesignDesc
			constexpr auto PreviewEditId = 0x1a0; // Size: 4, Type: int32_t
			constexpr auto LiveryCategory = 0x1ba; // Size: 1, Type: enum class ELiveryCategoryType
			constexpr auto LiveryEditStartCategory = 0x1bb; // Size: 1, Type: enum class ELiveryCategoryType
			constexpr auto LiveryEditPaintType = 0x1bc; // Size: 1, Type: enum class ELiveryPaintType
			constexpr auto CurrentShapeCategory = 0x1bd; // Size: 1, Type: enum class ELiveryWrappingCategory
			constexpr auto CurrentPreset = 0x1c0; // Size: 160, Type: struct FKtItemPreset
			constexpr auto FocusEditLiveryId = 0x260; // Size: 4, Type: int32_t
			constexpr auto CurrentEditLiveryId = 0x264; // Size: 4, Type: int32_t
			constexpr auto CurrentSaveLiveryId = 0x268; // Size: 4, Type: int32_t
			constexpr auto DownloadStickerStockList = 0x300; // Size: 16, Type: struct TArray<struct FStickerStock>
			constexpr auto MyStickerItemList = 0x310; // Size: 16, Type: struct TArray<struct FLiveryItemInfo>
			constexpr auto DownloadStickerItemList = 0x320; // Size: 16, Type: struct TArray<struct FLiveryItemInfo>
			constexpr auto LiveryEditItemList = 0x330; // Size: 16, Type: struct TArray<struct FLiveryItemInfo>
			constexpr auto EquippedLiveryPaint = 0x340; // Size: 16, Type: struct TArray<struct FLiveryPaintDesc>
			constexpr auto BackupWrappingDesc = 0x350; // Size: 16, Type: struct TArray<struct FLiveryWrappingDesc>
			constexpr auto WrappingItemInfoList = 0x360; // Size: 16, Type: struct TArray<struct FLiveryItemInfo>
			constexpr auto LiveryEditItemSlotStart = 0x370; // Size: 4, Type: int32_t
			constexpr auto LiveryEditItemSlot = 0x374; // Size: 4, Type: int32_t
			constexpr auto LiveryEditIndex = 0x378; // Size: 4, Type: int32_t
			constexpr auto ColorFocusIndex = 0x37c; // Size: 4, Type: int32_t
			constexpr auto bIsGrouping = 0x380; // Size: 1, Type: bool
			constexpr auto TempGroupingIndexList = 0x388; // Size: 16, Type: struct TArray<int32_t>
			constexpr auto OriginalLiveryDesign = 0x398; // Size: 64, Type: struct FLiveryDesignDesc
			constexpr auto CurrentEditDesignDesc = 0x3d8; // Size: 64, Type: struct FLiveryDesignDesc
			constexpr auto bNewCreateLiveryLayer = 0x418; // Size: 1, Type: bool
			constexpr auto ClipBoardWrappingDescArray = 0x420; // Size: 16, Type: struct TArray<struct FLiveryWrappingDesc>
			constexpr auto ClipBoardPaintType = 0x430; // Size: 1, Type: enum class ELiveryPaintType
			constexpr auto bPauseLiveryEdit = 0x432; // Size: 1, Type: bool
			constexpr auto bUseFineTuning = 0x433; // Size: 1, Type: bool
			constexpr auto bUseLayerMoveX = 0x434; // Size: 1, Type: bool
			constexpr auto bUseLayerMoveY = 0x435; // Size: 1, Type: bool
			constexpr auto bUseLiveryScaleSingle = 0x436; // Size: 1, Type: bool
			constexpr auto bUseLayerScaleX = 0x437; // Size: 1, Type: bool
			constexpr auto bUseLayerScaleY = 0x438; // Size: 1, Type: bool
			constexpr auto bUseLayerRotate = 0x439; // Size: 1, Type: bool
			constexpr auto bFixedUnit = 0x43a; // Size: 1, Type: bool
			constexpr auto EditAutoRotateMode = 0x43b; // Size: 1, Type: enum class ELiveryEditAutoRotateMode
			constexpr auto AccumulateMove = 0x448; // Size: 8, Type: struct FVector2D
			constexpr auto AccumulateSingleScale = 0x450; // Size: 8, Type: struct FVector2D
			constexpr auto AccumulateScale = 0x458; // Size: 8, Type: struct FVector2D
			constexpr auto AccumulateRotate = 0x460; // Size: 4, Type: float
	}
} 
