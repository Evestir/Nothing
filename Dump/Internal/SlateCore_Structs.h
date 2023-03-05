#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//ScriptStruct SlateCore.HyperlinkStyle Size 1280
// Inherited 8 bytes 
class FHyperlinkStyle : public FSlateWidgetStyle
{

 public: 
	struct FButtonStyle UnderlineStyle;  // Offset: 8 Size: 632
	struct FTextBlockStyle TextStyle;  // Offset: 640 Size: 624
	struct FMargin Padding;  // Offset: 1264 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct SlateCore.CompositeFont Size 56
class FCompositeFont
{

 public: 
	struct FTypeface DefaultTypeface;  // Offset: 0 Size: 16
	struct FCompositeFallbackFont FallbackTypeface;  // Offset: 16 Size: 24
	struct TArray<struct FCompositeSubFont> SubTypefaces;  // Offset: 40 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct SlateCore.SlateColor Size 40
class FSlateColor
{

 public: 
	struct FLinearColor SpecifiedColor;  // Offset: 0 Size: 16
	enum class ESlateColorStylingMode ColorUseRule;  // Offset: 16 Size: 1
	char pad_17[23];  // Offset: 17 Size: 23



 // Functions 
 public:
}; 
 
 //ScriptStruct SlateCore.CharacterEvent Size 32
// Inherited 24 bytes 
class FCharacterEvent : public FInputEvent
{

 public: 
	char pad_24[8];  // Offset: 24 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct SlateCore.WindowStyle Size 4192
// Inherited 8 bytes 
class FWindowStyle : public FSlateWidgetStyle
{

 public: 
	struct FButtonStyle MinimizeButtonStyle;  // Offset: 8 Size: 632
	struct FButtonStyle MaximizeButtonStyle;  // Offset: 640 Size: 632
	struct FButtonStyle RestoreButtonStyle;  // Offset: 1272 Size: 632
	struct FButtonStyle CloseButtonStyle;  // Offset: 1904 Size: 632
	struct FTextBlockStyle TitleTextStyle;  // Offset: 2536 Size: 624
	struct FSlateBrush ActiveTitleBrush;  // Offset: 3160 Size: 136
	struct FSlateBrush InactiveTitleBrush;  // Offset: 3296 Size: 136
	struct FSlateBrush FlashTitleBrush;  // Offset: 3432 Size: 136
	struct FSlateColor BackgroundColor;  // Offset: 3568 Size: 40
	struct FSlateBrush OutlineBrush;  // Offset: 3608 Size: 136
	struct FSlateColor OutlineColor;  // Offset: 3744 Size: 40
	struct FSlateBrush BorderBrush;  // Offset: 3784 Size: 136
	struct FSlateBrush BackgroundBrush;  // Offset: 3920 Size: 136
	struct FSlateBrush ChildBackgroundBrush;  // Offset: 4056 Size: 136



 // Functions 
 public:
}; 
 
 //ScriptStruct SlateCore.InputEvent Size 24
class FInputEvent
{

 public: 
	char pad_0[24];  // Offset: 0 Size: 24



 // Functions 
 public:
}; 
 
 //ScriptStruct SlateCore.Geometry Size 56
class FGeometry
{

 public: 
	char pad_0[56];  // Offset: 0 Size: 56



 // Functions 
 public:
}; 
 
 //ScriptStruct SlateCore.SlateBrush Size 136
class FSlateBrush
{

 public: 
	char pad_0[8];  // Offset: 0 Size: 8
	struct FVector2D ImageSize;  // Offset: 8 Size: 8
	struct FMargin Margin;  // Offset: 16 Size: 16
	struct FSlateColor TintColor;  // Offset: 32 Size: 40
	struct UObject* ResourceObject;  // Offset: 72 Size: 8
	struct FName ResourceName;  // Offset: 80 Size: 8
	struct FBox2D UVRegion;  // Offset: 88 Size: 20
	enum class ESlateBrushDrawType DrawAs;  // Offset: 108 Size: 1
	enum class ESlateBrushTileType tiling;  // Offset: 109 Size: 1
	enum class ESlateBrushMirrorType Mirroring;  // Offset: 110 Size: 1
	enum class ESlateBrushImageType ImageType;  // Offset: 111 Size: 1
	char pad_112[16];  // Offset: 112 Size: 16
	char bIsDynamicallyLoaded : 1;  // Offset: 128 Size: 1
	char bHasUObject : 1;  // Offset: 128 Size: 1
	char pad_128_1 : 6;  // Offset: 128 Size: 1
	char pad_129[8];  // Offset: 129 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct SlateCore.FontOutlineSettings Size 32
class FFontOutlineSettings
{

 public: 
	int32_t OutlineSize;  // Offset: 0 Size: 4
	char pad_4_1 : 7;  // Offset: 4 Size: 1
	bool bSeparateFillAlpha : 1;  // Offset: 4 Size: 1
	char pad_5_1 : 7;  // Offset: 5 Size: 1
	bool bApplyOutlineToDropShadows : 1;  // Offset: 5 Size: 1
	char pad_6[2];  // Offset: 6 Size: 2
	struct UObject* OutlineMaterial;  // Offset: 8 Size: 8
	struct FLinearColor OutlineColor;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct SlateCore.Margin Size 16
class FMargin
{

 public: 
	float Left;  // Offset: 0 Size: 4
	float Top;  // Offset: 4 Size: 4
	float Right;  // Offset: 8 Size: 4
	float Bottom;  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct SlateCore.PointerEvent Size 112
// Inherited 24 bytes 
class FPointerEvent : public FInputEvent
{

 public: 
	char pad_24[88];  // Offset: 24 Size: 88



 // Functions 
 public:
}; 
 
 //ScriptStruct SlateCore.ScrollBarStyle Size 1232
// Inherited 8 bytes 
class FScrollBarStyle : public FSlateWidgetStyle
{

 public: 
	struct FSlateBrush HorizontalBackgroundImage;  // Offset: 8 Size: 136
	struct FSlateBrush VerticalBackgroundImage;  // Offset: 144 Size: 136
	struct FSlateBrush VerticalTopSlotImage;  // Offset: 280 Size: 136
	struct FSlateBrush HorizontalTopSlotImage;  // Offset: 416 Size: 136
	struct FSlateBrush VerticalBottomSlotImage;  // Offset: 552 Size: 136
	struct FSlateBrush HorizontalBottomSlotImage;  // Offset: 688 Size: 136
	struct FSlateBrush NormalThumbImage;  // Offset: 824 Size: 136
	struct FSlateBrush HoveredThumbImage;  // Offset: 960 Size: 136
	struct FSlateBrush DraggedThumbImage;  // Offset: 1096 Size: 136



 // Functions 
 public:
}; 
 
 //ScriptStruct SlateCore.SlateSound Size 24
class FSlateSound
{

 public: 
	struct UObject* ResourceObject;  // Offset: 0 Size: 8
	char pad_8[16];  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct SlateCore.KeyEvent Size 56
// Inherited 24 bytes 
class FKeyEvent : public FInputEvent
{

 public: 
	char pad_24[32];  // Offset: 24 Size: 32



 // Functions 
 public:
}; 
 
 //ScriptStruct SlateCore.NavigationEvent Size 32
// Inherited 24 bytes 
class FNavigationEvent : public FInputEvent
{

 public: 
	char pad_24[8];  // Offset: 24 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct SlateCore.AnalogInputEvent Size 64
// Inherited 56 bytes 
class FAnalogInputEvent : public FKeyEvent
{

 public: 
	char pad_56[8];  // Offset: 56 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct SlateCore.SlateFontInfo Size 88
class FSlateFontInfo
{

 public: 
	struct UObject* FontObject;  // Offset: 0 Size: 8
	struct UObject* FontMaterial;  // Offset: 8 Size: 8
	struct FFontOutlineSettings OutlineSettings;  // Offset: 16 Size: 32
	char pad_48[16];  // Offset: 48 Size: 16
	struct FName TypefaceFontName;  // Offset: 64 Size: 8
	int32_t Size;  // Offset: 72 Size: 4
	int32_t LetterSpacing;  // Offset: 76 Size: 4
	char pad_80[8];  // Offset: 80 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct SlateCore.SlateWidgetStyle Size 8
class FSlateWidgetStyle
{

 public: 
	char pad_0[8];  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct SlateCore.TableRowStyle Size 1992
// Inherited 8 bytes 
class FTableRowStyle : public FSlateWidgetStyle
{

 public: 
	struct FSlateBrush SelectorFocusedBrush;  // Offset: 8 Size: 136
	struct FSlateBrush ActiveHoveredBrush;  // Offset: 144 Size: 136
	struct FSlateBrush ActiveBrush;  // Offset: 280 Size: 136
	struct FSlateBrush InactiveHoveredBrush;  // Offset: 416 Size: 136
	struct FSlateBrush InactiveBrush;  // Offset: 552 Size: 136
	struct FSlateBrush EvenRowBackgroundHoveredBrush;  // Offset: 688 Size: 136
	struct FSlateBrush EvenRowBackgroundBrush;  // Offset: 824 Size: 136
	struct FSlateBrush OddRowBackgroundHoveredBrush;  // Offset: 960 Size: 136
	struct FSlateBrush OddRowBackgroundBrush;  // Offset: 1096 Size: 136
	struct FSlateColor TextColor;  // Offset: 1232 Size: 40
	struct FSlateColor SelectedTextColor;  // Offset: 1272 Size: 40
	struct FSlateBrush DropIndicator_Above;  // Offset: 1312 Size: 136
	struct FSlateBrush DropIndicator_Onto;  // Offset: 1448 Size: 136
	struct FSlateBrush DropIndicator_Below;  // Offset: 1584 Size: 136
	struct FSlateBrush ActiveHighlightedBrush;  // Offset: 1720 Size: 136
	struct FSlateBrush InactiveHighlightedBrush;  // Offset: 1856 Size: 136



 // Functions 
 public:
}; 
 
 //ScriptStruct SlateCore.ComboBoxStyle Size 1008
// Inherited 8 bytes 
class FComboBoxStyle : public FSlateWidgetStyle
{

 public: 
	struct FComboButtonStyle ComboButtonStyle;  // Offset: 8 Size: 952
	struct FSlateSound PressedSlateSound;  // Offset: 960 Size: 24
	struct FSlateSound SelectionChangeSlateSound;  // Offset: 984 Size: 24



 // Functions 
 public:
}; 
 
 //ScriptStruct SlateCore.ScrollBoxStyle Size 552
// Inherited 8 bytes 
class FScrollBoxStyle : public FSlateWidgetStyle
{

 public: 
	struct FSlateBrush TopShadowBrush;  // Offset: 8 Size: 136
	struct FSlateBrush BottomShadowBrush;  // Offset: 144 Size: 136
	struct FSlateBrush LeftShadowBrush;  // Offset: 280 Size: 136
	struct FSlateBrush RightShadowBrush;  // Offset: 416 Size: 136



 // Functions 
 public:
}; 
 
 //ScriptStruct SlateCore.FocusEvent Size 8
class FFocusEvent
{

 public: 
	char pad_0[8];  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct SlateCore.ComboButtonStyle Size 952
// Inherited 8 bytes 
class FComboButtonStyle : public FSlateWidgetStyle
{

 public: 
	struct FButtonStyle ButtonStyle;  // Offset: 8 Size: 632
	struct FSlateBrush DownArrowImage;  // Offset: 640 Size: 136
	struct FVector2D ShadowOffset;  // Offset: 776 Size: 8
	struct FLinearColor ShadowColorAndOpacity;  // Offset: 784 Size: 16
	struct FSlateBrush MenuBorderBrush;  // Offset: 800 Size: 136
	struct FMargin MenuBorderPadding;  // Offset: 936 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct SlateCore.ButtonStyle Size 632
// Inherited 8 bytes 
class FButtonStyle : public FSlateWidgetStyle
{

 public: 
	struct FSlateBrush Normal;  // Offset: 8 Size: 136
	struct FSlateBrush Hovered;  // Offset: 144 Size: 136
	struct FSlateBrush Pressed;  // Offset: 280 Size: 136
	struct FSlateBrush Disabled;  // Offset: 416 Size: 136
	struct FMargin NormalPadding;  // Offset: 552 Size: 16
	struct FMargin PressedPadding;  // Offset: 568 Size: 16
	struct FSlateSound PressedSlateSound;  // Offset: 584 Size: 24
	struct FSlateSound HoveredSlateSound;  // Offset: 608 Size: 24



 // Functions 
 public:
}; 
 
 //ScriptStruct SlateCore.ScrollBorderStyle Size 280
// Inherited 8 bytes 
class FScrollBorderStyle : public FSlateWidgetStyle
{

 public: 
	struct FSlateBrush TopShadowBrush;  // Offset: 8 Size: 136
	struct FSlateBrush BottomShadowBrush;  // Offset: 144 Size: 136



 // Functions 
 public:
}; 
 
 //ScriptStruct SlateCore.EditableTextStyle Size 544
// Inherited 8 bytes 
class FEditableTextStyle : public FSlateWidgetStyle
{

 public: 
	struct FSlateFontInfo Font;  // Offset: 8 Size: 88
	struct FSlateColor ColorAndOpacity;  // Offset: 96 Size: 40
	struct FSlateBrush BackgroundImageSelected;  // Offset: 136 Size: 136
	struct FSlateBrush BackgroundImageComposing;  // Offset: 272 Size: 136
	struct FSlateBrush CaretImage;  // Offset: 408 Size: 136



 // Functions 
 public:
}; 
 
 //ScriptStruct SlateCore.EditableTextBoxStyle Size 2040
// Inherited 8 bytes 
class FEditableTextBoxStyle : public FSlateWidgetStyle
{

 public: 
	struct FSlateBrush BackgroundImageNormal;  // Offset: 8 Size: 136
	struct FSlateBrush BackgroundImageHovered;  // Offset: 144 Size: 136
	struct FSlateBrush BackgroundImageFocused;  // Offset: 280 Size: 136
	struct FSlateBrush BackgroundImageReadOnly;  // Offset: 416 Size: 136
	struct FMargin Padding;  // Offset: 552 Size: 16
	struct FSlateFontInfo Font;  // Offset: 568 Size: 88
	struct FSlateColor ForegroundColor;  // Offset: 656 Size: 40
	struct FSlateColor BackgroundColor;  // Offset: 696 Size: 40
	struct FSlateColor ReadOnlyForegroundColor;  // Offset: 736 Size: 40
	struct FMargin HScrollBarPadding;  // Offset: 776 Size: 16
	struct FMargin VScrollBarPadding;  // Offset: 792 Size: 16
	struct FScrollBarStyle ScrollBarStyle;  // Offset: 808 Size: 1232



 // Functions 
 public:
}; 
 
 //ScriptStruct SlateCore.CompositeFallbackFont Size 24
class FCompositeFallbackFont
{

 public: 
	struct FTypeface Typeface;  // Offset: 0 Size: 16
	float ScalingFactor;  // Offset: 16 Size: 4
	char pad_20[4];  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct SlateCore.TextBlockStyle Size 624
// Inherited 8 bytes 
class FTextBlockStyle : public FSlateWidgetStyle
{

 public: 
	struct FSlateFontInfo Font;  // Offset: 8 Size: 88
	struct FSlateColor ColorAndOpacity;  // Offset: 96 Size: 40
	struct FVector2D ShadowOffset;  // Offset: 136 Size: 8
	struct FLinearColor ShadowColorAndOpacity;  // Offset: 144 Size: 16
	struct FSlateColor SelectedBackgroundColor;  // Offset: 160 Size: 40
	struct FLinearColor HighlightColor;  // Offset: 200 Size: 16
	struct FSlateBrush HighlightShape;  // Offset: 216 Size: 136
	struct FSlateBrush StrikeBrush;  // Offset: 352 Size: 136
	struct FSlateBrush UnderlineBrush;  // Offset: 488 Size: 136



 // Functions 
 public:
}; 
 
 //ScriptStruct SlateCore.SpinBoxStyle Size 744
// Inherited 8 bytes 
class FSpinBoxStyle : public FSlateWidgetStyle
{

 public: 
	struct FSlateBrush BackgroundBrush;  // Offset: 8 Size: 136
	struct FSlateBrush HoveredBackgroundBrush;  // Offset: 144 Size: 136
	struct FSlateBrush ActiveFillBrush;  // Offset: 280 Size: 136
	struct FSlateBrush InactiveFillBrush;  // Offset: 416 Size: 136
	struct FSlateBrush ArrowsImage;  // Offset: 552 Size: 136
	struct FSlateColor ForegroundColor;  // Offset: 688 Size: 40
	struct FMargin TextPadding;  // Offset: 728 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct SlateCore.SplitterStyle Size 280
// Inherited 8 bytes 
class FSplitterStyle : public FSlateWidgetStyle
{

 public: 
	struct FSlateBrush HandleNormalBrush;  // Offset: 8 Size: 136
	struct FSlateBrush HandleHighlightBrush;  // Offset: 144 Size: 136



 // Functions 
 public:
}; 
 
 //ScriptStruct SlateCore.MotionEvent Size 72
// Inherited 24 bytes 
class FMotionEvent : public FInputEvent
{

 public: 
	char pad_24[48];  // Offset: 24 Size: 48



 // Functions 
 public:
}; 
 
 //ScriptStruct SlateCore.SliderStyle Size 832
// Inherited 8 bytes 
class FSliderStyle : public FSlateWidgetStyle
{

 public: 
	struct FSlateBrush NormalBarImage;  // Offset: 8 Size: 136
	struct FSlateBrush HoveredBarImage;  // Offset: 144 Size: 136
	struct FSlateBrush DisabledBarImage;  // Offset: 280 Size: 136
	struct FSlateBrush NormalThumbImage;  // Offset: 416 Size: 136
	struct FSlateBrush HoveredThumbImage;  // Offset: 552 Size: 136
	struct FSlateBrush DisabledThumbImage;  // Offset: 688 Size: 136
	float BarThickness;  // Offset: 824 Size: 4
	char pad_828[4];  // Offset: 828 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct SlateCore.HeaderRowStyle Size 2928
// Inherited 8 bytes 
class FHeaderRowStyle : public FSlateWidgetStyle
{

 public: 
	struct FTableColumnHeaderStyle ColumnStyle;  // Offset: 8 Size: 1232
	struct FTableColumnHeaderStyle LastColumnStyle;  // Offset: 1240 Size: 1232
	struct FSplitterStyle ColumnSplitterStyle;  // Offset: 2472 Size: 280
	struct FSlateBrush BackgroundBrush;  // Offset: 2752 Size: 136
	struct FSlateColor ForegroundColor;  // Offset: 2888 Size: 40



 // Functions 
 public:
}; 
 
 //ScriptStruct SlateCore.Typeface Size 16
class FTypeface
{

 public: 
	struct TArray<struct FTypefaceEntry> Fonts;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct SlateCore.InlineTextImageStyle Size 152
// Inherited 8 bytes 
class FInlineTextImageStyle : public FSlateWidgetStyle
{

 public: 
	struct FSlateBrush Image;  // Offset: 8 Size: 136
	int16_t Baseline;  // Offset: 144 Size: 2
	char pad_146[6];  // Offset: 146 Size: 6



 // Functions 
 public:
}; 
 
 //ScriptStruct SlateCore.TypefaceEntry Size 40
class FTypefaceEntry
{

 public: 
	struct FName Name;  // Offset: 0 Size: 8
	struct FFontData Font;  // Offset: 8 Size: 32



 // Functions 
 public:
}; 
 
 //ScriptStruct SlateCore.FontData Size 32
class FFontData
{

 public: 
	struct FString FontFilename;  // Offset: 0 Size: 16
	enum class EFontHinting Hinting;  // Offset: 16 Size: 1
	enum class EFontLoadingPolicy LoadingPolicy;  // Offset: 17 Size: 1
	char pad_18[2];  // Offset: 18 Size: 2
	int32_t SubFaceIndex;  // Offset: 20 Size: 4
	struct UObject* FontFaceAsset;  // Offset: 24 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct SlateCore.CompositeSubFont Size 56
// Inherited 24 bytes 
class FCompositeSubFont : public FCompositeFallbackFont
{

 public: 
	struct TArray<struct FInt32Range> CharacterRanges;  // Offset: 24 Size: 16
	struct FString Cultures;  // Offset: 40 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct SlateCore.DockTabStyle Size 1792
// Inherited 8 bytes 
class FDockTabStyle : public FSlateWidgetStyle
{

 public: 
	struct FButtonStyle CloseButtonStyle;  // Offset: 8 Size: 632
	struct FSlateBrush NormalBrush;  // Offset: 640 Size: 136
	struct FSlateBrush ActiveBrush;  // Offset: 776 Size: 136
	struct FSlateBrush ColorOverlayTabBrush;  // Offset: 912 Size: 136
	struct FSlateBrush ColorOverlayIconBrush;  // Offset: 1048 Size: 136
	struct FSlateBrush ForegroundBrush;  // Offset: 1184 Size: 136
	struct FSlateBrush HoveredBrush;  // Offset: 1320 Size: 136
	struct FSlateBrush ContentAreaBrush;  // Offset: 1456 Size: 136
	struct FSlateBrush TabWellBrush;  // Offset: 1592 Size: 136
	struct FMargin TabPadding;  // Offset: 1728 Size: 16
	float OverlapWidth;  // Offset: 1744 Size: 4
	char pad_1748[4];  // Offset: 1748 Size: 4
	struct FSlateColor FlashColor;  // Offset: 1752 Size: 40



 // Functions 
 public:
}; 
 
 //ScriptStruct SlateCore.CaptureLostEvent Size 8
class FCaptureLostEvent
{

 public: 
	char pad_0[8];  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct SlateCore.TableColumnHeaderStyle Size 1232
// Inherited 8 bytes 
class FTableColumnHeaderStyle : public FSlateWidgetStyle
{

 public: 
	struct FSlateBrush SortPrimaryAscendingImage;  // Offset: 8 Size: 136
	struct FSlateBrush SortPrimaryDescendingImage;  // Offset: 144 Size: 136
	struct FSlateBrush SortSecondaryAscendingImage;  // Offset: 280 Size: 136
	struct FSlateBrush SortSecondaryDescendingImage;  // Offset: 416 Size: 136
	struct FSlateBrush NormalBrush;  // Offset: 552 Size: 136
	struct FSlateBrush HoveredBrush;  // Offset: 688 Size: 136
	struct FSlateBrush MenuDropdownImage;  // Offset: 824 Size: 136
	struct FSlateBrush MenuDropdownNormalBorderBrush;  // Offset: 960 Size: 136
	struct FSlateBrush MenuDropdownHoveredBorderBrush;  // Offset: 1096 Size: 136



 // Functions 
 public:
}; 
 
 //ScriptStruct SlateCore.VolumeControlStyle Size 1520
// Inherited 8 bytes 
class FVolumeControlStyle : public FSlateWidgetStyle
{

 public: 
	struct FSliderStyle SliderStyle;  // Offset: 8 Size: 832
	struct FSlateBrush HighVolumeImage;  // Offset: 840 Size: 136
	struct FSlateBrush MidVolumeImage;  // Offset: 976 Size: 136
	struct FSlateBrush LowVolumeImage;  // Offset: 1112 Size: 136
	struct FSlateBrush NoVolumeImage;  // Offset: 1248 Size: 136
	struct FSlateBrush MutedImage;  // Offset: 1384 Size: 136



 // Functions 
 public:
}; 
 
 //ScriptStruct SlateCore.SearchBoxStyle Size 2704
// Inherited 8 bytes 
class FSearchBoxStyle : public FSlateWidgetStyle
{

 public: 
	struct FEditableTextBoxStyle TextBoxStyle;  // Offset: 8 Size: 2040
	struct FSlateFontInfo ActiveFontInfo;  // Offset: 2048 Size: 88
	struct FSlateBrush UpArrowImage;  // Offset: 2136 Size: 136
	struct FSlateBrush DownArrowImage;  // Offset: 2272 Size: 136
	struct FSlateBrush GlassImage;  // Offset: 2408 Size: 136
	struct FSlateBrush ClearImage;  // Offset: 2544 Size: 136
	struct FMargin ImagePadding;  // Offset: 2680 Size: 16
	char pad_2696_1 : 7;  // Offset: 2696 Size: 1
	bool bLeftAlignButtons : 1;  // Offset: 2696 Size: 1
	char pad_2697[7];  // Offset: 2697 Size: 7



 // Functions 
 public:
}; 
 
 //ScriptStruct SlateCore.ExpandableAreaStyle Size 288
// Inherited 8 bytes 
class FExpandableAreaStyle : public FSlateWidgetStyle
{

 public: 
	struct FSlateBrush CollapsedImage;  // Offset: 8 Size: 136
	struct FSlateBrush ExpandedImage;  // Offset: 144 Size: 136
	float RolloutAnimationSeconds;  // Offset: 280 Size: 4
	char pad_284[4];  // Offset: 284 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct SlateCore.ProgressBarStyle Size 416
// Inherited 8 bytes 
class FProgressBarStyle : public FSlateWidgetStyle
{

 public: 
	struct FSlateBrush BackgroundImage;  // Offset: 8 Size: 136
	struct FSlateBrush FillImage;  // Offset: 144 Size: 136
	struct FSlateBrush MarqueeImage;  // Offset: 280 Size: 136



 // Functions 
 public:
}; 
 
 //ScriptStruct SlateCore.CheckBoxStyle Size 1408
// Inherited 8 bytes 
class FCheckBoxStyle : public FSlateWidgetStyle
{

 public: 
	enum class ESlateCheckBoxType CheckBoxType;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7
	struct FSlateBrush UncheckedImage;  // Offset: 16 Size: 136
	struct FSlateBrush UncheckedHoveredImage;  // Offset: 152 Size: 136
	struct FSlateBrush UncheckedPressedImage;  // Offset: 288 Size: 136
	struct FSlateBrush CheckedImage;  // Offset: 424 Size: 136
	struct FSlateBrush CheckedHoveredImage;  // Offset: 560 Size: 136
	struct FSlateBrush CheckedPressedImage;  // Offset: 696 Size: 136
	struct FSlateBrush UndeterminedImage;  // Offset: 832 Size: 136
	struct FSlateBrush UndeterminedHoveredImage;  // Offset: 968 Size: 136
	struct FSlateBrush UndeterminedPressedImage;  // Offset: 1104 Size: 136
	struct FMargin Padding;  // Offset: 1240 Size: 16
	struct FSlateColor ForegroundColor;  // Offset: 1256 Size: 40
	struct FSlateColor BorderBackgroundColor;  // Offset: 1296 Size: 40
	struct FSlateSound CheckedSlateSound;  // Offset: 1336 Size: 24
	struct FSlateSound UncheckedSlateSound;  // Offset: 1360 Size: 24
	struct FSlateSound HoveredSlateSound;  // Offset: 1384 Size: 24



 // Functions 
 public:
}; 
 
 //ScriptStruct SlateCore.InlineEditableTextBlockStyle Size 2672
// Inherited 8 bytes 
class FInlineEditableTextBlockStyle : public FSlateWidgetStyle
{

 public: 
	struct FEditableTextBoxStyle EditableTextBoxStyle;  // Offset: 8 Size: 2040
	struct FTextBlockStyle TextStyle;  // Offset: 2048 Size: 624



 // Functions 
 public:
}; 
 
 