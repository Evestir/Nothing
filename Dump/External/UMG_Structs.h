#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FGenerateWidgetForString__DelegateSignature
{
public:
	FGenerateWidgetForString__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetItem() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct UWidget GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UWidget(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetClipping
{
public:
	FSetClipping(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EWidgetClipping GetInClipping() {
		return memory.read<enum class EWidgetClipping>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetText__DelegateSignature
{
public:
	FGetText__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetReturnValue() {
		return memory.read<struct FText>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FForceVolatile
{
public:
	FForceVolatile(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbForce() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FCustomWidgetNavigationDelegate__DelegateSignature
{
public:
	FCustomWidgetNavigationDelegate__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EUINavigation GetNavigation() {
		return memory.read<enum class EUINavigation>(m_addr + 0);
	}
	struct UWidget GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UWidget(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FBP_CreateEntry
{
public:
	FBP_CreateEntry(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UUserWidget GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UUserWidget(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FCaptureJoystick
{
public:
	FCaptureJoystick(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FEventReply GetReply() {
		return memory.read<struct FEventReply>(m_addr + 0);
	}
	struct UWidget GetCapturingWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 184);
		return struct UWidget(ptr_addr);
	}
	bool GetbInAllJoysticks() {
		return memory.read<bool>(m_addr + 192);
	}
	struct FEventReply GetReturnValue() {
		return memory.read<struct FEventReply>(m_addr + 200);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetViewportWorld
{
public:
	FGetViewportWorld(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWorld GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UWorld(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGenerateWidgetForObject__DelegateSignature
{
public:
	FGenerateWidgetForObject__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct UWidget GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UWidget(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetIsEnabled
{
public:
	FSetIsEnabled(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbInIsEnabled() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FHasMouseCapture
{
public:
	FHasMouseCapture(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetDynamicFontMaterial
{
public:
	FGetDynamicFontMaterial(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMaterialInstanceDynamic GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMaterialInstanceDynamic(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCheckBoxState__DelegateSignature
{
public:
	FGetCheckBoxState__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ECheckBoxState GetReturnValue() {
		return memory.read<enum class ECheckBoxState>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetBool__DelegateSignature
{
public:
	FGetBool__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetRenderingPhase
{
public:
	FSetRenderingPhase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetRenderPhase() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetTotalPhases() {
		return memory.read<int32_t>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAccessibleSummaryText
{
public:
	FGetAccessibleSummaryText(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetReturnValue() {
		return memory.read<struct FText>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnItemIsHoveredChangedDynamic__DelegateSignature
{
public:
	FOnItemIsHoveredChangedDynamic__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	bool GetbIsHovered() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAccessibleText
{
public:
	FGetAccessibleText(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetReturnValue() {
		return memory.read<struct FText>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetToolTipText
{
public:
	FSetToolTipText(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetInToolTipText() {
		return memory.read<struct FText>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FBP_GetNumItemsSelected
{
public:
	FBP_GetNumItemsSelected(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetAnimateHorizontally
{
public:
	FSetAnimateHorizontally(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbInAnimateHorizontally() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FEqualEqual_SlateBrush
{
public:
	FEqualEqual_SlateBrush(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSlateBrush GetA() {
		return memory.read<struct FSlateBrush>(m_addr + 0);
	}
	struct FSlateBrush GetB() {
		return memory.read<struct FSlateBrush>(m_addr + 136);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 272);
	}

private:
	std::uint64_t m_addr = 0;
};class FRichTextStyleRow
{
public:
	FRichTextStyleRow(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTextBlockStyle GetTextStyle() {
		return memory.read<struct FTextBlockStyle>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCachedGeometry
{
public:
	FGetCachedGeometry(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGeometry GetReturnValue() {
		return memory.read<struct FGeometry>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSlateVisibility__DelegateSignature
{
public:
	FGetSlateVisibility__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ESlateVisibility GetReturnValue() {
		return memory.read<enum class ESlateVisibility>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetClipping
{
public:
	FGetClipping(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EWidgetClipping GetReturnValue() {
		return memory.read<enum class EWidgetClipping>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAllWidgetsOfClass
{
public:
	FGetAllWidgetsOfClass(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct TArray<struct UUserWidget> GetFoundWidgets() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct TArray<struct UUserWidget>(ptr_addr);
	}
	UUserWidget GetWidgetClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return UUserWidget(ptr_addr);
	}
	bool GetTopLevelOnly() {
		return memory.read<bool>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetDesiredSize
{
public:
	FGetDesiredSize(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector2D GetReturnValue() {
		return memory.read<struct FVector2D>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetFloat__DelegateSignature
{
public:
	FGetFloat__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMakeBrushFromTexture
{
public:
	FMakeBrushFromTexture(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTexture2D GetTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UTexture2D(ptr_addr);
	}
	int32_t GetWidth() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetHeight() {
		return memory.read<int32_t>(m_addr + 12);
	}
	struct FSlateBrush GetReturnValue() {
		return memory.read<struct FSlateBrush>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetGameInstance
{
public:
	FGetGameInstance(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UGameInstance GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UGameInstance(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetInt32__DelegateSignature
{
public:
	FGetInt32__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetUserFocus
{
public:
	FSetUserFocus(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FEventReply GetReply() {
		return memory.read<struct FEventReply>(m_addr + 0);
	}
	struct UWidget GetFocusWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 184);
		return struct UWidget(ptr_addr);
	}
	bool GetbInAllUsers() {
		return memory.read<bool>(m_addr + 192);
	}
	struct FEventReply GetReturnValue() {
		return memory.read<struct FEventReply>(m_addr + 200);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetSelectionMode
{
public:
	FSetSelectionMode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ESelectionMode GetSelectionMode() {
		return memory.read<enum class ESelectionMode>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetScrollbarPadding
{
public:
	FSetScrollbarPadding(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMargin GetNewScrollbarPadding() {
		return memory.read<struct FMargin>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FHasUserFocus
{
public:
	FHasUserFocus(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct APlayerController GetPlayerController() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct APlayerController(ptr_addr);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetIsEnabled
{
public:
	FGetIsEnabled(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetMinAspectRatio
{
public:
	FSetMinAspectRatio(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInMinAspectRatio() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddChildToHorizontalBox
{
public:
	FAddChildToHorizontalBox(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWidget GetContent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UWidget(ptr_addr);
	}
	struct UHorizontalBoxSlot GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UHorizontalBoxSlot(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetNavigationRuleCustomBoundary
{
public:
	FSetNavigationRuleCustomBoundary(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EUINavigation GetDirection() {
		return memory.read<enum class EUINavigation>(m_addr + 0);
	}
	struct FDelegate GetInCustomDelegate() {
		return memory.read<struct FDelegate>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetLinearColor__DelegateSignature
{
public:
	FGetLinearColor__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLinearColor GetReturnValue() {
		return memory.read<struct FLinearColor>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetCursor
{
public:
	FSetCursor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EMouseCursor GetInCursor() {
		return memory.read<enum class EMouseCursor>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSlateMeshVertex
{
public:
	FSlateMeshVertex(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector2D Getposition() {
		return memory.read<struct FVector2D>(m_addr + 0);
	}
	struct FColor GetColor() {
		return memory.read<struct FColor>(m_addr + 8);
	}
	struct FVector2D GetUV0() {
		return memory.read<struct FVector2D>(m_addr + 12);
	}
	struct FVector2D GetUV1() {
		return memory.read<struct FVector2D>(m_addr + 20);
	}
	struct FVector2D GetUV2() {
		return memory.read<struct FVector2D>(m_addr + 28);
	}
	struct FVector2D GetUV3() {
		return memory.read<struct FVector2D>(m_addr + 36);
	}
	struct FVector2D GetUV4() {
		return memory.read<struct FVector2D>(m_addr + 44);
	}
	struct FVector2D GetUV5() {
		return memory.read<struct FVector2D>(m_addr + 52);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetMouseCursor__DelegateSignature
{
public:
	FGetMouseCursor__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EMouseCursor GetReturnValue() {
		return memory.read<enum class EMouseCursor>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FLockMouse
{
public:
	FLockMouse(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FEventReply GetReply() {
		return memory.read<struct FEventReply>(m_addr + 0);
	}
	struct UWidget GetCapturingWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 184);
		return struct UWidget(ptr_addr);
	}
	struct FEventReply GetReturnValue() {
		return memory.read<struct FEventReply>(m_addr + 192);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetOwningLocalPlayer
{
public:
	FGetOwningLocalPlayer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct ULocalPlayer GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct ULocalPlayer(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetChildrenCount
{
public:
	FGetChildrenCount(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetRenderScale
{
public:
	FSetRenderScale(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector2D GetScale() {
		return memory.read<struct FVector2D>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetWindowTitleBarCloseButtonActive
{
public:
	FSetWindowTitleBarCloseButtonActive(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbActive() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FRadialBoxSettings
{
public:
	FRadialBoxSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetStartingAngle() {
		return memory.read<float>(m_addr + 0);
	}
	bool GetbDistributeItemsEvenly() {
		return memory.read<bool>(m_addr + 4);
	}
	float GetAngleBetweenItems() {
		return memory.read<float>(m_addr + 8);
	}
	float GetSectorCentralAngle() {
		return memory.read<float>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetWidgetAtIndex
{
public:
	FGetWidgetAtIndex(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct UWidget GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UWidget(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetRenderTranslation
{
public:
	FSetRenderTranslation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector2D GetTranslation() {
		return memory.read<struct FVector2D>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetOwningPlayer
{
public:
	FGetOwningPlayer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct APlayerController GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct APlayerController(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAnchorsInViewport
{
public:
	FGetAnchorsInViewport(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAnchors GetReturnValue() {
		return memory.read<struct FAnchors>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPaintSpaceGeometry
{
public:
	FGetPaintSpaceGeometry(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGeometry GetReturnValue() {
		return memory.read<struct FGeometry>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetParent
{
public:
	FGetParent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPanelWidget GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UPanelWidget(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetWindowVisiblility
{
public:
	FGetWindowVisiblility(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EWindowVisibility GetReturnValue() {
		return memory.read<enum class EWindowVisibility>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsListItemExpanded
{
public:
	FIsListItemExpanded(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TScriptInterface<IUserListEntry> GetUserListEntry() {
		return memory.read<struct TScriptInterface<IUserListEntry>>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetOpacity
{
public:
	FSetOpacity(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInOpacity() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetRenderOpacity
{
public:
	FGetRenderOpacity(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDrawTextFormatted
{
public:
	FDrawTextFormatted(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPaintContext GetContext() {
		return memory.read<struct FPaintContext>(m_addr + 0);
	}
	struct FText GetText() {
		return memory.read<struct FText>(m_addr + 48);
	}
	struct FVector2D Getposition() {
		return memory.read<struct FVector2D>(m_addr + 72);
	}
	struct UFont GetFont() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 80);
		return struct UFont(ptr_addr);
	}
	int32_t GetFontSize() {
		return memory.read<int32_t>(m_addr + 88);
	}
	struct FName GetFontTypeFace() {
		return memory.read<struct FName>(m_addr + 92);
	}
	struct FLinearColor GetTint() {
		return memory.read<struct FLinearColor>(m_addr + 100);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetRenderTransformAngle
{
public:
	FGetRenderTransformAngle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnVisibilityChangedEvent__DelegateSignature
{
public:
	FOnVisibilityChangedEvent__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ESlateVisibility GetInVisibility() {
		return memory.read<enum class ESlateVisibility>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOpen
{
public:
	FOpen(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbFocusMenu() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsVisible
{
public:
	FIsVisible(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FToggleOpen
{
public:
	FToggleOpen(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbFocusOnOpen() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetOffsets
{
public:
	FSetOffsets(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMargin GetInOffset() {
		return memory.read<struct FMargin>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSlateBrush__DelegateSignature
{
public:
	FGetSlateBrush__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSlateBrush GetReturnValue() {
		return memory.read<struct FSlateBrush>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetTickMode
{
public:
	FSetTickMode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ETickMode GetInTickMode() {
		return memory.read<enum class ETickMode>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FHasFocusedDescendants
{
public:
	FHasFocusedDescendants(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetUserSpecifiedScale
{
public:
	FSetUserSpecifiedScale(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInUserSpecifiedScale() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetMinFractionalDigits
{
public:
	FSetMinFractionalDigits(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetNewValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetWidget__DelegateSignature
{
public:
	FGetWidget__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWidget GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UWidget(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTickSpaceGeometry
{
public:
	FGetTickSpaceGeometry(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGeometry GetReturnValue() {
		return memory.read<struct FGeometry>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FBindToAnimationStarted
{
public:
	FBindToAnimationStarted(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UUserWidget GetWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UUserWidget(ptr_addr);
	}
	struct FDelegate GetDelegate() {
		return memory.read<struct FDelegate>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetStretch
{
public:
	FSetStretch(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EStretch GetInStretch() {
		return memory.read<enum class EStretch>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSlateColor__DelegateSignature
{
public:
	FGetSlateColor__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSlateColor GetReturnValue() {
		return memory.read<struct FSlateColor>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FRichImageRow
{
public:
	FRichImageRow(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSlateBrush GetBrush() {
		return memory.read<struct FSlateBrush>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsListItemSelected
{
public:
	FIsListItemSelected(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TScriptInterface<IUserListEntry> GetUserListEntry() {
		return memory.read<struct TScriptInterface<IUserListEntry>>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetVisibility
{
public:
	FGetVisibility(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ESlateVisibility GetReturnValue() {
		return memory.read<enum class ESlateVisibility>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FHasAnyUserFocus
{
public:
	FHasAnyUserFocus(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetValue
{
public:
	FSetValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetBrushSize
{
public:
	FSetBrushSize(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector2D GetDesiredSize() {
		return memory.read<struct FVector2D>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FHasMouseCaptureByUser
{
public:
	FHasMouseCaptureByUser(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetUserIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetPointerIndex() {
		return memory.read<int32_t>(m_addr + 4);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetInputEventFromKeyEvent
{
public:
	FGetInputEventFromKeyEvent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FKeyEvent GetEvent() {
		return memory.read<struct FKeyEvent>(m_addr + 0);
	}
	struct FInputEvent GetReturnValue() {
		return memory.read<struct FInputEvent>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FBP_GetSelectedItem
{
public:
	FBP_GetSelectedItem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FHasKeyboardFocus
{
public:
	FHasKeyboardFocus(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FHasUserFocusedDescendants
{
public:
	FHasUserFocusedDescendants(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct APlayerController GetPlayerController() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct APlayerController(ptr_addr);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetViewportSize
{
public:
	FGetViewportSize(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct FVector2D GetReturnValue() {
		return memory.read<struct FVector2D>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetRenderOpacity
{
public:
	FSetRenderOpacity(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInOpacity() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetValue
{
public:
	FGetValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWidget GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UWidget(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetOwningPlayerPawn
{
public:
	FGetOwningPlayerPawn(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct APawn GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct APawn(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsHovered
{
public:
	FIsHovered(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FBP_SetListItems
{
public:
	FBP_SetListItems(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UObject> GetInListItems() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct TArray<struct UObject>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnPointerEvent__DelegateSignature
{
public:
	FOnPointerEvent__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGeometry GetMyGeometry() {
		return memory.read<struct FGeometry>(m_addr + 0);
	}
	struct FPointerEvent GetMouseEvent() {
		return memory.read<struct FPointerEvent>(m_addr + 56);
	}
	struct FEventReply GetReturnValue() {
		return memory.read<struct FEventReply>(m_addr + 168);
	}

private:
	std::uint64_t m_addr = 0;
};class FEventReply
{
public:
	FEventReply(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FReleaseMouseCapture
{
public:
	FReleaseMouseCapture(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FEventReply GetReply() {
		return memory.read<struct FEventReply>(m_addr + 0);
	}
	struct FEventReply GetReturnValue() {
		return memory.read<struct FEventReply>(m_addr + 184);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetRenderTransform
{
public:
	FSetRenderTransform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FWidgetTransform GetInTransform() {
		return memory.read<struct FWidgetTransform>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnTouchEnded
{
public:
	FOnTouchEnded(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGeometry GetMyGeometry() {
		return memory.read<struct FGeometry>(m_addr + 0);
	}
	struct FPointerEvent GetInTouchEvent() {
		return memory.read<struct FPointerEvent>(m_addr + 56);
	}
	struct FEventReply GetReturnValue() {
		return memory.read<struct FEventReply>(m_addr + 168);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnReply__DelegateSignature
{
public:
	FOnReply__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FEventReply GetReturnValue() {
		return memory.read<struct FEventReply>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnExpandableAreaExpansionChanged__DelegateSignature
{
public:
	FOnExpandableAreaExpansionChanged__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UExpandableArea GetArea() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UExpandableArea(ptr_addr);
	}
	bool GetbIsExpanded() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetRenderTransformPivot
{
public:
	FSetRenderTransformPivot(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector2D GetPivot() {
		return memory.read<struct FVector2D>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetKeySelectionText
{
public:
	FSetKeySelectionText(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetInKeySelectionText() {
		return memory.read<struct FText>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetNavigationRule
{
public:
	FSetNavigationRule(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EUINavigation GetDirection() {
		return memory.read<enum class EUINavigation>(m_addr + 0);
	}
	enum class EUINavigationRule GetRule() {
		return memory.read<enum class EUINavigationRule>(m_addr + 1);
	}
	struct FName GetWidgetToFocus() {
		return memory.read<struct FName>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetAllNavigationRules
{
public:
	FSetAllNavigationRules(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EUINavigationRule GetRule() {
		return memory.read<enum class EUINavigationRule>(m_addr + 0);
	}
	struct FName GetWidgetToFocus() {
		return memory.read<struct FName>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnMouseButtonDoubleClick
{
public:
	FOnMouseButtonDoubleClick(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGeometry GetInMyGeometry() {
		return memory.read<struct FGeometry>(m_addr + 0);
	}
	struct FPointerEvent GetInMouseEvent() {
		return memory.read<struct FPointerEvent>(m_addr + 56);
	}
	struct FEventReply GetReturnValue() {
		return memory.read<struct FEventReply>(m_addr + 168);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetNavigationRuleBase
{
public:
	FSetNavigationRuleBase(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EUINavigation GetDirection() {
		return memory.read<enum class EUINavigation>(m_addr + 0);
	}
	enum class EUINavigationRule GetRule() {
		return memory.read<enum class EUINavigationRule>(m_addr + 1);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetNavigationRuleCustom
{
public:
	FSetNavigationRuleCustom(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EUINavigation GetDirection() {
		return memory.read<enum class EUINavigation>(m_addr + 0);
	}
	struct FDelegate GetInCustomDelegate() {
		return memory.read<struct FDelegate>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FWidgetTransform
{
public:
	FWidgetTransform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector2D GetTranslation() {
		return memory.read<struct FVector2D>(m_addr + 0);
	}
	struct FVector2D GetScale() {
		return memory.read<struct FVector2D>(m_addr + 8);
	}
	struct FVector2D GetShear() {
		return memory.read<struct FVector2D>(m_addr + 16);
	}
	float GetAngle() {
		return memory.read<float>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FWidgetNavigationData
{
public:
	FWidgetNavigationData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EUINavigationRule GetRule() {
		return memory.read<enum class EUINavigationRule>(m_addr + 0);
	}
	struct FName GetWidgetToFocus() {
		return memory.read<struct FName>(m_addr + 4);
	}
	struct TWeakObjectPtr<UWidget> GetWidget() {
		return memory.read<struct TWeakObjectPtr<UWidget>>(m_addr + 12);
	}
	struct FDelegate GetCustomDelegate() {
		return memory.read<struct FDelegate>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetNavigationRuleExplicit
{
public:
	FSetNavigationRuleExplicit(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EUINavigation GetDirection() {
		return memory.read<enum class EUINavigation>(m_addr + 0);
	}
	struct UWidget GetInWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UWidget(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetRenderShear
{
public:
	FSetRenderShear(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector2D GetShear() {
		return memory.read<struct FVector2D>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnTouchStarted
{
public:
	FOnTouchStarted(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGeometry GetMyGeometry() {
		return memory.read<struct FGeometry>(m_addr + 0);
	}
	struct FPointerEvent GetInTouchEvent() {
		return memory.read<struct FPointerEvent>(m_addr + 56);
	}
	struct FEventReply GetReturnValue() {
		return memory.read<struct FEventReply>(m_addr + 168);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetRenderTransformAngle
{
public:
	FSetRenderTransformAngle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetAngle() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FWidgetAnimationBinding
{
public:
	FWidgetAnimationBinding(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetWidgetName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct FName GetSlotWidgetName() {
		return memory.read<struct FName>(m_addr + 8);
	}
	struct FGuid GetAnimationGuid() {
		return memory.read<struct FGuid>(m_addr + 16);
	}
	bool GetbIsRootWidget() {
		return memory.read<bool>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetToolTip
{
public:
	FSetToolTip(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWidget GetWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UWidget(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FUnbindAllFromAnimationStarted
{
public:
	FUnbindAllFromAnimationStarted(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UUserWidget GetWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UUserWidget(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetVisibility
{
public:
	FSetVisibility(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ESlateVisibility GetInVisibility() {
		return memory.read<enum class ESlateVisibility>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnSelectionChangedEvent__DelegateSignature
{
public:
	FOnSelectionChangedEvent__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetSelectedItem() {
		return memory.read<struct FString>(m_addr + 0);
	}
	enum class ESelectInfo GetSelectionType() {
		return memory.read<enum class ESelectInfo>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FNoResourceBrush
{
public:
	FNoResourceBrush(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSlateBrush GetReturnValue() {
		return memory.read<struct FSlateBrush>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDownloadImageDelegate__DelegateSignature
{
public:
	FDownloadImageDelegate__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTexture2DDynamic GetTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UTexture2DDynamic(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnDragDropMulticast__DelegateSignature
{
public:
	FOnDragDropMulticast__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UDragDropOperation GetOperation() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UDragDropOperation(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FCaptureMouse
{
public:
	FCaptureMouse(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FEventReply GetReply() {
		return memory.read<struct FEventReply>(m_addr + 0);
	}
	struct UWidget GetCapturingWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 184);
		return struct UWidget(ptr_addr);
	}
	struct FEventReply GetReturnValue() {
		return memory.read<struct FEventReply>(m_addr + 192);
	}

private:
	std::uint64_t m_addr = 0;
};class FMakeBrushFromMaterial
{
public:
	FMakeBrushFromMaterial(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMaterialInterface GetMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMaterialInterface(ptr_addr);
	}
	int32_t GetWidth() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetHeight() {
		return memory.read<int32_t>(m_addr + 12);
	}
	struct FSlateBrush GetReturnValue() {
		return memory.read<struct FSlateBrush>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetStringValue
{
public:
	FGetStringValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetReturnValue() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FClearUserFocus
{
public:
	FClearUserFocus(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FEventReply GetReply() {
		return memory.read<struct FEventReply>(m_addr + 0);
	}
	bool GetbInAllUsers() {
		return memory.read<bool>(m_addr + 184);
	}
	struct FEventReply GetReturnValue() {
		return memory.read<struct FEventReply>(m_addr + 192);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddToViewport
{
public:
	FAddToViewport(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetZOrder() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FHasError
{
public:
	FHasError(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetMaxSliderValue
{
public:
	FSetMaxSliderValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetNewValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsPressed
{
public:
	FIsPressed(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FCreate
{
public:
	FCreate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	UUserWidget GetWidgetType() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return UUserWidget(ptr_addr);
	}
	struct APlayerController GetOwningPlayer() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct APlayerController(ptr_addr);
	}
	struct UUserWidget GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return struct UUserWidget(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAllChildren
{
public:
	FGetAllChildren(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UWidget> GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct TArray<struct UWidget>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetForegroundColor
{
public:
	FSetForegroundColor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSlateColor GetInForegroundColor() {
		return memory.read<struct FSlateColor>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FCreateDragDropOperation
{
public:
	FCreateDragDropOperation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	UDragDropOperation GetOperationClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return UDragDropOperation(ptr_addr);
	}
	struct UDragDropOperation GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UDragDropOperation(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetAllowGamepadKeys
{
public:
	FSetAllowGamepadKeys(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbInAllowGamepadKeys() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetSlotPadding
{
public:
	FSetSlotPadding(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMargin GetInSlotPadding() {
		return memory.read<struct FMargin>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDetectDrag
{
public:
	FDetectDrag(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FEventReply GetReply() {
		return memory.read<struct FEventReply>(m_addr + 0);
	}
	struct UWidget GetWidgetDetectingDrag() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 184);
		return struct UWidget(ptr_addr);
	}
	struct FKey GetDragKey() {
		return memory.read<struct FKey>(m_addr + 192);
	}
	struct FEventReply GetReturnValue() {
		return memory.read<struct FEventReply>(m_addr + 216);
	}

private:
	std::uint64_t m_addr = 0;
};class FDetectDragIfPressed
{
public:
	FDetectDragIfPressed(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerEvent GetPointerEvent() {
		return memory.read<struct FPointerEvent>(m_addr + 0);
	}
	struct UWidget GetWidgetDetectingDrag() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 112);
		return struct UWidget(ptr_addr);
	}
	struct FKey GetDragKey() {
		return memory.read<struct FKey>(m_addr + 120);
	}
	struct FEventReply GetReturnValue() {
		return memory.read<struct FEventReply>(m_addr + 144);
	}

private:
	std::uint64_t m_addr = 0;
};class FScrollWidgetIntoView
{
public:
	FScrollWidgetIntoView(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWidget GetWidgetToFind() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UWidget(ptr_addr);
	}
	bool GetAnimateScroll() {
		return memory.read<bool>(m_addr + 8);
	}
	enum class EDescendantScrollDestination GetScrollDestination() {
		return memory.read<enum class EDescendantScrollDestination>(m_addr + 9);
	}
	float GetPadding() {
		return memory.read<float>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FDrawBox
{
public:
	FDrawBox(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPaintContext GetContext() {
		return memory.read<struct FPaintContext>(m_addr + 0);
	}
	struct FVector2D Getposition() {
		return memory.read<struct FVector2D>(m_addr + 48);
	}
	struct FVector2D GetSize() {
		return memory.read<struct FVector2D>(m_addr + 56);
	}
	struct USlateBrushAsset GetBrush() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 64);
		return struct USlateBrushAsset(ptr_addr);
	}
	struct FLinearColor GetTint() {
		return memory.read<struct FLinearColor>(m_addr + 72);
	}

private:
	std::uint64_t m_addr = 0;
};class FPaintContext
{
public:
	FPaintContext(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FOnListItemScrolledIntoViewDynamic__DelegateSignature
{
public:
	FOnListItemScrolledIntoViewDynamic__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct UUserWidget GetWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UUserWidget(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FDrawLine
{
public:
	FDrawLine(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPaintContext GetContext() {
		return memory.read<struct FPaintContext>(m_addr + 0);
	}
	struct FVector2D GetPositionA() {
		return memory.read<struct FVector2D>(m_addr + 48);
	}
	struct FVector2D GetPositionB() {
		return memory.read<struct FVector2D>(m_addr + 56);
	}
	struct FLinearColor GetTint() {
		return memory.read<struct FLinearColor>(m_addr + 64);
	}
	bool GetbAntiAlias() {
		return memory.read<bool>(m_addr + 80);
	}
	float GetThickness() {
		return memory.read<float>(m_addr + 84);
	}

private:
	std::uint64_t m_addr = 0;
};class FDrawLines
{
public:
	FDrawLines(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPaintContext GetContext() {
		return memory.read<struct FPaintContext>(m_addr + 0);
	}
	struct TArray<struct FVector2D> GetPoints() {
		return memory.read<struct TArray<struct FVector2D>>(m_addr + 48);
	}
	struct FLinearColor GetTint() {
		return memory.read<struct FLinearColor>(m_addr + 64);
	}
	bool GetbAntiAlias() {
		return memory.read<bool>(m_addr + 80);
	}
	float GetThickness() {
		return memory.read<float>(m_addr + 84);
	}

private:
	std::uint64_t m_addr = 0;
};class FDrawText
{
public:
	FDrawText(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPaintContext GetContext() {
		return memory.read<struct FPaintContext>(m_addr + 0);
	}
	struct FString GetinString() {
		return memory.read<struct FString>(m_addr + 48);
	}
	struct FVector2D Getposition() {
		return memory.read<struct FVector2D>(m_addr + 64);
	}
	struct FLinearColor GetTint() {
		return memory.read<struct FLinearColor>(m_addr + 72);
	}

private:
	std::uint64_t m_addr = 0;
};class FEndDragDrop
{
public:
	FEndDragDrop(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FEventReply GetReply() {
		return memory.read<struct FEventReply>(m_addr + 0);
	}
	struct FEventReply GetReturnValue() {
		return memory.read<struct FEventReply>(m_addr + 184);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetAutoSize
{
public:
	FSetAutoSize(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetInbAutoSize() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAllWidgetsWithInterface
{
public:
	FGetAllWidgetsWithInterface(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct TArray<struct UUserWidget> GetFoundWidgets() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct TArray<struct UUserWidget>(ptr_addr);
	}
	UInterface GetInterface() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 24);
		return UInterface(ptr_addr);
	}
	bool GetTopLevelOnly() {
		return memory.read<bool>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FPressAndReleaseKey
{
public:
	FPressAndReleaseKey(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FKey GetKey() {
		return memory.read<struct FKey>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetBrushResource
{
public:
	FGetBrushResource(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSlateBrush GetBrush() {
		return memory.read<struct FSlateBrush>(m_addr + 0);
	}
	struct UObject GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 136);
		return struct UObject(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FHandled
{
public:
	FHandled(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FEventReply GetReturnValue() {
		return memory.read<struct FEventReply>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetChildIndex
{
public:
	FGetChildIndex(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWidget GetContent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UWidget(ptr_addr);
	}
	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCheckedState
{
public:
	FGetCheckedState(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ECheckBoxState GetReturnValue() {
		return memory.read<enum class ECheckBoxState>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetAlwaysUsesDeltaSnap
{
public:
	FSetAlwaysUsesDeltaSnap(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbNewValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetBrushResourceAsMaterial
{
public:
	FGetBrushResourceAsMaterial(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSlateBrush GetBrush() {
		return memory.read<struct FSlateBrush>(m_addr + 0);
	}
	struct UMaterialInterface GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 136);
		return struct UMaterialInterface(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetBrushResourceAsTexture2D
{
public:
	FGetBrushResourceAsTexture2D(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSlateBrush GetBrush() {
		return memory.read<struct FSlateBrush>(m_addr + 0);
	}
	struct UTexture2D GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 136);
		return struct UTexture2D(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetContentColorAndOpacity
{
public:
	FSetContentColorAndOpacity(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLinearColor GetInContentColorAndOpacity() {
		return memory.read<struct FLinearColor>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetDragDroppingContent
{
public:
	FGetDragDroppingContent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UDragDropOperation GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UDragDropOperation(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetHardwareCursor
{
public:
	FSetHardwareCursor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	enum class EMouseCursor GetCursorShape() {
		return memory.read<enum class EMouseCursor>(m_addr + 8);
	}
	struct FName GetCursorName() {
		return memory.read<struct FName>(m_addr + 12);
	}
	struct FVector2D GetHotSpot() {
		return memory.read<struct FVector2D>(m_addr + 20);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 28);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetItemAt
{
public:
	FGetItemAt(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct UObject GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UObject(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetDynamicMaterial
{
public:
	FGetDynamicMaterial(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMaterialInstanceDynamic GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMaterialInstanceDynamic(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetInputEventFromCharacterEvent
{
public:
	FGetInputEventFromCharacterEvent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FCharacterEvent GetEvent() {
		return memory.read<struct FCharacterEvent>(m_addr + 0);
	}
	struct FInputEvent GetReturnValue() {
		return memory.read<struct FInputEvent>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnTouchMoved
{
public:
	FOnTouchMoved(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGeometry GetMyGeometry() {
		return memory.read<struct FGeometry>(m_addr + 0);
	}
	struct FPointerEvent GetInTouchEvent() {
		return memory.read<struct FPointerEvent>(m_addr + 56);
	}
	struct FEventReply GetReturnValue() {
		return memory.read<struct FEventReply>(m_addr + 168);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetMinDesiredWidth
{
public:
	FSetMinDesiredWidth(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInMinDesiredWidth() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetAlwaysShowScrollbar
{
public:
	FSetAlwaysShowScrollbar(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetNewAlwaysShowScrollbar() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetInputEventFromNavigationEvent
{
public:
	FGetInputEventFromNavigationEvent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FNavigationEvent GetEvent() {
		return memory.read<struct FNavigationEvent>(m_addr + 0);
	}
	struct FInputEvent GetReturnValue() {
		return memory.read<struct FInputEvent>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnAnimationStarted
{
public:
	FOnAnimationStarted(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWidgetAnimation GetAnimation() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UWidgetAnimation(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetInputEventFromPointerEvent
{
public:
	FGetInputEventFromPointerEvent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerEvent GetEvent() {
		return memory.read<struct FPointerEvent>(m_addr + 0);
	}
	struct FInputEvent GetReturnValue() {
		return memory.read<struct FInputEvent>(m_addr + 112);
	}

private:
	std::uint64_t m_addr = 0;
};class FScreenToViewport
{
public:
	FScreenToViewport(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct FVector2D GetScreenPosition() {
		return memory.read<struct FVector2D>(m_addr + 8);
	}
	struct FVector2D GetViewportPosition() {
		return memory.read<struct FVector2D>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetKeyEventFromAnalogInputEvent
{
public:
	FGetKeyEventFromAnalogInputEvent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAnalogInputEvent GetEvent() {
		return memory.read<struct FAnalogInputEvent>(m_addr + 0);
	}
	struct FKeyEvent GetReturnValue() {
		return memory.read<struct FKeyEvent>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSafeZonePadding
{
public:
	FGetSafeZonePadding(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct FVector4 GetSafePadding() {
		return memory.read<struct FVector4>(m_addr + 16);
	}
	struct FVector2D GetSafePaddingScale() {
		return memory.read<struct FVector2D>(m_addr + 32);
	}
	struct FVector4 GetSpillOverPadding() {
		return memory.read<struct FVector4>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};class FNavigateToIndex
{
public:
	FNavigateToIndex(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetBrushFromTextureDynamic
{
public:
	FSetBrushFromTextureDynamic(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTexture2DDynamic GetTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UTexture2DDynamic(ptr_addr);
	}
	bool GetbMatchSize() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsDragDropping
{
public:
	FIsDragDropping(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMakeBrushFromAsset
{
public:
	FMakeBrushFromAsset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USlateBrushAsset GetBrushAsset() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct USlateBrushAsset(ptr_addr);
	}
	struct FSlateBrush GetReturnValue() {
		return memory.read<struct FSlateBrush>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FReleaseJoystickCapture
{
public:
	FReleaseJoystickCapture(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FEventReply GetReply() {
		return memory.read<struct FEventReply>(m_addr + 0);
	}
	bool GetbInAllJoysticks() {
		return memory.read<bool>(m_addr + 184);
	}
	struct FEventReply GetReturnValue() {
		return memory.read<struct FEventReply>(m_addr + 192);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetEntryHeight
{
public:
	FSetEntryHeight(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetNewHeight() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetBrushResourceToMaterial
{
public:
	FSetBrushResourceToMaterial(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSlateBrush GetBrush() {
		return memory.read<struct FSlateBrush>(m_addr + 0);
	}
	struct UMaterialInterface GetMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 136);
		return struct UMaterialInterface(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetBrushFromAtlasInterface
{
public:
	FSetBrushFromAtlasInterface(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TScriptInterface<ISlateTextureAtlasInterface> GetAtlasRegion() {
		return memory.read<struct TScriptInterface<ISlateTextureAtlasInterface>>(m_addr + 0);
	}
	bool GetbMatchSize() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetBrushResourceToTexture
{
public:
	FSetBrushResourceToTexture(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSlateBrush GetBrush() {
		return memory.read<struct FSlateBrush>(m_addr + 0);
	}
	struct UTexture2D GetTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 136);
		return struct UTexture2D(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetMinDesiredSlotWidth
{
public:
	FSetMinDesiredSlotWidth(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInMinDesiredSlotWidth() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetColorVisionDeficiencyType
{
public:
	FSetColorVisionDeficiencyType(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EColorVisionDeficiency GetType() {
		return memory.read<enum class EColorVisionDeficiency>(m_addr + 0);
	}
	float GetSeverity() {
		return memory.read<float>(m_addr + 4);
	}
	bool GetCorrectDeficiency() {
		return memory.read<bool>(m_addr + 8);
	}
	bool GetShowCorrectionWithDeficiency() {
		return memory.read<bool>(m_addr + 9);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetNumEntries
{
public:
	FGetNumEntries(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetInputMode_GameAndUI
{
public:
	FSetInputMode_GameAndUI(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct APlayerController GetTarget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct APlayerController(ptr_addr);
	}
	struct UWidget GetInWidgetToFocus() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UWidget(ptr_addr);
	}
	bool GetbLockMouseToViewport() {
		return memory.read<bool>(m_addr + 16);
	}
	bool GetbHideCursorDuringCapture() {
		return memory.read<bool>(m_addr + 17);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetInputMode_GameAndUIEx
{
public:
	FSetInputMode_GameAndUIEx(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct APlayerController GetPlayerController() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct APlayerController(ptr_addr);
	}
	struct UWidget GetInWidgetToFocus() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UWidget(ptr_addr);
	}
	enum class EMouseLockMode GetInMouseLockMode() {
		return memory.read<enum class EMouseLockMode>(m_addr + 16);
	}
	bool GetbHideCursorDuringCapture() {
		return memory.read<bool>(m_addr + 17);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetTickWhenOffscreen
{
public:
	FSetTickWhenOffscreen(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbWantTickWhenOffscreen() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetInputMode_GameOnly
{
public:
	FSetInputMode_GameOnly(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct APlayerController GetPlayerController() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct APlayerController(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetNormalizedValue
{
public:
	FGetNormalizedValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FScrollIndexIntoView
{
public:
	FScrollIndexIntoView(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetInputMode_UIOnly
{
public:
	FSetInputMode_UIOnly(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct APlayerController GetTarget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct APlayerController(ptr_addr);
	}
	struct UWidget GetInWidgetToFocus() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UWidget(ptr_addr);
	}
	bool GetbLockMouseToViewport() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnTouchGesture
{
public:
	FOnTouchGesture(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGeometry GetMyGeometry() {
		return memory.read<struct FGeometry>(m_addr + 0);
	}
	struct FPointerEvent GetGestureEvent() {
		return memory.read<struct FPointerEvent>(m_addr + 56);
	}
	struct FEventReply GetReturnValue() {
		return memory.read<struct FEventReply>(m_addr + 168);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetInputMode_UIOnlyEx
{
public:
	FSetInputMode_UIOnlyEx(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct APlayerController GetPlayerController() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct APlayerController(ptr_addr);
	}
	struct UWidget GetInWidgetToFocus() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UWidget(ptr_addr);
	}
	enum class EMouseLockMode GetInMouseLockMode() {
		return memory.read<enum class EMouseLockMode>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnGetItemChildrenDynamic__DelegateSignature
{
public:
	FOnGetItemChildrenDynamic__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct TArray<struct UObject> GetChildren() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct TArray<struct UObject>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetZOrder
{
public:
	FGetZOrder(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetLayout
{
public:
	FSetLayout(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAnchorData GetInLayoutData() {
		return memory.read<struct FAnchorData>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetMousePosition
{
public:
	FSetMousePosition(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FEventReply GetReply() {
		return memory.read<struct FEventReply>(m_addr + 0);
	}
	struct FVector2D GetNewMousePosition() {
		return memory.read<struct FVector2D>(m_addr + 184);
	}
	struct FEventReply GetReturnValue() {
		return memory.read<struct FEventReply>(m_addr + 192);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetWindowTitleBarOnCloseClickedDelegate
{
public:
	FSetWindowTitleBarOnCloseClickedDelegate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FDelegate GetDelegate() {
		return memory.read<struct FDelegate>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetWindowTitleBarState
{
public:
	FSetWindowTitleBarState(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWidget GetTitleBarContent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UWidget(ptr_addr);
	}
	enum class EWindowTitleBarMode GetMode() {
		return memory.read<enum class EWindowTitleBarMode>(m_addr + 8);
	}
	bool GetbTitleBarDragEnabled() {
		return memory.read<bool>(m_addr + 9);
	}
	bool GetbWindowButtonsVisible() {
		return memory.read<bool>(m_addr + 10);
	}
	bool GetbTitleBarVisible() {
		return memory.read<bool>(m_addr + 11);
	}

private:
	std::uint64_t m_addr = 0;
};class FUnhandled
{
public:
	FUnhandled(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FEventReply GetReturnValue() {
		return memory.read<struct FEventReply>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAnchorData
{
public:
	FAnchorData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMargin GetOffsets() {
		return memory.read<struct FMargin>(m_addr + 0);
	}
	struct FAnchors GetAnchors() {
		return memory.read<struct FAnchors>(m_addr + 16);
	}
	struct FVector2D GetAlignment() {
		return memory.read<struct FVector2D>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FPressPointerKey
{
public:
	FPressPointerKey(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FKey GetKey() {
		return memory.read<struct FKey>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FUnlockMouse
{
public:
	FUnlockMouse(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FEventReply GetReply() {
		return memory.read<struct FEventReply>(m_addr + 0);
	}
	struct FEventReply GetReturnValue() {
		return memory.read<struct FEventReply>(m_addr + 184);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetText
{
public:
	FGetText(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetReturnValue() {
		return memory.read<struct FText>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnCheckBoxComponentStateChanged__DelegateSignature
{
public:
	FOnCheckBoxComponentStateChanged__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbIsChecked() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddOption
{
public:
	FAddOption(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetOption() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetZOrder
{
public:
	FSetZOrder(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInZOrder() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FFindOptionIndex
{
public:
	FFindOptionIndex(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetOption() {
		return memory.read<struct FString>(m_addr + 0);
	}
	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetOptionAtIndex
{
public:
	FGetOptionAtIndex(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct FString GetReturnValue() {
		return memory.read<struct FString>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnSpinBoxValueCommittedEvent__DelegateSignature
{
public:
	FOnSpinBoxValueCommittedEvent__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInValue() {
		return memory.read<float>(m_addr + 0);
	}
	enum class ETextCommit GetCommitMethod() {
		return memory.read<enum class ETextCommit>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetOptionCount
{
public:
	FGetOptionCount(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetNudge
{
public:
	FSetNudge(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector2D GetInNudge() {
		return memory.read<struct FVector2D>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSelectedIndex
{
public:
	FGetSelectedIndex(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSelectedOption
{
public:
	FGetSelectedOption(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetReturnValue() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddChildToGrid
{
public:
	FAddChildToGrid(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWidget GetContent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UWidget(ptr_addr);
	}
	int32_t GetInRow() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetInColumn() {
		return memory.read<int32_t>(m_addr + 12);
	}
	struct UGridSlot GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UGridSlot(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetAnimateVertically
{
public:
	FSetAnimateVertically(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbInAnimateVertically() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetInputActionPriority
{
public:
	FSetInputActionPriority(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetNewPriority() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetNumLoopsToPlay
{
public:
	FSetNumLoopsToPlay(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWidgetAnimation GetInAnimation() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UWidgetAnimation(ptr_addr);
	}
	int32_t GetNumLoopsToPlay() {
		return memory.read<int32_t>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FScreenToWidgetAbsolute
{
public:
	FScreenToWidgetAbsolute(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct FVector2D GetScreenPosition() {
		return memory.read<struct FVector2D>(m_addr + 8);
	}
	struct FVector2D GetAbsoluteCoordinate() {
		return memory.read<struct FVector2D>(m_addr + 16);
	}
	bool GetbIncludeWindowPosition() {
		return memory.read<bool>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsOpen
{
public:
	FIsOpen(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FRemoveOption
{
public:
	FRemoveOption(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetOption() {
		return memory.read<struct FString>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnFloatValueChangedEvent__DelegateSignature
{
public:
	FOnFloatValueChangedEvent__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetSelectedIndex
{
public:
	FSetSelectedIndex(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetSelectedOption
{
public:
	FSetSelectedOption(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetOption() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnMouseButtonDown
{
public:
	FOnMouseButtonDown(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGeometry GetMyGeometry() {
		return memory.read<struct FGeometry>(m_addr + 0);
	}
	struct FPointerEvent GetMouseEvent() {
		return memory.read<struct FPointerEvent>(m_addr + 56);
	}
	struct FEventReply GetReturnValue() {
		return memory.read<struct FEventReply>(m_addr + 168);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetState
{
public:
	FSetState(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInOffsetFraction() {
		return memory.read<float>(m_addr + 0);
	}
	float GetInThumbSizeFraction() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnEditableTextChangedEvent__DelegateSignature
{
public:
	FOnEditableTextChangedEvent__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetText() {
		return memory.read<struct FText>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnEditableTextCommittedEvent__DelegateSignature
{
public:
	FOnEditableTextCommittedEvent__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetText() {
		return memory.read<struct FText>(m_addr + 0);
	}
	enum class ETextCommit GetCommitMethod() {
		return memory.read<enum class ETextCommit>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAllEntries
{
public:
	FGetAllEntries(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UUserWidget> GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct TArray<struct UUserWidget>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetMaterialInstance
{
public:
	FGetMaterialInstance(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMaterialInstanceDynamic GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMaterialInstanceDynamic(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetHintText
{
public:
	FSetHintText(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetInHintText() {
		return memory.read<struct FText>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FCreatePlayAnimationTimeRangeProxyObject
{
public:
	FCreatePlayAnimationTimeRangeProxyObject(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UUMGSequencePlayer GetResult() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UUMGSequencePlayer(ptr_addr);
	}
	struct UUserWidget GetWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UUserWidget(ptr_addr);
	}
	struct UWidgetAnimation GetInAnimation() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UWidgetAnimation(ptr_addr);
	}
	float GetStartAtTime() {
		return memory.read<float>(m_addr + 24);
	}
	float GetEndAtTime() {
		return memory.read<float>(m_addr + 28);
	}
	int32_t GetNumLoopsToPlay() {
		return memory.read<int32_t>(m_addr + 32);
	}
	enum class EUMGSequencePlayMode GetPlayMode() {
		return memory.read<enum class EUMGSequencePlayMode>(m_addr + 36);
	}
	float GetPlaybackSpeed() {
		return memory.read<float>(m_addr + 40);
	}
	struct UWidgetAnimationPlayCallbackProxy GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UWidgetAnimationPlayCallbackProxy(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetIsPassword
{
public:
	FSetIsPassword(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbIsPassword() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsAnyAnimationPlaying
{
public:
	FIsAnyAnimationPlaying(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetIsReadOnly
{
public:
	FSetIsReadOnly(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbReadOnly() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetScaleToFitToUserSpecifiedScale
{
public:
	FSetScaleToFitToUserSpecifiedScale(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbInScaleToFitToUserSpecifiedScale() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetJustification
{
public:
	FSetJustification(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ETextJustify GetInJustification() {
		return memory.read<enum class ETextJustify>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetText
{
public:
	FSetText(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetInText() {
		return memory.read<struct FText>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FShapedTextOptions
{
public:
	FShapedTextOptions(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetbOverride_TextShapingMethod() {
		return memory.read<char>(m_addr + 0);
	}
	char GetbOverride_TextFlowDirection() {
		return memory.read<char>(m_addr + 0);
	}
	enum class ETextShapingMethod GetTextShapingMethod() {
		return memory.read<enum class ETextShapingMethod>(m_addr + 1);
	}
	enum class ETextFlowDirection GetTextFlowDirection() {
		return memory.read<enum class ETextFlowDirection>(m_addr + 2);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAnimationCurrentTime
{
public:
	FGetAnimationCurrentTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWidgetAnimation GetInAnimation() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UWidgetAnimation(ptr_addr);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnEditableTextBoxChangedEvent__DelegateSignature
{
public:
	FOnEditableTextBoxChangedEvent__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetText() {
		return memory.read<struct FText>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnEditableTextBoxCommittedEvent__DelegateSignature
{
public:
	FOnEditableTextBoxCommittedEvent__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetText() {
		return memory.read<struct FText>(m_addr + 0);
	}
	enum class ETextCommit GetCommitMethod() {
		return memory.read<enum class ETextCommit>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetError
{
public:
	FSetError(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetInError() {
		return memory.read<struct FText>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetIsSelectingKey
{
public:
	FGetIsSelectingKey(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetGeometryMode
{
public:
	FSetGeometryMode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EWidgetGeometryMode GetInGeometryMode() {
		return memory.read<enum class EWidgetGeometryMode>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetWidgetSpace
{
public:
	FSetWidgetSpace(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EWidgetSpace GetNewSpace() {
		return memory.read<enum class EWidgetSpace>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnKeySelected__DelegateSignature
{
public:
	FOnKeySelected__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FInputChord GetSelectedKey() {
		return memory.read<struct FInputChord>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetAllowModifierKeys
{
public:
	FSetAllowModifierKeys(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbInAllowModifierKeys() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FStopListeningForInputAction
{
public:
	FStopListeningForInputAction(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetActionName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	enum class EInputEvent GetEventType() {
		return memory.read<enum class EInputEvent>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsAnimationPlaying
{
public:
	FIsAnimationPlaying(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWidgetAnimation GetInAnimation() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UWidgetAnimation(ptr_addr);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetEscapeKeys
{
public:
	FSetEscapeKeys(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FKey> GetInKeys() {
		return memory.read<struct TArray<struct FKey>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetLocalTopLeft
{
public:
	FGetLocalTopLeft(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGeometry GetGeometry() {
		return memory.read<struct FGeometry>(m_addr + 0);
	}
	struct FVector2D GetReturnValue() {
		return memory.read<struct FVector2D>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetNoKeySpecifiedText
{
public:
	FSetNoKeySpecifiedText(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetInNoKeySpecifiedText() {
		return memory.read<struct FText>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetBlurRadius
{
public:
	FSetBlurRadius(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInBlurRadius() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetPivot
{
public:
	FSetPivot(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector2D GetInPivot() {
		return memory.read<struct FVector2D>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetSelectedKey
{
public:
	FSetSelectedKey(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FInputChord GetInSelectedKey() {
		return memory.read<struct FInputChord>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetFocus
{
public:
	FSetFocus(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWidget GetFocusWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UWidget(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetTextBlockVisibility
{
public:
	FSetTextBlockVisibility(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ESlateVisibility GetInVisibility() {
		return memory.read<enum class ESlateVisibility>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnListEntryGeneratedDynamic__DelegateSignature
{
public:
	FOnListEntryGeneratedDynamic__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UUserWidget GetWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UUserWidget(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnListEntryReleasedDynamic__DelegateSignature
{
public:
	FOnListEntryReleasedDynamic__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UUserWidget GetWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UUserWidget(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSimpleListItemEventDynamic__DelegateSignature
{
public:
	FSimpleListItemEventDynamic__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnListEntryInitializedDynamic__DelegateSignature
{
public:
	FOnListEntryInitializedDynamic__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct UUserWidget GetWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UUserWidget(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnListItemSelectionChangedDynamic__DelegateSignature
{
public:
	FOnListItemSelectionChangedDynamic__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	bool GetbIsSelected() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FBP_IsItemVisible
{
public:
	FBP_IsItemVisible(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnMenuOpenChangedEvent__DelegateSignature
{
public:
	FOnMenuOpenChangedEvent__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbIsOpen() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FBlueprintWidgetAnimationDelegateBinding
{
public:
	FBlueprintWidgetAnimationDelegateBinding(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EWidgetAnimationEvent GetAction() {
		return memory.read<enum class EWidgetAnimationEvent>(m_addr + 0);
	}
	struct FName GetAnimationToBind() {
		return memory.read<struct FName>(m_addr + 4);
	}
	struct FName GetFunctionNameToBind() {
		return memory.read<struct FName>(m_addr + 12);
	}
	struct FName GetUserTag() {
		return memory.read<struct FName>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FSendKeyChar
{
public:
	FSendKeyChar(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetCharacters() {
		return memory.read<struct FString>(m_addr + 0);
	}
	bool GetbRepeat() {
		return memory.read<bool>(m_addr + 16);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 17);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddChild
{
public:
	FAddChild(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWidget GetContent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UWidget(ptr_addr);
	}
	struct UPanelSlot GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UPanelSlot(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetChildAt
{
public:
	FGetChildAt(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct UWidget GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UWidget(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetHorizontalAlignment
{
public:
	FSetHorizontalAlignment(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EHorizontalAlignment GetInHorizontalAlignment() {
		return memory.read<enum class EHorizontalAlignment>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FHasAnyChildren
{
public:
	FHasAnyChildren(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FHasChild
{
public:
	FHasChild(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWidget GetContent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UWidget(ptr_addr);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FRemoveChild
{
public:
	FRemoveChild(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWidget GetContent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UWidget(ptr_addr);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FRemoveChildAt
{
public:
	FRemoveChildAt(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetContent
{
public:
	FGetContent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWidget GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UWidget(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetIsChecked
{
public:
	FSetIsChecked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetInIsChecked() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetMinFractionalDigits
{
public:
	FGetMinFractionalDigits(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetStyle
{
public:
	FSetStyle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FButtonStyle GetInStyle() {
		return memory.read<struct FButtonStyle>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetContentSlot
{
public:
	FGetContentSlot(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPanelSlot GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UPanelSlot(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetAlignment
{
public:
	FSetAlignment(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector2D GetInAlignment() {
		return memory.read<struct FVector2D>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetContent
{
public:
	FSetContent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWidget GetContent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UWidget(ptr_addr);
	}
	struct UPanelSlot GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UPanelSlot(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetSliderHandleColor
{
public:
	FSetSliderHandleColor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLinearColor GetInValue() {
		return memory.read<struct FLinearColor>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FFitInWindow
{
public:
	FFitInWindow(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbFit() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetMenuPosition
{
public:
	FGetMenuPosition(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector2D GetReturnValue() {
		return memory.read<struct FVector2D>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetUserWidget__DelegateSignature
{
public:
	FGetUserWidget__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UUserWidget GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UUserWidget(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FHasOpenSubMenus
{
public:
	FHasOpenSubMenus(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetPlacement
{
public:
	FSetPlacement(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EMenuPlacement GetInPlacement() {
		return memory.read<enum class EMenuPlacement>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsAnimationPlayingForward
{
public:
	FIsAnimationPlayingForward(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWidgetAnimation GetInAnimation() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UWidgetAnimation(ptr_addr);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetPeriod
{
public:
	FSetPeriod(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInPeriod() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FShouldOpenDueToClick
{
public:
	FShouldOpenDueToClick(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FReleaseKey
{
public:
	FReleaseKey(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FKey GetKey() {
		return memory.read<struct FKey>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetHintText
{
public:
	FGetHintText(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetReturnValue() {
		return memory.read<struct FText>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnMultiLineEditableTextChangedEvent__DelegateSignature
{
public:
	FOnMultiLineEditableTextChangedEvent__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetText() {
		return memory.read<struct FText>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FBP_NavigateToItem
{
public:
	FBP_NavigateToItem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FPauseAnimation
{
public:
	FPauseAnimation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWidgetAnimation GetInAnimation() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UWidgetAnimation(ptr_addr);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetWidget
{
public:
	FGetWidget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UUserWidget GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UUserWidget(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnMultiLineEditableTextCommittedEvent__DelegateSignature
{
public:
	FOnMultiLineEditableTextCommittedEvent__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetText() {
		return memory.read<struct FText>(m_addr + 0);
	}
	enum class ETextCommit GetCommitMethod() {
		return memory.read<enum class ETextCommit>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetWidgetStyle
{
public:
	FSetWidgetStyle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTextBlockStyle GetInWidgetStyle() {
		return memory.read<struct FTextBlockStyle>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnMultiLineEditableTextBoxChangedEvent__DelegateSignature
{
public:
	FOnMultiLineEditableTextBoxChangedEvent__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetText() {
		return memory.read<struct FText>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetGeometryMode
{
public:
	FGetGeometryMode(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EWidgetGeometryMode GetReturnValue() {
		return memory.read<enum class EWidgetGeometryMode>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnMultiLineEditableTextBoxCommittedEvent__DelegateSignature
{
public:
	FOnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetText() {
		return memory.read<struct FText>(m_addr + 0);
	}
	enum class ETextCommit GetCommitMethod() {
		return memory.read<enum class ETextCommit>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetPlaybackSpeed
{
public:
	FSetPlaybackSpeed(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWidgetAnimation GetInAnimation() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UWidgetAnimation(ptr_addr);
	}
	float GetPlaybackSpeed() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetTextStyle
{
public:
	FSetTextStyle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTextBlockStyle GetInTextStyle() {
		return memory.read<struct FTextBlockStyle>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnUserScrolledEvent__DelegateSignature
{
public:
	FOnUserScrolledEvent__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetCurrentOffset() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAlwaysUsesDeltaSnap
{
public:
	FGetAlwaysUsesDeltaSnap(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetDelta
{
public:
	FGetDelta(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetTextStyleSet
{
public:
	FSetTextStyleSet(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UDataTable GetNewTextStyleSet() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UDataTable(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetMaxFractionalDigits
{
public:
	FGetMaxFractionalDigits(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetMaxSliderValue
{
public:
	FGetMaxSliderValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetBlurStrength
{
public:
	FSetBlurStrength(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInStrength() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetMaxValue
{
public:
	FGetMaxValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSlateValue
{
public:
	FGetSlateValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSlateColor GetReturnValue() {
		return memory.read<struct FSlateColor>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetMinSliderValue
{
public:
	FGetMinSliderValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FTransformScalarAbsoluteToLocal
{
public:
	FTransformScalarAbsoluteToLocal(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGeometry GetGeometry() {
		return memory.read<struct FGeometry>(m_addr + 0);
	}
	float GetAbsoluteScalar() {
		return memory.read<float>(m_addr + 56);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 60);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetMinValue
{
public:
	FGetMinValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnSpinBoxValueChangedEvent__DelegateSignature
{
public:
	FOnSpinBoxValueChangedEvent__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FPressKey
{
public:
	FPressKey(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FKey GetKey() {
		return memory.read<struct FKey>(m_addr + 0);
	}
	bool GetbRepeat() {
		return memory.read<bool>(m_addr + 24);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 25);
	}

private:
	std::uint64_t m_addr = 0;
};class FBP_SetItemSelection
{
public:
	FBP_SetItemSelection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	bool GetbSelected() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetDelta
{
public:
	FSetDelta(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetNewValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetMaxFractionalDigits
{
public:
	FSetMaxFractionalDigits(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetNewValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetMaxValue
{
public:
	FSetMaxValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetMinSliderValue
{
public:
	FSetMinSliderValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetNewValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetMinValue
{
public:
	FSetMinValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnItemExpansionChangedDynamic__DelegateSignature
{
public:
	FOnItemExpansionChangedDynamic__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	bool GetbIsExpanded() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FDragCancelled
{
public:
	FDragCancelled(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerEvent GetPointerEvent() {
		return memory.read<struct FPointerEvent>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnHoveredWidgetChanged__DelegateSignature
{
public:
	FOnHoveredWidgetChanged__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWidgetComponent GetWidgetComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UWidgetComponent(ptr_addr);
	}
	struct UWidgetComponent GetPreviousWidgetComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UWidgetComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddToPlayerScreen
{
public:
	FAddToPlayerScreen(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetZOrder() {
		return memory.read<int32_t>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FBindToAnimationEvent
{
public:
	FBindToAnimationEvent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWidgetAnimation GetAnimation() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct FDelegate GetDelegate() {
		return memory.read<struct FDelegate>(m_addr + 8);
	}
	enum class EWidgetAnimationEvent GetAnimationEvent() {
		return memory.read<enum class EWidgetAnimationEvent>(m_addr + 24);
	}
	struct FName GetUserTag() {
		return memory.read<struct FName>(m_addr + 28);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetRedrawTime
{
public:
	FSetRedrawTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInRedrawTime() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FBindToAnimationFinished
{
public:
	FBindToAnimationFinished(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UUserWidget GetWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UUserWidget(ptr_addr);
	}
	struct FDelegate GetDelegate() {
		return memory.read<struct FDelegate>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAlignmentInViewport
{
public:
	FGetAlignmentInViewport(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector2D GetReturnValue() {
		return memory.read<struct FVector2D>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAnchors
{
public:
	FGetAnchors(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAnchors GetReturnValue() {
		return memory.read<struct FAnchors>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetEffectMaterial
{
public:
	FGetEffectMaterial(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMaterialInstanceDynamic GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMaterialInstanceDynamic(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetIsVisible
{
public:
	FGetIsVisible(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetOwningPlayerCameraManager
{
public:
	FGetOwningPlayerCameraManager(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct APlayerCameraManager GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct APlayerCameraManager(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsInteractable
{
public:
	FIsInteractable(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsInViewport
{
public:
	FIsInViewport(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FBP_OnItemSelectionChanged
{
public:
	FBP_OnItemSelectionChanged(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbIsSelected() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetShadowOffset
{
public:
	FSetShadowOffset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector2D GetInShadowOffset() {
		return memory.read<struct FVector2D>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetEndTime
{
public:
	FGetEndTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetManuallyRedraw
{
public:
	FGetManuallyRedraw(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsListeningForInputAction
{
public:
	FIsListeningForInputAction(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetActionName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsPlayingAnimation
{
public:
	FIsPlayingAnimation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FListenForInputAction
{
public:
	FListenForInputAction(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetActionName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	enum class EInputEvent GetEventType() {
		return memory.read<enum class EInputEvent>(m_addr + 8);
	}
	bool GetbConsume() {
		return memory.read<bool>(m_addr + 9);
	}
	struct FDelegate GetCallback() {
		return memory.read<struct FDelegate>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnAddedToFocusPath
{
public:
	FOnAddedToFocusPath(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FFocusEvent GetInFocusEvent() {
		return memory.read<struct FFocusEvent>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnKeyUp
{
public:
	FOnKeyUp(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGeometry GetMyGeometry() {
		return memory.read<struct FGeometry>(m_addr + 0);
	}
	struct FKeyEvent GetInKeyEvent() {
		return memory.read<struct FKeyEvent>(m_addr + 56);
	}
	struct FEventReply GetReturnValue() {
		return memory.read<struct FEventReply>(m_addr + 112);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetFont
{
public:
	FSetFont(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSlateFontInfo GetInFontInfo() {
		return memory.read<struct FSlateFontInfo>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSlotAsUniformGridSlot
{
public:
	FSlotAsUniformGridSlot(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWidget GetWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UWidget(ptr_addr);
	}
	struct UUniformGridSlot GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UUniformGridSlot(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnAnalogValueChanged
{
public:
	FOnAnalogValueChanged(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGeometry GetMyGeometry() {
		return memory.read<struct FGeometry>(m_addr + 0);
	}
	struct FAnalogInputEvent GetInAnalogInputEvent() {
		return memory.read<struct FAnalogInputEvent>(m_addr + 56);
	}
	struct FEventReply GetReturnValue() {
		return memory.read<struct FEventReply>(m_addr + 120);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetBrushTintColor
{
public:
	FSetBrushTintColor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSlateColor GetTintColor() {
		return memory.read<struct FSlateColor>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnAnimationFinished
{
public:
	FOnAnimationFinished(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWidgetAnimation GetAnimation() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UWidgetAnimation(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnDragCancelled
{
public:
	FOnDragCancelled(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerEvent GetPointerEvent() {
		return memory.read<struct FPointerEvent>(m_addr + 0);
	}
	struct UDragDropOperation GetOperation() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 112);
		return struct UDragDropOperation(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnDragDetected
{
public:
	FOnDragDetected(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGeometry GetMyGeometry() {
		return memory.read<struct FGeometry>(m_addr + 0);
	}
	struct FPointerEvent GetPointerEvent() {
		return memory.read<struct FPointerEvent>(m_addr + 56);
	}
	struct UDragDropOperation GetOperation() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 168);
		return struct UDragDropOperation(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSlotAsVerticalBoxSlot
{
public:
	FSlotAsVerticalBoxSlot(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWidget GetWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UWidget(ptr_addr);
	}
	struct UVerticalBoxSlot GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UVerticalBoxSlot(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetAnimateWheelScrolling
{
public:
	FSetAnimateWheelScrolling(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbShouldAnimateWheelScrolling() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnDragEnter
{
public:
	FOnDragEnter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGeometry GetMyGeometry() {
		return memory.read<struct FGeometry>(m_addr + 0);
	}
	struct FPointerEvent GetPointerEvent() {
		return memory.read<struct FPointerEvent>(m_addr + 56);
	}
	struct UDragDropOperation GetOperation() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 168);
		return struct UDragDropOperation(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetLayer
{
public:
	FSetLayer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInLayer() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnDragLeave
{
public:
	FOnDragLeave(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerEvent GetPointerEvent() {
		return memory.read<struct FPointerEvent>(m_addr + 0);
	}
	struct UDragDropOperation GetOperation() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 112);
		return struct UDragDropOperation(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetRedrawTime
{
public:
	FGetRedrawTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetListItems
{
public:
	FGetListItems(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UObject> GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct TArray<struct UObject>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetWheelScrollMultiplier
{
public:
	FSetWheelScrollMultiplier(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetNewWheelScrollMultiplier() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnDragOver
{
public:
	FOnDragOver(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGeometry GetMyGeometry() {
		return memory.read<struct FGeometry>(m_addr + 0);
	}
	struct FPointerEvent GetPointerEvent() {
		return memory.read<struct FPointerEvent>(m_addr + 56);
	}
	struct UDragDropOperation GetOperation() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 168);
		return struct UDragDropOperation(ptr_addr);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 176);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetBrushFromTexture
{
public:
	FSetBrushFromTexture(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTexture2D GetTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UTexture2D(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnDrop
{
public:
	FOnDrop(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGeometry GetMyGeometry() {
		return memory.read<struct FGeometry>(m_addr + 0);
	}
	struct FPointerEvent GetPointerEvent() {
		return memory.read<struct FPointerEvent>(m_addr + 56);
	}
	struct UDragDropOperation GetOperation() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 168);
		return struct UDragDropOperation(ptr_addr);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 176);
	}

private:
	std::uint64_t m_addr = 0;
};class FDynamicPropertyPath
{
public:
	FDynamicPropertyPath(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FGetAutoSize
{
public:
	FGetAutoSize(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetIsExpanded
{
public:
	FSetIsExpanded(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetIsExpanded() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnFocusLost
{
public:
	FOnFocusLost(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FFocusEvent GetInFocusEvent() {
		return memory.read<struct FFocusEvent>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnFocusReceived
{
public:
	FOnFocusReceived(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGeometry GetMyGeometry() {
		return memory.read<struct FGeometry>(m_addr + 0);
	}
	struct FFocusEvent GetInFocusEvent() {
		return memory.read<struct FFocusEvent>(m_addr + 56);
	}
	struct FEventReply GetReturnValue() {
		return memory.read<struct FEventReply>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnKeyChar
{
public:
	FOnKeyChar(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGeometry GetMyGeometry() {
		return memory.read<struct FGeometry>(m_addr + 0);
	}
	struct FCharacterEvent GetInCharacterEvent() {
		return memory.read<struct FCharacterEvent>(m_addr + 56);
	}
	struct FEventReply GetReturnValue() {
		return memory.read<struct FEventReply>(m_addr + 88);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnKeyDown
{
public:
	FOnKeyDown(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGeometry GetMyGeometry() {
		return memory.read<struct FGeometry>(m_addr + 0);
	}
	struct FKeyEvent GetInKeyEvent() {
		return memory.read<struct FKeyEvent>(m_addr + 56);
	}
	struct FEventReply GetReturnValue() {
		return memory.read<struct FEventReply>(m_addr + 112);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnMotionDetected
{
public:
	FOnMotionDetected(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGeometry GetMyGeometry() {
		return memory.read<struct FGeometry>(m_addr + 0);
	}
	struct FMotionEvent GetInMotionEvent() {
		return memory.read<struct FMotionEvent>(m_addr + 56);
	}
	struct FEventReply GetReturnValue() {
		return memory.read<struct FEventReply>(m_addr + 128);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetBackgroundColor
{
public:
	FSetBackgroundColor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLinearColor GetInBackgroundColor() {
		return memory.read<struct FLinearColor>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnMouseButtonUp
{
public:
	FOnMouseButtonUp(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGeometry GetMyGeometry() {
		return memory.read<struct FGeometry>(m_addr + 0);
	}
	struct FPointerEvent GetMouseEvent() {
		return memory.read<struct FPointerEvent>(m_addr + 56);
	}
	struct FEventReply GetReturnValue() {
		return memory.read<struct FEventReply>(m_addr + 168);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetOwnerPlayer
{
public:
	FSetOwnerPlayer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct ULocalPlayer GetLocalPlayer() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct ULocalPlayer(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetApplyAlphaToBlur
{
public:
	FSetApplyAlphaToBlur(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbInApplyAlphaToBlur() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnMouseEnter
{
public:
	FOnMouseEnter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGeometry GetMyGeometry() {
		return memory.read<struct FGeometry>(m_addr + 0);
	}
	struct FPointerEvent GetMouseEvent() {
		return memory.read<struct FPointerEvent>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnMouseLeave
{
public:
	FOnMouseLeave(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerEvent GetMouseEvent() {
		return memory.read<struct FPointerEvent>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetRenderTarget
{
public:
	FGetRenderTarget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTextureRenderTarget2D GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UTextureRenderTarget2D(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnMouseMove
{
public:
	FOnMouseMove(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGeometry GetMyGeometry() {
		return memory.read<struct FGeometry>(m_addr + 0);
	}
	struct FPointerEvent GetMouseEvent() {
		return memory.read<struct FPointerEvent>(m_addr + 56);
	}
	struct FEventReply GetReturnValue() {
		return memory.read<struct FEventReply>(m_addr + 168);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetSliderBarColor
{
public:
	FSetSliderBarColor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLinearColor GetInValue() {
		return memory.read<struct FLinearColor>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnMouseWheel
{
public:
	FOnMouseWheel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGeometry GetMyGeometry() {
		return memory.read<struct FGeometry>(m_addr + 0);
	}
	struct FPointerEvent GetMouseEvent() {
		return memory.read<struct FPointerEvent>(m_addr + 56);
	}
	struct FEventReply GetReturnValue() {
		return memory.read<struct FEventReply>(m_addr + 168);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnPaint
{
public:
	FOnPaint(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPaintContext GetContext() {
		return memory.read<struct FPaintContext>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSlotAsBorderSlot
{
public:
	FSlotAsBorderSlot(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWidget GetWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UWidget(ptr_addr);
	}
	struct UBorderSlot GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UBorderSlot(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnPreviewKeyDown
{
public:
	FOnPreviewKeyDown(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGeometry GetMyGeometry() {
		return memory.read<struct FGeometry>(m_addr + 0);
	}
	struct FKeyEvent GetInKeyEvent() {
		return memory.read<struct FKeyEvent>(m_addr + 56);
	}
	struct FEventReply GetReturnValue() {
		return memory.read<struct FEventReply>(m_addr + 112);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetTintColorAndOpacity
{
public:
	FSetTintColorAndOpacity(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLinearColor GetNewTintColorAndOpacity() {
		return memory.read<struct FLinearColor>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnPreviewMouseButtonDown
{
public:
	FOnPreviewMouseButtonDown(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGeometry GetMyGeometry() {
		return memory.read<struct FGeometry>(m_addr + 0);
	}
	struct FPointerEvent GetMouseEvent() {
		return memory.read<struct FPointerEvent>(m_addr + 56);
	}
	struct FEventReply GetReturnValue() {
		return memory.read<struct FEventReply>(m_addr + 168);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnRemovedFromFocusPath
{
public:
	FOnRemovedFromFocusPath(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FFocusEvent GetInFocusEvent() {
		return memory.read<struct FFocusEvent>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddItem
{
public:
	FAddItem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnTouchForceChanged
{
public:
	FOnTouchForceChanged(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGeometry GetMyGeometry() {
		return memory.read<struct FGeometry>(m_addr + 0);
	}
	struct FPointerEvent GetInTouchEvent() {
		return memory.read<struct FPointerEvent>(m_addr + 56);
	}
	struct FEventReply GetReturnValue() {
		return memory.read<struct FEventReply>(m_addr + 168);
	}

private:
	std::uint64_t m_addr = 0;
};class FPlayAnimation
{
public:
	FPlayAnimation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWidgetAnimation GetInAnimation() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UWidgetAnimation(ptr_addr);
	}
	float GetStartAtTime() {
		return memory.read<float>(m_addr + 8);
	}
	int32_t GetNumLoopsToPlay() {
		return memory.read<int32_t>(m_addr + 12);
	}
	enum class EUMGSequencePlayMode GetPlayMode() {
		return memory.read<enum class EUMGSequencePlayMode>(m_addr + 16);
	}
	float GetPlaybackSpeed() {
		return memory.read<float>(m_addr + 20);
	}
	bool GetbRestoreState() {
		return memory.read<bool>(m_addr + 24);
	}
	struct UUMGSequencePlayer GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 32);
		return struct UUMGSequencePlayer(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FPlayAnimationForward
{
public:
	FPlayAnimationForward(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWidgetAnimation GetInAnimation() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UWidgetAnimation(ptr_addr);
	}
	float GetPlaybackSpeed() {
		return memory.read<float>(m_addr + 8);
	}
	bool GetbRestoreState() {
		return memory.read<bool>(m_addr + 12);
	}
	struct UUMGSequencePlayer GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UUMGSequencePlayer(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAlignment
{
public:
	FGetAlignment(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector2D GetReturnValue() {
		return memory.read<struct FVector2D>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FPlayAnimationReverse
{
public:
	FPlayAnimationReverse(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWidgetAnimation GetInAnimation() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UWidgetAnimation(ptr_addr);
	}
	float GetPlaybackSpeed() {
		return memory.read<float>(m_addr + 8);
	}
	bool GetbRestoreState() {
		return memory.read<bool>(m_addr + 12);
	}
	struct UUMGSequencePlayer GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UUMGSequencePlayer(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FPlayAnimationTimeRange
{
public:
	FPlayAnimationTimeRange(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWidgetAnimation GetInAnimation() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UWidgetAnimation(ptr_addr);
	}
	float GetStartAtTime() {
		return memory.read<float>(m_addr + 8);
	}
	float GetEndAtTime() {
		return memory.read<float>(m_addr + 12);
	}
	int32_t GetNumLoopsToPlay() {
		return memory.read<int32_t>(m_addr + 16);
	}
	enum class EUMGSequencePlayMode GetPlayMode() {
		return memory.read<enum class EUMGSequencePlayMode>(m_addr + 20);
	}
	float GetPlaybackSpeed() {
		return memory.read<float>(m_addr + 24);
	}
	bool GetbRestoreState() {
		return memory.read<bool>(m_addr + 28);
	}
	struct UUMGSequencePlayer GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 32);
		return struct UUMGSequencePlayer(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSlotAsWrapBoxSlot
{
public:
	FSlotAsWrapBoxSlot(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWidget GetWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UWidget(ptr_addr);
	}
	struct UWrapBoxSlot GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UWrapBoxSlot(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FPlaySound
{
public:
	FPlaySound(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USoundBase GetSoundToPlay() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct USoundBase(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetDecoratorByClass
{
public:
	FGetDecoratorByClass(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	URichTextBlockDecorator GetDecoratorClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return URichTextBlockDecorator(ptr_addr);
	}
	struct URichTextBlockDecorator GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct URichTextBlockDecorator(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FPreConstruct
{
public:
	FPreConstruct(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetIsDesignTime() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetStrikeBrush
{
public:
	FSetStrikeBrush(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSlateBrush GetInStrikeBrush() {
		return memory.read<struct FSlateBrush>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FReverseAnimation
{
public:
	FReverseAnimation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWidgetAnimation GetInAnimation() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UWidgetAnimation(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetAlignmentInViewport
{
public:
	FSetAlignmentInViewport(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector2D GetAlignment() {
		return memory.read<struct FVector2D>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsWidgetVisible
{
public:
	FIsWidgetVisible(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieScene2DTransformMask
{
public:
	FMovieScene2DTransformMask(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	uint32_t GetMask() {
		return memory.read<uint32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetAnchorsInViewport
{
public:
	FSetAnchorsInViewport(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAnchors GetAnchors() {
		return memory.read<struct FAnchors>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetAnimationCurrentTime
{
public:
	FSetAnimationCurrentTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWidgetAnimation GetInAnimation() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UWidgetAnimation(ptr_addr);
	}
	float GetInTime() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetWidthOverride
{
public:
	FSetWidthOverride(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInWidthOverride() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetMinimum
{
public:
	FSetMinimum(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector2D GetInMinimumAnchors() {
		return memory.read<struct FVector2D>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetColorAndOpacity
{
public:
	FSetColorAndOpacity(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLinearColor GetInColorAndOpacity() {
		return memory.read<struct FLinearColor>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetDesiredSizeInViewport
{
public:
	FSetDesiredSizeInViewport(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector2D GetSize() {
		return memory.read<struct FVector2D>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetInputActionBlocking
{
public:
	FSetInputActionBlocking(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbShouldBlock() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetColumnFill
{
public:
	FSetColumnFill(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetColumnIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	float GetCoefficient() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetOwningPlayer
{
public:
	FSetOwningPlayer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct APlayerController GetLocalPlayerController() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct APlayerController(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetPadding
{
public:
	FSetPadding(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMargin GetInPadding() {
		return memory.read<struct FMargin>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetPositionInViewport
{
public:
	FSetPositionInViewport(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector2D Getposition() {
		return memory.read<struct FVector2D>(m_addr + 0);
	}
	bool GetbRemoveDPIScale() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FStopAnimation
{
public:
	FStopAnimation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWidgetAnimation GetInAnimation() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UWidgetAnimation(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FTick
{
public:
	FTick(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGeometry GetMyGeometry() {
		return memory.read<struct FGeometry>(m_addr + 0);
	}
	float GetinDeltaTime() {
		return memory.read<float>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FUnbindAllFromAnimationFinished
{
public:
	FUnbindAllFromAnimationFinished(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UUserWidget GetWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UUserWidget(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FUnbindFromAnimationFinished
{
public:
	FUnbindFromAnimationFinished(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UUserWidget GetWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UUserWidget(ptr_addr);
	}
	struct FDelegate GetDelegate() {
		return memory.read<struct FDelegate>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FDelegateRuntimeBinding
{
public:
	FDelegateRuntimeBinding(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetObjectName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FName GetPropertyName() {
		return memory.read<struct FName>(m_addr + 16);
	}
	struct FName GetFunctionName() {
		return memory.read<struct FName>(m_addr + 24);
	}
	struct FDynamicPropertyPath GetSourcePath() {
		return memory.read<struct FDynamicPropertyPath>(m_addr + 32);
	}
	enum class EBindingKind GetKind() {
		return memory.read<enum class EBindingKind>(m_addr + 72);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCanCache
{
public:
	FGetCanCache(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FUnbindFromAnimationStarted
{
public:
	FUnbindFromAnimationStarted(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UUserWidget GetWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UUserWidget(ptr_addr);
	}
	struct FDelegate GetDelegate() {
		return memory.read<struct FDelegate>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FAnimationEventBinding
{
public:
	FAnimationEventBinding(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWidgetAnimation GetAnimation() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UWidgetAnimation(ptr_addr);
	}
	struct FDelegate GetDelegate() {
		return memory.read<struct FDelegate>(m_addr + 8);
	}
	enum class EWidgetAnimationEvent GetAnimationEvent() {
		return memory.read<enum class EWidgetAnimationEvent>(m_addr + 24);
	}
	struct FName GetUserTag() {
		return memory.read<struct FName>(m_addr + 28);
	}

private:
	std::uint64_t m_addr = 0;
};class FNamedSlotBinding
{
public:
	FNamedSlotBinding(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	struct UWidget GetContent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UWidget(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FMovieSceneWidgetMaterialSectionTemplate
{
public:
	FMovieSceneWidgetMaterialSectionTemplate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FName> GetBrushPropertyNamePath() {
		return memory.read<struct TArray<struct FName>>(m_addr + 128);
	}

private:
	std::uint64_t m_addr = 0;
};class FSlateChildSize
{
public:
	FSlateChildSize(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetValue() {
		return memory.read<float>(m_addr + 0);
	}
	enum class ESlateSizeRule GetSizeRule() {
		return memory.read<enum class ESlateSizeRule>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnListItemObjectSet
{
public:
	FOnListItemObjectSet(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetListItemObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPosition
{
public:
	FGetPosition(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector2D GetReturnValue() {
		return memory.read<struct FVector2D>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FUserWidgetPool
{
public:
	FUserWidgetPool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UUserWidget> GetActiveWidgets() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct TArray<struct UUserWidget>(ptr_addr);
	}
	struct TArray<struct UUserWidget> GetInactiveWidgets() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct TArray<struct UUserWidget>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetDrawSize
{
public:
	FGetDrawSize(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector2D GetReturnValue() {
		return memory.read<struct FVector2D>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FWidgetComponentInstanceData
{
public:
	FWidgetComponentInstanceData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FSetPercent
{
public:
	FSetPercent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInPercent() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetDynamicOutlineMaterial
{
public:
	FGetDynamicOutlineMaterial(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMaterialInstanceDynamic GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMaterialInstanceDynamic(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetAutoWrapText
{
public:
	FSetAutoWrapText(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetInAutoTextWrap() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetShadowColorAndOpacity
{
public:
	FSetShadowColorAndOpacity(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLinearColor GetInShadowColorAndOpacity() {
		return memory.read<struct FLinearColor>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetInnerSlotPadding
{
public:
	FSetInnerSlotPadding(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector2D GetInPadding() {
		return memory.read<struct FVector2D>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetTextTransformPolicy
{
public:
	FSetTextTransformPolicy(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ETextTransformPolicy GetInTransformPolicy() {
		return memory.read<enum class ETextTransformPolicy>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetScrollOffsetOfEnd
{
public:
	FGetScrollOffsetOfEnd(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetBrush
{
public:
	FSetBrush(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSlateBrush GetInBrush() {
		return memory.read<struct FSlateBrush>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FBP_OnItemExpansionChanged
{
public:
	FBP_OnItemExpansionChanged(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbIsExpanded() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetBrushFromAsset
{
public:
	FSetBrushFromAsset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USlateBrushAsset GetAsset() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct USlateBrushAsset(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetBrushFromMaterial
{
public:
	FSetBrushFromMaterial(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMaterialInterface GetMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMaterialInterface(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetFillSpanWhenLessThan
{
public:
	FSetFillSpanWhenLessThan(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInFillSpanWhenLessThan() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetBrushFromSoftMaterial
{
public:
	FSetBrushFromSoftMaterial(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TSoftObjectPtr<UMaterialInterface> GetSoftMaterial() {
		return memory.read<struct TSoftObjectPtr<UMaterialInterface>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetBrushFromSoftTexture
{
public:
	FSetBrushFromSoftTexture(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TSoftObjectPtr<UTexture2D> GetSoftTexture() {
		return memory.read<struct TSoftObjectPtr<UTexture2D>>(m_addr + 0);
	}
	bool GetbMatchSize() {
		return memory.read<bool>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetBrushResourceObject
{
public:
	FSetBrushResourceObject(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetResourceObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetDefaultColorAndOpacity
{
public:
	FSetDefaultColorAndOpacity(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSlateColor GetInColorAndOpacity() {
		return memory.read<struct FSlateColor>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetRadius
{
public:
	FSetRadius(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInRadius() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetDefaultFont
{
public:
	FSetDefaultFont(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSlateFontInfo GetInFontInfo() {
		return memory.read<struct FSlateFontInfo>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetDefaultShadowColorAndOpacity
{
public:
	FSetDefaultShadowColorAndOpacity(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLinearColor GetInShadowColorAndOpacity() {
		return memory.read<struct FLinearColor>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetConsumeMouseWheel
{
public:
	FSetConsumeMouseWheel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EConsumeMouseWheel GetNewConsumeMouseWheel() {
		return memory.read<enum class EConsumeMouseWheel>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetDefaultShadowOffset
{
public:
	FSetDefaultShadowOffset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector2D GetInShadowOffset() {
		return memory.read<struct FVector2D>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetDefaultStrikeBrush
{
public:
	FSetDefaultStrikeBrush(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSlateBrush GetInStrikeBrush() {
		return memory.read<struct FSlateBrush>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetBrushColor
{
public:
	FSetBrushColor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLinearColor GetInBrushColor() {
		return memory.read<struct FLinearColor>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetDefaultTextStyle
{
public:
	FSetDefaultTextStyle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FTextBlockStyle GetInDefaultTextStyle() {
		return memory.read<struct FTextBlockStyle>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetDisplayedEntryWidgets
{
public:
	FGetDisplayedEntryWidgets(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UUserWidget> GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct TArray<struct UUserWidget>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetWidgetSpace
{
public:
	FGetWidgetSpace(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EWidgetSpace GetReturnValue() {
		return memory.read<enum class EWidgetSpace>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddChildToCanvas
{
public:
	FAddChildToCanvas(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWidget GetContent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UWidget(ptr_addr);
	}
	struct UCanvasPanelSlot GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UCanvasPanelSlot(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetScrollbarVisibility
{
public:
	FSetScrollbarVisibility(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ESlateVisibility GetNewScrollBarVisibility() {
		return memory.read<enum class ESlateVisibility>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetFillColorAndOpacity
{
public:
	FSetFillColorAndOpacity(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLinearColor GetInColor() {
		return memory.read<struct FLinearColor>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetScrollOffset
{
public:
	FSetScrollOffset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetNewScrollOffset() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FBP_GetSelectedItems
{
public:
	FBP_GetSelectedItems(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UObject> GetItems() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct TArray<struct UObject>(ptr_addr);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FBP_ScrollItemIntoView
{
public:
	FBP_ScrollItemIntoView(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FBP_SetSelectedItem
{
public:
	FBP_SetSelectedItem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetIndexForItem
{
public:
	FGetIndexForItem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetNumItems
{
public:
	FGetNumItems(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsRefreshPending
{
public:
	FIsRefreshPending(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetEntryWidth
{
public:
	FSetEntryWidth(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetNewWidth() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetIsExpanded_Animated
{
public:
	FSetIsExpanded_Animated(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetIsExpanded() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FRemoveItem
{
public:
	FRemoveItem(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetEntryHeight
{
public:
	FGetEntryHeight(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FBP_CreateEntryOfClass
{
public:
	FBP_CreateEntryOfClass(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	UUserWidget GetEntryClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return UUserWidget(ptr_addr);
	}
	struct UUserWidget GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UUserWidget(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetEntryWidth
{
public:
	FGetEntryWidth(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCurrentDrawSize
{
public:
	FGetCurrentDrawSize(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector2D GetReturnValue() {
		return memory.read<struct FVector2D>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetCylinderArcAngle
{
public:
	FGetCylinderArcAngle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetSize
{
public:
	FSetSize(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSlateChildSize GetInSize() {
		return memory.read<struct FSlateChildSize>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetDrawAtDesiredSize
{
public:
	FGetDrawAtDesiredSize(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetOwnerPlayer
{
public:
	FGetOwnerPlayer(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct ULocalPlayer GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct ULocalPlayer(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetWidget
{
public:
	FSetWidget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UUserWidget GetWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UUserWidget(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetLinearValue
{
public:
	FGetLinearValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLinearColor GetReturnValue() {
		return memory.read<struct FLinearColor>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPivot
{
public:
	FGetPivot(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector2D GetReturnValue() {
		return memory.read<struct FVector2D>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTickWhenOffscreen
{
public:
	FGetTickWhenOffscreen(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTwoSided
{
public:
	FGetTwoSided(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetUserWidgetObject
{
public:
	FGetUserWidgetObject(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UUserWidget GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UUserWidget(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetWindowFocusable
{
public:
	FGetWindowFocusable(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetCylinderArcAngle
{
public:
	FSetCylinderArcAngle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInCylinderArcAngle() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetDrawAtDesiredSize
{
public:
	FSetDrawAtDesiredSize(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbInDrawAtDesiredSize() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetDrawSize
{
public:
	FSetDrawSize(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector2D GetSize() {
		return memory.read<struct FVector2D>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetManuallyRedraw
{
public:
	FSetManuallyRedraw(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbUseManualRedraw() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetTwoSided
{
public:
	FSetTwoSided(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbWantTwoSided() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetWindowFocusable
{
public:
	FSetWindowFocusable(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbInWindowFocusable() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetWindowVisibility
{
public:
	FSetWindowVisibility(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EWindowVisibility GetInVisibility() {
		return memory.read<enum class EWindowVisibility>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDownloadImage
{
public:
	FDownloadImage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetURL() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct UAsyncTaskDownloadImage GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UAsyncTaskDownloadImage(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetMinDesiredSlotHeight
{
public:
	FSetMinDesiredSlotHeight(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInMinDesiredSlotHeight() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetLowQualityFallbackBrush
{
public:
	FSetLowQualityFallbackBrush(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSlateBrush GetInBrush() {
		return memory.read<struct FSlateBrush>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetVerticalAlignment
{
public:
	FSetVerticalAlignment(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EVerticalAlignment GetInVerticalAlignment() {
		return memory.read<enum class EVerticalAlignment>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetCustomHitResult
{
public:
	FSetCustomHitResult(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FHitResult GetHitResult() {
		return memory.read<struct FHitResult>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetDesiredSizeScale
{
public:
	FSetDesiredSizeScale(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector2D GetInScale() {
		return memory.read<struct FVector2D>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetViewRotation
{
public:
	FGetViewRotation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRotator GetReturnValue() {
		return memory.read<struct FRotator>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAbsoluteToLocal
{
public:
	FAbsoluteToLocal(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGeometry GetGeometry() {
		return memory.read<struct FGeometry>(m_addr + 0);
	}
	struct FVector2D GetAbsoluteCoordinate() {
		return memory.read<struct FVector2D>(m_addr + 56);
	}
	struct FVector2D GetReturnValue() {
		return memory.read<struct FVector2D>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetClickMethod
{
public:
	FSetClickMethod(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EButtonClickMethod GetInClickMethod() {
		return memory.read<enum class EButtonClickMethod>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetPressMethod
{
public:
	FSetPressMethod(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EButtonPressMethod GetInPressMethod() {
		return memory.read<enum class EButtonPressMethod>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetTouchMethod
{
public:
	FSetTouchMethod(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EButtonTouchMethod GetInTouchMethod() {
		return memory.read<enum class EButtonTouchMethod>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetLayout
{
public:
	FGetLayout(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAnchorData GetReturnValue() {
		return memory.read<struct FAnchorData>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDragged
{
public:
	FDragged(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerEvent GetPointerEvent() {
		return memory.read<struct FPointerEvent>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetOffsets
{
public:
	FGetOffsets(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FMargin GetReturnValue() {
		return memory.read<struct FMargin>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetSize
{
public:
	FGetSize(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector2D GetReturnValue() {
		return memory.read<struct FVector2D>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetAnchors
{
public:
	FSetAnchors(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FAnchors GetInAnchors() {
		return memory.read<struct FAnchors>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetMaximum
{
public:
	FSetMaximum(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector2D GetInMaximumAnchors() {
		return memory.read<struct FVector2D>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetPosition
{
public:
	FSetPosition(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector2D GetInPosition() {
		return memory.read<struct FVector2D>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsChecked
{
public:
	FIsChecked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetRow
{
public:
	FSetRow(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInRow() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetCheckedState
{
public:
	FSetCheckedState(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class ECheckBoxState GetInCheckedState() {
		return memory.read<enum class ECheckBoxState>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetNumberOfPieces
{
public:
	FSetNumberOfPieces(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInNumberOfPieces() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FDrop
{
public:
	FDrop(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FPointerEvent GetPointerEvent() {
		return memory.read<struct FPointerEvent>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetEntrySpacing
{
public:
	FSetEntrySpacing(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector2D GetInEntrySpacing() {
		return memory.read<struct FVector2D>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetRadialSettings
{
public:
	FSetRadialSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRadialBoxSettings GetInSettings() {
		return memory.read<struct FRadialBoxSettings>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FRemoveEntry
{
public:
	FRemoveEntry(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UUserWidget GetEntryWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UUserWidget(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FReset
{
public:
	FReset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbDeleteWidgets() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetRetainRendering
{
public:
	FSetRetainRendering(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbInRetainRendering() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetIsExpanded
{
public:
	FGetIsExpanded(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetRowFill
{
public:
	FSetRowFill(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetColumnIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}
	float GetCoefficient() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetColumn
{
public:
	FSetColumn(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInColumn() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetColumnSpan
{
public:
	FSetColumnSpan(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInColumnSpan() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetRowSpan
{
public:
	FSetRowSpan(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetInRowSpan() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetCanCache
{
public:
	FSetCanCache(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetCanCache() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetOwningListView
{
public:
	FGetOwningListView(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TScriptInterface<IUserListEntry> GetUserListEntry() {
		return memory.read<struct TScriptInterface<IUserListEntry>>(m_addr + 0);
	}
	struct UListViewBase GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UListViewBase(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetListItemObject
{
public:
	FGetListItemObject(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TScriptInterface<IUserObjectListEntry> GetUserObjectListEntry() {
		return memory.read<struct TScriptInterface<IUserObjectListEntry>>(m_addr + 0);
	}
	struct UObject GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UObject(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetViewLocation
{
public:
	FSetViewLocation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetLocation() {
		return memory.read<struct FVector>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddChildToOverlay
{
public:
	FAddChildToOverlay(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWidget GetContent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UWidget(ptr_addr);
	}
	struct UOverlaySlot GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UOverlaySlot(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetIsMarquee
{
public:
	FSetIsMarquee(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetInbIsMarquee() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetEffectMaterial
{
public:
	FSetEffectMaterial(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UMaterialInterface GetEffectMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UMaterialInterface(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetTextureParameter
{
public:
	FSetTextureParameter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetTextureParameter() {
		return memory.read<struct FName>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetSidesToPad
{
public:
	FSetSidesToPad(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetInPadLeft() {
		return memory.read<bool>(m_addr + 0);
	}
	bool GetInPadRight() {
		return memory.read<bool>(m_addr + 1);
	}
	bool GetInPadTop() {
		return memory.read<bool>(m_addr + 2);
	}
	bool GetInPadBottom() {
		return memory.read<bool>(m_addr + 3);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetIgnoreInheritedScale
{
public:
	FSetIgnoreInheritedScale(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbInIgnoreInheritedScale() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetStretchDirection
{
public:
	FSetStretchDirection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EStretchDirection GetInStretchDirection() {
		return memory.read<enum class EStretchDirection>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetScrollOffset
{
public:
	FGetScrollOffset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetViewOffsetFraction
{
public:
	FGetViewOffsetFraction(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetAllowOverscroll
{
public:
	FSetAllowOverscroll(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetNewAllowOverscroll() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetOrientation
{
public:
	FSetOrientation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EOrientation GetNewOrientation() {
		return memory.read<enum class EOrientation>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetScrollbarThickness
{
public:
	FSetScrollbarThickness(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector2D GetNewScrollbarThickness() {
		return memory.read<struct FVector2D>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetScrollWhenFocusChanges
{
public:
	FSetScrollWhenFocusChanges(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EScrollWhenFocusChanges GetNewScrollWhenFocusChanges() {
		return memory.read<enum class EScrollWhenFocusChanges>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetHeightOverride
{
public:
	FSetHeightOverride(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInHeightOverride() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetMaxAspectRatio
{
public:
	FSetMaxAspectRatio(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInMaxAspectRatio() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FLocalToAbsolute
{
public:
	FLocalToAbsolute(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGeometry GetGeometry() {
		return memory.read<struct FGeometry>(m_addr + 0);
	}
	struct FVector2D GetLocalCoordinate() {
		return memory.read<struct FVector2D>(m_addr + 56);
	}
	struct FVector2D GetReturnValue() {
		return memory.read<struct FVector2D>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetMaxDesiredHeight
{
public:
	FSetMaxDesiredHeight(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInMaxDesiredHeight() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetMaxDesiredWidth
{
public:
	FSetMaxDesiredWidth(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInMaxDesiredWidth() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetMinDesiredHeight
{
public:
	FSetMinDesiredHeight(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInMinDesiredHeight() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAbsoluteToViewport
{
public:
	FAbsoluteToViewport(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct FVector2D GetAbsoluteDesktopCoordinate() {
		return memory.read<struct FVector2D>(m_addr + 8);
	}
	struct FVector2D GetPixelPosition() {
		return memory.read<struct FVector2D>(m_addr + 16);
	}
	struct FVector2D GetViewportPosition() {
		return memory.read<struct FVector2D>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetAbsoluteSize
{
public:
	FGetAbsoluteSize(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGeometry GetGeometry() {
		return memory.read<struct FGeometry>(m_addr + 0);
	}
	struct FVector2D GetReturnValue() {
		return memory.read<struct FVector2D>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetLocalSize
{
public:
	FGetLocalSize(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGeometry GetGeometry() {
		return memory.read<struct FGeometry>(m_addr + 0);
	}
	struct FVector2D GetReturnValue() {
		return memory.read<struct FVector2D>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsUnderLocation
{
public:
	FIsUnderLocation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGeometry GetGeometry() {
		return memory.read<struct FGeometry>(m_addr + 0);
	}
	struct FVector2D GetAbsoluteCoordinate() {
		return memory.read<struct FVector2D>(m_addr + 56);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};class FLocalToViewport
{
public:
	FLocalToViewport(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct FGeometry GetGeometry() {
		return memory.read<struct FGeometry>(m_addr + 8);
	}
	struct FVector2D GetLocalCoordinate() {
		return memory.read<struct FVector2D>(m_addr + 64);
	}
	struct FVector2D GetPixelPosition() {
		return memory.read<struct FVector2D>(m_addr + 72);
	}
	struct FVector2D GetViewportPosition() {
		return memory.read<struct FVector2D>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};class FScreenToWidgetLocal
{
public:
	FScreenToWidgetLocal(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct FGeometry GetGeometry() {
		return memory.read<struct FGeometry>(m_addr + 8);
	}
	struct FVector2D GetScreenPosition() {
		return memory.read<struct FVector2D>(m_addr + 64);
	}
	struct FVector2D GetLocalCoordinate() {
		return memory.read<struct FVector2D>(m_addr + 72);
	}
	bool GetbIncludeWindowPosition() {
		return memory.read<bool>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};class FTransformScalarLocalToAbsolute
{
public:
	FTransformScalarLocalToAbsolute(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGeometry GetGeometry() {
		return memory.read<struct FGeometry>(m_addr + 0);
	}
	float GetLocalScalar() {
		return memory.read<float>(m_addr + 56);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 60);
	}

private:
	std::uint64_t m_addr = 0;
};class FTransformVectorAbsoluteToLocal
{
public:
	FTransformVectorAbsoluteToLocal(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGeometry GetGeometry() {
		return memory.read<struct FGeometry>(m_addr + 0);
	}
	struct FVector2D GetAbsoluteVector() {
		return memory.read<struct FVector2D>(m_addr + 56);
	}
	struct FVector2D GetReturnValue() {
		return memory.read<struct FVector2D>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};class FProjectWorldLocationToWidgetPosition
{
public:
	FProjectWorldLocationToWidgetPosition(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct APlayerController GetPlayerController() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct APlayerController(ptr_addr);
	}
	struct FVector GetWorldLocation() {
		return memory.read<struct FVector>(m_addr + 8);
	}
	struct FVector2D GetScreenPosition() {
		return memory.read<struct FVector2D>(m_addr + 20);
	}
	bool GetbPlayerViewportRelative() {
		return memory.read<bool>(m_addr + 28);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 29);
	}

private:
	std::uint64_t m_addr = 0;
};class FTransformVectorLocalToAbsolute
{
public:
	FTransformVectorLocalToAbsolute(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGeometry GetGeometry() {
		return memory.read<struct FGeometry>(m_addr + 0);
	}
	struct FVector2D GetLocalVector() {
		return memory.read<struct FVector2D>(m_addr + 56);
	}
	struct FVector2D GetReturnValue() {
		return memory.read<struct FVector2D>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetIndentHandle
{
public:
	FSetIndentHandle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetInValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetLocked
{
public:
	FSetLocked(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetInValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetStepSize
{
public:
	FSetStepSize(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetInValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTextValue
{
public:
	FGetTextValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FText GetReturnValue() {
		return memory.read<struct FText>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetAnimateOpacity
{
public:
	FSetAnimateOpacity(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbInAnimateOpacity() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsOverFocusableWidget
{
public:
	FIsOverFocusableWidget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetItemExpansion
{
public:
	FSetItemExpansion(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetItem() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	bool GetbExpandItem() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetUserTag
{
public:
	FGetUserTag(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetReturnValue() {
		return memory.read<struct FName>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetUserTag
{
public:
	FSetUserTag(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetInUserTag() {
		return memory.read<struct FName>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddChildToUniformGrid
{
public:
	FAddChildToUniformGrid(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWidget GetContent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UWidget(ptr_addr);
	}
	int32_t GetInRow() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetInColumn() {
		return memory.read<int32_t>(m_addr + 12);
	}
	struct UUniformGridSlot GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UUniformGridSlot(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddChildToVerticalBox
{
public:
	FAddChildToVerticalBox(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWidget GetContent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UWidget(ptr_addr);
	}
	struct UVerticalBoxSlot GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UVerticalBoxSlot(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetViewLocation
{
public:
	FGetViewLocation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetReturnValue() {
		return memory.read<struct FVector>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetViewRotation
{
public:
	FSetViewRotation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRotator GetRotation() {
		return memory.read<struct FRotator>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSpawn
{
public:
	FSpawn(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	AActor GetActorClass() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return AActor(ptr_addr);
	}
	struct AActor GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct AActor(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetStartTime
{
public:
	FGetStartTime(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetReturnValue() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FCreatePlayAnimationProxyObject
{
public:
	FCreatePlayAnimationProxyObject(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UUMGSequencePlayer GetResult() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UUMGSequencePlayer(ptr_addr);
	}
	struct UUserWidget GetWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UUserWidget(ptr_addr);
	}
	struct UWidgetAnimation GetInAnimation() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UWidgetAnimation(ptr_addr);
	}
	float GetStartAtTime() {
		return memory.read<float>(m_addr + 24);
	}
	int32_t GetNumLoopsToPlay() {
		return memory.read<int32_t>(m_addr + 28);
	}
	enum class EUMGSequencePlayMode GetPlayMode() {
		return memory.read<enum class EUMGSequencePlayMode>(m_addr + 32);
	}
	float GetPlaybackSpeed() {
		return memory.read<float>(m_addr + 36);
	}
	struct UWidgetAnimationPlayCallbackProxy GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct UWidgetAnimationPlayCallbackProxy(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGet2DHitLocation
{
public:
	FGet2DHitLocation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector2D GetReturnValue() {
		return memory.read<struct FVector2D>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetHoveredWidgetComponent
{
public:
	FGetHoveredWidgetComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWidgetComponent GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UWidgetComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetLastHitResult
{
public:
	FGetLastHitResult(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FHitResult GetReturnValue() {
		return memory.read<struct FHitResult>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsOverHitTestVisibleWidget
{
public:
	FIsOverHitTestVisibleWidget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsOverInteractableWidget
{
public:
	FIsOverInteractableWidget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FReleasePointerKey
{
public:
	FReleasePointerKey(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FKey GetKey() {
		return memory.read<struct FKey>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FScrollWheel
{
public:
	FScrollWheel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetScrollDelta() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetMousePositionOnPlatform
{
public:
	FGetMousePositionOnPlatform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector2D GetReturnValue() {
		return memory.read<struct FVector2D>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetMousePositionOnViewport
{
public:
	FGetMousePositionOnViewport(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct FVector2D GetReturnValue() {
		return memory.read<struct FVector2D>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSlotAsSizeBoxSlot
{
public:
	FSlotAsSizeBoxSlot(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWidget GetWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UWidget(ptr_addr);
	}
	struct USizeBoxSlot GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct USizeBoxSlot(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetMousePositionScaledByDPI
{
public:
	FGetMousePositionScaledByDPI(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct APlayerController GetPlayer() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct APlayerController(ptr_addr);
	}
	float GetLocationX() {
		return memory.read<float>(m_addr + 8);
	}
	float GetLocationY() {
		return memory.read<float>(m_addr + 12);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetPlayerScreenWidgetGeometry
{
public:
	FGetPlayerScreenWidgetGeometry(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct APlayerController GetPlayerController() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct APlayerController(ptr_addr);
	}
	struct FGeometry GetReturnValue() {
		return memory.read<struct FGeometry>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetViewportScale
{
public:
	FGetViewportScale(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetViewportWidgetGeometry
{
public:
	FGetViewportWidgetGeometry(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct FGeometry GetReturnValue() {
		return memory.read<struct FGeometry>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FRemoveAllWidgets
{
public:
	FRemoveAllWidgets(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSlotAsCanvasSlot
{
public:
	FSlotAsCanvasSlot(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWidget GetWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UWidget(ptr_addr);
	}
	struct UCanvasPanelSlot GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UCanvasPanelSlot(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSlotAsGridSlot
{
public:
	FSlotAsGridSlot(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWidget GetWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UWidget(ptr_addr);
	}
	struct UGridSlot GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UGridSlot(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSlotAsHorizontalBoxSlot
{
public:
	FSlotAsHorizontalBoxSlot(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWidget GetWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UWidget(ptr_addr);
	}
	struct UHorizontalBoxSlot GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UHorizontalBoxSlot(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSlotAsOverlaySlot
{
public:
	FSlotAsOverlaySlot(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWidget GetWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UWidget(ptr_addr);
	}
	struct UOverlaySlot GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UOverlaySlot(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSlotAsSafeBoxSlot
{
public:
	FSlotAsSafeBoxSlot(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWidget GetWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UWidget(ptr_addr);
	}
	struct USafeZoneSlot GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct USafeZoneSlot(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSlotAsScaleBoxSlot
{
public:
	FSlotAsScaleBoxSlot(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWidget GetWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UWidget(ptr_addr);
	}
	struct UScaleBoxSlot GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UScaleBoxSlot(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSlotAsScrollBoxSlot
{
public:
	FSlotAsScrollBoxSlot(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWidget GetWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UWidget(ptr_addr);
	}
	struct UScrollBoxSlot GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UScrollBoxSlot(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSlotAsWidgetSwitcherSlot
{
public:
	FSlotAsWidgetSwitcherSlot(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWidget GetWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UWidget(ptr_addr);
	}
	struct UWidgetSwitcherSlot GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UWidgetSwitcherSlot(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetActiveWidget
{
public:
	FGetActiveWidget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWidget GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UWidget(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetActiveWidgetIndex
{
public:
	FGetActiveWidgetIndex(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetNumWidgets
{
public:
	FGetNumWidgets(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetActiveWidget
{
public:
	FSetActiveWidget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWidget GetWidget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UWidget(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetActiveWidgetIndex
{
public:
	FSetActiveWidgetIndex(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddChildToWrapBox
{
public:
	FAddChildToWrapBox(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UWidget GetContent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UWidget(ptr_addr);
	}
	struct UWrapBoxSlot GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UWrapBoxSlot(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetFillEmptySpace
{
public:
	FSetFillEmptySpace(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetInbFillEmptySpace() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};