#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FHyperlinkStyle
{
public:
	FHyperlinkStyle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FButtonStyle GetUnderlineStyle() {
		return memory.read<struct FButtonStyle>(m_addr + 8);
	}
	struct FTextBlockStyle GetTextStyle() {
		return memory.read<struct FTextBlockStyle>(m_addr + 640);
	}
	struct FMargin GetPadding() {
		return memory.read<struct FMargin>(m_addr + 1264);
	}

private:
	std::uint64_t m_addr = 0;
};class FCompositeFont
{
public:
	FCompositeFont(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTypeface GetDefaultTypeface() {
		return memory.read<struct FTypeface>(m_addr + 0);
	}
	struct FCompositeFallbackFont GetFallbackTypeface() {
		return memory.read<struct FCompositeFallbackFont>(m_addr + 16);
	}
	struct TArray<struct FCompositeSubFont> GetSubTypefaces() {
		return memory.read<struct TArray<struct FCompositeSubFont>>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FSlateColor
{
public:
	FSlateColor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLinearColor GetSpecifiedColor() {
		return memory.read<struct FLinearColor>(m_addr + 0);
	}
	enum class ESlateColorStylingMode GetColorUseRule() {
		return memory.read<enum class ESlateColorStylingMode>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FCharacterEvent
{
public:
	FCharacterEvent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FWindowStyle
{
public:
	FWindowStyle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FButtonStyle GetMinimizeButtonStyle() {
		return memory.read<struct FButtonStyle>(m_addr + 8);
	}
	struct FButtonStyle GetMaximizeButtonStyle() {
		return memory.read<struct FButtonStyle>(m_addr + 640);
	}
	struct FButtonStyle GetRestoreButtonStyle() {
		return memory.read<struct FButtonStyle>(m_addr + 1272);
	}
	struct FButtonStyle GetCloseButtonStyle() {
		return memory.read<struct FButtonStyle>(m_addr + 1904);
	}
	struct FTextBlockStyle GetTitleTextStyle() {
		return memory.read<struct FTextBlockStyle>(m_addr + 2536);
	}
	struct FSlateBrush GetActiveTitleBrush() {
		return memory.read<struct FSlateBrush>(m_addr + 3160);
	}
	struct FSlateBrush GetInactiveTitleBrush() {
		return memory.read<struct FSlateBrush>(m_addr + 3296);
	}
	struct FSlateBrush GetFlashTitleBrush() {
		return memory.read<struct FSlateBrush>(m_addr + 3432);
	}
	struct FSlateColor GetBackgroundColor() {
		return memory.read<struct FSlateColor>(m_addr + 3568);
	}
	struct FSlateBrush GetOutlineBrush() {
		return memory.read<struct FSlateBrush>(m_addr + 3608);
	}
	struct FSlateColor GetOutlineColor() {
		return memory.read<struct FSlateColor>(m_addr + 3744);
	}
	struct FSlateBrush GetBorderBrush() {
		return memory.read<struct FSlateBrush>(m_addr + 3784);
	}
	struct FSlateBrush GetBackgroundBrush() {
		return memory.read<struct FSlateBrush>(m_addr + 3920);
	}
	struct FSlateBrush GetChildBackgroundBrush() {
		return memory.read<struct FSlateBrush>(m_addr + 4056);
	}

private:
	std::uint64_t m_addr = 0;
};class FInputEvent
{
public:
	FInputEvent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FGeometry
{
public:
	FGeometry(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FSlateBrush
{
public:
	FSlateBrush(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector2D GetImageSize() {
		return memory.read<struct FVector2D>(m_addr + 8);
	}
	struct FMargin GetMargin() {
		return memory.read<struct FMargin>(m_addr + 16);
	}
	struct FSlateColor GetTintColor() {
		return memory.read<struct FSlateColor>(m_addr + 32);
	}
	struct UObject GetResourceObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 72);
		return struct UObject(ptr_addr);
	}
	struct FName GetResourceName() {
		return memory.read<struct FName>(m_addr + 80);
	}
	struct FBox2D GetUVRegion() {
		return memory.read<struct FBox2D>(m_addr + 88);
	}
	enum class ESlateBrushDrawType GetDrawAs() {
		return memory.read<enum class ESlateBrushDrawType>(m_addr + 108);
	}
	enum class ESlateBrushTileType Gettiling() {
		return memory.read<enum class ESlateBrushTileType>(m_addr + 109);
	}
	enum class ESlateBrushMirrorType GetMirroring() {
		return memory.read<enum class ESlateBrushMirrorType>(m_addr + 110);
	}
	enum class ESlateBrushImageType GetImageType() {
		return memory.read<enum class ESlateBrushImageType>(m_addr + 111);
	}
	char GetbIsDynamicallyLoaded() {
		return memory.read<char>(m_addr + 128);
	}
	char GetbHasUObject() {
		return memory.read<char>(m_addr + 128);
	}

private:
	std::uint64_t m_addr = 0;
};class FFontOutlineSettings
{
public:
	FFontOutlineSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetOutlineSize() {
		return memory.read<int32_t>(m_addr + 0);
	}
	bool GetbSeparateFillAlpha() {
		return memory.read<bool>(m_addr + 4);
	}
	bool GetbApplyOutlineToDropShadows() {
		return memory.read<bool>(m_addr + 5);
	}
	struct UObject GetOutlineMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UObject(ptr_addr);
	}
	struct FLinearColor GetOutlineColor() {
		return memory.read<struct FLinearColor>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FMargin
{
public:
	FMargin(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetLeft() {
		return memory.read<float>(m_addr + 0);
	}
	float GetTop() {
		return memory.read<float>(m_addr + 4);
	}
	float GetRight() {
		return memory.read<float>(m_addr + 8);
	}
	float GetBottom() {
		return memory.read<float>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FPointerEvent
{
public:
	FPointerEvent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FScrollBarStyle
{
public:
	FScrollBarStyle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSlateBrush GetHorizontalBackgroundImage() {
		return memory.read<struct FSlateBrush>(m_addr + 8);
	}
	struct FSlateBrush GetVerticalBackgroundImage() {
		return memory.read<struct FSlateBrush>(m_addr + 144);
	}
	struct FSlateBrush GetVerticalTopSlotImage() {
		return memory.read<struct FSlateBrush>(m_addr + 280);
	}
	struct FSlateBrush GetHorizontalTopSlotImage() {
		return memory.read<struct FSlateBrush>(m_addr + 416);
	}
	struct FSlateBrush GetVerticalBottomSlotImage() {
		return memory.read<struct FSlateBrush>(m_addr + 552);
	}
	struct FSlateBrush GetHorizontalBottomSlotImage() {
		return memory.read<struct FSlateBrush>(m_addr + 688);
	}
	struct FSlateBrush GetNormalThumbImage() {
		return memory.read<struct FSlateBrush>(m_addr + 824);
	}
	struct FSlateBrush GetHoveredThumbImage() {
		return memory.read<struct FSlateBrush>(m_addr + 960);
	}
	struct FSlateBrush GetDraggedThumbImage() {
		return memory.read<struct FSlateBrush>(m_addr + 1096);
	}

private:
	std::uint64_t m_addr = 0;
};class FSlateSound
{
public:
	FSlateSound(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetResourceObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FKeyEvent
{
public:
	FKeyEvent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FNavigationEvent
{
public:
	FNavigationEvent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FAnalogInputEvent
{
public:
	FAnalogInputEvent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FSlateFontInfo
{
public:
	FSlateFontInfo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetFontObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct UObject GetFontMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UObject(ptr_addr);
	}
	struct FFontOutlineSettings GetOutlineSettings() {
		return memory.read<struct FFontOutlineSettings>(m_addr + 16);
	}
	struct FName GetTypefaceFontName() {
		return memory.read<struct FName>(m_addr + 64);
	}
	int32_t GetSize() {
		return memory.read<int32_t>(m_addr + 72);
	}
	int32_t GetLetterSpacing() {
		return memory.read<int32_t>(m_addr + 76);
	}

private:
	std::uint64_t m_addr = 0;
};class FSlateWidgetStyle
{
public:
	FSlateWidgetStyle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FTableRowStyle
{
public:
	FTableRowStyle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSlateBrush GetSelectorFocusedBrush() {
		return memory.read<struct FSlateBrush>(m_addr + 8);
	}
	struct FSlateBrush GetActiveHoveredBrush() {
		return memory.read<struct FSlateBrush>(m_addr + 144);
	}
	struct FSlateBrush GetActiveBrush() {
		return memory.read<struct FSlateBrush>(m_addr + 280);
	}
	struct FSlateBrush GetInactiveHoveredBrush() {
		return memory.read<struct FSlateBrush>(m_addr + 416);
	}
	struct FSlateBrush GetInactiveBrush() {
		return memory.read<struct FSlateBrush>(m_addr + 552);
	}
	struct FSlateBrush GetEvenRowBackgroundHoveredBrush() {
		return memory.read<struct FSlateBrush>(m_addr + 688);
	}
	struct FSlateBrush GetEvenRowBackgroundBrush() {
		return memory.read<struct FSlateBrush>(m_addr + 824);
	}
	struct FSlateBrush GetOddRowBackgroundHoveredBrush() {
		return memory.read<struct FSlateBrush>(m_addr + 960);
	}
	struct FSlateBrush GetOddRowBackgroundBrush() {
		return memory.read<struct FSlateBrush>(m_addr + 1096);
	}
	struct FSlateColor GetTextColor() {
		return memory.read<struct FSlateColor>(m_addr + 1232);
	}
	struct FSlateColor GetSelectedTextColor() {
		return memory.read<struct FSlateColor>(m_addr + 1272);
	}
	struct FSlateBrush GetDropIndicator_Above() {
		return memory.read<struct FSlateBrush>(m_addr + 1312);
	}
	struct FSlateBrush GetDropIndicator_Onto() {
		return memory.read<struct FSlateBrush>(m_addr + 1448);
	}
	struct FSlateBrush GetDropIndicator_Below() {
		return memory.read<struct FSlateBrush>(m_addr + 1584);
	}
	struct FSlateBrush GetActiveHighlightedBrush() {
		return memory.read<struct FSlateBrush>(m_addr + 1720);
	}
	struct FSlateBrush GetInactiveHighlightedBrush() {
		return memory.read<struct FSlateBrush>(m_addr + 1856);
	}

private:
	std::uint64_t m_addr = 0;
};class FComboBoxStyle
{
public:
	FComboBoxStyle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FComboButtonStyle GetComboButtonStyle() {
		return memory.read<struct FComboButtonStyle>(m_addr + 8);
	}
	struct FSlateSound GetPressedSlateSound() {
		return memory.read<struct FSlateSound>(m_addr + 960);
	}
	struct FSlateSound GetSelectionChangeSlateSound() {
		return memory.read<struct FSlateSound>(m_addr + 984);
	}

private:
	std::uint64_t m_addr = 0;
};class FScrollBoxStyle
{
public:
	FScrollBoxStyle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSlateBrush GetTopShadowBrush() {
		return memory.read<struct FSlateBrush>(m_addr + 8);
	}
	struct FSlateBrush GetBottomShadowBrush() {
		return memory.read<struct FSlateBrush>(m_addr + 144);
	}
	struct FSlateBrush GetLeftShadowBrush() {
		return memory.read<struct FSlateBrush>(m_addr + 280);
	}
	struct FSlateBrush GetRightShadowBrush() {
		return memory.read<struct FSlateBrush>(m_addr + 416);
	}

private:
	std::uint64_t m_addr = 0;
};class FFocusEvent
{
public:
	FFocusEvent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FComboButtonStyle
{
public:
	FComboButtonStyle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FButtonStyle GetButtonStyle() {
		return memory.read<struct FButtonStyle>(m_addr + 8);
	}
	struct FSlateBrush GetDownArrowImage() {
		return memory.read<struct FSlateBrush>(m_addr + 640);
	}
	struct FVector2D GetShadowOffset() {
		return memory.read<struct FVector2D>(m_addr + 776);
	}
	struct FLinearColor GetShadowColorAndOpacity() {
		return memory.read<struct FLinearColor>(m_addr + 784);
	}
	struct FSlateBrush GetMenuBorderBrush() {
		return memory.read<struct FSlateBrush>(m_addr + 800);
	}
	struct FMargin GetMenuBorderPadding() {
		return memory.read<struct FMargin>(m_addr + 936);
	}

private:
	std::uint64_t m_addr = 0;
};class FButtonStyle
{
public:
	FButtonStyle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSlateBrush GetNormal() {
		return memory.read<struct FSlateBrush>(m_addr + 8);
	}
	struct FSlateBrush GetHovered() {
		return memory.read<struct FSlateBrush>(m_addr + 144);
	}
	struct FSlateBrush GetPressed() {
		return memory.read<struct FSlateBrush>(m_addr + 280);
	}
	struct FSlateBrush GetDisabled() {
		return memory.read<struct FSlateBrush>(m_addr + 416);
	}
	struct FMargin GetNormalPadding() {
		return memory.read<struct FMargin>(m_addr + 552);
	}
	struct FMargin GetPressedPadding() {
		return memory.read<struct FMargin>(m_addr + 568);
	}
	struct FSlateSound GetPressedSlateSound() {
		return memory.read<struct FSlateSound>(m_addr + 584);
	}
	struct FSlateSound GetHoveredSlateSound() {
		return memory.read<struct FSlateSound>(m_addr + 608);
	}

private:
	std::uint64_t m_addr = 0;
};class FScrollBorderStyle
{
public:
	FScrollBorderStyle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSlateBrush GetTopShadowBrush() {
		return memory.read<struct FSlateBrush>(m_addr + 8);
	}
	struct FSlateBrush GetBottomShadowBrush() {
		return memory.read<struct FSlateBrush>(m_addr + 144);
	}

private:
	std::uint64_t m_addr = 0;
};class FEditableTextStyle
{
public:
	FEditableTextStyle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSlateFontInfo GetFont() {
		return memory.read<struct FSlateFontInfo>(m_addr + 8);
	}
	struct FSlateColor GetColorAndOpacity() {
		return memory.read<struct FSlateColor>(m_addr + 96);
	}
	struct FSlateBrush GetBackgroundImageSelected() {
		return memory.read<struct FSlateBrush>(m_addr + 136);
	}
	struct FSlateBrush GetBackgroundImageComposing() {
		return memory.read<struct FSlateBrush>(m_addr + 272);
	}
	struct FSlateBrush GetCaretImage() {
		return memory.read<struct FSlateBrush>(m_addr + 408);
	}

private:
	std::uint64_t m_addr = 0;
};class FEditableTextBoxStyle
{
public:
	FEditableTextBoxStyle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSlateBrush GetBackgroundImageNormal() {
		return memory.read<struct FSlateBrush>(m_addr + 8);
	}
	struct FSlateBrush GetBackgroundImageHovered() {
		return memory.read<struct FSlateBrush>(m_addr + 144);
	}
	struct FSlateBrush GetBackgroundImageFocused() {
		return memory.read<struct FSlateBrush>(m_addr + 280);
	}
	struct FSlateBrush GetBackgroundImageReadOnly() {
		return memory.read<struct FSlateBrush>(m_addr + 416);
	}
	struct FMargin GetPadding() {
		return memory.read<struct FMargin>(m_addr + 552);
	}
	struct FSlateFontInfo GetFont() {
		return memory.read<struct FSlateFontInfo>(m_addr + 568);
	}
	struct FSlateColor GetForegroundColor() {
		return memory.read<struct FSlateColor>(m_addr + 656);
	}
	struct FSlateColor GetBackgroundColor() {
		return memory.read<struct FSlateColor>(m_addr + 696);
	}
	struct FSlateColor GetReadOnlyForegroundColor() {
		return memory.read<struct FSlateColor>(m_addr + 736);
	}
	struct FMargin GetHScrollBarPadding() {
		return memory.read<struct FMargin>(m_addr + 776);
	}
	struct FMargin GetVScrollBarPadding() {
		return memory.read<struct FMargin>(m_addr + 792);
	}
	struct FScrollBarStyle GetScrollBarStyle() {
		return memory.read<struct FScrollBarStyle>(m_addr + 808);
	}

private:
	std::uint64_t m_addr = 0;
};class FCompositeFallbackFont
{
public:
	FCompositeFallbackFont(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTypeface GetTypeface() {
		return memory.read<struct FTypeface>(m_addr + 0);
	}
	float GetScalingFactor() {
		return memory.read<float>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FTextBlockStyle
{
public:
	FTextBlockStyle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSlateFontInfo GetFont() {
		return memory.read<struct FSlateFontInfo>(m_addr + 8);
	}
	struct FSlateColor GetColorAndOpacity() {
		return memory.read<struct FSlateColor>(m_addr + 96);
	}
	struct FVector2D GetShadowOffset() {
		return memory.read<struct FVector2D>(m_addr + 136);
	}
	struct FLinearColor GetShadowColorAndOpacity() {
		return memory.read<struct FLinearColor>(m_addr + 144);
	}
	struct FSlateColor GetSelectedBackgroundColor() {
		return memory.read<struct FSlateColor>(m_addr + 160);
	}
	struct FLinearColor GetHighlightColor() {
		return memory.read<struct FLinearColor>(m_addr + 200);
	}
	struct FSlateBrush GetHighlightShape() {
		return memory.read<struct FSlateBrush>(m_addr + 216);
	}
	struct FSlateBrush GetStrikeBrush() {
		return memory.read<struct FSlateBrush>(m_addr + 352);
	}
	struct FSlateBrush GetUnderlineBrush() {
		return memory.read<struct FSlateBrush>(m_addr + 488);
	}

private:
	std::uint64_t m_addr = 0;
};class FSpinBoxStyle
{
public:
	FSpinBoxStyle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSlateBrush GetBackgroundBrush() {
		return memory.read<struct FSlateBrush>(m_addr + 8);
	}
	struct FSlateBrush GetHoveredBackgroundBrush() {
		return memory.read<struct FSlateBrush>(m_addr + 144);
	}
	struct FSlateBrush GetActiveFillBrush() {
		return memory.read<struct FSlateBrush>(m_addr + 280);
	}
	struct FSlateBrush GetInactiveFillBrush() {
		return memory.read<struct FSlateBrush>(m_addr + 416);
	}
	struct FSlateBrush GetArrowsImage() {
		return memory.read<struct FSlateBrush>(m_addr + 552);
	}
	struct FSlateColor GetForegroundColor() {
		return memory.read<struct FSlateColor>(m_addr + 688);
	}
	struct FMargin GetTextPadding() {
		return memory.read<struct FMargin>(m_addr + 728);
	}

private:
	std::uint64_t m_addr = 0;
};class FSplitterStyle
{
public:
	FSplitterStyle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSlateBrush GetHandleNormalBrush() {
		return memory.read<struct FSlateBrush>(m_addr + 8);
	}
	struct FSlateBrush GetHandleHighlightBrush() {
		return memory.read<struct FSlateBrush>(m_addr + 144);
	}

private:
	std::uint64_t m_addr = 0;
};class FMotionEvent
{
public:
	FMotionEvent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FSliderStyle
{
public:
	FSliderStyle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSlateBrush GetNormalBarImage() {
		return memory.read<struct FSlateBrush>(m_addr + 8);
	}
	struct FSlateBrush GetHoveredBarImage() {
		return memory.read<struct FSlateBrush>(m_addr + 144);
	}
	struct FSlateBrush GetDisabledBarImage() {
		return memory.read<struct FSlateBrush>(m_addr + 280);
	}
	struct FSlateBrush GetNormalThumbImage() {
		return memory.read<struct FSlateBrush>(m_addr + 416);
	}
	struct FSlateBrush GetHoveredThumbImage() {
		return memory.read<struct FSlateBrush>(m_addr + 552);
	}
	struct FSlateBrush GetDisabledThumbImage() {
		return memory.read<struct FSlateBrush>(m_addr + 688);
	}
	float GetBarThickness() {
		return memory.read<float>(m_addr + 824);
	}

private:
	std::uint64_t m_addr = 0;
};class FHeaderRowStyle
{
public:
	FHeaderRowStyle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTableColumnHeaderStyle GetColumnStyle() {
		return memory.read<struct FTableColumnHeaderStyle>(m_addr + 8);
	}
	struct FTableColumnHeaderStyle GetLastColumnStyle() {
		return memory.read<struct FTableColumnHeaderStyle>(m_addr + 1240);
	}
	struct FSplitterStyle GetColumnSplitterStyle() {
		return memory.read<struct FSplitterStyle>(m_addr + 2472);
	}
	struct FSlateBrush GetBackgroundBrush() {
		return memory.read<struct FSlateBrush>(m_addr + 2752);
	}
	struct FSlateColor GetForegroundColor() {
		return memory.read<struct FSlateColor>(m_addr + 2888);
	}

private:
	std::uint64_t m_addr = 0;
};class FTypeface
{
public:
	FTypeface(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FTypefaceEntry> GetFonts() {
		return memory.read<struct TArray<struct FTypefaceEntry>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FInlineTextImageStyle
{
public:
	FInlineTextImageStyle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSlateBrush GetImage() {
		return memory.read<struct FSlateBrush>(m_addr + 8);
	}
	int16_t GetBaseline() {
		return memory.read<int16_t>(m_addr + 144);
	}

private:
	std::uint64_t m_addr = 0;
};class FTypefaceEntry
{
public:
	FTypefaceEntry(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FFontData GetFont() {
		return memory.read<struct FFontData>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FFontData
{
public:
	FFontData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetFontFilename() {
		return memory.read<struct FString>(m_addr + 0);
	}
	enum class EFontHinting GetHinting() {
		return memory.read<enum class EFontHinting>(m_addr + 16);
	}
	enum class EFontLoadingPolicy GetLoadingPolicy() {
		return memory.read<enum class EFontLoadingPolicy>(m_addr + 17);
	}
	int32_t GetSubFaceIndex() {
		return memory.read<int32_t>(m_addr + 20);
	}
	struct UObject GetFontFaceAsset() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct UObject(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FCompositeSubFont
{
public:
	FCompositeSubFont(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FInt32Range> GetCharacterRanges() {
		return memory.read<struct TArray<struct FInt32Range>>(m_addr + 24);
	}
	struct FString GetCultures() {
		return memory.read<struct FString>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FDockTabStyle
{
public:
	FDockTabStyle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FButtonStyle GetCloseButtonStyle() {
		return memory.read<struct FButtonStyle>(m_addr + 8);
	}
	struct FSlateBrush GetNormalBrush() {
		return memory.read<struct FSlateBrush>(m_addr + 640);
	}
	struct FSlateBrush GetActiveBrush() {
		return memory.read<struct FSlateBrush>(m_addr + 776);
	}
	struct FSlateBrush GetColorOverlayTabBrush() {
		return memory.read<struct FSlateBrush>(m_addr + 912);
	}
	struct FSlateBrush GetColorOverlayIconBrush() {
		return memory.read<struct FSlateBrush>(m_addr + 1048);
	}
	struct FSlateBrush GetForegroundBrush() {
		return memory.read<struct FSlateBrush>(m_addr + 1184);
	}
	struct FSlateBrush GetHoveredBrush() {
		return memory.read<struct FSlateBrush>(m_addr + 1320);
	}
	struct FSlateBrush GetContentAreaBrush() {
		return memory.read<struct FSlateBrush>(m_addr + 1456);
	}
	struct FSlateBrush GetTabWellBrush() {
		return memory.read<struct FSlateBrush>(m_addr + 1592);
	}
	struct FMargin GetTabPadding() {
		return memory.read<struct FMargin>(m_addr + 1728);
	}
	float GetOverlapWidth() {
		return memory.read<float>(m_addr + 1744);
	}
	struct FSlateColor GetFlashColor() {
		return memory.read<struct FSlateColor>(m_addr + 1752);
	}

private:
	std::uint64_t m_addr = 0;
};class FCaptureLostEvent
{
public:
	FCaptureLostEvent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FTableColumnHeaderStyle
{
public:
	FTableColumnHeaderStyle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSlateBrush GetSortPrimaryAscendingImage() {
		return memory.read<struct FSlateBrush>(m_addr + 8);
	}
	struct FSlateBrush GetSortPrimaryDescendingImage() {
		return memory.read<struct FSlateBrush>(m_addr + 144);
	}
	struct FSlateBrush GetSortSecondaryAscendingImage() {
		return memory.read<struct FSlateBrush>(m_addr + 280);
	}
	struct FSlateBrush GetSortSecondaryDescendingImage() {
		return memory.read<struct FSlateBrush>(m_addr + 416);
	}
	struct FSlateBrush GetNormalBrush() {
		return memory.read<struct FSlateBrush>(m_addr + 552);
	}
	struct FSlateBrush GetHoveredBrush() {
		return memory.read<struct FSlateBrush>(m_addr + 688);
	}
	struct FSlateBrush GetMenuDropdownImage() {
		return memory.read<struct FSlateBrush>(m_addr + 824);
	}
	struct FSlateBrush GetMenuDropdownNormalBorderBrush() {
		return memory.read<struct FSlateBrush>(m_addr + 960);
	}
	struct FSlateBrush GetMenuDropdownHoveredBorderBrush() {
		return memory.read<struct FSlateBrush>(m_addr + 1096);
	}

private:
	std::uint64_t m_addr = 0;
};class FVolumeControlStyle
{
public:
	FVolumeControlStyle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSliderStyle GetSliderStyle() {
		return memory.read<struct FSliderStyle>(m_addr + 8);
	}
	struct FSlateBrush GetHighVolumeImage() {
		return memory.read<struct FSlateBrush>(m_addr + 840);
	}
	struct FSlateBrush GetMidVolumeImage() {
		return memory.read<struct FSlateBrush>(m_addr + 976);
	}
	struct FSlateBrush GetLowVolumeImage() {
		return memory.read<struct FSlateBrush>(m_addr + 1112);
	}
	struct FSlateBrush GetNoVolumeImage() {
		return memory.read<struct FSlateBrush>(m_addr + 1248);
	}
	struct FSlateBrush GetMutedImage() {
		return memory.read<struct FSlateBrush>(m_addr + 1384);
	}

private:
	std::uint64_t m_addr = 0;
};class FSearchBoxStyle
{
public:
	FSearchBoxStyle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FEditableTextBoxStyle GetTextBoxStyle() {
		return memory.read<struct FEditableTextBoxStyle>(m_addr + 8);
	}
	struct FSlateFontInfo GetActiveFontInfo() {
		return memory.read<struct FSlateFontInfo>(m_addr + 2048);
	}
	struct FSlateBrush GetUpArrowImage() {
		return memory.read<struct FSlateBrush>(m_addr + 2136);
	}
	struct FSlateBrush GetDownArrowImage() {
		return memory.read<struct FSlateBrush>(m_addr + 2272);
	}
	struct FSlateBrush GetGlassImage() {
		return memory.read<struct FSlateBrush>(m_addr + 2408);
	}
	struct FSlateBrush GetClearImage() {
		return memory.read<struct FSlateBrush>(m_addr + 2544);
	}
	struct FMargin GetImagePadding() {
		return memory.read<struct FMargin>(m_addr + 2680);
	}
	bool GetbLeftAlignButtons() {
		return memory.read<bool>(m_addr + 2696);
	}

private:
	std::uint64_t m_addr = 0;
};class FExpandableAreaStyle
{
public:
	FExpandableAreaStyle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSlateBrush GetCollapsedImage() {
		return memory.read<struct FSlateBrush>(m_addr + 8);
	}
	struct FSlateBrush GetExpandedImage() {
		return memory.read<struct FSlateBrush>(m_addr + 144);
	}
	float GetRolloutAnimationSeconds() {
		return memory.read<float>(m_addr + 280);
	}

private:
	std::uint64_t m_addr = 0;
};class FProgressBarStyle
{
public:
	FProgressBarStyle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSlateBrush GetBackgroundImage() {
		return memory.read<struct FSlateBrush>(m_addr + 8);
	}
	struct FSlateBrush GetFillImage() {
		return memory.read<struct FSlateBrush>(m_addr + 144);
	}
	struct FSlateBrush GetMarqueeImage() {
		return memory.read<struct FSlateBrush>(m_addr + 280);
	}

private:
	std::uint64_t m_addr = 0;
};class FCheckBoxStyle
{
public:
	FCheckBoxStyle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ESlateCheckBoxType GetCheckBoxType() {
		return memory.read<enum class ESlateCheckBoxType>(m_addr + 8);
	}
	struct FSlateBrush GetUncheckedImage() {
		return memory.read<struct FSlateBrush>(m_addr + 16);
	}
	struct FSlateBrush GetUncheckedHoveredImage() {
		return memory.read<struct FSlateBrush>(m_addr + 152);
	}
	struct FSlateBrush GetUncheckedPressedImage() {
		return memory.read<struct FSlateBrush>(m_addr + 288);
	}
	struct FSlateBrush GetCheckedImage() {
		return memory.read<struct FSlateBrush>(m_addr + 424);
	}
	struct FSlateBrush GetCheckedHoveredImage() {
		return memory.read<struct FSlateBrush>(m_addr + 560);
	}
	struct FSlateBrush GetCheckedPressedImage() {
		return memory.read<struct FSlateBrush>(m_addr + 696);
	}
	struct FSlateBrush GetUndeterminedImage() {
		return memory.read<struct FSlateBrush>(m_addr + 832);
	}
	struct FSlateBrush GetUndeterminedHoveredImage() {
		return memory.read<struct FSlateBrush>(m_addr + 968);
	}
	struct FSlateBrush GetUndeterminedPressedImage() {
		return memory.read<struct FSlateBrush>(m_addr + 1104);
	}
	struct FMargin GetPadding() {
		return memory.read<struct FMargin>(m_addr + 1240);
	}
	struct FSlateColor GetForegroundColor() {
		return memory.read<struct FSlateColor>(m_addr + 1256);
	}
	struct FSlateColor GetBorderBackgroundColor() {
		return memory.read<struct FSlateColor>(m_addr + 1296);
	}
	struct FSlateSound GetCheckedSlateSound() {
		return memory.read<struct FSlateSound>(m_addr + 1336);
	}
	struct FSlateSound GetUncheckedSlateSound() {
		return memory.read<struct FSlateSound>(m_addr + 1360);
	}
	struct FSlateSound GetHoveredSlateSound() {
		return memory.read<struct FSlateSound>(m_addr + 1384);
	}

private:
	std::uint64_t m_addr = 0;
};class FInlineEditableTextBlockStyle
{
public:
	FInlineEditableTextBlockStyle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FEditableTextBoxStyle GetEditableTextBoxStyle() {
		return memory.read<struct FEditableTextBoxStyle>(m_addr + 8);
	}
	struct FTextBlockStyle GetTextStyle() {
		return memory.read<struct FTextBlockStyle>(m_addr + 2048);
	}

private:
	std::uint64_t m_addr = 0;
};