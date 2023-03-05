#pragma once 
#include <UMG_Structs.h>
 
 
 
class UContentWidget
{
public:
	UContentWidget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UWidgetTree
{
public:
	UWidgetTree(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWidget GetRootWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct UWidget(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class URichTextBlock
{
public:
	URichTextBlock(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetText() {
		return memory.read<struct FText>(m_addr + 296);
	}
	struct UDataTable GetTextStyleSet() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 320);
		return struct UDataTable(ptr_addr);
	}
	struct TArray<URichTextBlockDecorator> GetDecoratorClasses() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 328);
		return struct TArray<URichTextBlockDecorator>(ptr_addr);
	}
	bool GetbOverrideDefaultStyle() {
		return memory.read<bool>(m_addr + 344);
	}
	struct FTextBlockStyle GetDefaultTextStyleOverride() {
		return memory.read<struct FTextBlockStyle>(m_addr + 352);
	}
	float GetMinDesiredWidth() {
		return memory.read<float>(m_addr + 976);
	}
	enum class ETextTransformPolicy GetTextTransformPolicy() {
		return memory.read<enum class ETextTransformPolicy>(m_addr + 980);
	}
	struct FTextBlockStyle GetDefaultTextStyle() {
		return memory.read<struct FTextBlockStyle>(m_addr + 984);
	}
	struct TArray<struct URichTextBlockDecorator> GetInstanceDecorators() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1608);
		return struct TArray<struct URichTextBlockDecorator>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UImage
{
public:
	UImage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSlateBrush GetBrush() {
		return memory.read<struct FSlateBrush>(m_addr + 264);
	}
	struct FDelegate GetBrushDelegate() {
		return memory.read<struct FDelegate>(m_addr + 400);
	}
	struct FLinearColor GetColorAndOpacity() {
		return memory.read<struct FLinearColor>(m_addr + 416);
	}
	struct FDelegate GetColorAndOpacityDelegate() {
		return memory.read<struct FDelegate>(m_addr + 432);
	}
	bool GetbFlipForRightToLeftFlowDirection() {
		return memory.read<bool>(m_addr + 448);
	}
	struct FDelegate GetOnMouseButtonDownEvent() {
		return memory.read<struct FDelegate>(m_addr + 452);
	}

private:
	std::uint64_t m_addr = 0;
};


class UTextLayoutWidget
{
public:
	UTextLayoutWidget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FShapedTextOptions GetShapedTextOptions() {
		return memory.read<struct FShapedTextOptions>(m_addr + 264);
	}
	enum class ETextJustify GetJustification() {
		return memory.read<enum class ETextJustify>(m_addr + 267);
	}
	enum class ETextWrappingPolicy GetWrappingPolicy() {
		return memory.read<enum class ETextWrappingPolicy>(m_addr + 268);
	}
	char GetAutoWrapText() {
		return memory.read<char>(m_addr + 269);
	}
	float GetWrapTextAt() {
		return memory.read<float>(m_addr + 272);
	}
	struct FMargin GetMargin() {
		return memory.read<struct FMargin>(m_addr + 276);
	}
	float GetLineHeightPercentage() {
		return memory.read<float>(m_addr + 292);
	}

private:
	std::uint64_t m_addr = 0;
};


class UVisual
{
public:
	UVisual(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UWidget
{
public:
	UWidget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPanelSlot GetSlot() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct UPanelSlot(ptr_addr);
	}
	struct FDelegate GetbIsEnabledDelegate() {
		return memory.read<struct FDelegate>(m_addr + 48);
	}
	struct FText GetToolTipText() {
		return memory.read<struct FText>(m_addr + 64);
	}
	struct FDelegate GetToolTipTextDelegate() {
		return memory.read<struct FDelegate>(m_addr + 88);
	}
	struct UWidget GetToolTipWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 104);
		return struct UWidget(ptr_addr);
	}
	struct FDelegate GetToolTipWidgetDelegate() {
		return memory.read<struct FDelegate>(m_addr + 112);
	}
	struct FDelegate GetVisibilityDelegate() {
		return memory.read<struct FDelegate>(m_addr + 128);
	}
	struct FWidgetTransform GetRenderTransform() {
		return memory.read<struct FWidgetTransform>(m_addr + 144);
	}
	struct FVector2D GetRenderTransformPivot() {
		return memory.read<struct FVector2D>(m_addr + 172);
	}
	char GetbIsVariable() {
		return memory.read<char>(m_addr + 180);
	}
	char GetbCreatedByConstructionScript() {
		return memory.read<char>(m_addr + 180);
	}
	char GetbIsEnabled() {
		return memory.read<char>(m_addr + 180);
	}
	char GetbOverride_Cursor() {
		return memory.read<char>(m_addr + 180);
	}
	struct USlateAccessibleWidgetData GetAccessibleWidgetData() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 184);
		return struct USlateAccessibleWidgetData(ptr_addr);
	}
	char GetbIsVolatile() {
		return memory.read<char>(m_addr + 192);
	}
	enum class EMouseCursor GetCursor() {
		return memory.read<enum class EMouseCursor>(m_addr + 193);
	}
	enum class EWidgetClipping GetClipping() {
		return memory.read<enum class EWidgetClipping>(m_addr + 194);
	}
	enum class ESlateVisibility GetVisibility() {
		return memory.read<enum class ESlateVisibility>(m_addr + 195);
	}
	float GetRenderOpacity() {
		return memory.read<float>(m_addr + 196);
	}
	struct UWidgetNavigation GetNavigation() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 200);
		return struct UWidgetNavigation(ptr_addr);
	}
	enum class EFlowDirectionPreference GetFlowDirectionPreference() {
		return memory.read<enum class EFlowDirectionPreference>(m_addr + 208);
	}
	struct TArray<struct UPropertyBinding> GetNativeBindings() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 248);
		return struct TArray<struct UPropertyBinding>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UUserWidget
{
public:
	UUserWidget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLinearColor GetColorAndOpacity() {
		return memory.read<struct FLinearColor>(m_addr + 272);
	}
	struct FDelegate GetColorAndOpacityDelegate() {
		return memory.read<struct FDelegate>(m_addr + 288);
	}
	struct FSlateColor GetForegroundColor() {
		return memory.read<struct FSlateColor>(m_addr + 304);
	}
	struct FDelegate GetForegroundColorDelegate() {
		return memory.read<struct FDelegate>(m_addr + 344);
	}
	struct FMulticastInlineDelegate GetOnVisibilityChanged() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 360);
	}
	struct FMargin GetPadding() {
		return memory.read<struct FMargin>(m_addr + 400);
	}
	struct TArray<struct UUMGSequencePlayer> GetActiveSequencePlayers() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 416);
		return struct TArray<struct UUMGSequencePlayer>(ptr_addr);
	}
	struct UUMGSequenceTickManager GetAnimationTickManager() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 432);
		return struct UUMGSequenceTickManager(ptr_addr);
	}
	struct TArray<struct UUMGSequencePlayer> GetStoppedSequencePlayers() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 440);
		return struct TArray<struct UUMGSequencePlayer>(ptr_addr);
	}
	struct TArray<struct FNamedSlotBinding> GetNamedSlotBindings() {
		return memory.read<struct TArray<struct FNamedSlotBinding>>(m_addr + 456);
	}
	struct UWidgetTree GetWidgetTree() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 472);
		return struct UWidgetTree(ptr_addr);
	}
	int32_t GetPriority() {
		return memory.read<int32_t>(m_addr + 480);
	}
	char GetbSupportsKeyboardFocus() {
		return memory.read<char>(m_addr + 484);
	}
	char GetbIsFocusable() {
		return memory.read<char>(m_addr + 484);
	}
	char GetbStopAction() {
		return memory.read<char>(m_addr + 484);
	}
	char GetbHasScriptImplementedTick() {
		return memory.read<char>(m_addr + 484);
	}
	char GetbHasScriptImplementedPaint() {
		return memory.read<char>(m_addr + 484);
	}
	enum class EWidgetTickFrequency GetTickFrequency() {
		return memory.read<enum class EWidgetTickFrequency>(m_addr + 496);
	}
	struct UInputComponent GetInputComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 504);
		return struct UInputComponent(ptr_addr);
	}
	struct TArray<struct FAnimationEventBinding> GetAnimationCallbacks() {
		return memory.read<struct TArray<struct FAnimationEventBinding>>(m_addr + 512);
	}

private:
	std::uint64_t m_addr = 0;
};


class UTextBlock
{
public:
	UTextBlock(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetText() {
		return memory.read<struct FText>(m_addr + 296);
	}
	struct FDelegate GetTextDelegate() {
		return memory.read<struct FDelegate>(m_addr + 320);
	}
	struct FSlateColor GetColorAndOpacity() {
		return memory.read<struct FSlateColor>(m_addr + 336);
	}
	struct FDelegate GetColorAndOpacityDelegate() {
		return memory.read<struct FDelegate>(m_addr + 376);
	}
	struct FSlateFontInfo GetFont() {
		return memory.read<struct FSlateFontInfo>(m_addr + 392);
	}
	struct FSlateBrush GetStrikeBrush() {
		return memory.read<struct FSlateBrush>(m_addr + 480);
	}
	struct FVector2D GetShadowOffset() {
		return memory.read<struct FVector2D>(m_addr + 616);
	}
	struct FLinearColor GetShadowColorAndOpacity() {
		return memory.read<struct FLinearColor>(m_addr + 624);
	}
	struct FDelegate GetShadowColorAndOpacityDelegate() {
		return memory.read<struct FDelegate>(m_addr + 640);
	}
	float GetMinDesiredWidth() {
		return memory.read<float>(m_addr + 656);
	}
	bool GetbWrapWithInvalidationPanel() {
		return memory.read<bool>(m_addr + 660);
	}
	bool GetbAutoWrapText() {
		return memory.read<bool>(m_addr + 661);
	}
	enum class ETextTransformPolicy GetTextTransformPolicy() {
		return memory.read<enum class ETextTransformPolicy>(m_addr + 662);
	}
	bool GetbSimpleTextMode() {
		return memory.read<bool>(m_addr + 663);
	}

private:
	std::uint64_t m_addr = 0;
};


class URichTextBlockDecorator
{
public:
	URichTextBlockDecorator(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieScene2DTransformPropertySystem
{
public:
	UMovieScene2DTransformPropertySystem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UComboBoxString
{
public:
	UComboBoxString(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FString> GetDefaultOptions() {
		return memory.read<struct TArray<struct FString>>(m_addr + 264);
	}
	struct FString GetSelectedOption() {
		return memory.read<struct FString>(m_addr + 280);
	}
	struct FComboBoxStyle GetWidgetStyle() {
		return memory.read<struct FComboBoxStyle>(m_addr + 296);
	}
	struct FTableRowStyle GetItemStyle() {
		return memory.read<struct FTableRowStyle>(m_addr + 1304);
	}
	struct FMargin GetContentPadding() {
		return memory.read<struct FMargin>(m_addr + 3296);
	}
	float GetMaxListHeight() {
		return memory.read<float>(m_addr + 3312);
	}
	bool GetHasDownArrow() {
		return memory.read<bool>(m_addr + 3316);
	}
	bool GetEnableGamepadNavigationMode() {
		return memory.read<bool>(m_addr + 3317);
	}
	struct FSlateFontInfo GetFont() {
		return memory.read<struct FSlateFontInfo>(m_addr + 3320);
	}
	struct FSlateColor GetForegroundColor() {
		return memory.read<struct FSlateColor>(m_addr + 3408);
	}
	bool GetbIsFocusable() {
		return memory.read<bool>(m_addr + 3448);
	}
	struct FDelegate GetOnGenerateWidgetEvent() {
		return memory.read<struct FDelegate>(m_addr + 3452);
	}
	struct FMulticastInlineDelegate GetOnSelectionChanged() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 3472);
	}
	struct FMulticastInlineDelegate GetOnOpening() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 3488);
	}

private:
	std::uint64_t m_addr = 0;
};


class UListViewBase
{
public:
	UListViewBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	UUserWidget GetEntryWidgetClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 264);
		return UUserWidget(ptr_addr);
	}
	float GetWheelScrollMultiplier() {
		return memory.read<float>(m_addr + 272);
	}
	bool GetbEnableScrollAnimation() {
		return memory.read<bool>(m_addr + 276);
	}
	bool GetbEnableFixedLineOffset() {
		return memory.read<bool>(m_addr + 277);
	}
	float GetFixedLineScrollOffset() {
		return memory.read<float>(m_addr + 280);
	}
	struct FMulticastInlineDelegate GetBP_OnEntryGenerated() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 288);
	}
	struct FMulticastInlineDelegate GetBP_OnEntryReleased() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 304);
	}
	struct FUserWidgetPool GetEntryWidgetPool() {
		return memory.read<struct FUserWidgetPool>(m_addr + 320);
	}

private:
	std::uint64_t m_addr = 0;
};


class UExpandableArea
{
public:
	UExpandableArea(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FExpandableAreaStyle GetStyle() {
		return memory.read<struct FExpandableAreaStyle>(m_addr + 272);
	}
	struct FSlateBrush GetBorderBrush() {
		return memory.read<struct FSlateBrush>(m_addr + 560);
	}
	struct FSlateColor GetBorderColor() {
		return memory.read<struct FSlateColor>(m_addr + 696);
	}
	bool GetbIsExpanded() {
		return memory.read<bool>(m_addr + 736);
	}
	float GetMaxHeight() {
		return memory.read<float>(m_addr + 740);
	}
	struct FMargin GetHeaderPadding() {
		return memory.read<struct FMargin>(m_addr + 744);
	}
	struct FMargin GetAreaPadding() {
		return memory.read<struct FMargin>(m_addr + 760);
	}
	struct FMulticastInlineDelegate GetOnExpansionChanged() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 776);
	}
	struct UWidget GetHeaderContent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 792);
		return struct UWidget(ptr_addr);
	}
	struct UWidget GetBodyContent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 800);
		return struct UWidget(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UListView
{
public:
	UListView(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EOrientation GetOrientation() {
		return memory.read<enum class EOrientation>(m_addr + 728);
	}
	enum class ESelectionMode GetSelectionMode() {
		return memory.read<enum class ESelectionMode>(m_addr + 729);
	}
	enum class EConsumeMouseWheel GetConsumeMouseWheel() {
		return memory.read<enum class EConsumeMouseWheel>(m_addr + 730);
	}
	bool GetbClearSelectionOnClick() {
		return memory.read<bool>(m_addr + 731);
	}
	bool GetbIsFocusable() {
		return memory.read<bool>(m_addr + 732);
	}
	float GetEntrySpacing() {
		return memory.read<float>(m_addr + 736);
	}
	bool GetbReturnFocusToSelection() {
		return memory.read<bool>(m_addr + 740);
	}
	struct TArray<struct UObject> GetListItems() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 744);
		return struct TArray<struct UObject>(ptr_addr);
	}
	struct FMulticastInlineDelegate GetBP_OnEntryInitialized() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 776);
	}
	struct FMulticastInlineDelegate GetBP_OnItemClicked() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 792);
	}
	struct FMulticastInlineDelegate GetBP_OnItemDoubleClicked() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 808);
	}
	struct FMulticastInlineDelegate GetBP_OnItemIsHoveredChanged() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 824);
	}
	struct FMulticastInlineDelegate GetBP_OnItemSelectionChanged() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 840);
	}
	struct FMulticastInlineDelegate GetBP_OnItemScrolledIntoView() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 856);
	}

private:
	std::uint64_t m_addr = 0;
};


class UTileView
{
public:
	UTileView(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetEntryHeight() {
		return memory.read<float>(m_addr + 872);
	}
	float GetEntryWidth() {
		return memory.read<float>(m_addr + 876);
	}
	enum class EListItemAlignment GetTileAlignment() {
		return memory.read<enum class EListItemAlignment>(m_addr + 880);
	}
	bool GetbWrapHorizontalNavigation() {
		return memory.read<bool>(m_addr + 881);
	}

private:
	std::uint64_t m_addr = 0;
};


class UUserListEntry
{
public:
	UUserListEntry(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UEditableText
{
public:
	UEditableText(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetText() {
		return memory.read<struct FText>(m_addr + 264);
	}
	struct FDelegate GetTextDelegate() {
		return memory.read<struct FDelegate>(m_addr + 288);
	}
	struct FText GetHintText() {
		return memory.read<struct FText>(m_addr + 304);
	}
	struct FDelegate GetHintTextDelegate() {
		return memory.read<struct FDelegate>(m_addr + 328);
	}
	struct FEditableTextStyle GetWidgetStyle() {
		return memory.read<struct FEditableTextStyle>(m_addr + 344);
	}
	struct USlateWidgetStyleAsset GetStyle() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 888);
		return struct USlateWidgetStyleAsset(ptr_addr);
	}
	struct USlateBrushAsset GetBackgroundImageSelected() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 896);
		return struct USlateBrushAsset(ptr_addr);
	}
	struct USlateBrushAsset GetBackgroundImageComposing() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 904);
		return struct USlateBrushAsset(ptr_addr);
	}
	struct USlateBrushAsset GetCaretImage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 912);
		return struct USlateBrushAsset(ptr_addr);
	}
	struct FSlateFontInfo GetFont() {
		return memory.read<struct FSlateFontInfo>(m_addr + 920);
	}
	struct FSlateColor GetColorAndOpacity() {
		return memory.read<struct FSlateColor>(m_addr + 1008);
	}
	bool GetIsReadOnly() {
		return memory.read<bool>(m_addr + 1048);
	}
	bool GetIsPassword() {
		return memory.read<bool>(m_addr + 1049);
	}
	float GetMinimumDesiredWidth() {
		return memory.read<float>(m_addr + 1052);
	}
	bool GetIsCaretMovedWhenGainFocus() {
		return memory.read<bool>(m_addr + 1056);
	}
	bool GetSelectAllTextWhenFocused() {
		return memory.read<bool>(m_addr + 1057);
	}
	bool GetRevertTextOnEscape() {
		return memory.read<bool>(m_addr + 1058);
	}
	bool GetClearKeyboardFocusOnCommit() {
		return memory.read<bool>(m_addr + 1059);
	}
	bool GetSelectAllTextOnCommit() {
		return memory.read<bool>(m_addr + 1060);
	}
	bool GetAllowContextMenu() {
		return memory.read<bool>(m_addr + 1061);
	}
	enum class EVirtualKeyboardType GetKeyboardType() {
		return memory.read<enum class EVirtualKeyboardType>(m_addr + 1062);
	}
	struct FVirtualKeyboardOptions GetVirtualKeyboardOptions() {
		return memory.read<struct FVirtualKeyboardOptions>(m_addr + 1063);
	}
	enum class EVirtualKeyboardTrigger GetVirtualKeyboardTrigger() {
		return memory.read<enum class EVirtualKeyboardTrigger>(m_addr + 1064);
	}
	enum class EVirtualKeyboardDismissAction GetVirtualKeyboardDismissAction() {
		return memory.read<enum class EVirtualKeyboardDismissAction>(m_addr + 1065);
	}
	enum class ETextJustify GetJustification() {
		return memory.read<enum class ETextJustify>(m_addr + 1066);
	}
	struct FShapedTextOptions GetShapedTextOptions() {
		return memory.read<struct FShapedTextOptions>(m_addr + 1067);
	}
	struct FMulticastInlineDelegate GetOnTextChanged() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 1072);
	}
	struct FMulticastInlineDelegate GetOnTextCommitted() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 1088);
	}

private:
	std::uint64_t m_addr = 0;
};


class UCheckedStateBinding
{
public:
	UCheckedStateBinding(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UUserObjectListEntry
{
public:
	UUserObjectListEntry(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UHorizontalBox
{
public:
	UHorizontalBox(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UWidgetComponent
{
public:
	UWidgetComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EWidgetSpace GetSpace() {
		return memory.read<enum class EWidgetSpace>(m_addr + 1192);
	}
	enum class EWidgetTimingPolicy GetTimingPolicy() {
		return memory.read<enum class EWidgetTimingPolicy>(m_addr + 1193);
	}
	UUserWidget GetWidgetClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1200);
		return UUserWidget(ptr_addr);
	}
	struct FIntPoint GetDrawSize() {
		return memory.read<struct FIntPoint>(m_addr + 1208);
	}
	bool GetbManuallyRedraw() {
		return memory.read<bool>(m_addr + 1216);
	}
	bool GetbRedrawRequested() {
		return memory.read<bool>(m_addr + 1217);
	}
	float GetRedrawTime() {
		return memory.read<float>(m_addr + 1220);
	}
	struct FIntPoint GetCurrentDrawSize() {
		return memory.read<struct FIntPoint>(m_addr + 1232);
	}
	bool GetbDrawAtDesiredSize() {
		return memory.read<bool>(m_addr + 1240);
	}
	struct FVector2D GetPivot() {
		return memory.read<struct FVector2D>(m_addr + 1244);
	}
	bool GetbReceiveHardwareInput() {
		return memory.read<bool>(m_addr + 1252);
	}
	bool GetbWindowFocusable() {
		return memory.read<bool>(m_addr + 1253);
	}
	enum class EWindowVisibility GetWindowVisibility() {
		return memory.read<enum class EWindowVisibility>(m_addr + 1254);
	}
	bool GetbApplyGammaCorrection() {
		return memory.read<bool>(m_addr + 1255);
	}
	struct ULocalPlayer GetOwnerPlayer() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1256);
		return struct ULocalPlayer(ptr_addr);
	}
	struct FLinearColor GetBackgroundColor() {
		return memory.read<struct FLinearColor>(m_addr + 1264);
	}
	struct FLinearColor GetTintColorAndOpacity() {
		return memory.read<struct FLinearColor>(m_addr + 1280);
	}
	float GetOpacityFromTexture() {
		return memory.read<float>(m_addr + 1296);
	}
	enum class EWidgetBlendMode GetBlendMode() {
		return memory.read<enum class EWidgetBlendMode>(m_addr + 1300);
	}
	bool GetbIsTwoSided() {
		return memory.read<bool>(m_addr + 1301);
	}
	bool GetTickWhenOffscreen() {
		return memory.read<bool>(m_addr + 1302);
	}
	struct UBodySetup GetBodySetup() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1304);
		return struct UBodySetup(ptr_addr);
	}
	struct UMaterialInterface GetTranslucentMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1312);
		return struct UMaterialInterface(ptr_addr);
	}
	struct UMaterialInterface GetTranslucentMaterial_OneSided() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1320);
		return struct UMaterialInterface(ptr_addr);
	}
	struct UMaterialInterface GetOpaqueMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1328);
		return struct UMaterialInterface(ptr_addr);
	}
	struct UMaterialInterface GetOpaqueMaterial_OneSided() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1336);
		return struct UMaterialInterface(ptr_addr);
	}
	struct UMaterialInterface GetMaskedMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1344);
		return struct UMaterialInterface(ptr_addr);
	}
	struct UMaterialInterface GetMaskedMaterial_OneSided() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1352);
		return struct UMaterialInterface(ptr_addr);
	}
	struct UTextureRenderTarget2D GetRenderTarget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1360);
		return struct UTextureRenderTarget2D(ptr_addr);
	}
	struct UMaterialInstanceDynamic GetMaterialInstance() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1368);
		return struct UMaterialInstanceDynamic(ptr_addr);
	}
	bool GetbAddedToScreen() {
		return memory.read<bool>(m_addr + 1376);
	}
	bool GetbEditTimeUsable() {
		return memory.read<bool>(m_addr + 1377);
	}
	struct FName GetSharedLayerName() {
		return memory.read<struct FName>(m_addr + 1380);
	}
	int32_t GetLayerZOrder() {
		return memory.read<int32_t>(m_addr + 1388);
	}
	enum class EWidgetGeometryMode GetGeometryMode() {
		return memory.read<enum class EWidgetGeometryMode>(m_addr + 1392);
	}
	float GetCylinderArcAngle() {
		return memory.read<float>(m_addr + 1396);
	}
	enum class ETickMode GetTickMode() {
		return memory.read<enum class ETickMode>(m_addr + 1400);
	}
	struct UUserWidget GetWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1440);
		return struct UUserWidget(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UEditableTextBox
{
public:
	UEditableTextBox(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetText() {
		return memory.read<struct FText>(m_addr + 264);
	}
	struct FDelegate GetTextDelegate() {
		return memory.read<struct FDelegate>(m_addr + 288);
	}
	struct FEditableTextBoxStyle GetWidgetStyle() {
		return memory.read<struct FEditableTextBoxStyle>(m_addr + 304);
	}
	struct USlateWidgetStyleAsset GetStyle() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2344);
		return struct USlateWidgetStyleAsset(ptr_addr);
	}
	struct FText GetHintText() {
		return memory.read<struct FText>(m_addr + 2352);
	}
	struct FDelegate GetHintTextDelegate() {
		return memory.read<struct FDelegate>(m_addr + 2376);
	}
	struct FSlateFontInfo GetFont() {
		return memory.read<struct FSlateFontInfo>(m_addr + 2392);
	}
	struct FLinearColor GetForegroundColor() {
		return memory.read<struct FLinearColor>(m_addr + 2480);
	}
	struct FLinearColor GetBackgroundColor() {
		return memory.read<struct FLinearColor>(m_addr + 2496);
	}
	struct FLinearColor GetReadOnlyForegroundColor() {
		return memory.read<struct FLinearColor>(m_addr + 2512);
	}
	bool GetIsReadOnly() {
		return memory.read<bool>(m_addr + 2528);
	}
	bool GetIsPassword() {
		return memory.read<bool>(m_addr + 2529);
	}
	float GetMinimumDesiredWidth() {
		return memory.read<float>(m_addr + 2532);
	}
	struct FMargin GetPadding() {
		return memory.read<struct FMargin>(m_addr + 2536);
	}
	bool GetIsCaretMovedWhenGainFocus() {
		return memory.read<bool>(m_addr + 2552);
	}
	bool GetSelectAllTextWhenFocused() {
		return memory.read<bool>(m_addr + 2553);
	}
	bool GetRevertTextOnEscape() {
		return memory.read<bool>(m_addr + 2554);
	}
	bool GetClearKeyboardFocusOnCommit() {
		return memory.read<bool>(m_addr + 2555);
	}
	bool GetSelectAllTextOnCommit() {
		return memory.read<bool>(m_addr + 2556);
	}
	bool GetAllowContextMenu() {
		return memory.read<bool>(m_addr + 2557);
	}
	enum class EVirtualKeyboardType GetKeyboardType() {
		return memory.read<enum class EVirtualKeyboardType>(m_addr + 2558);
	}
	struct FVirtualKeyboardOptions GetVirtualKeyboardOptions() {
		return memory.read<struct FVirtualKeyboardOptions>(m_addr + 2559);
	}
	enum class EVirtualKeyboardTrigger GetVirtualKeyboardTrigger() {
		return memory.read<enum class EVirtualKeyboardTrigger>(m_addr + 2560);
	}
	enum class EVirtualKeyboardDismissAction GetVirtualKeyboardDismissAction() {
		return memory.read<enum class EVirtualKeyboardDismissAction>(m_addr + 2561);
	}
	enum class ETextJustify GetJustification() {
		return memory.read<enum class ETextJustify>(m_addr + 2562);
	}
	struct FShapedTextOptions GetShapedTextOptions() {
		return memory.read<struct FShapedTextOptions>(m_addr + 2563);
	}
	struct FMulticastInlineDelegate GetOnTextChanged() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 2568);
	}
	struct FMulticastInlineDelegate GetOnTextCommitted() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 2584);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAsyncTaskDownloadImage
{
public:
	UAsyncTaskDownloadImage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate GetOnSuccess() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 48);
	}
	struct FMulticastInlineDelegate GetOnFail() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UGridSlot
{
public:
	UGridSlot(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMargin GetPadding() {
		return memory.read<struct FMargin>(m_addr + 56);
	}
	enum class EHorizontalAlignment GetHorizontalAlignment() {
		return memory.read<enum class EHorizontalAlignment>(m_addr + 72);
	}
	enum class EVerticalAlignment GetVerticalAlignment() {
		return memory.read<enum class EVerticalAlignment>(m_addr + 73);
	}
	int32_t GetRow() {
		return memory.read<int32_t>(m_addr + 76);
	}
	int32_t GetRowSpan() {
		return memory.read<int32_t>(m_addr + 80);
	}
	int32_t GetColumn() {
		return memory.read<int32_t>(m_addr + 84);
	}
	int32_t GetColumnSpan() {
		return memory.read<int32_t>(m_addr + 88);
	}
	int32_t GetLayer() {
		return memory.read<int32_t>(m_addr + 92);
	}
	struct FVector2D GetNudge() {
		return memory.read<struct FVector2D>(m_addr + 96);
	}

private:
	std::uint64_t m_addr = 0;
};


class UPanelWidget
{
public:
	UPanelWidget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UPanelSlot> GetSlots() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 264);
		return struct TArray<struct UPanelSlot>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBackgroundBlur
{
public:
	UBackgroundBlur(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMargin GetPadding() {
		return memory.read<struct FMargin>(m_addr + 288);
	}
	enum class EHorizontalAlignment GetHorizontalAlignment() {
		return memory.read<enum class EHorizontalAlignment>(m_addr + 304);
	}
	enum class EVerticalAlignment GetVerticalAlignment() {
		return memory.read<enum class EVerticalAlignment>(m_addr + 305);
	}
	bool GetbApplyAlphaToBlur() {
		return memory.read<bool>(m_addr + 306);
	}
	float GetBlurStrength() {
		return memory.read<float>(m_addr + 308);
	}
	bool GetbOverrideAutoRadiusCalculation() {
		return memory.read<bool>(m_addr + 312);
	}
	int32_t GetBlurRadius() {
		return memory.read<int32_t>(m_addr + 316);
	}
	struct FSlateBrush GetLowQualityFallbackBrush() {
		return memory.read<struct FSlateBrush>(m_addr + 320);
	}

private:
	std::uint64_t m_addr = 0;
};


class UPanelSlot
{
public:
	UPanelSlot(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPanelWidget GetParent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct UPanelWidget(ptr_addr);
	}
	struct UWidget GetContent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UWidget(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UUserListEntryLibrary
{
public:
	UUserListEntryLibrary(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UDynamicEntryBoxBase
{
public:
	UDynamicEntryBoxBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EDynamicBoxType GetEntryBoxType() {
		return memory.read<enum class EDynamicBoxType>(m_addr + 264);
	}
	struct FVector2D GetEntrySpacing() {
		return memory.read<struct FVector2D>(m_addr + 268);
	}
	struct TArray<struct FVector2D> GetSpacingPattern() {
		return memory.read<struct TArray<struct FVector2D>>(m_addr + 280);
	}
	struct FSlateChildSize GetEntrySizeRule() {
		return memory.read<struct FSlateChildSize>(m_addr + 296);
	}
	enum class EHorizontalAlignment GetEntryHorizontalAlignment() {
		return memory.read<enum class EHorizontalAlignment>(m_addr + 304);
	}
	enum class EVerticalAlignment GetEntryVerticalAlignment() {
		return memory.read<enum class EVerticalAlignment>(m_addr + 305);
	}
	int32_t GetMaxElementSize() {
		return memory.read<int32_t>(m_addr + 308);
	}
	struct FRadialBoxSettings GetRadialBoxSettings() {
		return memory.read<struct FRadialBoxSettings>(m_addr + 312);
	}
	struct FUserWidgetPool GetEntryWidgetPool() {
		return memory.read<struct FUserWidgetPool>(m_addr + 344);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBackgroundBlurSlot
{
public:
	UBackgroundBlurSlot(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMargin GetPadding() {
		return memory.read<struct FMargin>(m_addr + 56);
	}
	enum class EHorizontalAlignment GetHorizontalAlignment() {
		return memory.read<enum class EHorizontalAlignment>(m_addr + 72);
	}
	enum class EVerticalAlignment GetVerticalAlignment() {
		return memory.read<enum class EVerticalAlignment>(m_addr + 73);
	}

private:
	std::uint64_t m_addr = 0;
};


class UPropertyBinding
{
public:
	UPropertyBinding(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TWeakObjectPtr<UObject> GetSourceObject() {
		return memory.read<struct TWeakObjectPtr<UObject>>(m_addr + 40);
	}
	struct FDynamicPropertyPath GetSourcePath() {
		return memory.read<struct FDynamicPropertyPath>(m_addr + 48);
	}
	struct FName GetDestinationProperty() {
		return memory.read<struct FName>(m_addr + 88);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBrushBinding
{
public:
	UBrushBinding(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UBoolBinding
{
public:
	UBoolBinding(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UBorder
{
public:
	UBorder(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EHorizontalAlignment GetHorizontalAlignment() {
		return memory.read<enum class EHorizontalAlignment>(m_addr + 288);
	}
	enum class EVerticalAlignment GetVerticalAlignment() {
		return memory.read<enum class EVerticalAlignment>(m_addr + 289);
	}
	char GetbShowEffectWhenDisabled() {
		return memory.read<char>(m_addr + 290);
	}
	struct FLinearColor GetContentColorAndOpacity() {
		return memory.read<struct FLinearColor>(m_addr + 292);
	}
	struct FDelegate GetContentColorAndOpacityDelegate() {
		return memory.read<struct FDelegate>(m_addr + 308);
	}
	struct FMargin GetPadding() {
		return memory.read<struct FMargin>(m_addr + 324);
	}
	struct FSlateBrush GetBackground() {
		return memory.read<struct FSlateBrush>(m_addr + 344);
	}
	struct FDelegate GetBackgroundDelegate() {
		return memory.read<struct FDelegate>(m_addr + 480);
	}
	struct FLinearColor GetBrushColor() {
		return memory.read<struct FLinearColor>(m_addr + 496);
	}
	struct FDelegate GetBrushColorDelegate() {
		return memory.read<struct FDelegate>(m_addr + 512);
	}
	struct FVector2D GetDesiredSizeScale() {
		return memory.read<struct FVector2D>(m_addr + 528);
	}
	bool GetbFlipForRightToLeftFlowDirection() {
		return memory.read<bool>(m_addr + 536);
	}
	struct FDelegate GetOnMouseButtonDownEvent() {
		return memory.read<struct FDelegate>(m_addr + 540);
	}
	struct FDelegate GetOnMouseButtonUpEvent() {
		return memory.read<struct FDelegate>(m_addr + 556);
	}
	struct FDelegate GetOnMouseMoveEvent() {
		return memory.read<struct FDelegate>(m_addr + 572);
	}
	struct FDelegate GetOnMouseDoubleClickEvent() {
		return memory.read<struct FDelegate>(m_addr + 588);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBorderSlot
{
public:
	UBorderSlot(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMargin GetPadding() {
		return memory.read<struct FMargin>(m_addr + 56);
	}
	enum class EHorizontalAlignment GetHorizontalAlignment() {
		return memory.read<enum class EHorizontalAlignment>(m_addr + 72);
	}
	enum class EVerticalAlignment GetVerticalAlignment() {
		return memory.read<enum class EVerticalAlignment>(m_addr + 73);
	}

private:
	std::uint64_t m_addr = 0;
};


class UButton
{
public:
	UButton(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USlateWidgetStyleAsset GetStyle() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 288);
		return struct USlateWidgetStyleAsset(ptr_addr);
	}
	struct FButtonStyle GetWidgetStyle() {
		return memory.read<struct FButtonStyle>(m_addr + 296);
	}
	struct FLinearColor GetColorAndOpacity() {
		return memory.read<struct FLinearColor>(m_addr + 928);
	}
	struct FLinearColor GetBackgroundColor() {
		return memory.read<struct FLinearColor>(m_addr + 944);
	}
	enum class EButtonClickMethod GetClickMethod() {
		return memory.read<enum class EButtonClickMethod>(m_addr + 960);
	}
	enum class EButtonTouchMethod GetTouchMethod() {
		return memory.read<enum class EButtonTouchMethod>(m_addr + 961);
	}
	enum class EButtonPressMethod GetPressMethod() {
		return memory.read<enum class EButtonPressMethod>(m_addr + 962);
	}
	bool GetIsFocusable() {
		return memory.read<bool>(m_addr + 963);
	}
	struct FMulticastInlineDelegate GetOnClicked() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 968);
	}
	struct FMulticastInlineDelegate GetOnPressed() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 984);
	}
	struct FMulticastInlineDelegate GetOnReleased() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 1000);
	}
	struct FMulticastInlineDelegate GetOnHovered() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 1016);
	}
	struct FMulticastInlineDelegate GetOnUnHovered() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 1032);
	}

private:
	std::uint64_t m_addr = 0;
};


class UScrollBar
{
public:
	UScrollBar(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FScrollBarStyle GetWidgetStyle() {
		return memory.read<struct FScrollBarStyle>(m_addr + 264);
	}
	struct USlateWidgetStyleAsset GetStyle() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1496);
		return struct USlateWidgetStyleAsset(ptr_addr);
	}
	bool GetbAlwaysShowScrollbar() {
		return memory.read<bool>(m_addr + 1504);
	}
	bool GetbAlwaysShowScrollbarTrack() {
		return memory.read<bool>(m_addr + 1505);
	}
	enum class EOrientation GetOrientation() {
		return memory.read<enum class EOrientation>(m_addr + 1506);
	}
	struct FVector2D GetThickness() {
		return memory.read<struct FVector2D>(m_addr + 1508);
	}
	struct FMargin GetPadding() {
		return memory.read<struct FMargin>(m_addr + 1516);
	}

private:
	std::uint64_t m_addr = 0;
};


class UButtonSlot
{
public:
	UButtonSlot(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMargin GetPadding() {
		return memory.read<struct FMargin>(m_addr + 56);
	}
	enum class EHorizontalAlignment GetHorizontalAlignment() {
		return memory.read<enum class EHorizontalAlignment>(m_addr + 72);
	}
	enum class EVerticalAlignment GetVerticalAlignment() {
		return memory.read<enum class EVerticalAlignment>(m_addr + 73);
	}

private:
	std::uint64_t m_addr = 0;
};


class UCanvasPanel
{
public:
	UCanvasPanel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UCanvasPanelSlot
{
public:
	UCanvasPanelSlot(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAnchorData GetLayoutData() {
		return memory.read<struct FAnchorData>(m_addr + 56);
	}
	bool GetbAutoSize() {
		return memory.read<bool>(m_addr + 96);
	}
	int32_t GetZOrder() {
		return memory.read<int32_t>(m_addr + 100);
	}

private:
	std::uint64_t m_addr = 0;
};


class UCheckBox
{
public:
	UCheckBox(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ECheckBoxState GetCheckedState() {
		return memory.read<enum class ECheckBoxState>(m_addr + 288);
	}
	struct FDelegate GetCheckedStateDelegate() {
		return memory.read<struct FDelegate>(m_addr + 292);
	}
	struct FCheckBoxStyle GetWidgetStyle() {
		return memory.read<struct FCheckBoxStyle>(m_addr + 312);
	}
	struct USlateWidgetStyleAsset GetStyle() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1720);
		return struct USlateWidgetStyleAsset(ptr_addr);
	}
	struct USlateBrushAsset GetUncheckedImage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1728);
		return struct USlateBrushAsset(ptr_addr);
	}
	struct USlateBrushAsset GetUncheckedHoveredImage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1736);
		return struct USlateBrushAsset(ptr_addr);
	}
	struct USlateBrushAsset GetUncheckedPressedImage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1744);
		return struct USlateBrushAsset(ptr_addr);
	}
	struct USlateBrushAsset GetCheckedImage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1752);
		return struct USlateBrushAsset(ptr_addr);
	}
	struct USlateBrushAsset GetCheckedHoveredImage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1760);
		return struct USlateBrushAsset(ptr_addr);
	}
	struct USlateBrushAsset GetCheckedPressedImage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1768);
		return struct USlateBrushAsset(ptr_addr);
	}
	struct USlateBrushAsset GetUndeterminedImage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1776);
		return struct USlateBrushAsset(ptr_addr);
	}
	struct USlateBrushAsset GetUndeterminedHoveredImage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1784);
		return struct USlateBrushAsset(ptr_addr);
	}
	struct USlateBrushAsset GetUndeterminedPressedImage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1792);
		return struct USlateBrushAsset(ptr_addr);
	}
	enum class EHorizontalAlignment GetHorizontalAlignment() {
		return memory.read<enum class EHorizontalAlignment>(m_addr + 1800);
	}
	struct FMargin GetPadding() {
		return memory.read<struct FMargin>(m_addr + 1804);
	}
	struct FSlateColor GetBorderBackgroundColor() {
		return memory.read<struct FSlateColor>(m_addr + 1824);
	}
	enum class EButtonClickMethod GetClickMethod() {
		return memory.read<enum class EButtonClickMethod>(m_addr + 1864);
	}
	enum class EButtonTouchMethod GetTouchMethod() {
		return memory.read<enum class EButtonTouchMethod>(m_addr + 1865);
	}
	enum class EButtonPressMethod GetPressMethod() {
		return memory.read<enum class EButtonPressMethod>(m_addr + 1866);
	}
	bool GetIsFocusable() {
		return memory.read<bool>(m_addr + 1867);
	}
	struct FMulticastInlineDelegate GetOnCheckStateChanged() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 1872);
	}

private:
	std::uint64_t m_addr = 0;
};


class UCircularThrobber
{
public:
	UCircularThrobber(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetNumberOfPieces() {
		return memory.read<int32_t>(m_addr + 264);
	}
	float GetPeriod() {
		return memory.read<float>(m_addr + 268);
	}
	float GetRadius() {
		return memory.read<float>(m_addr + 272);
	}
	struct USlateBrushAsset GetPieceImage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 280);
		return struct USlateBrushAsset(ptr_addr);
	}
	struct FSlateBrush GetImage() {
		return memory.read<struct FSlateBrush>(m_addr + 288);
	}
	bool GetbEnableRadius() {
		return memory.read<bool>(m_addr + 424);
	}

private:
	std::uint64_t m_addr = 0;
};


class UInputKeySelector
{
public:
	UInputKeySelector(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FButtonStyle GetWidgetStyle() {
		return memory.read<struct FButtonStyle>(m_addr + 264);
	}
	struct FTextBlockStyle GetTextStyle() {
		return memory.read<struct FTextBlockStyle>(m_addr + 896);
	}
	struct FInputChord GetSelectedKey() {
		return memory.read<struct FInputChord>(m_addr + 1520);
	}
	struct FSlateFontInfo GetFont() {
		return memory.read<struct FSlateFontInfo>(m_addr + 1552);
	}
	struct FMargin GetMargin() {
		return memory.read<struct FMargin>(m_addr + 1640);
	}
	struct FLinearColor GetColorAndOpacity() {
		return memory.read<struct FLinearColor>(m_addr + 1656);
	}
	struct FText GetKeySelectionText() {
		return memory.read<struct FText>(m_addr + 1672);
	}
	struct FText GetNoKeySpecifiedText() {
		return memory.read<struct FText>(m_addr + 1696);
	}
	bool GetbAllowModifierKeys() {
		return memory.read<bool>(m_addr + 1720);
	}
	bool GetbAllowGamepadKeys() {
		return memory.read<bool>(m_addr + 1721);
	}
	struct TArray<struct FKey> GetEscapeKeys() {
		return memory.read<struct TArray<struct FKey>>(m_addr + 1728);
	}
	struct FMulticastInlineDelegate GetOnKeySelected() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 1744);
	}
	struct FMulticastInlineDelegate GetOnIsSelectingKeyChanged() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 1760);
	}

private:
	std::uint64_t m_addr = 0;
};


class UOverlaySlot
{
public:
	UOverlaySlot(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMargin GetPadding() {
		return memory.read<struct FMargin>(m_addr + 64);
	}
	enum class EHorizontalAlignment GetHorizontalAlignment() {
		return memory.read<enum class EHorizontalAlignment>(m_addr + 80);
	}
	enum class EVerticalAlignment GetVerticalAlignment() {
		return memory.read<enum class EVerticalAlignment>(m_addr + 81);
	}

private:
	std::uint64_t m_addr = 0;
};


class UColorBinding
{
public:
	UColorBinding(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UComboBox
{
public:
	UComboBox(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UObject> GetItems() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 264);
		return struct TArray<struct UObject>(ptr_addr);
	}
	struct FDelegate GetOnGenerateWidgetEvent() {
		return memory.read<struct FDelegate>(m_addr + 280);
	}
	bool GetbIsFocusable() {
		return memory.read<bool>(m_addr + 296);
	}

private:
	std::uint64_t m_addr = 0;
};


class UUserObjectListEntryLibrary
{
public:
	UUserObjectListEntryLibrary(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UDragDropOperation
{
public:
	UDragDropOperation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetTag() {
		return memory.read<struct FString>(m_addr + 40);
	}
	struct UObject GetPayload() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct UObject(ptr_addr);
	}
	struct UWidget GetDefaultDragVisual() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 64);
		return struct UWidget(ptr_addr);
	}
	enum class EDragPivot GetPivot() {
		return memory.read<enum class EDragPivot>(m_addr + 72);
	}
	struct FVector2D GetOffset() {
		return memory.read<struct FVector2D>(m_addr + 76);
	}
	struct FMulticastInlineDelegate GetOnDrop() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 88);
	}
	struct FMulticastInlineDelegate GetOnDragCancelled() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 104);
	}
	struct FMulticastInlineDelegate GetOnDragged() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 120);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMultiLineEditableText
{
public:
	UMultiLineEditableText(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetText() {
		return memory.read<struct FText>(m_addr + 296);
	}
	struct FText GetHintText() {
		return memory.read<struct FText>(m_addr + 320);
	}
	struct FDelegate GetHintTextDelegate() {
		return memory.read<struct FDelegate>(m_addr + 344);
	}
	struct FTextBlockStyle GetWidgetStyle() {
		return memory.read<struct FTextBlockStyle>(m_addr + 360);
	}
	bool GetbIsReadOnly() {
		return memory.read<bool>(m_addr + 984);
	}
	struct FSlateFontInfo GetFont() {
		return memory.read<struct FSlateFontInfo>(m_addr + 992);
	}
	bool GetSelectAllTextWhenFocused() {
		return memory.read<bool>(m_addr + 1080);
	}
	bool GetClearTextSelectionOnFocusLoss() {
		return memory.read<bool>(m_addr + 1081);
	}
	bool GetRevertTextOnEscape() {
		return memory.read<bool>(m_addr + 1082);
	}
	bool GetClearKeyboardFocusOnCommit() {
		return memory.read<bool>(m_addr + 1083);
	}
	bool GetAllowContextMenu() {
		return memory.read<bool>(m_addr + 1084);
	}
	struct FVirtualKeyboardOptions GetVirtualKeyboardOptions() {
		return memory.read<struct FVirtualKeyboardOptions>(m_addr + 1085);
	}
	enum class EVirtualKeyboardDismissAction GetVirtualKeyboardDismissAction() {
		return memory.read<enum class EVirtualKeyboardDismissAction>(m_addr + 1086);
	}
	struct FMulticastInlineDelegate GetOnTextChanged() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 1088);
	}
	struct FMulticastInlineDelegate GetOnTextCommitted() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 1104);
	}

private:
	std::uint64_t m_addr = 0;
};


class UDynamicEntryBox
{
public:
	UDynamicEntryBox(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	UUserWidget GetEntryWidgetClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 472);
		return UUserWidget(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UFloatBinding
{
public:
	UFloatBinding(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UGridPanel
{
public:
	UGridPanel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<float> GetColumnFill() {
		return memory.read<struct TArray<float>>(m_addr + 288);
	}
	struct TArray<float> GetRowFill() {
		return memory.read<struct TArray<float>>(m_addr + 304);
	}

private:
	std::uint64_t m_addr = 0;
};


class UInt32Binding
{
public:
	UInt32Binding(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UHorizontalBoxSlot
{
public:
	UHorizontalBoxSlot(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMargin GetPadding() {
		return memory.read<struct FMargin>(m_addr + 64);
	}
	struct FSlateChildSize GetSize() {
		return memory.read<struct FSlateChildSize>(m_addr + 80);
	}
	enum class EHorizontalAlignment GetHorizontalAlignment() {
		return memory.read<enum class EHorizontalAlignment>(m_addr + 88);
	}
	enum class EVerticalAlignment GetVerticalAlignment() {
		return memory.read<enum class EVerticalAlignment>(m_addr + 89);
	}

private:
	std::uint64_t m_addr = 0;
};


class UWidgetBlueprintGeneratedClass
{
public:
	UWidgetBlueprintGeneratedClass(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWidgetTree GetWidgetTree() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 808);
		return struct UWidgetTree(ptr_addr);
	}
	char GetbClassRequiresNativeTick() {
		return memory.read<char>(m_addr + 816);
	}
	struct TArray<struct FDelegateRuntimeBinding> GetBindings() {
		return memory.read<struct TArray<struct FDelegateRuntimeBinding>>(m_addr + 824);
	}
	struct TArray<struct UWidgetAnimation> GetAnimations() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 840);
		return struct TArray<struct UWidgetAnimation>(ptr_addr);
	}
	struct TArray<struct FName> GetNamedSlots() {
		return memory.read<struct TArray<struct FName>>(m_addr + 856);
	}

private:
	std::uint64_t m_addr = 0;
};


class UInvalidationBox
{
public:
	UInvalidationBox(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbCanCache() {
		return memory.read<bool>(m_addr + 288);
	}
	bool GetCacheRelativeTransforms() {
		return memory.read<bool>(m_addr + 289);
	}

private:
	std::uint64_t m_addr = 0;
};


class UListViewDesignerPreviewItem
{
public:
	UListViewDesignerPreviewItem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMenuAnchor
{
public:
	UMenuAnchor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	UUserWidget GetMenuClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 288);
		return UUserWidget(ptr_addr);
	}
	struct FDelegate GetOnGetMenuContentEvent() {
		return memory.read<struct FDelegate>(m_addr + 296);
	}
	struct FDelegate GetOnGetUserMenuContentEvent() {
		return memory.read<struct FDelegate>(m_addr + 312);
	}
	enum class EMenuPlacement GetPlacement() {
		return memory.read<enum class EMenuPlacement>(m_addr + 328);
	}
	bool GetbFitInWindow() {
		return memory.read<bool>(m_addr + 329);
	}
	bool GetShouldDeferPaintingAfterWindowContent() {
		return memory.read<bool>(m_addr + 330);
	}
	bool GetUseApplicationMenuStack() {
		return memory.read<bool>(m_addr + 331);
	}
	struct FMulticastInlineDelegate GetOnMenuOpenChanged() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 336);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMouseCursorBinding
{
public:
	UMouseCursorBinding(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UOverlay
{
public:
	UOverlay(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieScene2DTransformSection
{
public:
	UMovieScene2DTransformSection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMovieScene2DTransformMask GetTransformMask() {
		return memory.read<struct FMovieScene2DTransformMask>(m_addr + 240);
	}
	struct FMovieSceneFloatChannel GetTranslation[2]() {
		return memory.read<struct FMovieSceneFloatChannel>(m_addr + 248);
	}
	struct FMovieSceneFloatChannel GetRotation() {
		return memory.read<struct FMovieSceneFloatChannel>(m_addr + 568);
	}
	struct FMovieSceneFloatChannel GetScale[2]() {
		return memory.read<struct FMovieSceneFloatChannel>(m_addr + 728);
	}
	struct FMovieSceneFloatChannel GetShear[2]() {
		return memory.read<struct FMovieSceneFloatChannel>(m_addr + 1048);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieScene2DTransformTrack
{
public:
	UMovieScene2DTransformTrack(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneMarginPropertySystem
{
public:
	UMovieSceneMarginPropertySystem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneMarginSection
{
public:
	UMovieSceneMarginSection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMovieSceneFloatChannel GetTopCurve() {
		return memory.read<struct FMovieSceneFloatChannel>(m_addr + 240);
	}
	struct FMovieSceneFloatChannel GetLeftCurve() {
		return memory.read<struct FMovieSceneFloatChannel>(m_addr + 400);
	}
	struct FMovieSceneFloatChannel GetRightCurve() {
		return memory.read<struct FMovieSceneFloatChannel>(m_addr + 560);
	}
	struct FMovieSceneFloatChannel GetBottomCurve() {
		return memory.read<struct FMovieSceneFloatChannel>(m_addr + 720);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneMarginTrack
{
public:
	UMovieSceneMarginTrack(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMovieSceneWidgetMaterialTrack
{
public:
	UMovieSceneWidgetMaterialTrack(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FName> GetBrushPropertyNamePath() {
		return memory.read<struct TArray<struct FName>>(m_addr + 168);
	}
	struct FName GetTrackName() {
		return memory.read<struct FName>(m_addr + 184);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMultiLineEditableTextBox
{
public:
	UMultiLineEditableTextBox(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetText() {
		return memory.read<struct FText>(m_addr + 296);
	}
	struct FText GetHintText() {
		return memory.read<struct FText>(m_addr + 320);
	}
	struct FDelegate GetHintTextDelegate() {
		return memory.read<struct FDelegate>(m_addr + 344);
	}
	struct FEditableTextBoxStyle GetWidgetStyle() {
		return memory.read<struct FEditableTextBoxStyle>(m_addr + 360);
	}
	struct FTextBlockStyle GetTextStyle() {
		return memory.read<struct FTextBlockStyle>(m_addr + 2400);
	}
	bool GetbIsReadOnly() {
		return memory.read<bool>(m_addr + 3024);
	}
	bool GetAllowContextMenu() {
		return memory.read<bool>(m_addr + 3025);
	}
	struct FVirtualKeyboardOptions GetVirtualKeyboardOptions() {
		return memory.read<struct FVirtualKeyboardOptions>(m_addr + 3026);
	}
	enum class EVirtualKeyboardDismissAction GetVirtualKeyboardDismissAction() {
		return memory.read<enum class EVirtualKeyboardDismissAction>(m_addr + 3027);
	}
	struct USlateWidgetStyleAsset GetStyle() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 3032);
		return struct USlateWidgetStyleAsset(ptr_addr);
	}
	struct FSlateFontInfo GetFont() {
		return memory.read<struct FSlateFontInfo>(m_addr + 3040);
	}
	struct FLinearColor GetForegroundColor() {
		return memory.read<struct FLinearColor>(m_addr + 3128);
	}
	struct FLinearColor GetBackgroundColor() {
		return memory.read<struct FLinearColor>(m_addr + 3144);
	}
	struct FLinearColor GetReadOnlyForegroundColor() {
		return memory.read<struct FLinearColor>(m_addr + 3160);
	}
	struct FMulticastInlineDelegate GetOnTextChanged() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 3176);
	}
	struct FMulticastInlineDelegate GetOnTextCommitted() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 3192);
	}

private:
	std::uint64_t m_addr = 0;
};


class UNamedSlot
{
public:
	UNamedSlot(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UNamedSlotInterface
{
public:
	UNamedSlotInterface(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UNativeWidgetHost
{
public:
	UNativeWidgetHost(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UProgressBar
{
public:
	UProgressBar(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FProgressBarStyle GetWidgetStyle() {
		return memory.read<struct FProgressBarStyle>(m_addr + 264);
	}
	struct USlateWidgetStyleAsset GetStyle() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 680);
		return struct USlateWidgetStyleAsset(ptr_addr);
	}
	struct USlateBrushAsset GetBackgroundImage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 688);
		return struct USlateBrushAsset(ptr_addr);
	}
	struct USlateBrushAsset GetFillImage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 696);
		return struct USlateBrushAsset(ptr_addr);
	}
	struct USlateBrushAsset GetMarqueeImage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 704);
		return struct USlateBrushAsset(ptr_addr);
	}
	float GetPercent() {
		return memory.read<float>(m_addr + 712);
	}
	enum class EProgressBarFillType GetBarFillType() {
		return memory.read<enum class EProgressBarFillType>(m_addr + 716);
	}
	bool GetbIsMarquee() {
		return memory.read<bool>(m_addr + 717);
	}
	struct FVector2D GetBorderPadding() {
		return memory.read<struct FVector2D>(m_addr + 720);
	}
	struct FDelegate GetPercentDelegate() {
		return memory.read<struct FDelegate>(m_addr + 728);
	}
	struct FLinearColor GetFillColorAndOpacity() {
		return memory.read<struct FLinearColor>(m_addr + 744);
	}
	struct FDelegate GetFillColorAndOpacityDelegate() {
		return memory.read<struct FDelegate>(m_addr + 760);
	}

private:
	std::uint64_t m_addr = 0;
};


class URetainerBox
{
public:
	URetainerBox(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbRetainRender() {
		return memory.read<bool>(m_addr + 288);
	}
	bool GetRenderOnInvalidation() {
		return memory.read<bool>(m_addr + 289);
	}
	bool GetRenderOnPhase() {
		return memory.read<bool>(m_addr + 290);
	}
	int32_t GetPhase() {
		return memory.read<int32_t>(m_addr + 292);
	}
	int32_t GetPhaseCount() {
		return memory.read<int32_t>(m_addr + 296);
	}
	struct UMaterialInterface GetEffectMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 304);
		return struct UMaterialInterface(ptr_addr);
	}
	struct FName GetTextureParameter() {
		return memory.read<struct FName>(m_addr + 312);
	}

private:
	std::uint64_t m_addr = 0;
};


class URichTextBlockImageDecorator
{
public:
	URichTextBlockImageDecorator(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UDataTable GetImageSet() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct UDataTable(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class USafeZone
{
public:
	USafeZone(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetPadLeft() {
		return memory.read<bool>(m_addr + 288);
	}
	bool GetPadRight() {
		return memory.read<bool>(m_addr + 289);
	}
	bool GetPadTop() {
		return memory.read<bool>(m_addr + 290);
	}
	bool GetPadBottom() {
		return memory.read<bool>(m_addr + 291);
	}

private:
	std::uint64_t m_addr = 0;
};


class USafeZoneSlot
{
public:
	USafeZoneSlot(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbIsTitleSafe() {
		return memory.read<bool>(m_addr + 56);
	}
	struct FMargin GetSafeAreaScale() {
		return memory.read<struct FMargin>(m_addr + 60);
	}
	enum class EHorizontalAlignment GetHAlign() {
		return memory.read<enum class EHorizontalAlignment>(m_addr + 76);
	}
	enum class EVerticalAlignment GetVAlign() {
		return memory.read<enum class EVerticalAlignment>(m_addr + 77);
	}
	struct FMargin GetPadding() {
		return memory.read<struct FMargin>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};


class UScaleBox
{
public:
	UScaleBox(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EStretch GetStretch() {
		return memory.read<enum class EStretch>(m_addr + 288);
	}
	enum class EStretchDirection GetStretchDirection() {
		return memory.read<enum class EStretchDirection>(m_addr + 289);
	}
	float GetUserSpecifiedScale() {
		return memory.read<float>(m_addr + 292);
	}
	bool GetIgnoreInheritedScale() {
		return memory.read<bool>(m_addr + 296);
	}
	bool GetScaleToFitToUserSpecifiedScale() {
		return memory.read<bool>(m_addr + 297);
	}

private:
	std::uint64_t m_addr = 0;
};


class UScaleBoxSlot
{
public:
	UScaleBoxSlot(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMargin GetPadding() {
		return memory.read<struct FMargin>(m_addr + 56);
	}
	enum class EHorizontalAlignment GetHorizontalAlignment() {
		return memory.read<enum class EHorizontalAlignment>(m_addr + 72);
	}
	enum class EVerticalAlignment GetVerticalAlignment() {
		return memory.read<enum class EVerticalAlignment>(m_addr + 73);
	}

private:
	std::uint64_t m_addr = 0;
};


class UScrollBox
{
public:
	UScrollBox(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FScrollBoxStyle GetWidgetStyle() {
		return memory.read<struct FScrollBoxStyle>(m_addr + 288);
	}
	struct FScrollBarStyle GetWidgetBarStyle() {
		return memory.read<struct FScrollBarStyle>(m_addr + 840);
	}
	struct USlateWidgetStyleAsset GetStyle() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2072);
		return struct USlateWidgetStyleAsset(ptr_addr);
	}
	struct USlateWidgetStyleAsset GetBarStyle() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2080);
		return struct USlateWidgetStyleAsset(ptr_addr);
	}
	enum class EOrientation GetOrientation() {
		return memory.read<enum class EOrientation>(m_addr + 2088);
	}
	enum class ESlateVisibility GetScrollBarVisibility() {
		return memory.read<enum class ESlateVisibility>(m_addr + 2089);
	}
	enum class EConsumeMouseWheel GetConsumeMouseWheel() {
		return memory.read<enum class EConsumeMouseWheel>(m_addr + 2090);
	}
	struct FVector2D GetScrollBarThickness() {
		return memory.read<struct FVector2D>(m_addr + 2092);
	}
	struct FMargin GetScrollBarPadding() {
		return memory.read<struct FMargin>(m_addr + 2100);
	}
	bool GetAlwaysShowScrollbar() {
		return memory.read<bool>(m_addr + 2116);
	}
	bool GetAlwaysShowScrollbarTrack() {
		return memory.read<bool>(m_addr + 2117);
	}
	bool GetAllowOverscroll() {
		return memory.read<bool>(m_addr + 2118);
	}
	bool GetbAnimateWheelScrolling() {
		return memory.read<bool>(m_addr + 2119);
	}
	enum class EDescendantScrollDestination GetNavigationDestination() {
		return memory.read<enum class EDescendantScrollDestination>(m_addr + 2120);
	}
	float GetNavigationScrollPadding() {
		return memory.read<float>(m_addr + 2124);
	}
	enum class EScrollWhenFocusChanges GetScrollWhenFocusChanges() {
		return memory.read<enum class EScrollWhenFocusChanges>(m_addr + 2128);
	}
	bool GetbAllowRightClickDragScrolling() {
		return memory.read<bool>(m_addr + 2129);
	}
	float GetWheelScrollMultiplier() {
		return memory.read<float>(m_addr + 2132);
	}
	struct FMulticastInlineDelegate GetOnUserScrolled() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 2136);
	}

private:
	std::uint64_t m_addr = 0;
};


class UScrollBoxSlot
{
public:
	UScrollBoxSlot(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMargin GetPadding() {
		return memory.read<struct FMargin>(m_addr + 56);
	}
	enum class EHorizontalAlignment GetHorizontalAlignment() {
		return memory.read<enum class EHorizontalAlignment>(m_addr + 72);
	}
	enum class EVerticalAlignment GetVerticalAlignment() {
		return memory.read<enum class EVerticalAlignment>(m_addr + 73);
	}

private:
	std::uint64_t m_addr = 0;
};


class USizeBox
{
public:
	USizeBox(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetWidthOverride() {
		return memory.read<float>(m_addr + 304);
	}
	float GetHeightOverride() {
		return memory.read<float>(m_addr + 308);
	}
	float GetMinDesiredWidth() {
		return memory.read<float>(m_addr + 312);
	}
	float GetMinDesiredHeight() {
		return memory.read<float>(m_addr + 316);
	}
	float GetMaxDesiredWidth() {
		return memory.read<float>(m_addr + 320);
	}
	float GetMaxDesiredHeight() {
		return memory.read<float>(m_addr + 324);
	}
	float GetMinAspectRatio() {
		return memory.read<float>(m_addr + 328);
	}
	float GetMaxAspectRatio() {
		return memory.read<float>(m_addr + 332);
	}
	char GetbOverride_WidthOverride() {
		return memory.read<char>(m_addr + 336);
	}
	char GetbOverride_HeightOverride() {
		return memory.read<char>(m_addr + 336);
	}
	char GetbOverride_MinDesiredWidth() {
		return memory.read<char>(m_addr + 336);
	}
	char GetbOverride_MinDesiredHeight() {
		return memory.read<char>(m_addr + 336);
	}
	char GetbOverride_MaxDesiredWidth() {
		return memory.read<char>(m_addr + 336);
	}
	char GetbOverride_MaxDesiredHeight() {
		return memory.read<char>(m_addr + 336);
	}
	char GetbOverride_MinAspectRatio() {
		return memory.read<char>(m_addr + 336);
	}
	char GetbOverride_MaxAspectRatio() {
		return memory.read<char>(m_addr + 336);
	}

private:
	std::uint64_t m_addr = 0;
};


class USizeBoxSlot
{
public:
	USizeBoxSlot(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMargin GetPadding() {
		return memory.read<struct FMargin>(m_addr + 56);
	}
	enum class EHorizontalAlignment GetHorizontalAlignment() {
		return memory.read<enum class EHorizontalAlignment>(m_addr + 88);
	}
	enum class EVerticalAlignment GetVerticalAlignment() {
		return memory.read<enum class EVerticalAlignment>(m_addr + 89);
	}

private:
	std::uint64_t m_addr = 0;
};


class USlateBlueprintLibrary
{
public:
	USlateBlueprintLibrary(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class USlateVectorArtData
{
public:
	USlateVectorArtData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FSlateMeshVertex> GetVertexData() {
		return memory.read<struct TArray<struct FSlateMeshVertex>>(m_addr + 40);
	}
	struct TArray<uint32_t> GetIndexData() {
		return memory.read<struct TArray<uint32_t>>(m_addr + 56);
	}
	struct UMaterialInterface GetMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 72);
		return struct UMaterialInterface(ptr_addr);
	}
	struct FVector2D GetExtentMin() {
		return memory.read<struct FVector2D>(m_addr + 80);
	}
	struct FVector2D GetExtentMax() {
		return memory.read<struct FVector2D>(m_addr + 88);
	}

private:
	std::uint64_t m_addr = 0;
};


class USlateAccessibleWidgetData
{
public:
	USlateAccessibleWidgetData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbCanChildrenBeAccessible() {
		return memory.read<bool>(m_addr + 40);
	}
	enum class ESlateAccessibleBehavior GetAccessibleBehavior() {
		return memory.read<enum class ESlateAccessibleBehavior>(m_addr + 41);
	}
	enum class ESlateAccessibleBehavior GetAccessibleSummaryBehavior() {
		return memory.read<enum class ESlateAccessibleBehavior>(m_addr + 42);
	}
	struct FText GetAccessibleText() {
		return memory.read<struct FText>(m_addr + 48);
	}
	struct FDelegate GetAccessibleTextDelegate() {
		return memory.read<struct FDelegate>(m_addr + 72);
	}
	struct FText GetAccessibleSummaryText() {
		return memory.read<struct FText>(m_addr + 88);
	}
	struct FDelegate GetAccessibleSummaryTextDelegate() {
		return memory.read<struct FDelegate>(m_addr + 112);
	}

private:
	std::uint64_t m_addr = 0;
};


class USlider
{
public:
	USlider(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetValue() {
		return memory.read<float>(m_addr + 264);
	}
	struct FDelegate GetValueDelegate() {
		return memory.read<struct FDelegate>(m_addr + 268);
	}
	float GetMinValue() {
		return memory.read<float>(m_addr + 284);
	}
	float GetMaxValue() {
		return memory.read<float>(m_addr + 288);
	}
	struct FSliderStyle GetWidgetStyle() {
		return memory.read<struct FSliderStyle>(m_addr + 296);
	}
	enum class EOrientation GetOrientation() {
		return memory.read<enum class EOrientation>(m_addr + 1128);
	}
	struct FLinearColor GetSliderBarColor() {
		return memory.read<struct FLinearColor>(m_addr + 1132);
	}
	struct FLinearColor GetSliderHandleColor() {
		return memory.read<struct FLinearColor>(m_addr + 1148);
	}
	bool GetIndentHandle() {
		return memory.read<bool>(m_addr + 1164);
	}
	bool GetLocked() {
		return memory.read<bool>(m_addr + 1165);
	}
	bool GetMouseUsesStep() {
		return memory.read<bool>(m_addr + 1166);
	}
	bool GetRequiresControllerLock() {
		return memory.read<bool>(m_addr + 1167);
	}
	float GetStepSize() {
		return memory.read<float>(m_addr + 1168);
	}
	bool GetIsFocusable() {
		return memory.read<bool>(m_addr + 1172);
	}
	struct FMulticastInlineDelegate GetOnMouseCaptureBegin() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 1176);
	}
	struct FMulticastInlineDelegate GetOnMouseCaptureEnd() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 1192);
	}
	struct FMulticastInlineDelegate GetOnControllerCaptureBegin() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 1208);
	}
	struct FMulticastInlineDelegate GetOnControllerCaptureEnd() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 1224);
	}
	struct FMulticastInlineDelegate GetOnValueChanged() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 1240);
	}

private:
	std::uint64_t m_addr = 0;
};


class USpacer
{
public:
	USpacer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector2D GetSize() {
		return memory.read<struct FVector2D>(m_addr + 264);
	}

private:
	std::uint64_t m_addr = 0;
};


class USpinBox
{
public:
	USpinBox(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetValue() {
		return memory.read<float>(m_addr + 264);
	}
	struct FDelegate GetValueDelegate() {
		return memory.read<struct FDelegate>(m_addr + 268);
	}
	struct FSpinBoxStyle GetWidgetStyle() {
		return memory.read<struct FSpinBoxStyle>(m_addr + 288);
	}
	struct USlateWidgetStyleAsset GetStyle() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1032);
		return struct USlateWidgetStyleAsset(ptr_addr);
	}
	int32_t GetMinFractionalDigits() {
		return memory.read<int32_t>(m_addr + 1040);
	}
	int32_t GetMaxFractionalDigits() {
		return memory.read<int32_t>(m_addr + 1044);
	}
	bool GetbAlwaysUsesDeltaSnap() {
		return memory.read<bool>(m_addr + 1048);
	}
	float GetDelta() {
		return memory.read<float>(m_addr + 1052);
	}
	float GetSliderExponent() {
		return memory.read<float>(m_addr + 1056);
	}
	struct FSlateFontInfo GetFont() {
		return memory.read<struct FSlateFontInfo>(m_addr + 1064);
	}
	enum class ETextJustify GetJustification() {
		return memory.read<enum class ETextJustify>(m_addr + 1152);
	}
	float GetMinDesiredWidth() {
		return memory.read<float>(m_addr + 1156);
	}
	bool GetClearKeyboardFocusOnCommit() {
		return memory.read<bool>(m_addr + 1160);
	}
	bool GetSelectAllTextOnCommit() {
		return memory.read<bool>(m_addr + 1161);
	}
	struct FSlateColor GetForegroundColor() {
		return memory.read<struct FSlateColor>(m_addr + 1168);
	}
	struct FMulticastInlineDelegate GetOnValueChanged() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 1208);
	}
	struct FMulticastInlineDelegate GetOnValueCommitted() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 1224);
	}
	struct FMulticastInlineDelegate GetOnBeginSliderMovement() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 1240);
	}
	struct FMulticastInlineDelegate GetOnEndSliderMovement() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 1256);
	}
	char GetbOverride_MinValue() {
		return memory.read<char>(m_addr + 1272);
	}
	char GetbOverride_MaxValue() {
		return memory.read<char>(m_addr + 1272);
	}
	char GetbOverride_MinSliderValue() {
		return memory.read<char>(m_addr + 1272);
	}
	char GetbOverride_MaxSliderValue() {
		return memory.read<char>(m_addr + 1272);
	}
	float GetMinValue() {
		return memory.read<float>(m_addr + 1276);
	}
	float GetMaxValue() {
		return memory.read<float>(m_addr + 1280);
	}
	float GetMinSliderValue() {
		return memory.read<float>(m_addr + 1284);
	}
	float GetMaxSliderValue() {
		return memory.read<float>(m_addr + 1288);
	}

private:
	std::uint64_t m_addr = 0;
};


class UTextBinding
{
public:
	UTextBinding(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UThrobber
{
public:
	UThrobber(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetNumberOfPieces() {
		return memory.read<int32_t>(m_addr + 264);
	}
	bool GetbAnimateHorizontally() {
		return memory.read<bool>(m_addr + 268);
	}
	bool GetbAnimateVertically() {
		return memory.read<bool>(m_addr + 269);
	}
	bool GetbAnimateOpacity() {
		return memory.read<bool>(m_addr + 270);
	}
	struct USlateBrushAsset GetPieceImage() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 272);
		return struct USlateBrushAsset(ptr_addr);
	}
	struct FSlateBrush GetImage() {
		return memory.read<struct FSlateBrush>(m_addr + 280);
	}

private:
	std::uint64_t m_addr = 0;
};


class UTreeView
{
public:
	UTreeView(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FDelegate GetBP_OnGetItemChildren() {
		return memory.read<struct FDelegate>(m_addr + 888);
	}
	struct FMulticastInlineDelegate GetBP_OnItemExpansionChanged() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 904);
	}

private:
	std::uint64_t m_addr = 0;
};


class UUMGSequencePlayer
{
public:
	UUMGSequencePlayer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWidgetAnimation GetAnimation() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 608);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct FMovieSceneRootEvaluationTemplateInstance GetRootTemplateInstance() {
		return memory.read<struct FMovieSceneRootEvaluationTemplateInstance>(m_addr + 624);
	}

private:
	std::uint64_t m_addr = 0;
};


class UUMGSequenceTickManager
{
public:
	UUMGSequenceTickManager(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TSet<struct TWeakObjectPtr<UUserWidget>> GetWeakUserWidgets() {
		return memory.read<struct TSet<struct TWeakObjectPtr<UUserWidget>>>(m_addr + 40);
	}
	struct UMovieSceneEntitySystemLinker GetLinker() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 120);
		return struct UMovieSceneEntitySystemLinker(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UUniformGridPanel
{
public:
	UUniformGridPanel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMargin GetSlotPadding() {
		return memory.read<struct FMargin>(m_addr + 288);
	}
	float GetMinDesiredSlotWidth() {
		return memory.read<float>(m_addr + 304);
	}
	float GetMinDesiredSlotHeight() {
		return memory.read<float>(m_addr + 308);
	}

private:
	std::uint64_t m_addr = 0;
};


class UUniformGridSlot
{
public:
	UUniformGridSlot(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EHorizontalAlignment GetHorizontalAlignment() {
		return memory.read<enum class EHorizontalAlignment>(m_addr + 56);
	}
	enum class EVerticalAlignment GetVerticalAlignment() {
		return memory.read<enum class EVerticalAlignment>(m_addr + 57);
	}
	int32_t GetRow() {
		return memory.read<int32_t>(m_addr + 60);
	}
	int32_t GetColumn() {
		return memory.read<int32_t>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UVerticalBox
{
public:
	UVerticalBox(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UVerticalBoxSlot
{
public:
	UVerticalBoxSlot(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSlateChildSize GetSize() {
		return memory.read<struct FSlateChildSize>(m_addr + 56);
	}
	struct FMargin GetPadding() {
		return memory.read<struct FMargin>(m_addr + 64);
	}
	enum class EHorizontalAlignment GetHorizontalAlignment() {
		return memory.read<enum class EHorizontalAlignment>(m_addr + 88);
	}
	enum class EVerticalAlignment GetVerticalAlignment() {
		return memory.read<enum class EVerticalAlignment>(m_addr + 89);
	}

private:
	std::uint64_t m_addr = 0;
};


class UViewport
{
public:
	UViewport(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLinearColor GetBackgroundColor() {
		return memory.read<struct FLinearColor>(m_addr + 288);
	}

private:
	std::uint64_t m_addr = 0;
};


class UVisibilityBinding
{
public:
	UVisibilityBinding(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UWidgetAnimation
{
public:
	UWidgetAnimation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMovieScene GetMovieScene() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 96);
		return struct UMovieScene(ptr_addr);
	}
	struct TArray<struct FWidgetAnimationBinding> GetAnimationBindings() {
		return memory.read<struct TArray<struct FWidgetAnimationBinding>>(m_addr + 104);
	}
	bool GetbLegacyFinishOnStop() {
		return memory.read<bool>(m_addr + 120);
	}
	struct FString GetDisplayLabel() {
		return memory.read<struct FString>(m_addr + 128);
	}

private:
	std::uint64_t m_addr = 0;
};


class UWidgetAnimationDelegateBinding
{
public:
	UWidgetAnimationDelegateBinding(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FBlueprintWidgetAnimationDelegateBinding> GetWidgetAnimationDelegateBindings() {
		return memory.read<struct TArray<struct FBlueprintWidgetAnimationDelegateBinding>>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};


class UWidgetAnimationPlayCallbackProxy
{
public:
	UWidgetAnimationPlayCallbackProxy(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate GetFinished() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};


class UWidgetBinding
{
public:
	UWidgetBinding(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UWidgetBlueprintLibrary
{
public:
	UWidgetBlueprintLibrary(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UWidgetInteractionComponent
{
public:
	UWidgetInteractionComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMulticastInlineDelegate GetOnHoveredWidgetChanged() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 520);
	}
	int32_t GetVirtualUserIndex() {
		return memory.read<int32_t>(m_addr + 552);
	}
	int32_t GetPointerIndex() {
		return memory.read<int32_t>(m_addr + 556);
	}
	enum class ECollisionChannel GetTraceChannel() {
		return memory.read<enum class ECollisionChannel>(m_addr + 560);
	}
	float GetInteractionDistance() {
		return memory.read<float>(m_addr + 564);
	}
	enum class EWidgetInteractionSource GetInteractionSource() {
		return memory.read<enum class EWidgetInteractionSource>(m_addr + 568);
	}
	bool GetbEnableHitTesting() {
		return memory.read<bool>(m_addr + 569);
	}
	bool GetbShowDebug() {
		return memory.read<bool>(m_addr + 570);
	}
	float GetDebugSphereLineThickness() {
		return memory.read<float>(m_addr + 572);
	}
	float GetDebugLineThickness() {
		return memory.read<float>(m_addr + 576);
	}
	struct FLinearColor GetDebugColor() {
		return memory.read<struct FLinearColor>(m_addr + 580);
	}
	struct FHitResult GetCustomHitResult() {
		return memory.read<struct FHitResult>(m_addr + 720);
	}
	struct FVector2D GetLocalHitLocation() {
		return memory.read<struct FVector2D>(m_addr + 856);
	}
	struct FVector2D GetLastLocalHitLocation() {
		return memory.read<struct FVector2D>(m_addr + 864);
	}
	struct UWidgetComponent GetHoveredWidgetComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 872);
		return struct UWidgetComponent(ptr_addr);
	}
	struct FHitResult GetLastHitResult() {
		return memory.read<struct FHitResult>(m_addr + 880);
	}
	bool GetbIsHoveredWidgetInteractable() {
		return memory.read<bool>(m_addr + 1016);
	}
	bool GetbIsHoveredWidgetFocusable() {
		return memory.read<bool>(m_addr + 1017);
	}
	bool GetbIsHoveredWidgetHitTestVisible() {
		return memory.read<bool>(m_addr + 1018);
	}

private:
	std::uint64_t m_addr = 0;
};


class UWidgetLayoutLibrary
{
public:
	UWidgetLayoutLibrary(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UWidgetNavigation
{
public:
	UWidgetNavigation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FWidgetNavigationData GetUp() {
		return memory.read<struct FWidgetNavigationData>(m_addr + 40);
	}
	struct FWidgetNavigationData GetDown() {
		return memory.read<struct FWidgetNavigationData>(m_addr + 76);
	}
	struct FWidgetNavigationData GetLeft() {
		return memory.read<struct FWidgetNavigationData>(m_addr + 112);
	}
	struct FWidgetNavigationData GetRight() {
		return memory.read<struct FWidgetNavigationData>(m_addr + 148);
	}
	struct FWidgetNavigationData GetNext() {
		return memory.read<struct FWidgetNavigationData>(m_addr + 184);
	}
	struct FWidgetNavigationData GetPrevious() {
		return memory.read<struct FWidgetNavigationData>(m_addr + 220);
	}

private:
	std::uint64_t m_addr = 0;
};


class UWidgetSwitcher
{
public:
	UWidgetSwitcher(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetActiveWidgetIndex() {
		return memory.read<int32_t>(m_addr + 288);
	}

private:
	std::uint64_t m_addr = 0;
};


class UWidgetSwitcherSlot
{
public:
	UWidgetSwitcherSlot(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMargin GetPadding() {
		return memory.read<struct FMargin>(m_addr + 64);
	}
	enum class EHorizontalAlignment GetHorizontalAlignment() {
		return memory.read<enum class EHorizontalAlignment>(m_addr + 80);
	}
	enum class EVerticalAlignment GetVerticalAlignment() {
		return memory.read<enum class EVerticalAlignment>(m_addr + 81);
	}

private:
	std::uint64_t m_addr = 0;
};


class UWindowTitleBarArea
{
public:
	UWindowTitleBarArea(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbWindowButtonsEnabled() {
		return memory.read<bool>(m_addr + 288);
	}
	bool GetbDoubleClickTogglesFullscreen() {
		return memory.read<bool>(m_addr + 289);
	}

private:
	std::uint64_t m_addr = 0;
};


class UWindowTitleBarAreaSlot
{
public:
	UWindowTitleBarAreaSlot(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMargin GetPadding() {
		return memory.read<struct FMargin>(m_addr + 56);
	}
	enum class EHorizontalAlignment GetHorizontalAlignment() {
		return memory.read<enum class EHorizontalAlignment>(m_addr + 72);
	}
	enum class EVerticalAlignment GetVerticalAlignment() {
		return memory.read<enum class EVerticalAlignment>(m_addr + 73);
	}

private:
	std::uint64_t m_addr = 0;
};


class UWrapBox
{
public:
	UWrapBox(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector2D GetInnerSlotPadding() {
		return memory.read<struct FVector2D>(m_addr + 288);
	}
	float GetWrapWidth() {
		return memory.read<float>(m_addr + 296);
	}
	float GetWrapSize() {
		return memory.read<float>(m_addr + 300);
	}
	bool GetbExplicitWrapWidth() {
		return memory.read<bool>(m_addr + 304);
	}
	bool GetbExplicitWrapSize() {
		return memory.read<bool>(m_addr + 305);
	}
	enum class EOrientation GetOrientation() {
		return memory.read<enum class EOrientation>(m_addr + 306);
	}

private:
	std::uint64_t m_addr = 0;
};


class UWrapBoxSlot
{
public:
	UWrapBoxSlot(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMargin GetPadding() {
		return memory.read<struct FMargin>(m_addr + 56);
	}
	bool GetbFillEmptySpace() {
		return memory.read<bool>(m_addr + 72);
	}
	float GetFillSpanWhenLessThan() {
		return memory.read<float>(m_addr + 76);
	}
	enum class EHorizontalAlignment GetHorizontalAlignment() {
		return memory.read<enum class EHorizontalAlignment>(m_addr + 80);
	}
	enum class EVerticalAlignment GetVerticalAlignment() {
		return memory.read<enum class EVerticalAlignment>(m_addr + 81);
	}

private:
	std::uint64_t m_addr = 0;
};


