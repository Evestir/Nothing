#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//DelegateFunction UMG.Widget.GenerateWidgetForString__DelegateSignature Size 24
class FGenerateWidgetForString__DelegateSignature
{

 public: 
	struct FString Item;  // Offset: 0 Size: 16
	struct UWidget* ReturnValue;  // Offset: 16 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.Widget.SetClipping Size 1
class FSetClipping
{

 public: 
	enum class EWidgetClipping InClipping;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //DelegateFunction UMG.Widget.GetText__DelegateSignature Size 24
class FGetText__DelegateSignature
{

 public: 
	struct FText ReturnValue;  // Offset: 0 Size: 24



 // Functions 
 public:
}; 
 
 //Function UMG.Widget.ForceVolatile Size 1
class FForceVolatile
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bForce : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //DelegateFunction UMG.CustomWidgetNavigationDelegate__DelegateSignature Size 16
class FCustomWidgetNavigationDelegate__DelegateSignature
{

 public: 
	enum class EUINavigation Navigation;  // Offset: 0 Size: 1
	char pad_1[7];  // Offset: 1 Size: 7
	struct UWidget* ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.DynamicEntryBox.BP_CreateEntry Size 8
class FBP_CreateEntry
{

 public: 
	struct UUserWidget* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetBlueprintLibrary.CaptureJoystick Size 384
class FCaptureJoystick
{

 public: 
	struct FEventReply Reply;  // Offset: 0 Size: 184
	struct UWidget* CapturingWidget;  // Offset: 184 Size: 8
	char pad_192_1 : 7;  // Offset: 192 Size: 1
	bool bInAllJoysticks : 1;  // Offset: 192 Size: 1
	char pad_193[7];  // Offset: 193 Size: 7
	struct FEventReply ReturnValue;  // Offset: 200 Size: 184



 // Functions 
 public:
}; 
 
 //Function UMG.Viewport.GetViewportWorld Size 8
class FGetViewportWorld
{

 public: 
	struct UWorld* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //DelegateFunction UMG.Widget.GenerateWidgetForObject__DelegateSignature Size 16
class FGenerateWidgetForObject__DelegateSignature
{

 public: 
	struct UObject* Item;  // Offset: 0 Size: 8
	struct UWidget* ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.Widget.SetIsEnabled Size 1
class FSetIsEnabled
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bInIsEnabled : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.Widget.HasMouseCapture Size 1
class FHasMouseCapture
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.TextBlock.GetDynamicFontMaterial Size 8
class FGetDynamicFontMaterial
{

 public: 
	struct UMaterialInstanceDynamic* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //DelegateFunction UMG.Widget.GetCheckBoxState__DelegateSignature Size 1
class FGetCheckBoxState__DelegateSignature
{

 public: 
	enum class ECheckBoxState ReturnValue;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //DelegateFunction UMG.Widget.GetBool__DelegateSignature Size 1
class FGetBool__DelegateSignature
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.RetainerBox.SetRenderingPhase Size 8
class FSetRenderingPhase
{

 public: 
	int32_t RenderPhase;  // Offset: 0 Size: 4
	int32_t TotalPhases;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.Widget.GetAccessibleSummaryText Size 24
class FGetAccessibleSummaryText
{

 public: 
	struct FText ReturnValue;  // Offset: 0 Size: 24



 // Functions 
 public:
}; 
 
 //DelegateFunction UMG.OnItemIsHoveredChangedDynamic__DelegateSignature Size 16
class FOnItemIsHoveredChangedDynamic__DelegateSignature
{

 public: 
	struct UObject* Item;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool bIsHovered : 1;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7



 // Functions 
 public:
}; 
 
 //Function UMG.Widget.GetAccessibleText Size 24
class FGetAccessibleText
{

 public: 
	struct FText ReturnValue;  // Offset: 0 Size: 24



 // Functions 
 public:
}; 
 
 //Function UMG.Widget.SetToolTipText Size 24
class FSetToolTipText
{

 public: 
	struct FText InToolTipText;  // Offset: 0 Size: 24



 // Functions 
 public:
}; 
 
 //Function UMG.ListView.BP_GetNumItemsSelected Size 4
class FBP_GetNumItemsSelected
{

 public: 
	int32_t ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.Throbber.SetAnimateHorizontally Size 1
class FSetAnimateHorizontally
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bInAnimateHorizontally : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.SlateBlueprintLibrary.EqualEqual_SlateBrush Size 280
class FEqualEqual_SlateBrush
{

 public: 
	struct FSlateBrush A;  // Offset: 0 Size: 136
	struct FSlateBrush B;  // Offset: 136 Size: 136
	char pad_272_1 : 7;  // Offset: 272 Size: 1
	bool ReturnValue : 1;  // Offset: 272 Size: 1
	char pad_273[7];  // Offset: 273 Size: 7



 // Functions 
 public:
}; 
 
 //ScriptStruct UMG.RichTextStyleRow Size 632
// Inherited 8 bytes 
class FRichTextStyleRow : public FTableRowBase
{

 public: 
	struct FTextBlockStyle TextStyle;  // Offset: 8 Size: 624



 // Functions 
 public:
}; 
 
 //Function UMG.Widget.GetCachedGeometry Size 56
class FGetCachedGeometry
{

 public: 
	struct FGeometry ReturnValue;  // Offset: 0 Size: 56



 // Functions 
 public:
}; 
 
 //DelegateFunction UMG.Widget.GetSlateVisibility__DelegateSignature Size 1
class FGetSlateVisibility__DelegateSignature
{

 public: 
	enum class ESlateVisibility ReturnValue;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.Widget.GetClipping Size 1
class FGetClipping
{

 public: 
	enum class EWidgetClipping ReturnValue;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetBlueprintLibrary.GetAllWidgetsOfClass Size 40
class FGetAllWidgetsOfClass
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct TArray<struct UUserWidget*> FoundWidgets;  // Offset: 8 Size: 16
	UUserWidget* WidgetClass;  // Offset: 24 Size: 8
	char pad_32_1 : 7;  // Offset: 32 Size: 1
	bool TopLevelOnly : 1;  // Offset: 32 Size: 1
	char pad_33[7];  // Offset: 33 Size: 7



 // Functions 
 public:
}; 
 
 //Function UMG.Widget.GetDesiredSize Size 8
class FGetDesiredSize
{

 public: 
	struct FVector2D ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //DelegateFunction UMG.Widget.GetFloat__DelegateSignature Size 4
class FGetFloat__DelegateSignature
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetBlueprintLibrary.MakeBrushFromTexture Size 152
class FMakeBrushFromTexture
{

 public: 
	struct UTexture2D* Texture;  // Offset: 0 Size: 8
	int32_t Width;  // Offset: 8 Size: 4
	int32_t Height;  // Offset: 12 Size: 4
	struct FSlateBrush ReturnValue;  // Offset: 16 Size: 136



 // Functions 
 public:
}; 
 
 //Function UMG.Widget.GetGameInstance Size 8
class FGetGameInstance
{

 public: 
	struct UGameInstance* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //DelegateFunction UMG.Widget.GetInt32__DelegateSignature Size 4
class FGetInt32__DelegateSignature
{

 public: 
	int32_t ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetBlueprintLibrary.SetUserFocus Size 384
class FSetUserFocus
{

 public: 
	struct FEventReply Reply;  // Offset: 0 Size: 184
	struct UWidget* FocusWidget;  // Offset: 184 Size: 8
	char pad_192_1 : 7;  // Offset: 192 Size: 1
	bool bInAllUsers : 1;  // Offset: 192 Size: 1
	char pad_193[7];  // Offset: 193 Size: 7
	struct FEventReply ReturnValue;  // Offset: 200 Size: 184



 // Functions 
 public:
}; 
 
 //Function UMG.ListView.SetSelectionMode Size 1
class FSetSelectionMode
{

 public: 
	enum class ESelectionMode SelectionMode;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.ScrollBox.SetScrollbarPadding Size 16
class FSetScrollbarPadding
{

 public: 
	struct FMargin NewScrollbarPadding;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function UMG.Widget.HasUserFocus Size 16
class FHasUserFocus
{

 public: 
	struct APlayerController* PlayerController;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool ReturnValue : 1;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7



 // Functions 
 public:
}; 
 
 //Function UMG.Widget.GetIsEnabled Size 1
class FGetIsEnabled
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.SizeBox.SetMinAspectRatio Size 4
class FSetMinAspectRatio
{

 public: 
	float InMinAspectRatio;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.HorizontalBox.AddChildToHorizontalBox Size 16
class FAddChildToHorizontalBox
{

 public: 
	struct UWidget* Content;  // Offset: 0 Size: 8
	struct UHorizontalBoxSlot* ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.Widget.SetNavigationRuleCustomBoundary Size 20
class FSetNavigationRuleCustomBoundary
{

 public: 
	enum class EUINavigation Direction;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	struct FDelegate InCustomDelegate;  // Offset: 4 Size: 16



 // Functions 
 public:
}; 
 
 //DelegateFunction UMG.Widget.GetLinearColor__DelegateSignature Size 16
class FGetLinearColor__DelegateSignature
{

 public: 
	struct FLinearColor ReturnValue;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function UMG.Widget.SetCursor Size 1
class FSetCursor
{

 public: 
	enum class EMouseCursor InCursor;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct UMG.SlateMeshVertex Size 60
class FSlateMeshVertex
{

 public: 
	struct FVector2D position;  // Offset: 0 Size: 8
	struct FColor Color;  // Offset: 8 Size: 4
	struct FVector2D UV0;  // Offset: 12 Size: 8
	struct FVector2D UV1;  // Offset: 20 Size: 8
	struct FVector2D UV2;  // Offset: 28 Size: 8
	struct FVector2D UV3;  // Offset: 36 Size: 8
	struct FVector2D UV4;  // Offset: 44 Size: 8
	struct FVector2D UV5;  // Offset: 52 Size: 8



 // Functions 
 public:
}; 
 
 //DelegateFunction UMG.Widget.GetMouseCursor__DelegateSignature Size 1
class FGetMouseCursor__DelegateSignature
{

 public: 
	enum class EMouseCursor ReturnValue;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetBlueprintLibrary.LockMouse Size 376
class FLockMouse
{

 public: 
	struct FEventReply Reply;  // Offset: 0 Size: 184
	struct UWidget* CapturingWidget;  // Offset: 184 Size: 8
	struct FEventReply ReturnValue;  // Offset: 192 Size: 184



 // Functions 
 public:
}; 
 
 //Function UMG.Widget.GetOwningLocalPlayer Size 8
class FGetOwningLocalPlayer
{

 public: 
	struct ULocalPlayer* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.PanelWidget.GetChildrenCount Size 4
class FGetChildrenCount
{

 public: 
	int32_t ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.Widget.SetRenderScale Size 8
class FSetRenderScale
{

 public: 
	struct FVector2D Scale;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarCloseButtonActive Size 1
class FSetWindowTitleBarCloseButtonActive
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bActive : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct UMG.RadialBoxSettings Size 16
class FRadialBoxSettings
{

 public: 
	float StartingAngle;  // Offset: 0 Size: 4
	char pad_4_1 : 7;  // Offset: 4 Size: 1
	bool bDistributeItemsEvenly : 1;  // Offset: 4 Size: 1
	char pad_5[3];  // Offset: 5 Size: 3
	float AngleBetweenItems;  // Offset: 8 Size: 4
	float SectorCentralAngle;  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetSwitcher.GetWidgetAtIndex Size 16
class FGetWidgetAtIndex
{

 public: 
	int32_t Index;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct UWidget* ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.Widget.SetRenderTranslation Size 8
class FSetRenderTranslation
{

 public: 
	struct FVector2D Translation;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.Widget.GetOwningPlayer Size 8
class FGetOwningPlayer
{

 public: 
	struct APlayerController* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.UserWidget.GetAnchorsInViewport Size 16
class FGetAnchorsInViewport
{

 public: 
	struct FAnchors ReturnValue;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function UMG.Widget.GetPaintSpaceGeometry Size 56
class FGetPaintSpaceGeometry
{

 public: 
	struct FGeometry ReturnValue;  // Offset: 0 Size: 56



 // Functions 
 public:
}; 
 
 //Function UMG.Widget.GetParent Size 8
class FGetParent
{

 public: 
	struct UPanelWidget* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetComponent.GetWindowVisiblility Size 1
class FGetWindowVisiblility
{

 public: 
	enum class EWindowVisibility ReturnValue;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.UserListEntryLibrary.IsListItemExpanded Size 24
class FIsListItemExpanded
{

 public: 
	struct TScriptInterface<IUserListEntry> UserListEntry;  // Offset: 0 Size: 16
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool ReturnValue : 1;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //Function UMG.Image.SetOpacity Size 4
class FSetOpacity
{

 public: 
	float InOpacity;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.Widget.GetRenderOpacity Size 4
class FGetRenderOpacity
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetBlueprintLibrary.DrawTextFormatted Size 120
class FDrawTextFormatted
{

 public: 
	struct FPaintContext Context;  // Offset: 0 Size: 48
	struct FText Text;  // Offset: 48 Size: 24
	struct FVector2D position;  // Offset: 72 Size: 8
	struct UFont* Font;  // Offset: 80 Size: 8
	int32_t FontSize;  // Offset: 88 Size: 4
	struct FName FontTypeFace;  // Offset: 92 Size: 8
	struct FLinearColor Tint;  // Offset: 100 Size: 16
	char pad_116[4];  // Offset: 116 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.Widget.GetRenderTransformAngle Size 4
class FGetRenderTransformAngle
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //DelegateFunction UMG.OnVisibilityChangedEvent__DelegateSignature Size 1
class FOnVisibilityChangedEvent__DelegateSignature
{

 public: 
	enum class ESlateVisibility InVisibility;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.MenuAnchor.Open Size 1
class FOpen
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bFocusMenu : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.Widget.IsVisible Size 1
class FIsVisible
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.MenuAnchor.ToggleOpen Size 1
class FToggleOpen
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bFocusOnOpen : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.CanvasPanelSlot.SetOffsets Size 16
class FSetOffsets
{

 public: 
	struct FMargin InOffset;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //DelegateFunction UMG.Widget.GetSlateBrush__DelegateSignature Size 136
class FGetSlateBrush__DelegateSignature
{

 public: 
	struct FSlateBrush ReturnValue;  // Offset: 0 Size: 136



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetComponent.SetTickMode Size 1
class FSetTickMode
{

 public: 
	enum class ETickMode InTickMode;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.Widget.HasFocusedDescendants Size 1
class FHasFocusedDescendants
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.ScaleBox.SetUserSpecifiedScale Size 4
class FSetUserSpecifiedScale
{

 public: 
	float InUserSpecifiedScale;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.SpinBox.SetMinFractionalDigits Size 4
class FSetMinFractionalDigits
{

 public: 
	int32_t NewValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //DelegateFunction UMG.Widget.GetWidget__DelegateSignature Size 8
class FGetWidget__DelegateSignature
{

 public: 
	struct UWidget* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.Widget.GetTickSpaceGeometry Size 56
class FGetTickSpaceGeometry
{

 public: 
	struct FGeometry ReturnValue;  // Offset: 0 Size: 56



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetAnimation.BindToAnimationStarted Size 24
class FBindToAnimationStarted
{

 public: 
	struct UUserWidget* Widget;  // Offset: 0 Size: 8
	struct FDelegate Delegate;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function UMG.ScaleBox.SetStretch Size 1
class FSetStretch
{

 public: 
	enum class EStretch InStretch;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //DelegateFunction UMG.Widget.GetSlateColor__DelegateSignature Size 40
class FGetSlateColor__DelegateSignature
{

 public: 
	struct FSlateColor ReturnValue;  // Offset: 0 Size: 40



 // Functions 
 public:
}; 
 
 //ScriptStruct UMG.RichImageRow Size 144
// Inherited 8 bytes 
class FRichImageRow : public FTableRowBase
{

 public: 
	struct FSlateBrush Brush;  // Offset: 8 Size: 136



 // Functions 
 public:
}; 
 
 //Function UMG.UserListEntryLibrary.IsListItemSelected Size 24
class FIsListItemSelected
{

 public: 
	struct TScriptInterface<IUserListEntry> UserListEntry;  // Offset: 0 Size: 16
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool ReturnValue : 1;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //Function UMG.Widget.GetVisibility Size 1
class FGetVisibility
{

 public: 
	enum class ESlateVisibility ReturnValue;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.Widget.HasAnyUserFocus Size 1
class FHasAnyUserFocus
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.Slider.SetValue Size 4
class FSetValue
{

 public: 
	float InValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.Image.SetBrushSize Size 8
class FSetBrushSize
{

 public: 
	struct FVector2D DesiredSize;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.Widget.HasMouseCaptureByUser Size 12
class FHasMouseCaptureByUser
{

 public: 
	int32_t UserIndex;  // Offset: 0 Size: 4
	int32_t PointerIndex;  // Offset: 4 Size: 4
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool ReturnValue : 1;  // Offset: 8 Size: 1
	char pad_9[3];  // Offset: 9 Size: 3



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetBlueprintLibrary.GetInputEventFromKeyEvent Size 80
class FGetInputEventFromKeyEvent
{

 public: 
	struct FKeyEvent Event;  // Offset: 0 Size: 56
	struct FInputEvent ReturnValue;  // Offset: 56 Size: 24



 // Functions 
 public:
}; 
 
 //Function UMG.ListView.BP_GetSelectedItem Size 8
class FBP_GetSelectedItem
{

 public: 
	struct UObject* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.Widget.HasKeyboardFocus Size 1
class FHasKeyboardFocus
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.Widget.HasUserFocusedDescendants Size 16
class FHasUserFocusedDescendants
{

 public: 
	struct APlayerController* PlayerController;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool ReturnValue : 1;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetLayoutLibrary.GetViewportSize Size 16
class FGetViewportSize
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct FVector2D ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.Widget.SetRenderOpacity Size 4
class FSetRenderOpacity
{

 public: 
	float InOpacity;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetBinding.GetValue Size 8
class FGetValue
{

 public: 
	struct UWidget* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.UserWidget.GetOwningPlayerPawn Size 8
class FGetOwningPlayerPawn
{

 public: 
	struct APawn* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.Widget.IsHovered Size 1
class FIsHovered
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.ListView.BP_SetListItems Size 16
class FBP_SetListItems
{

 public: 
	struct TArray<struct UObject*> InListItems;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //DelegateFunction UMG.Widget.OnPointerEvent__DelegateSignature Size 352
class FOnPointerEvent__DelegateSignature
{

 public: 
	struct FGeometry MyGeometry;  // Offset: 0 Size: 56
	struct FPointerEvent MouseEvent;  // Offset: 56 Size: 112
	struct FEventReply ReturnValue;  // Offset: 168 Size: 184



 // Functions 
 public:
}; 
 
 //ScriptStruct UMG.EventReply Size 184
class FEventReply
{

 public: 
	char pad_0[184];  // Offset: 0 Size: 184



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetBlueprintLibrary.ReleaseMouseCapture Size 368
class FReleaseMouseCapture
{

 public: 
	struct FEventReply Reply;  // Offset: 0 Size: 184
	struct FEventReply ReturnValue;  // Offset: 184 Size: 184



 // Functions 
 public:
}; 
 
 //Function UMG.Widget.SetRenderTransform Size 28
class FSetRenderTransform
{

 public: 
	struct FWidgetTransform InTransform;  // Offset: 0 Size: 28



 // Functions 
 public:
}; 
 
 //Function UMG.UserWidget.OnTouchEnded Size 352
class FOnTouchEnded
{

 public: 
	struct FGeometry MyGeometry;  // Offset: 0 Size: 56
	struct FPointerEvent InTouchEvent;  // Offset: 56 Size: 112
	struct FEventReply ReturnValue;  // Offset: 168 Size: 184



 // Functions 
 public:
}; 
 
 //DelegateFunction UMG.Widget.OnReply__DelegateSignature Size 184
class FOnReply__DelegateSignature
{

 public: 
	struct FEventReply ReturnValue;  // Offset: 0 Size: 184



 // Functions 
 public:
}; 
 
 //DelegateFunction UMG.OnExpandableAreaExpansionChanged__DelegateSignature Size 16
class FOnExpandableAreaExpansionChanged__DelegateSignature
{

 public: 
	struct UExpandableArea* Area;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool bIsExpanded : 1;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7



 // Functions 
 public:
}; 
 
 //Function UMG.Widget.SetRenderTransformPivot Size 8
class FSetRenderTransformPivot
{

 public: 
	struct FVector2D Pivot;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.InputKeySelector.SetKeySelectionText Size 24
class FSetKeySelectionText
{

 public: 
	struct FText InKeySelectionText;  // Offset: 0 Size: 24



 // Functions 
 public:
}; 
 
 //Function UMG.Widget.SetNavigationRule Size 12
class FSetNavigationRule
{

 public: 
	enum class EUINavigation Direction;  // Offset: 0 Size: 1
	enum class EUINavigationRule Rule;  // Offset: 1 Size: 1
	char pad_2[2];  // Offset: 2 Size: 2
	struct FName WidgetToFocus;  // Offset: 4 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.Widget.SetAllNavigationRules Size 12
class FSetAllNavigationRules
{

 public: 
	enum class EUINavigationRule Rule;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	struct FName WidgetToFocus;  // Offset: 4 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.UserWidget.OnMouseButtonDoubleClick Size 352
class FOnMouseButtonDoubleClick
{

 public: 
	struct FGeometry InMyGeometry;  // Offset: 0 Size: 56
	struct FPointerEvent InMouseEvent;  // Offset: 56 Size: 112
	struct FEventReply ReturnValue;  // Offset: 168 Size: 184



 // Functions 
 public:
}; 
 
 //Function UMG.Widget.SetNavigationRuleBase Size 2
class FSetNavigationRuleBase
{

 public: 
	enum class EUINavigation Direction;  // Offset: 0 Size: 1
	enum class EUINavigationRule Rule;  // Offset: 1 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.Widget.SetNavigationRuleCustom Size 20
class FSetNavigationRuleCustom
{

 public: 
	enum class EUINavigation Direction;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	struct FDelegate InCustomDelegate;  // Offset: 4 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct UMG.WidgetTransform Size 28
class FWidgetTransform
{

 public: 
	struct FVector2D Translation;  // Offset: 0 Size: 8
	struct FVector2D Scale;  // Offset: 8 Size: 8
	struct FVector2D Shear;  // Offset: 16 Size: 8
	float Angle;  // Offset: 24 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct UMG.WidgetNavigationData Size 36
class FWidgetNavigationData
{

 public: 
	enum class EUINavigationRule Rule;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	struct FName WidgetToFocus;  // Offset: 4 Size: 8
	struct TWeakObjectPtr<UWidget> Widget;  // Offset: 12 Size: 8
	struct FDelegate CustomDelegate;  // Offset: 20 Size: 16



 // Functions 
 public:
}; 
 
 //Function UMG.Widget.SetNavigationRuleExplicit Size 16
class FSetNavigationRuleExplicit
{

 public: 
	enum class EUINavigation Direction;  // Offset: 0 Size: 1
	char pad_1[7];  // Offset: 1 Size: 7
	struct UWidget* InWidget;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.Widget.SetRenderShear Size 8
class FSetRenderShear
{

 public: 
	struct FVector2D Shear;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.UserWidget.OnTouchStarted Size 352
class FOnTouchStarted
{

 public: 
	struct FGeometry MyGeometry;  // Offset: 0 Size: 56
	struct FPointerEvent InTouchEvent;  // Offset: 56 Size: 112
	struct FEventReply ReturnValue;  // Offset: 168 Size: 184



 // Functions 
 public:
}; 
 
 //Function UMG.Widget.SetRenderTransformAngle Size 4
class FSetRenderTransformAngle
{

 public: 
	float Angle;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct UMG.WidgetAnimationBinding Size 36
class FWidgetAnimationBinding
{

 public: 
	struct FName WidgetName;  // Offset: 0 Size: 8
	struct FName SlotWidgetName;  // Offset: 8 Size: 8
	struct FGuid AnimationGuid;  // Offset: 16 Size: 16
	char pad_32_1 : 7;  // Offset: 32 Size: 1
	bool bIsRootWidget : 1;  // Offset: 32 Size: 1
	char pad_33[3];  // Offset: 33 Size: 3



 // Functions 
 public:
}; 
 
 //Function UMG.Widget.SetToolTip Size 8
class FSetToolTip
{

 public: 
	struct UWidget* Widget;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetAnimation.UnbindAllFromAnimationStarted Size 8
class FUnbindAllFromAnimationStarted
{

 public: 
	struct UUserWidget* Widget;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.Widget.SetVisibility Size 1
class FSetVisibility
{

 public: 
	enum class ESlateVisibility InVisibility;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //DelegateFunction UMG.ComboBoxString.OnSelectionChangedEvent__DelegateSignature Size 24
class FOnSelectionChangedEvent__DelegateSignature
{

 public: 
	struct FString SelectedItem;  // Offset: 0 Size: 16
	enum class ESelectInfo SelectionType;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetBlueprintLibrary.NoResourceBrush Size 136
class FNoResourceBrush
{

 public: 
	struct FSlateBrush ReturnValue;  // Offset: 0 Size: 136



 // Functions 
 public:
}; 
 
 //DelegateFunction UMG.DownloadImageDelegate__DelegateSignature Size 8
class FDownloadImageDelegate__DelegateSignature
{

 public: 
	struct UTexture2DDynamic* Texture;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //DelegateFunction UMG.OnDragDropMulticast__DelegateSignature Size 8
class FOnDragDropMulticast__DelegateSignature
{

 public: 
	struct UDragDropOperation* Operation;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetBlueprintLibrary.CaptureMouse Size 376
class FCaptureMouse
{

 public: 
	struct FEventReply Reply;  // Offset: 0 Size: 184
	struct UWidget* CapturingWidget;  // Offset: 184 Size: 8
	struct FEventReply ReturnValue;  // Offset: 192 Size: 184



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetBlueprintLibrary.MakeBrushFromMaterial Size 152
class FMakeBrushFromMaterial
{

 public: 
	struct UMaterialInterface* Material;  // Offset: 0 Size: 8
	int32_t Width;  // Offset: 8 Size: 4
	int32_t Height;  // Offset: 12 Size: 4
	struct FSlateBrush ReturnValue;  // Offset: 16 Size: 136



 // Functions 
 public:
}; 
 
 //Function UMG.TextBinding.GetStringValue Size 16
class FGetStringValue
{

 public: 
	struct FString ReturnValue;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetBlueprintLibrary.ClearUserFocus Size 376
class FClearUserFocus
{

 public: 
	struct FEventReply Reply;  // Offset: 0 Size: 184
	char pad_184_1 : 7;  // Offset: 184 Size: 1
	bool bInAllUsers : 1;  // Offset: 184 Size: 1
	char pad_185[7];  // Offset: 185 Size: 7
	struct FEventReply ReturnValue;  // Offset: 192 Size: 184



 // Functions 
 public:
}; 
 
 //Function UMG.UserWidget.AddToViewport Size 4
class FAddToViewport
{

 public: 
	int32_t ZOrder;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.EditableTextBox.HasError Size 1
class FHasError
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.SpinBox.SetMaxSliderValue Size 4
class FSetMaxSliderValue
{

 public: 
	float NewValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.CheckBox.IsPressed Size 1
class FIsPressed
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetBlueprintLibrary.Create Size 32
class FCreate
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	UUserWidget* WidgetType;  // Offset: 8 Size: 8
	struct APlayerController* OwningPlayer;  // Offset: 16 Size: 8
	struct UUserWidget* ReturnValue;  // Offset: 24 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.PanelWidget.GetAllChildren Size 16
class FGetAllChildren
{

 public: 
	struct TArray<struct UWidget*> ReturnValue;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function UMG.UserWidget.SetForegroundColor Size 40
class FSetForegroundColor
{

 public: 
	struct FSlateColor InForegroundColor;  // Offset: 0 Size: 40



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetBlueprintLibrary.CreateDragDropOperation Size 16
class FCreateDragDropOperation
{

 public: 
	UDragDropOperation* OperationClass;  // Offset: 0 Size: 8
	struct UDragDropOperation* ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.InputKeySelector.SetAllowGamepadKeys Size 1
class FSetAllowGamepadKeys
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bInAllowGamepadKeys : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.UniformGridPanel.SetSlotPadding Size 16
class FSetSlotPadding
{

 public: 
	struct FMargin InSlotPadding;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetBlueprintLibrary.DetectDrag Size 400
class FDetectDrag
{

 public: 
	struct FEventReply Reply;  // Offset: 0 Size: 184
	struct UWidget* WidgetDetectingDrag;  // Offset: 184 Size: 8
	struct FKey DragKey;  // Offset: 192 Size: 24
	struct FEventReply ReturnValue;  // Offset: 216 Size: 184



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetBlueprintLibrary.DetectDragIfPressed Size 328
class FDetectDragIfPressed
{

 public: 
	struct FPointerEvent PointerEvent;  // Offset: 0 Size: 112
	struct UWidget* WidgetDetectingDrag;  // Offset: 112 Size: 8
	struct FKey DragKey;  // Offset: 120 Size: 24
	struct FEventReply ReturnValue;  // Offset: 144 Size: 184



 // Functions 
 public:
}; 
 
 //Function UMG.ScrollBox.ScrollWidgetIntoView Size 16
class FScrollWidgetIntoView
{

 public: 
	struct UWidget* WidgetToFind;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool AnimateScroll : 1;  // Offset: 8 Size: 1
	enum class EDescendantScrollDestination ScrollDestination;  // Offset: 9 Size: 1
	char pad_10[2];  // Offset: 10 Size: 2
	float Padding;  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetBlueprintLibrary.DrawBox Size 88
class FDrawBox
{

 public: 
	struct FPaintContext Context;  // Offset: 0 Size: 48
	struct FVector2D position;  // Offset: 48 Size: 8
	struct FVector2D Size;  // Offset: 56 Size: 8
	struct USlateBrushAsset* Brush;  // Offset: 64 Size: 8
	struct FLinearColor Tint;  // Offset: 72 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct UMG.PaintContext Size 48
class FPaintContext
{

 public: 
	char pad_0[48];  // Offset: 0 Size: 48



 // Functions 
 public:
}; 
 
 //DelegateFunction UMG.OnListItemScrolledIntoViewDynamic__DelegateSignature Size 16
class FOnListItemScrolledIntoViewDynamic__DelegateSignature
{

 public: 
	struct UObject* Item;  // Offset: 0 Size: 8
	struct UUserWidget* Widget;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetBlueprintLibrary.DrawLine Size 88
class FDrawLine
{

 public: 
	struct FPaintContext Context;  // Offset: 0 Size: 48
	struct FVector2D PositionA;  // Offset: 48 Size: 8
	struct FVector2D PositionB;  // Offset: 56 Size: 8
	struct FLinearColor Tint;  // Offset: 64 Size: 16
	char pad_80_1 : 7;  // Offset: 80 Size: 1
	bool bAntiAlias : 1;  // Offset: 80 Size: 1
	char pad_81[3];  // Offset: 81 Size: 3
	float Thickness;  // Offset: 84 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetBlueprintLibrary.DrawLines Size 88
class FDrawLines
{

 public: 
	struct FPaintContext Context;  // Offset: 0 Size: 48
	struct TArray<struct FVector2D> Points;  // Offset: 48 Size: 16
	struct FLinearColor Tint;  // Offset: 64 Size: 16
	char pad_80_1 : 7;  // Offset: 80 Size: 1
	bool bAntiAlias : 1;  // Offset: 80 Size: 1
	char pad_81[3];  // Offset: 81 Size: 3
	float Thickness;  // Offset: 84 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetBlueprintLibrary.DrawText Size 88
class FDrawText
{

 public: 
	struct FPaintContext Context;  // Offset: 0 Size: 48
	struct FString inString;  // Offset: 48 Size: 16
	struct FVector2D position;  // Offset: 64 Size: 8
	struct FLinearColor Tint;  // Offset: 72 Size: 16



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetBlueprintLibrary.EndDragDrop Size 368
class FEndDragDrop
{

 public: 
	struct FEventReply Reply;  // Offset: 0 Size: 184
	struct FEventReply ReturnValue;  // Offset: 184 Size: 184



 // Functions 
 public:
}; 
 
 //Function UMG.CanvasPanelSlot.SetAutoSize Size 1
class FSetAutoSize
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool InbAutoSize : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetBlueprintLibrary.GetAllWidgetsWithInterface Size 40
class FGetAllWidgetsWithInterface
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct TArray<struct UUserWidget*> FoundWidgets;  // Offset: 8 Size: 16
	UInterface* Interface;  // Offset: 24 Size: 8
	char pad_32_1 : 7;  // Offset: 32 Size: 1
	bool TopLevelOnly : 1;  // Offset: 32 Size: 1
	char pad_33[7];  // Offset: 33 Size: 7



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetInteractionComponent.PressAndReleaseKey Size 32
class FPressAndReleaseKey
{

 public: 
	struct FKey Key;  // Offset: 0 Size: 24
	char pad_24_1 : 7;  // Offset: 24 Size: 1
	bool ReturnValue : 1;  // Offset: 24 Size: 1
	char pad_25[7];  // Offset: 25 Size: 7



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetBlueprintLibrary.GetBrushResource Size 144
class FGetBrushResource
{

 public: 
	struct FSlateBrush Brush;  // Offset: 0 Size: 136
	struct UObject* ReturnValue;  // Offset: 136 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetBlueprintLibrary.Handled Size 184
class FHandled
{

 public: 
	struct FEventReply ReturnValue;  // Offset: 0 Size: 184



 // Functions 
 public:
}; 
 
 //Function UMG.PanelWidget.GetChildIndex Size 16
class FGetChildIndex
{

 public: 
	struct UWidget* Content;  // Offset: 0 Size: 8
	int32_t ReturnValue;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.CheckBox.GetCheckedState Size 1
class FGetCheckedState
{

 public: 
	enum class ECheckBoxState ReturnValue;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.SpinBox.SetAlwaysUsesDeltaSnap Size 1
class FSetAlwaysUsesDeltaSnap
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bNewValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsMaterial Size 144
class FGetBrushResourceAsMaterial
{

 public: 
	struct FSlateBrush Brush;  // Offset: 0 Size: 136
	struct UMaterialInterface* ReturnValue;  // Offset: 136 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsTexture2D Size 144
class FGetBrushResourceAsTexture2D
{

 public: 
	struct FSlateBrush Brush;  // Offset: 0 Size: 136
	struct UTexture2D* ReturnValue;  // Offset: 136 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.Border.SetContentColorAndOpacity Size 16
class FSetContentColorAndOpacity
{

 public: 
	struct FLinearColor InContentColorAndOpacity;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetBlueprintLibrary.GetDragDroppingContent Size 8
class FGetDragDroppingContent
{

 public: 
	struct UDragDropOperation* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetBlueprintLibrary.SetHardwareCursor Size 32
class FSetHardwareCursor
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	enum class EMouseCursor CursorShape;  // Offset: 8 Size: 1
	char pad_9[3];  // Offset: 9 Size: 3
	struct FName CursorName;  // Offset: 12 Size: 8
	struct FVector2D HotSpot;  // Offset: 20 Size: 8
	char pad_28_1 : 7;  // Offset: 28 Size: 1
	bool ReturnValue : 1;  // Offset: 28 Size: 1
	char pad_29[3];  // Offset: 29 Size: 3



 // Functions 
 public:
}; 
 
 //Function UMG.ListView.GetItemAt Size 16
class FGetItemAt
{

 public: 
	int32_t Index;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct UObject* ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.Border.GetDynamicMaterial Size 8
class FGetDynamicMaterial
{

 public: 
	struct UMaterialInstanceDynamic* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetBlueprintLibrary.GetInputEventFromCharacterEvent Size 56
class FGetInputEventFromCharacterEvent
{

 public: 
	struct FCharacterEvent Event;  // Offset: 0 Size: 32
	struct FInputEvent ReturnValue;  // Offset: 32 Size: 24



 // Functions 
 public:
}; 
 
 //Function UMG.UserWidget.OnTouchMoved Size 352
class FOnTouchMoved
{

 public: 
	struct FGeometry MyGeometry;  // Offset: 0 Size: 56
	struct FPointerEvent InTouchEvent;  // Offset: 56 Size: 112
	struct FEventReply ReturnValue;  // Offset: 168 Size: 184



 // Functions 
 public:
}; 
 
 //Function UMG.SizeBox.SetMinDesiredWidth Size 4
class FSetMinDesiredWidth
{

 public: 
	float InMinDesiredWidth;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.ScrollBox.SetAlwaysShowScrollbar Size 1
class FSetAlwaysShowScrollbar
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool NewAlwaysShowScrollbar : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetBlueprintLibrary.GetInputEventFromNavigationEvent Size 56
class FGetInputEventFromNavigationEvent
{

 public: 
	struct FNavigationEvent Event;  // Offset: 0 Size: 32
	struct FInputEvent ReturnValue;  // Offset: 32 Size: 24



 // Functions 
 public:
}; 
 
 //Function UMG.UserWidget.OnAnimationStarted Size 8
class FOnAnimationStarted
{

 public: 
	struct UWidgetAnimation* Animation;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetBlueprintLibrary.GetInputEventFromPointerEvent Size 136
class FGetInputEventFromPointerEvent
{

 public: 
	struct FPointerEvent Event;  // Offset: 0 Size: 112
	struct FInputEvent ReturnValue;  // Offset: 112 Size: 24



 // Functions 
 public:
}; 
 
 //Function UMG.SlateBlueprintLibrary.ScreenToViewport Size 24
class FScreenToViewport
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct FVector2D ScreenPosition;  // Offset: 8 Size: 8
	struct FVector2D ViewportPosition;  // Offset: 16 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetBlueprintLibrary.GetKeyEventFromAnalogInputEvent Size 120
class FGetKeyEventFromAnalogInputEvent
{

 public: 
	struct FAnalogInputEvent Event;  // Offset: 0 Size: 64
	struct FKeyEvent ReturnValue;  // Offset: 64 Size: 56



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetBlueprintLibrary.GetSafeZonePadding Size 64
class FGetSafeZonePadding
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	char pad_8[8];  // Offset: 8 Size: 8
	struct FVector4 SafePadding;  // Offset: 16 Size: 16
	struct FVector2D SafePaddingScale;  // Offset: 32 Size: 8
	char pad_40[8];  // Offset: 40 Size: 8
	struct FVector4 SpillOverPadding;  // Offset: 48 Size: 16



 // Functions 
 public:
}; 
 
 //Function UMG.ListView.NavigateToIndex Size 4
class FNavigateToIndex
{

 public: 
	int32_t Index;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.Image.SetBrushFromTextureDynamic Size 16
class FSetBrushFromTextureDynamic
{

 public: 
	struct UTexture2DDynamic* Texture;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool bMatchSize : 1;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetBlueprintLibrary.IsDragDropping Size 1
class FIsDragDropping
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetBlueprintLibrary.MakeBrushFromAsset Size 144
class FMakeBrushFromAsset
{

 public: 
	struct USlateBrushAsset* BrushAsset;  // Offset: 0 Size: 8
	struct FSlateBrush ReturnValue;  // Offset: 8 Size: 136



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetBlueprintLibrary.ReleaseJoystickCapture Size 376
class FReleaseJoystickCapture
{

 public: 
	struct FEventReply Reply;  // Offset: 0 Size: 184
	char pad_184_1 : 7;  // Offset: 184 Size: 1
	bool bInAllJoysticks : 1;  // Offset: 184 Size: 1
	char pad_185[7];  // Offset: 185 Size: 7
	struct FEventReply ReturnValue;  // Offset: 192 Size: 184



 // Functions 
 public:
}; 
 
 //Function UMG.TileView.SetEntryHeight Size 4
class FSetEntryHeight
{

 public: 
	float NewHeight;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetBlueprintLibrary.SetBrushResourceToMaterial Size 144
class FSetBrushResourceToMaterial
{

 public: 
	struct FSlateBrush Brush;  // Offset: 0 Size: 136
	struct UMaterialInterface* Material;  // Offset: 136 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.Image.SetBrushFromAtlasInterface Size 24
class FSetBrushFromAtlasInterface
{

 public: 
	struct TScriptInterface<ISlateTextureAtlasInterface> AtlasRegion;  // Offset: 0 Size: 16
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool bMatchSize : 1;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetBlueprintLibrary.SetBrushResourceToTexture Size 144
class FSetBrushResourceToTexture
{

 public: 
	struct FSlateBrush Brush;  // Offset: 0 Size: 136
	struct UTexture2D* Texture;  // Offset: 136 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.UniformGridPanel.SetMinDesiredSlotWidth Size 4
class FSetMinDesiredSlotWidth
{

 public: 
	float InMinDesiredSlotWidth;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetBlueprintLibrary.SetColorVisionDeficiencyType Size 12
class FSetColorVisionDeficiencyType
{

 public: 
	enum class EColorVisionDeficiency Type;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	float Severity;  // Offset: 4 Size: 4
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool CorrectDeficiency : 1;  // Offset: 8 Size: 1
	char pad_9_1 : 7;  // Offset: 9 Size: 1
	bool ShowCorrectionWithDeficiency : 1;  // Offset: 9 Size: 1
	char pad_10[2];  // Offset: 10 Size: 2



 // Functions 
 public:
}; 
 
 //Function UMG.DynamicEntryBoxBase.GetNumEntries Size 4
class FGetNumEntries
{

 public: 
	int32_t ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUI Size 24
class FSetInputMode_GameAndUI
{

 public: 
	struct APlayerController* Target;  // Offset: 0 Size: 8
	struct UWidget* InWidgetToFocus;  // Offset: 8 Size: 8
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool bLockMouseToViewport : 1;  // Offset: 16 Size: 1
	char pad_17_1 : 7;  // Offset: 17 Size: 1
	bool bHideCursorDuringCapture : 1;  // Offset: 17 Size: 1
	char pad_18[6];  // Offset: 18 Size: 6



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUIEx Size 24
class FSetInputMode_GameAndUIEx
{

 public: 
	struct APlayerController* PlayerController;  // Offset: 0 Size: 8
	struct UWidget* InWidgetToFocus;  // Offset: 8 Size: 8
	enum class EMouseLockMode InMouseLockMode;  // Offset: 16 Size: 1
	char pad_17_1 : 7;  // Offset: 17 Size: 1
	bool bHideCursorDuringCapture : 1;  // Offset: 17 Size: 1
	char pad_18[6];  // Offset: 18 Size: 6



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetComponent.SetTickWhenOffscreen Size 1
class FSetTickWhenOffscreen
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bWantTickWhenOffscreen : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetBlueprintLibrary.SetInputMode_GameOnly Size 8
class FSetInputMode_GameOnly
{

 public: 
	struct APlayerController* PlayerController;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.Slider.GetNormalizedValue Size 4
class FGetNormalizedValue
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.ListView.ScrollIndexIntoView Size 4
class FScrollIndexIntoView
{

 public: 
	int32_t Index;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnly Size 24
class FSetInputMode_UIOnly
{

 public: 
	struct APlayerController* Target;  // Offset: 0 Size: 8
	struct UWidget* InWidgetToFocus;  // Offset: 8 Size: 8
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool bLockMouseToViewport : 1;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //Function UMG.UserWidget.OnTouchGesture Size 352
class FOnTouchGesture
{

 public: 
	struct FGeometry MyGeometry;  // Offset: 0 Size: 56
	struct FPointerEvent GestureEvent;  // Offset: 56 Size: 112
	struct FEventReply ReturnValue;  // Offset: 168 Size: 184



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnlyEx Size 24
class FSetInputMode_UIOnlyEx
{

 public: 
	struct APlayerController* PlayerController;  // Offset: 0 Size: 8
	struct UWidget* InWidgetToFocus;  // Offset: 8 Size: 8
	enum class EMouseLockMode InMouseLockMode;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //DelegateFunction UMG.OnGetItemChildrenDynamic__DelegateSignature Size 24
class FOnGetItemChildrenDynamic__DelegateSignature
{

 public: 
	struct UObject* Item;  // Offset: 0 Size: 8
	struct TArray<struct UObject*> Children;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function UMG.CanvasPanelSlot.GetZOrder Size 4
class FGetZOrder
{

 public: 
	int32_t ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.CanvasPanelSlot.SetLayout Size 40
class FSetLayout
{

 public: 
	struct FAnchorData InLayoutData;  // Offset: 0 Size: 40



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetBlueprintLibrary.SetMousePosition Size 376
class FSetMousePosition
{

 public: 
	struct FEventReply Reply;  // Offset: 0 Size: 184
	struct FVector2D NewMousePosition;  // Offset: 184 Size: 8
	struct FEventReply ReturnValue;  // Offset: 192 Size: 184



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarOnCloseClickedDelegate Size 16
class FSetWindowTitleBarOnCloseClickedDelegate
{

 public: 
	struct FDelegate Delegate;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarState Size 16
class FSetWindowTitleBarState
{

 public: 
	struct UWidget* TitleBarContent;  // Offset: 0 Size: 8
	enum class EWindowTitleBarMode Mode;  // Offset: 8 Size: 1
	char pad_9_1 : 7;  // Offset: 9 Size: 1
	bool bTitleBarDragEnabled : 1;  // Offset: 9 Size: 1
	char pad_10_1 : 7;  // Offset: 10 Size: 1
	bool bWindowButtonsVisible : 1;  // Offset: 10 Size: 1
	char pad_11_1 : 7;  // Offset: 11 Size: 1
	bool bTitleBarVisible : 1;  // Offset: 11 Size: 1
	char pad_12[4];  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetBlueprintLibrary.Unhandled Size 184
class FUnhandled
{

 public: 
	struct FEventReply ReturnValue;  // Offset: 0 Size: 184



 // Functions 
 public:
}; 
 
 //ScriptStruct UMG.AnchorData Size 40
class FAnchorData
{

 public: 
	struct FMargin Offsets;  // Offset: 0 Size: 16
	struct FAnchors Anchors;  // Offset: 16 Size: 16
	struct FVector2D Alignment;  // Offset: 32 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetInteractionComponent.PressPointerKey Size 24
class FPressPointerKey
{

 public: 
	struct FKey Key;  // Offset: 0 Size: 24



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetBlueprintLibrary.UnlockMouse Size 368
class FUnlockMouse
{

 public: 
	struct FEventReply Reply;  // Offset: 0 Size: 184
	struct FEventReply ReturnValue;  // Offset: 184 Size: 184



 // Functions 
 public:
}; 
 
 //Function UMG.RichTextBlock.GetText Size 24
class FGetText
{

 public: 
	struct FText ReturnValue;  // Offset: 0 Size: 24



 // Functions 
 public:
}; 
 
 //DelegateFunction UMG.OnCheckBoxComponentStateChanged__DelegateSignature Size 1
class FOnCheckBoxComponentStateChanged__DelegateSignature
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bIsChecked : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.ComboBoxString.AddOption Size 16
class FAddOption
{

 public: 
	struct FString Option;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function UMG.CanvasPanelSlot.SetZOrder Size 4
class FSetZOrder
{

 public: 
	int32_t InZOrder;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.ComboBoxString.FindOptionIndex Size 24
class FFindOptionIndex
{

 public: 
	struct FString Option;  // Offset: 0 Size: 16
	int32_t ReturnValue;  // Offset: 16 Size: 4
	char pad_20[4];  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.ComboBoxString.GetOptionAtIndex Size 24
class FGetOptionAtIndex
{

 public: 
	int32_t Index;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct FString ReturnValue;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //DelegateFunction UMG.SpinBox.OnSpinBoxValueCommittedEvent__DelegateSignature Size 8
class FOnSpinBoxValueCommittedEvent__DelegateSignature
{

 public: 
	float InValue;  // Offset: 0 Size: 4
	enum class ETextCommit CommitMethod;  // Offset: 4 Size: 1
	char pad_5[3];  // Offset: 5 Size: 3



 // Functions 
 public:
}; 
 
 //Function UMG.ComboBoxString.GetOptionCount Size 4
class FGetOptionCount
{

 public: 
	int32_t ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.GridSlot.SetNudge Size 8
class FSetNudge
{

 public: 
	struct FVector2D InNudge;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.ComboBoxString.GetSelectedIndex Size 4
class FGetSelectedIndex
{

 public: 
	int32_t ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.ComboBoxString.GetSelectedOption Size 16
class FGetSelectedOption
{

 public: 
	struct FString ReturnValue;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function UMG.GridPanel.AddChildToGrid Size 24
class FAddChildToGrid
{

 public: 
	struct UWidget* Content;  // Offset: 0 Size: 8
	int32_t InRow;  // Offset: 8 Size: 4
	int32_t InColumn;  // Offset: 12 Size: 4
	struct UGridSlot* ReturnValue;  // Offset: 16 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.Throbber.SetAnimateVertically Size 1
class FSetAnimateVertically
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bInAnimateVertically : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.UserWidget.SetInputActionPriority Size 4
class FSetInputActionPriority
{

 public: 
	int32_t NewPriority;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.UserWidget.SetNumLoopsToPlay Size 16
class FSetNumLoopsToPlay
{

 public: 
	struct UWidgetAnimation* InAnimation;  // Offset: 0 Size: 8
	int32_t NumLoopsToPlay;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.SlateBlueprintLibrary.ScreenToWidgetAbsolute Size 32
class FScreenToWidgetAbsolute
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct FVector2D ScreenPosition;  // Offset: 8 Size: 8
	struct FVector2D AbsoluteCoordinate;  // Offset: 16 Size: 8
	char pad_24_1 : 7;  // Offset: 24 Size: 1
	bool bIncludeWindowPosition : 1;  // Offset: 24 Size: 1
	char pad_25[7];  // Offset: 25 Size: 7



 // Functions 
 public:
}; 
 
 //Function UMG.MenuAnchor.IsOpen Size 1
class FIsOpen
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.ComboBoxString.RemoveOption Size 24
class FRemoveOption
{

 public: 
	struct FString Option;  // Offset: 0 Size: 16
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool ReturnValue : 1;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //DelegateFunction UMG.OnFloatValueChangedEvent__DelegateSignature Size 4
class FOnFloatValueChangedEvent__DelegateSignature
{

 public: 
	float Value;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.ListView.SetSelectedIndex Size 4
class FSetSelectedIndex
{

 public: 
	int32_t Index;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.ComboBoxString.SetSelectedOption Size 16
class FSetSelectedOption
{

 public: 
	struct FString Option;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function UMG.UserWidget.OnMouseButtonDown Size 352
class FOnMouseButtonDown
{

 public: 
	struct FGeometry MyGeometry;  // Offset: 0 Size: 56
	struct FPointerEvent MouseEvent;  // Offset: 56 Size: 112
	struct FEventReply ReturnValue;  // Offset: 168 Size: 184



 // Functions 
 public:
}; 
 
 //Function UMG.ScrollBar.SetState Size 8
class FSetState
{

 public: 
	float InOffsetFraction;  // Offset: 0 Size: 4
	float InThumbSizeFraction;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //DelegateFunction UMG.EditableText.OnEditableTextChangedEvent__DelegateSignature Size 24
class FOnEditableTextChangedEvent__DelegateSignature
{

 public: 
	struct FText Text;  // Offset: 0 Size: 24



 // Functions 
 public:
}; 
 
 //DelegateFunction UMG.EditableText.OnEditableTextCommittedEvent__DelegateSignature Size 32
class FOnEditableTextCommittedEvent__DelegateSignature
{

 public: 
	struct FText Text;  // Offset: 0 Size: 24
	enum class ETextCommit CommitMethod;  // Offset: 24 Size: 1
	char pad_25[7];  // Offset: 25 Size: 7



 // Functions 
 public:
}; 
 
 //Function UMG.DynamicEntryBoxBase.GetAllEntries Size 16
class FGetAllEntries
{

 public: 
	struct TArray<struct UUserWidget*> ReturnValue;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetComponent.GetMaterialInstance Size 8
class FGetMaterialInstance
{

 public: 
	struct UMaterialInstanceDynamic* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.MultiLineEditableTextBox.SetHintText Size 24
class FSetHintText
{

 public: 
	struct FText InHintText;  // Offset: 0 Size: 24



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationTimeRangeProxyObject Size 56
class FCreatePlayAnimationTimeRangeProxyObject
{

 public: 
	struct UUMGSequencePlayer* Result;  // Offset: 0 Size: 8
	struct UUserWidget* Widget;  // Offset: 8 Size: 8
	struct UWidgetAnimation* InAnimation;  // Offset: 16 Size: 8
	float StartAtTime;  // Offset: 24 Size: 4
	float EndAtTime;  // Offset: 28 Size: 4
	int32_t NumLoopsToPlay;  // Offset: 32 Size: 4
	enum class EUMGSequencePlayMode PlayMode;  // Offset: 36 Size: 1
	char pad_37[3];  // Offset: 37 Size: 3
	float PlaybackSpeed;  // Offset: 40 Size: 4
	char pad_44[4];  // Offset: 44 Size: 4
	struct UWidgetAnimationPlayCallbackProxy* ReturnValue;  // Offset: 48 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.EditableTextBox.SetIsPassword Size 1
class FSetIsPassword
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bIsPassword : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.UserWidget.IsAnyAnimationPlaying Size 1
class FIsAnyAnimationPlaying
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.MultiLineEditableTextBox.SetIsReadOnly Size 1
class FSetIsReadOnly
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bReadOnly : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.ScaleBox.SetScaleToFitToUserSpecifiedScale Size 1
class FSetScaleToFitToUserSpecifiedScale
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bInScaleToFitToUserSpecifiedScale : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.TextLayoutWidget.SetJustification Size 1
class FSetJustification
{

 public: 
	enum class ETextJustify InJustification;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.RichTextBlock.SetText Size 24
class FSetText
{

 public: 
	struct FText InText;  // Offset: 0 Size: 24



 // Functions 
 public:
}; 
 
 //ScriptStruct UMG.ShapedTextOptions Size 3
class FShapedTextOptions
{

 public: 
	char bOverride_TextShapingMethod : 1;  // Offset: 0 Size: 1
	char bOverride_TextFlowDirection : 1;  // Offset: 0 Size: 1
	char pad_0_1 : 6;  // Offset: 0 Size: 1
	enum class ETextShapingMethod TextShapingMethod;  // Offset: 1 Size: 1
	enum class ETextFlowDirection TextFlowDirection;  // Offset: 2 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.UserWidget.GetAnimationCurrentTime Size 16
class FGetAnimationCurrentTime
{

 public: 
	struct UWidgetAnimation* InAnimation;  // Offset: 0 Size: 8
	float ReturnValue;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //DelegateFunction UMG.EditableTextBox.OnEditableTextBoxChangedEvent__DelegateSignature Size 24
class FOnEditableTextBoxChangedEvent__DelegateSignature
{

 public: 
	struct FText Text;  // Offset: 0 Size: 24



 // Functions 
 public:
}; 
 
 //DelegateFunction UMG.EditableTextBox.OnEditableTextBoxCommittedEvent__DelegateSignature Size 32
class FOnEditableTextBoxCommittedEvent__DelegateSignature
{

 public: 
	struct FText Text;  // Offset: 0 Size: 24
	enum class ETextCommit CommitMethod;  // Offset: 24 Size: 1
	char pad_25[7];  // Offset: 25 Size: 7



 // Functions 
 public:
}; 
 
 //Function UMG.MultiLineEditableTextBox.SetError Size 24
class FSetError
{

 public: 
	struct FText InError;  // Offset: 0 Size: 24



 // Functions 
 public:
}; 
 
 //Function UMG.InputKeySelector.GetIsSelectingKey Size 1
class FGetIsSelectingKey
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetComponent.SetGeometryMode Size 1
class FSetGeometryMode
{

 public: 
	enum class EWidgetGeometryMode InGeometryMode;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetComponent.SetWidgetSpace Size 1
class FSetWidgetSpace
{

 public: 
	enum class EWidgetSpace NewSpace;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //DelegateFunction UMG.InputKeySelector.OnKeySelected__DelegateSignature Size 32
class FOnKeySelected__DelegateSignature
{

 public: 
	struct FInputChord SelectedKey;  // Offset: 0 Size: 32



 // Functions 
 public:
}; 
 
 //Function UMG.InputKeySelector.SetAllowModifierKeys Size 1
class FSetAllowModifierKeys
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bInAllowModifierKeys : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.UserWidget.StopListeningForInputAction Size 12
class FStopListeningForInputAction
{

 public: 
	struct FName ActionName;  // Offset: 0 Size: 8
	enum class EInputEvent EventType;  // Offset: 8 Size: 1
	char pad_9[3];  // Offset: 9 Size: 3



 // Functions 
 public:
}; 
 
 //Function UMG.UserWidget.IsAnimationPlaying Size 16
class FIsAnimationPlaying
{

 public: 
	struct UWidgetAnimation* InAnimation;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool ReturnValue : 1;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7



 // Functions 
 public:
}; 
 
 //Function UMG.InputKeySelector.SetEscapeKeys Size 16
class FSetEscapeKeys
{

 public: 
	struct TArray<struct FKey> InKeys;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function UMG.SlateBlueprintLibrary.GetLocalTopLeft Size 64
class FGetLocalTopLeft
{

 public: 
	struct FGeometry Geometry;  // Offset: 0 Size: 56
	struct FVector2D ReturnValue;  // Offset: 56 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.InputKeySelector.SetNoKeySpecifiedText Size 24
class FSetNoKeySpecifiedText
{

 public: 
	struct FText InNoKeySpecifiedText;  // Offset: 0 Size: 24



 // Functions 
 public:
}; 
 
 //Function UMG.BackgroundBlur.SetBlurRadius Size 4
class FSetBlurRadius
{

 public: 
	int32_t InBlurRadius;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetComponent.SetPivot Size 8
class FSetPivot
{

 public: 
	struct FVector2D InPivot;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.InputKeySelector.SetSelectedKey Size 32
class FSetSelectedKey
{

 public: 
	struct FInputChord InSelectedKey;  // Offset: 0 Size: 32



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetInteractionComponent.SetFocus Size 8
class FSetFocus
{

 public: 
	struct UWidget* FocusWidget;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.InputKeySelector.SetTextBlockVisibility Size 1
class FSetTextBlockVisibility
{

 public: 
	enum class ESlateVisibility InVisibility;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //DelegateFunction UMG.OnListEntryGeneratedDynamic__DelegateSignature Size 8
class FOnListEntryGeneratedDynamic__DelegateSignature
{

 public: 
	struct UUserWidget* Widget;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //DelegateFunction UMG.OnListEntryReleasedDynamic__DelegateSignature Size 8
class FOnListEntryReleasedDynamic__DelegateSignature
{

 public: 
	struct UUserWidget* Widget;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //DelegateFunction UMG.SimpleListItemEventDynamic__DelegateSignature Size 8
class FSimpleListItemEventDynamic__DelegateSignature
{

 public: 
	struct UObject* Item;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //DelegateFunction UMG.OnListEntryInitializedDynamic__DelegateSignature Size 16
class FOnListEntryInitializedDynamic__DelegateSignature
{

 public: 
	struct UObject* Item;  // Offset: 0 Size: 8
	struct UUserWidget* Widget;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //DelegateFunction UMG.OnListItemSelectionChangedDynamic__DelegateSignature Size 16
class FOnListItemSelectionChangedDynamic__DelegateSignature
{

 public: 
	struct UObject* Item;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool bIsSelected : 1;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7



 // Functions 
 public:
}; 
 
 //Function UMG.ListView.BP_IsItemVisible Size 16
class FBP_IsItemVisible
{

 public: 
	struct UObject* Item;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool ReturnValue : 1;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7



 // Functions 
 public:
}; 
 
 //DelegateFunction UMG.OnMenuOpenChangedEvent__DelegateSignature Size 1
class FOnMenuOpenChangedEvent__DelegateSignature
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bIsOpen : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct UMG.BlueprintWidgetAnimationDelegateBinding Size 28
class FBlueprintWidgetAnimationDelegateBinding
{

 public: 
	enum class EWidgetAnimationEvent Action;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	struct FName AnimationToBind;  // Offset: 4 Size: 8
	struct FName FunctionNameToBind;  // Offset: 12 Size: 8
	struct FName UserTag;  // Offset: 20 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetInteractionComponent.SendKeyChar Size 24
class FSendKeyChar
{

 public: 
	struct FString Characters;  // Offset: 0 Size: 16
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool bRepeat : 1;  // Offset: 16 Size: 1
	char pad_17_1 : 7;  // Offset: 17 Size: 1
	bool ReturnValue : 1;  // Offset: 17 Size: 1
	char pad_18[6];  // Offset: 18 Size: 6



 // Functions 
 public:
}; 
 
 //Function UMG.PanelWidget.AddChild Size 16
class FAddChild
{

 public: 
	struct UWidget* Content;  // Offset: 0 Size: 8
	struct UPanelSlot* ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.PanelWidget.GetChildAt Size 16
class FGetChildAt
{

 public: 
	int32_t Index;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct UWidget* ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.WrapBoxSlot.SetHorizontalAlignment Size 1
class FSetHorizontalAlignment
{

 public: 
	enum class EHorizontalAlignment InHorizontalAlignment;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.PanelWidget.HasAnyChildren Size 1
class FHasAnyChildren
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.PanelWidget.HasChild Size 16
class FHasChild
{

 public: 
	struct UWidget* Content;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool ReturnValue : 1;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7



 // Functions 
 public:
}; 
 
 //Function UMG.PanelWidget.RemoveChild Size 16
class FRemoveChild
{

 public: 
	struct UWidget* Content;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool ReturnValue : 1;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7



 // Functions 
 public:
}; 
 
 //Function UMG.PanelWidget.RemoveChildAt Size 8
class FRemoveChildAt
{

 public: 
	int32_t Index;  // Offset: 0 Size: 4
	char pad_4_1 : 7;  // Offset: 4 Size: 1
	bool ReturnValue : 1;  // Offset: 4 Size: 1
	char pad_5[3];  // Offset: 5 Size: 3



 // Functions 
 public:
}; 
 
 //Function UMG.ContentWidget.GetContent Size 8
class FGetContent
{

 public: 
	struct UWidget* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.CheckBox.SetIsChecked Size 1
class FSetIsChecked
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool InIsChecked : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.SpinBox.GetMinFractionalDigits Size 4
class FGetMinFractionalDigits
{

 public: 
	int32_t ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.Button.SetStyle Size 632
class FSetStyle
{

 public: 
	struct FButtonStyle InStyle;  // Offset: 0 Size: 632



 // Functions 
 public:
}; 
 
 //Function UMG.ContentWidget.GetContentSlot Size 8
class FGetContentSlot
{

 public: 
	struct UPanelSlot* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.CanvasPanelSlot.SetAlignment Size 8
class FSetAlignment
{

 public: 
	struct FVector2D InAlignment;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.ContentWidget.SetContent Size 16
class FSetContent
{

 public: 
	struct UWidget* Content;  // Offset: 0 Size: 8
	struct UPanelSlot* ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.Slider.SetSliderHandleColor Size 16
class FSetSliderHandleColor
{

 public: 
	struct FLinearColor InValue;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function UMG.MenuAnchor.FitInWindow Size 1
class FFitInWindow
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bFit : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.MenuAnchor.GetMenuPosition Size 8
class FGetMenuPosition
{

 public: 
	struct FVector2D ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //DelegateFunction UMG.MenuAnchor.GetUserWidget__DelegateSignature Size 8
class FGetUserWidget__DelegateSignature
{

 public: 
	struct UUserWidget* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.MenuAnchor.HasOpenSubMenus Size 1
class FHasOpenSubMenus
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.MenuAnchor.SetPlacement Size 1
class FSetPlacement
{

 public: 
	enum class EMenuPlacement InPlacement;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.UserWidget.IsAnimationPlayingForward Size 16
class FIsAnimationPlayingForward
{

 public: 
	struct UWidgetAnimation* InAnimation;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool ReturnValue : 1;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7



 // Functions 
 public:
}; 
 
 //Function UMG.CircularThrobber.SetPeriod Size 4
class FSetPeriod
{

 public: 
	float InPeriod;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.MenuAnchor.ShouldOpenDueToClick Size 1
class FShouldOpenDueToClick
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetInteractionComponent.ReleaseKey Size 32
class FReleaseKey
{

 public: 
	struct FKey Key;  // Offset: 0 Size: 24
	char pad_24_1 : 7;  // Offset: 24 Size: 1
	bool ReturnValue : 1;  // Offset: 24 Size: 1
	char pad_25[7];  // Offset: 25 Size: 7



 // Functions 
 public:
}; 
 
 //Function UMG.MultiLineEditableTextBox.GetHintText Size 24
class FGetHintText
{

 public: 
	struct FText ReturnValue;  // Offset: 0 Size: 24



 // Functions 
 public:
}; 
 
 //DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextChangedEvent__DelegateSignature Size 24
class FOnMultiLineEditableTextChangedEvent__DelegateSignature
{

 public: 
	struct FText Text;  // Offset: 0 Size: 24



 // Functions 
 public:
}; 
 
 //Function UMG.ListView.BP_NavigateToItem Size 8
class FBP_NavigateToItem
{

 public: 
	struct UObject* Item;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.UserWidget.PauseAnimation Size 16
class FPauseAnimation
{

 public: 
	struct UWidgetAnimation* InAnimation;  // Offset: 0 Size: 8
	float ReturnValue;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetComponent.GetWidget Size 8
class FGetWidget
{

 public: 
	struct UUserWidget* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextCommittedEvent__DelegateSignature Size 32
class FOnMultiLineEditableTextCommittedEvent__DelegateSignature
{

 public: 
	struct FText Text;  // Offset: 0 Size: 24
	enum class ETextCommit CommitMethod;  // Offset: 24 Size: 1
	char pad_25[7];  // Offset: 25 Size: 7



 // Functions 
 public:
}; 
 
 //Function UMG.MultiLineEditableText.SetWidgetStyle Size 624
class FSetWidgetStyle
{

 public: 
	struct FTextBlockStyle InWidgetStyle;  // Offset: 0 Size: 624



 // Functions 
 public:
}; 
 
 //DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxChangedEvent__DelegateSignature Size 24
class FOnMultiLineEditableTextBoxChangedEvent__DelegateSignature
{

 public: 
	struct FText Text;  // Offset: 0 Size: 24



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetComponent.GetGeometryMode Size 1
class FGetGeometryMode
{

 public: 
	enum class EWidgetGeometryMode ReturnValue;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature Size 32
class FOnMultiLineEditableTextBoxCommittedEvent__DelegateSignature
{

 public: 
	struct FText Text;  // Offset: 0 Size: 24
	enum class ETextCommit CommitMethod;  // Offset: 24 Size: 1
	char pad_25[7];  // Offset: 25 Size: 7



 // Functions 
 public:
}; 
 
 //Function UMG.UserWidget.SetPlaybackSpeed Size 16
class FSetPlaybackSpeed
{

 public: 
	struct UWidgetAnimation* InAnimation;  // Offset: 0 Size: 8
	float PlaybackSpeed;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.MultiLineEditableTextBox.SetTextStyle Size 624
class FSetTextStyle
{

 public: 
	struct FTextBlockStyle InTextStyle;  // Offset: 0 Size: 624



 // Functions 
 public:
}; 
 
 //DelegateFunction UMG.OnUserScrolledEvent__DelegateSignature Size 4
class FOnUserScrolledEvent__DelegateSignature
{

 public: 
	float CurrentOffset;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.SpinBox.GetAlwaysUsesDeltaSnap Size 1
class FGetAlwaysUsesDeltaSnap
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.SpinBox.GetDelta Size 4
class FGetDelta
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.RichTextBlock.SetTextStyleSet Size 8
class FSetTextStyleSet
{

 public: 
	struct UDataTable* NewTextStyleSet;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.SpinBox.GetMaxFractionalDigits Size 4
class FGetMaxFractionalDigits
{

 public: 
	int32_t ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.SpinBox.GetMaxSliderValue Size 4
class FGetMaxSliderValue
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.BackgroundBlur.SetBlurStrength Size 4
class FSetBlurStrength
{

 public: 
	float InStrength;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.SpinBox.GetMaxValue Size 4
class FGetMaxValue
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.ColorBinding.GetSlateValue Size 40
class FGetSlateValue
{

 public: 
	struct FSlateColor ReturnValue;  // Offset: 0 Size: 40



 // Functions 
 public:
}; 
 
 //Function UMG.SpinBox.GetMinSliderValue Size 4
class FGetMinSliderValue
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.SlateBlueprintLibrary.TransformScalarAbsoluteToLocal Size 64
class FTransformScalarAbsoluteToLocal
{

 public: 
	struct FGeometry Geometry;  // Offset: 0 Size: 56
	float AbsoluteScalar;  // Offset: 56 Size: 4
	float ReturnValue;  // Offset: 60 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.SpinBox.GetMinValue Size 4
class FGetMinValue
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //DelegateFunction UMG.SpinBox.OnSpinBoxValueChangedEvent__DelegateSignature Size 4
class FOnSpinBoxValueChangedEvent__DelegateSignature
{

 public: 
	float InValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetInteractionComponent.PressKey Size 32
class FPressKey
{

 public: 
	struct FKey Key;  // Offset: 0 Size: 24
	char pad_24_1 : 7;  // Offset: 24 Size: 1
	bool bRepeat : 1;  // Offset: 24 Size: 1
	char pad_25_1 : 7;  // Offset: 25 Size: 1
	bool ReturnValue : 1;  // Offset: 25 Size: 1
	char pad_26[6];  // Offset: 26 Size: 6



 // Functions 
 public:
}; 
 
 //Function UMG.ListView.BP_SetItemSelection Size 16
class FBP_SetItemSelection
{

 public: 
	struct UObject* Item;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool bSelected : 1;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7



 // Functions 
 public:
}; 
 
 //Function UMG.SpinBox.SetDelta Size 4
class FSetDelta
{

 public: 
	float NewValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.SpinBox.SetMaxFractionalDigits Size 4
class FSetMaxFractionalDigits
{

 public: 
	int32_t NewValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.Slider.SetMaxValue Size 4
class FSetMaxValue
{

 public: 
	float InValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.SpinBox.SetMinSliderValue Size 4
class FSetMinSliderValue
{

 public: 
	float NewValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.Slider.SetMinValue Size 4
class FSetMinValue
{

 public: 
	float InValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //DelegateFunction UMG.OnItemExpansionChangedDynamic__DelegateSignature Size 16
class FOnItemExpansionChangedDynamic__DelegateSignature
{

 public: 
	struct UObject* Item;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool bIsExpanded : 1;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7



 // Functions 
 public:
}; 
 
 //Function UMG.DragDropOperation.DragCancelled Size 112
class FDragCancelled
{

 public: 
	struct FPointerEvent PointerEvent;  // Offset: 0 Size: 112



 // Functions 
 public:
}; 
 
 //DelegateFunction UMG.OnHoveredWidgetChanged__DelegateSignature Size 16
class FOnHoveredWidgetChanged__DelegateSignature
{

 public: 
	struct UWidgetComponent* WidgetComponent;  // Offset: 0 Size: 8
	struct UWidgetComponent* PreviousWidgetComponent;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.UserWidget.AddToPlayerScreen Size 8
class FAddToPlayerScreen
{

 public: 
	int32_t ZOrder;  // Offset: 0 Size: 4
	char pad_4_1 : 7;  // Offset: 4 Size: 1
	bool ReturnValue : 1;  // Offset: 4 Size: 1
	char pad_5[3];  // Offset: 5 Size: 3



 // Functions 
 public:
}; 
 
 //Function UMG.UserWidget.BindToAnimationEvent Size 40
class FBindToAnimationEvent
{

 public: 
	struct UWidgetAnimation* Animation;  // Offset: 0 Size: 8
	struct FDelegate Delegate;  // Offset: 8 Size: 16
	enum class EWidgetAnimationEvent AnimationEvent;  // Offset: 24 Size: 1
	char pad_25[3];  // Offset: 25 Size: 3
	struct FName UserTag;  // Offset: 28 Size: 8
	char pad_36[4];  // Offset: 36 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetComponent.SetRedrawTime Size 4
class FSetRedrawTime
{

 public: 
	float InRedrawTime;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetAnimation.BindToAnimationFinished Size 24
class FBindToAnimationFinished
{

 public: 
	struct UUserWidget* Widget;  // Offset: 0 Size: 8
	struct FDelegate Delegate;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function UMG.UserWidget.GetAlignmentInViewport Size 8
class FGetAlignmentInViewport
{

 public: 
	struct FVector2D ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.CanvasPanelSlot.GetAnchors Size 16
class FGetAnchors
{

 public: 
	struct FAnchors ReturnValue;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function UMG.RetainerBox.GetEffectMaterial Size 8
class FGetEffectMaterial
{

 public: 
	struct UMaterialInstanceDynamic* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.UserWidget.GetIsVisible Size 1
class FGetIsVisible
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.UserWidget.GetOwningPlayerCameraManager Size 8
class FGetOwningPlayerCameraManager
{

 public: 
	struct APlayerCameraManager* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.UserWidget.IsInteractable Size 1
class FIsInteractable
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.UserWidget.IsInViewport Size 1
class FIsInViewport
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.UserListEntry.BP_OnItemSelectionChanged Size 1
class FBP_OnItemSelectionChanged
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bIsSelected : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.TextBlock.SetShadowOffset Size 8
class FSetShadowOffset
{

 public: 
	struct FVector2D InShadowOffset;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetAnimation.GetEndTime Size 4
class FGetEndTime
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetComponent.GetManuallyRedraw Size 1
class FGetManuallyRedraw
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.UserWidget.IsListeningForInputAction Size 12
class FIsListeningForInputAction
{

 public: 
	struct FName ActionName;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool ReturnValue : 1;  // Offset: 8 Size: 1
	char pad_9[3];  // Offset: 9 Size: 3



 // Functions 
 public:
}; 
 
 //Function UMG.UserWidget.IsPlayingAnimation Size 1
class FIsPlayingAnimation
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.UserWidget.ListenForInputAction Size 28
class FListenForInputAction
{

 public: 
	struct FName ActionName;  // Offset: 0 Size: 8
	enum class EInputEvent EventType;  // Offset: 8 Size: 1
	char pad_9_1 : 7;  // Offset: 9 Size: 1
	bool bConsume : 1;  // Offset: 9 Size: 1
	char pad_10[2];  // Offset: 10 Size: 2
	struct FDelegate Callback;  // Offset: 12 Size: 16



 // Functions 
 public:
}; 
 
 //Function UMG.UserWidget.OnAddedToFocusPath Size 8
class FOnAddedToFocusPath
{

 public: 
	struct FFocusEvent InFocusEvent;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.UserWidget.OnKeyUp Size 296
class FOnKeyUp
{

 public: 
	struct FGeometry MyGeometry;  // Offset: 0 Size: 56
	struct FKeyEvent InKeyEvent;  // Offset: 56 Size: 56
	struct FEventReply ReturnValue;  // Offset: 112 Size: 184



 // Functions 
 public:
}; 
 
 //Function UMG.TextBlock.SetFont Size 88
class FSetFont
{

 public: 
	struct FSlateFontInfo InFontInfo;  // Offset: 0 Size: 88



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetLayoutLibrary.SlotAsUniformGridSlot Size 16
class FSlotAsUniformGridSlot
{

 public: 
	struct UWidget* Widget;  // Offset: 0 Size: 8
	struct UUniformGridSlot* ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.UserWidget.OnAnalogValueChanged Size 304
class FOnAnalogValueChanged
{

 public: 
	struct FGeometry MyGeometry;  // Offset: 0 Size: 56
	struct FAnalogInputEvent InAnalogInputEvent;  // Offset: 56 Size: 64
	struct FEventReply ReturnValue;  // Offset: 120 Size: 184



 // Functions 
 public:
}; 
 
 //Function UMG.Image.SetBrushTintColor Size 40
class FSetBrushTintColor
{

 public: 
	struct FSlateColor TintColor;  // Offset: 0 Size: 40



 // Functions 
 public:
}; 
 
 //Function UMG.UserWidget.OnAnimationFinished Size 8
class FOnAnimationFinished
{

 public: 
	struct UWidgetAnimation* Animation;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.UserWidget.OnDragCancelled Size 120
class FOnDragCancelled
{

 public: 
	struct FPointerEvent PointerEvent;  // Offset: 0 Size: 112
	struct UDragDropOperation* Operation;  // Offset: 112 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.UserWidget.OnDragDetected Size 176
class FOnDragDetected
{

 public: 
	struct FGeometry MyGeometry;  // Offset: 0 Size: 56
	struct FPointerEvent PointerEvent;  // Offset: 56 Size: 112
	struct UDragDropOperation* Operation;  // Offset: 168 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetLayoutLibrary.SlotAsVerticalBoxSlot Size 16
class FSlotAsVerticalBoxSlot
{

 public: 
	struct UWidget* Widget;  // Offset: 0 Size: 8
	struct UVerticalBoxSlot* ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.ScrollBox.SetAnimateWheelScrolling Size 1
class FSetAnimateWheelScrolling
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bShouldAnimateWheelScrolling : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.UserWidget.OnDragEnter Size 176
class FOnDragEnter
{

 public: 
	struct FGeometry MyGeometry;  // Offset: 0 Size: 56
	struct FPointerEvent PointerEvent;  // Offset: 56 Size: 112
	struct UDragDropOperation* Operation;  // Offset: 168 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.GridSlot.SetLayer Size 4
class FSetLayer
{

 public: 
	int32_t InLayer;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.UserWidget.OnDragLeave Size 120
class FOnDragLeave
{

 public: 
	struct FPointerEvent PointerEvent;  // Offset: 0 Size: 112
	struct UDragDropOperation* Operation;  // Offset: 112 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetComponent.GetRedrawTime Size 4
class FGetRedrawTime
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.ListView.GetListItems Size 16
class FGetListItems
{

 public: 
	struct TArray<struct UObject*> ReturnValue;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function UMG.ScrollBox.SetWheelScrollMultiplier Size 4
class FSetWheelScrollMultiplier
{

 public: 
	float NewWheelScrollMultiplier;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.UserWidget.OnDragOver Size 184
class FOnDragOver
{

 public: 
	struct FGeometry MyGeometry;  // Offset: 0 Size: 56
	struct FPointerEvent PointerEvent;  // Offset: 56 Size: 112
	struct UDragDropOperation* Operation;  // Offset: 168 Size: 8
	char pad_176_1 : 7;  // Offset: 176 Size: 1
	bool ReturnValue : 1;  // Offset: 176 Size: 1
	char pad_177[7];  // Offset: 177 Size: 7



 // Functions 
 public:
}; 
 
 //Function UMG.Border.SetBrushFromTexture Size 8
class FSetBrushFromTexture
{

 public: 
	struct UTexture2D* Texture;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.UserWidget.OnDrop Size 184
class FOnDrop
{

 public: 
	struct FGeometry MyGeometry;  // Offset: 0 Size: 56
	struct FPointerEvent PointerEvent;  // Offset: 56 Size: 112
	struct UDragDropOperation* Operation;  // Offset: 168 Size: 8
	char pad_176_1 : 7;  // Offset: 176 Size: 1
	bool ReturnValue : 1;  // Offset: 176 Size: 1
	char pad_177[7];  // Offset: 177 Size: 7



 // Functions 
 public:
}; 
 
 //ScriptStruct UMG.DynamicPropertyPath Size 40
// Inherited 40 bytes 
class FDynamicPropertyPath : public FCachedPropertyPath
{

 public: 



 // Functions 
 public:
}; 
 
 //Function UMG.CanvasPanelSlot.GetAutoSize Size 1
class FGetAutoSize
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.ExpandableArea.SetIsExpanded Size 1
class FSetIsExpanded
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool IsExpanded : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.UserWidget.OnFocusLost Size 8
class FOnFocusLost
{

 public: 
	struct FFocusEvent InFocusEvent;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.UserWidget.OnFocusReceived Size 248
class FOnFocusReceived
{

 public: 
	struct FGeometry MyGeometry;  // Offset: 0 Size: 56
	struct FFocusEvent InFocusEvent;  // Offset: 56 Size: 8
	struct FEventReply ReturnValue;  // Offset: 64 Size: 184



 // Functions 
 public:
}; 
 
 //Function UMG.UserWidget.OnKeyChar Size 272
class FOnKeyChar
{

 public: 
	struct FGeometry MyGeometry;  // Offset: 0 Size: 56
	struct FCharacterEvent InCharacterEvent;  // Offset: 56 Size: 32
	struct FEventReply ReturnValue;  // Offset: 88 Size: 184



 // Functions 
 public:
}; 
 
 //Function UMG.UserWidget.OnKeyDown Size 296
class FOnKeyDown
{

 public: 
	struct FGeometry MyGeometry;  // Offset: 0 Size: 56
	struct FKeyEvent InKeyEvent;  // Offset: 56 Size: 56
	struct FEventReply ReturnValue;  // Offset: 112 Size: 184



 // Functions 
 public:
}; 
 
 //Function UMG.UserWidget.OnMotionDetected Size 312
class FOnMotionDetected
{

 public: 
	struct FGeometry MyGeometry;  // Offset: 0 Size: 56
	struct FMotionEvent InMotionEvent;  // Offset: 56 Size: 72
	struct FEventReply ReturnValue;  // Offset: 128 Size: 184



 // Functions 
 public:
}; 
 
 //Function UMG.Button.SetBackgroundColor Size 16
class FSetBackgroundColor
{

 public: 
	struct FLinearColor InBackgroundColor;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function UMG.UserWidget.OnMouseButtonUp Size 352
class FOnMouseButtonUp
{

 public: 
	struct FGeometry MyGeometry;  // Offset: 0 Size: 56
	struct FPointerEvent MouseEvent;  // Offset: 56 Size: 112
	struct FEventReply ReturnValue;  // Offset: 168 Size: 184



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetComponent.SetOwnerPlayer Size 8
class FSetOwnerPlayer
{

 public: 
	struct ULocalPlayer* LocalPlayer;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.BackgroundBlur.SetApplyAlphaToBlur Size 1
class FSetApplyAlphaToBlur
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bInApplyAlphaToBlur : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.UserWidget.OnMouseEnter Size 168
class FOnMouseEnter
{

 public: 
	struct FGeometry MyGeometry;  // Offset: 0 Size: 56
	struct FPointerEvent MouseEvent;  // Offset: 56 Size: 112



 // Functions 
 public:
}; 
 
 //Function UMG.UserWidget.OnMouseLeave Size 112
class FOnMouseLeave
{

 public: 
	struct FPointerEvent MouseEvent;  // Offset: 0 Size: 112



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetComponent.GetRenderTarget Size 8
class FGetRenderTarget
{

 public: 
	struct UTextureRenderTarget2D* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.UserWidget.OnMouseMove Size 352
class FOnMouseMove
{

 public: 
	struct FGeometry MyGeometry;  // Offset: 0 Size: 56
	struct FPointerEvent MouseEvent;  // Offset: 56 Size: 112
	struct FEventReply ReturnValue;  // Offset: 168 Size: 184



 // Functions 
 public:
}; 
 
 //Function UMG.Slider.SetSliderBarColor Size 16
class FSetSliderBarColor
{

 public: 
	struct FLinearColor InValue;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function UMG.UserWidget.OnMouseWheel Size 352
class FOnMouseWheel
{

 public: 
	struct FGeometry MyGeometry;  // Offset: 0 Size: 56
	struct FPointerEvent MouseEvent;  // Offset: 56 Size: 112
	struct FEventReply ReturnValue;  // Offset: 168 Size: 184



 // Functions 
 public:
}; 
 
 //Function UMG.UserWidget.OnPaint Size 48
class FOnPaint
{

 public: 
	struct FPaintContext Context;  // Offset: 0 Size: 48



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetLayoutLibrary.SlotAsBorderSlot Size 16
class FSlotAsBorderSlot
{

 public: 
	struct UWidget* Widget;  // Offset: 0 Size: 8
	struct UBorderSlot* ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.UserWidget.OnPreviewKeyDown Size 296
class FOnPreviewKeyDown
{

 public: 
	struct FGeometry MyGeometry;  // Offset: 0 Size: 56
	struct FKeyEvent InKeyEvent;  // Offset: 56 Size: 56
	struct FEventReply ReturnValue;  // Offset: 112 Size: 184



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetComponent.SetTintColorAndOpacity Size 16
class FSetTintColorAndOpacity
{

 public: 
	struct FLinearColor NewTintColorAndOpacity;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function UMG.UserWidget.OnPreviewMouseButtonDown Size 352
class FOnPreviewMouseButtonDown
{

 public: 
	struct FGeometry MyGeometry;  // Offset: 0 Size: 56
	struct FPointerEvent MouseEvent;  // Offset: 56 Size: 112
	struct FEventReply ReturnValue;  // Offset: 168 Size: 184



 // Functions 
 public:
}; 
 
 //Function UMG.UserWidget.OnRemovedFromFocusPath Size 8
class FOnRemovedFromFocusPath
{

 public: 
	struct FFocusEvent InFocusEvent;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.ListView.AddItem Size 8
class FAddItem
{

 public: 
	struct UObject* Item;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.UserWidget.OnTouchForceChanged Size 352
class FOnTouchForceChanged
{

 public: 
	struct FGeometry MyGeometry;  // Offset: 0 Size: 56
	struct FPointerEvent InTouchEvent;  // Offset: 56 Size: 112
	struct FEventReply ReturnValue;  // Offset: 168 Size: 184



 // Functions 
 public:
}; 
 
 //Function UMG.UserWidget.PlayAnimation Size 40
class FPlayAnimation
{

 public: 
	struct UWidgetAnimation* InAnimation;  // Offset: 0 Size: 8
	float StartAtTime;  // Offset: 8 Size: 4
	int32_t NumLoopsToPlay;  // Offset: 12 Size: 4
	enum class EUMGSequencePlayMode PlayMode;  // Offset: 16 Size: 1
	char pad_17[3];  // Offset: 17 Size: 3
	float PlaybackSpeed;  // Offset: 20 Size: 4
	char pad_24_1 : 7;  // Offset: 24 Size: 1
	bool bRestoreState : 1;  // Offset: 24 Size: 1
	char pad_25[7];  // Offset: 25 Size: 7
	struct UUMGSequencePlayer* ReturnValue;  // Offset: 32 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.UserWidget.PlayAnimationForward Size 24
class FPlayAnimationForward
{

 public: 
	struct UWidgetAnimation* InAnimation;  // Offset: 0 Size: 8
	float PlaybackSpeed;  // Offset: 8 Size: 4
	char pad_12_1 : 7;  // Offset: 12 Size: 1
	bool bRestoreState : 1;  // Offset: 12 Size: 1
	char pad_13[3];  // Offset: 13 Size: 3
	struct UUMGSequencePlayer* ReturnValue;  // Offset: 16 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.CanvasPanelSlot.GetAlignment Size 8
class FGetAlignment
{

 public: 
	struct FVector2D ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.UserWidget.PlayAnimationReverse Size 24
class FPlayAnimationReverse
{

 public: 
	struct UWidgetAnimation* InAnimation;  // Offset: 0 Size: 8
	float PlaybackSpeed;  // Offset: 8 Size: 4
	char pad_12_1 : 7;  // Offset: 12 Size: 1
	bool bRestoreState : 1;  // Offset: 12 Size: 1
	char pad_13[3];  // Offset: 13 Size: 3
	struct UUMGSequencePlayer* ReturnValue;  // Offset: 16 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.UserWidget.PlayAnimationTimeRange Size 40
class FPlayAnimationTimeRange
{

 public: 
	struct UWidgetAnimation* InAnimation;  // Offset: 0 Size: 8
	float StartAtTime;  // Offset: 8 Size: 4
	float EndAtTime;  // Offset: 12 Size: 4
	int32_t NumLoopsToPlay;  // Offset: 16 Size: 4
	enum class EUMGSequencePlayMode PlayMode;  // Offset: 20 Size: 1
	char pad_21[3];  // Offset: 21 Size: 3
	float PlaybackSpeed;  // Offset: 24 Size: 4
	char pad_28_1 : 7;  // Offset: 28 Size: 1
	bool bRestoreState : 1;  // Offset: 28 Size: 1
	char pad_29[3];  // Offset: 29 Size: 3
	struct UUMGSequencePlayer* ReturnValue;  // Offset: 32 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetLayoutLibrary.SlotAsWrapBoxSlot Size 16
class FSlotAsWrapBoxSlot
{

 public: 
	struct UWidget* Widget;  // Offset: 0 Size: 8
	struct UWrapBoxSlot* ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.UserWidget.PlaySound Size 8
class FPlaySound
{

 public: 
	struct USoundBase* SoundToPlay;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.RichTextBlock.GetDecoratorByClass Size 16
class FGetDecoratorByClass
{

 public: 
	URichTextBlockDecorator* DecoratorClass;  // Offset: 0 Size: 8
	struct URichTextBlockDecorator* ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.UserWidget.PreConstruct Size 1
class FPreConstruct
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool IsDesignTime : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.TextBlock.SetStrikeBrush Size 136
class FSetStrikeBrush
{

 public: 
	struct FSlateBrush InStrikeBrush;  // Offset: 0 Size: 136



 // Functions 
 public:
}; 
 
 //Function UMG.UserWidget.ReverseAnimation Size 8
class FReverseAnimation
{

 public: 
	struct UWidgetAnimation* InAnimation;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.UserWidget.SetAlignmentInViewport Size 8
class FSetAlignmentInViewport
{

 public: 
	struct FVector2D Alignment;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetComponent.IsWidgetVisible Size 1
class FIsWidgetVisible
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct UMG.MovieScene2DTransformMask Size 4
class FMovieScene2DTransformMask
{

 public: 
	uint32_t Mask;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.UserWidget.SetAnchorsInViewport Size 16
class FSetAnchorsInViewport
{

 public: 
	struct FAnchors Anchors;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function UMG.UserWidget.SetAnimationCurrentTime Size 16
class FSetAnimationCurrentTime
{

 public: 
	struct UWidgetAnimation* InAnimation;  // Offset: 0 Size: 8
	float InTime;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.SizeBox.SetWidthOverride Size 4
class FSetWidthOverride
{

 public: 
	float InWidthOverride;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.CanvasPanelSlot.SetMinimum Size 8
class FSetMinimum
{

 public: 
	struct FVector2D InMinimumAnchors;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.Button.SetColorAndOpacity Size 16
class FSetColorAndOpacity
{

 public: 
	struct FLinearColor InColorAndOpacity;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function UMG.UserWidget.SetDesiredSizeInViewport Size 8
class FSetDesiredSizeInViewport
{

 public: 
	struct FVector2D Size;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.UserWidget.SetInputActionBlocking Size 1
class FSetInputActionBlocking
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bShouldBlock : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.GridPanel.SetColumnFill Size 8
class FSetColumnFill
{

 public: 
	int32_t ColumnIndex;  // Offset: 0 Size: 4
	float Coefficient;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.UserWidget.SetOwningPlayer Size 8
class FSetOwningPlayer
{

 public: 
	struct APlayerController* LocalPlayerController;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.WrapBoxSlot.SetPadding Size 16
class FSetPadding
{

 public: 
	struct FMargin InPadding;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function UMG.UserWidget.SetPositionInViewport Size 12
class FSetPositionInViewport
{

 public: 
	struct FVector2D position;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool bRemoveDPIScale : 1;  // Offset: 8 Size: 1
	char pad_9[3];  // Offset: 9 Size: 3



 // Functions 
 public:
}; 
 
 //Function UMG.UserWidget.StopAnimation Size 8
class FStopAnimation
{

 public: 
	struct UWidgetAnimation* InAnimation;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.UserWidget.Tick Size 60
class FTick
{

 public: 
	struct FGeometry MyGeometry;  // Offset: 0 Size: 56
	float inDeltaTime;  // Offset: 56 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetAnimation.UnbindAllFromAnimationFinished Size 8
class FUnbindAllFromAnimationFinished
{

 public: 
	struct UUserWidget* Widget;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetAnimation.UnbindFromAnimationFinished Size 24
class FUnbindFromAnimationFinished
{

 public: 
	struct UUserWidget* Widget;  // Offset: 0 Size: 8
	struct FDelegate Delegate;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct UMG.DelegateRuntimeBinding Size 80
class FDelegateRuntimeBinding
{

 public: 
	struct FString ObjectName;  // Offset: 0 Size: 16
	struct FName PropertyName;  // Offset: 16 Size: 8
	struct FName FunctionName;  // Offset: 24 Size: 8
	struct FDynamicPropertyPath SourcePath;  // Offset: 32 Size: 40
	enum class EBindingKind Kind;  // Offset: 72 Size: 1
	char pad_73[7];  // Offset: 73 Size: 7



 // Functions 
 public:
}; 
 
 //Function UMG.InvalidationBox.GetCanCache Size 1
class FGetCanCache
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetAnimation.UnbindFromAnimationStarted Size 24
class FUnbindFromAnimationStarted
{

 public: 
	struct UUserWidget* Widget;  // Offset: 0 Size: 8
	struct FDelegate Delegate;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct UMG.AnimationEventBinding Size 40
class FAnimationEventBinding
{

 public: 
	struct UWidgetAnimation* Animation;  // Offset: 0 Size: 8
	struct FDelegate Delegate;  // Offset: 8 Size: 16
	enum class EWidgetAnimationEvent AnimationEvent;  // Offset: 24 Size: 1
	char pad_25[3];  // Offset: 25 Size: 3
	struct FName UserTag;  // Offset: 28 Size: 8
	char pad_36[4];  // Offset: 36 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct UMG.NamedSlotBinding Size 16
class FNamedSlotBinding
{

 public: 
	struct FName Name;  // Offset: 0 Size: 8
	struct UWidget* Content;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct UMG.MovieSceneWidgetMaterialSectionTemplate Size 144
// Inherited 128 bytes 
class FMovieSceneWidgetMaterialSectionTemplate : public FMovieSceneParameterSectionTemplate
{

 public: 
	struct TArray<struct FName> BrushPropertyNamePath;  // Offset: 128 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct UMG.SlateChildSize Size 8
class FSlateChildSize
{

 public: 
	float Value;  // Offset: 0 Size: 4
	enum class ESlateSizeRule SizeRule;  // Offset: 4 Size: 1
	char pad_5[3];  // Offset: 5 Size: 3



 // Functions 
 public:
}; 
 
 //Function UMG.UserObjectListEntry.OnListItemObjectSet Size 8
class FOnListItemObjectSet
{

 public: 
	struct UObject* ListItemObject;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.CanvasPanelSlot.GetPosition Size 8
class FGetPosition
{

 public: 
	struct FVector2D ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct UMG.UserWidgetPool Size 128
class FUserWidgetPool
{

 public: 
	struct TArray<struct UUserWidget*> ActiveWidgets;  // Offset: 0 Size: 16
	struct TArray<struct UUserWidget*> InactiveWidgets;  // Offset: 16 Size: 16
	char pad_32[96];  // Offset: 32 Size: 96



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetComponent.GetDrawSize Size 8
class FGetDrawSize
{

 public: 
	struct FVector2D ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct UMG.WidgetComponentInstanceData Size 200
// Inherited 184 bytes 
class FWidgetComponentInstanceData : public FSceneComponentInstanceData
{

 public: 
	char pad_184[16];  // Offset: 184 Size: 16



 // Functions 
 public:
}; 
 
 //Function UMG.ProgressBar.SetPercent Size 4
class FSetPercent
{

 public: 
	float InPercent;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.TextBlock.GetDynamicOutlineMaterial Size 8
class FGetDynamicOutlineMaterial
{

 public: 
	struct UMaterialInstanceDynamic* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.RichTextBlock.SetAutoWrapText Size 1
class FSetAutoWrapText
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool InAutoTextWrap : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.TextBlock.SetShadowColorAndOpacity Size 16
class FSetShadowColorAndOpacity
{

 public: 
	struct FLinearColor InShadowColorAndOpacity;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function UMG.WrapBox.SetInnerSlotPadding Size 8
class FSetInnerSlotPadding
{

 public: 
	struct FVector2D InPadding;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.RichTextBlock.SetTextTransformPolicy Size 1
class FSetTextTransformPolicy
{

 public: 
	enum class ETextTransformPolicy InTransformPolicy;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.ScrollBox.GetScrollOffsetOfEnd Size 4
class FGetScrollOffsetOfEnd
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.Border.SetBrush Size 136
class FSetBrush
{

 public: 
	struct FSlateBrush InBrush;  // Offset: 0 Size: 136



 // Functions 
 public:
}; 
 
 //Function UMG.UserListEntry.BP_OnItemExpansionChanged Size 1
class FBP_OnItemExpansionChanged
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bIsExpanded : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.Border.SetBrushFromAsset Size 8
class FSetBrushFromAsset
{

 public: 
	struct USlateBrushAsset* Asset;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.Border.SetBrushFromMaterial Size 8
class FSetBrushFromMaterial
{

 public: 
	struct UMaterialInterface* Material;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.WrapBoxSlot.SetFillSpanWhenLessThan Size 4
class FSetFillSpanWhenLessThan
{

 public: 
	float InFillSpanWhenLessThan;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.Image.SetBrushFromSoftMaterial Size 40
class FSetBrushFromSoftMaterial
{

 public: 
	struct TSoftObjectPtr<UMaterialInterface> SoftMaterial;  // Offset: 0 Size: 40



 // Functions 
 public:
}; 
 
 //Function UMG.Image.SetBrushFromSoftTexture Size 48
class FSetBrushFromSoftTexture
{

 public: 
	struct TSoftObjectPtr<UTexture2D> SoftTexture;  // Offset: 0 Size: 40
	char pad_40_1 : 7;  // Offset: 40 Size: 1
	bool bMatchSize : 1;  // Offset: 40 Size: 1
	char pad_41[7];  // Offset: 41 Size: 7



 // Functions 
 public:
}; 
 
 //Function UMG.Image.SetBrushResourceObject Size 8
class FSetBrushResourceObject
{

 public: 
	struct UObject* ResourceObject;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.RichTextBlock.SetDefaultColorAndOpacity Size 40
class FSetDefaultColorAndOpacity
{

 public: 
	struct FSlateColor InColorAndOpacity;  // Offset: 0 Size: 40



 // Functions 
 public:
}; 
 
 //Function UMG.CircularThrobber.SetRadius Size 4
class FSetRadius
{

 public: 
	float InRadius;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.RichTextBlock.SetDefaultFont Size 88
class FSetDefaultFont
{

 public: 
	struct FSlateFontInfo InFontInfo;  // Offset: 0 Size: 88



 // Functions 
 public:
}; 
 
 //Function UMG.RichTextBlock.SetDefaultShadowColorAndOpacity Size 16
class FSetDefaultShadowColorAndOpacity
{

 public: 
	struct FLinearColor InShadowColorAndOpacity;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function UMG.ScrollBox.SetConsumeMouseWheel Size 1
class FSetConsumeMouseWheel
{

 public: 
	enum class EConsumeMouseWheel NewConsumeMouseWheel;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.RichTextBlock.SetDefaultShadowOffset Size 8
class FSetDefaultShadowOffset
{

 public: 
	struct FVector2D InShadowOffset;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.RichTextBlock.SetDefaultStrikeBrush Size 136
class FSetDefaultStrikeBrush
{

 public: 
	struct FSlateBrush InStrikeBrush;  // Offset: 0 Size: 136



 // Functions 
 public:
}; 
 
 //Function UMG.Border.SetBrushColor Size 16
class FSetBrushColor
{

 public: 
	struct FLinearColor InBrushColor;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function UMG.RichTextBlock.SetDefaultTextStyle Size 624
class FSetDefaultTextStyle
{

 public: 
	struct FTextBlockStyle InDefaultTextStyle;  // Offset: 0 Size: 624



 // Functions 
 public:
}; 
 
 //Function UMG.ListViewBase.GetDisplayedEntryWidgets Size 16
class FGetDisplayedEntryWidgets
{

 public: 
	struct TArray<struct UUserWidget*> ReturnValue;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetComponent.GetWidgetSpace Size 1
class FGetWidgetSpace
{

 public: 
	enum class EWidgetSpace ReturnValue;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.CanvasPanel.AddChildToCanvas Size 16
class FAddChildToCanvas
{

 public: 
	struct UWidget* Content;  // Offset: 0 Size: 8
	struct UCanvasPanelSlot* ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.ScrollBox.SetScrollbarVisibility Size 1
class FSetScrollbarVisibility
{

 public: 
	enum class ESlateVisibility NewScrollBarVisibility;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.ProgressBar.SetFillColorAndOpacity Size 16
class FSetFillColorAndOpacity
{

 public: 
	struct FLinearColor InColor;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function UMG.ScrollBox.SetScrollOffset Size 4
class FSetScrollOffset
{

 public: 
	float NewScrollOffset;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.ListView.BP_GetSelectedItems Size 24
class FBP_GetSelectedItems
{

 public: 
	struct TArray<struct UObject*> Items;  // Offset: 0 Size: 16
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool ReturnValue : 1;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //Function UMG.ListView.BP_ScrollItemIntoView Size 8
class FBP_ScrollItemIntoView
{

 public: 
	struct UObject* Item;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.ListView.BP_SetSelectedItem Size 8
class FBP_SetSelectedItem
{

 public: 
	struct UObject* Item;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.ListView.GetIndexForItem Size 16
class FGetIndexForItem
{

 public: 
	struct UObject* Item;  // Offset: 0 Size: 8
	int32_t ReturnValue;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.ListView.GetNumItems Size 4
class FGetNumItems
{

 public: 
	int32_t ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.ListView.IsRefreshPending Size 1
class FIsRefreshPending
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.TileView.SetEntryWidth Size 4
class FSetEntryWidth
{

 public: 
	float NewWidth;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.ExpandableArea.SetIsExpanded_Animated Size 1
class FSetIsExpanded_Animated
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool IsExpanded : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.ListView.RemoveItem Size 8
class FRemoveItem
{

 public: 
	struct UObject* Item;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.TileView.GetEntryHeight Size 4
class FGetEntryHeight
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.DynamicEntryBox.BP_CreateEntryOfClass Size 16
class FBP_CreateEntryOfClass
{

 public: 
	UUserWidget* EntryClass;  // Offset: 0 Size: 8
	struct UUserWidget* ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.TileView.GetEntryWidth Size 4
class FGetEntryWidth
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetComponent.GetCurrentDrawSize Size 8
class FGetCurrentDrawSize
{

 public: 
	struct FVector2D ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetComponent.GetCylinderArcAngle Size 4
class FGetCylinderArcAngle
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.VerticalBoxSlot.SetSize Size 8
class FSetSize
{

 public: 
	struct FSlateChildSize InSize;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetComponent.GetDrawAtDesiredSize Size 1
class FGetDrawAtDesiredSize
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetComponent.GetOwnerPlayer Size 8
class FGetOwnerPlayer
{

 public: 
	struct ULocalPlayer* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetComponent.SetWidget Size 8
class FSetWidget
{

 public: 
	struct UUserWidget* Widget;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.ColorBinding.GetLinearValue Size 16
class FGetLinearValue
{

 public: 
	struct FLinearColor ReturnValue;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetComponent.GetPivot Size 8
class FGetPivot
{

 public: 
	struct FVector2D ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetComponent.GetTickWhenOffscreen Size 1
class FGetTickWhenOffscreen
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetComponent.GetTwoSided Size 1
class FGetTwoSided
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetComponent.GetUserWidgetObject Size 8
class FGetUserWidgetObject
{

 public: 
	struct UUserWidget* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetComponent.GetWindowFocusable Size 1
class FGetWindowFocusable
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetComponent.SetCylinderArcAngle Size 4
class FSetCylinderArcAngle
{

 public: 
	float InCylinderArcAngle;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetComponent.SetDrawAtDesiredSize Size 1
class FSetDrawAtDesiredSize
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bInDrawAtDesiredSize : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetComponent.SetDrawSize Size 8
class FSetDrawSize
{

 public: 
	struct FVector2D Size;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetComponent.SetManuallyRedraw Size 1
class FSetManuallyRedraw
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bUseManualRedraw : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetComponent.SetTwoSided Size 1
class FSetTwoSided
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bWantTwoSided : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetComponent.SetWindowFocusable Size 1
class FSetWindowFocusable
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bInWindowFocusable : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetComponent.SetWindowVisibility Size 1
class FSetWindowVisibility
{

 public: 
	enum class EWindowVisibility InVisibility;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.AsyncTaskDownloadImage.DownloadImage Size 24
class FDownloadImage
{

 public: 
	struct FString URL;  // Offset: 0 Size: 16
	struct UAsyncTaskDownloadImage* ReturnValue;  // Offset: 16 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.UniformGridPanel.SetMinDesiredSlotHeight Size 4
class FSetMinDesiredSlotHeight
{

 public: 
	float InMinDesiredSlotHeight;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.BackgroundBlur.SetLowQualityFallbackBrush Size 136
class FSetLowQualityFallbackBrush
{

 public: 
	struct FSlateBrush InBrush;  // Offset: 0 Size: 136



 // Functions 
 public:
}; 
 
 //Function UMG.WrapBoxSlot.SetVerticalAlignment Size 1
class FSetVerticalAlignment
{

 public: 
	enum class EVerticalAlignment InVerticalAlignment;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetInteractionComponent.SetCustomHitResult Size 136
class FSetCustomHitResult
{

 public: 
	struct FHitResult HitResult;  // Offset: 0 Size: 136



 // Functions 
 public:
}; 
 
 //Function UMG.Border.SetDesiredSizeScale Size 8
class FSetDesiredSizeScale
{

 public: 
	struct FVector2D InScale;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.Viewport.GetViewRotation Size 12
class FGetViewRotation
{

 public: 
	struct FRotator ReturnValue;  // Offset: 0 Size: 12



 // Functions 
 public:
}; 
 
 //Function UMG.SlateBlueprintLibrary.AbsoluteToLocal Size 72
class FAbsoluteToLocal
{

 public: 
	struct FGeometry Geometry;  // Offset: 0 Size: 56
	struct FVector2D AbsoluteCoordinate;  // Offset: 56 Size: 8
	struct FVector2D ReturnValue;  // Offset: 64 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.CheckBox.SetClickMethod Size 1
class FSetClickMethod
{

 public: 
	enum class EButtonClickMethod InClickMethod;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.CheckBox.SetPressMethod Size 1
class FSetPressMethod
{

 public: 
	enum class EButtonPressMethod InPressMethod;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.CheckBox.SetTouchMethod Size 1
class FSetTouchMethod
{

 public: 
	enum class EButtonTouchMethod InTouchMethod;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.CanvasPanelSlot.GetLayout Size 40
class FGetLayout
{

 public: 
	struct FAnchorData ReturnValue;  // Offset: 0 Size: 40



 // Functions 
 public:
}; 
 
 //Function UMG.DragDropOperation.Dragged Size 112
class FDragged
{

 public: 
	struct FPointerEvent PointerEvent;  // Offset: 0 Size: 112



 // Functions 
 public:
}; 
 
 //Function UMG.CanvasPanelSlot.GetOffsets Size 16
class FGetOffsets
{

 public: 
	struct FMargin ReturnValue;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function UMG.CanvasPanelSlot.GetSize Size 8
class FGetSize
{

 public: 
	struct FVector2D ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.CanvasPanelSlot.SetAnchors Size 16
class FSetAnchors
{

 public: 
	struct FAnchors InAnchors;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function UMG.CanvasPanelSlot.SetMaximum Size 8
class FSetMaximum
{

 public: 
	struct FVector2D InMaximumAnchors;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.CanvasPanelSlot.SetPosition Size 8
class FSetPosition
{

 public: 
	struct FVector2D InPosition;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.CheckBox.IsChecked Size 1
class FIsChecked
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.UniformGridSlot.SetRow Size 4
class FSetRow
{

 public: 
	int32_t InRow;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.CheckBox.SetCheckedState Size 1
class FSetCheckedState
{

 public: 
	enum class ECheckBoxState InCheckedState;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.Throbber.SetNumberOfPieces Size 4
class FSetNumberOfPieces
{

 public: 
	int32_t InNumberOfPieces;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.DragDropOperation.Drop Size 112
class FDrop
{

 public: 
	struct FPointerEvent PointerEvent;  // Offset: 0 Size: 112



 // Functions 
 public:
}; 
 
 //Function UMG.DynamicEntryBoxBase.SetEntrySpacing Size 8
class FSetEntrySpacing
{

 public: 
	struct FVector2D InEntrySpacing;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.DynamicEntryBoxBase.SetRadialSettings Size 16
class FSetRadialSettings
{

 public: 
	struct FRadialBoxSettings InSettings;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function UMG.DynamicEntryBox.RemoveEntry Size 8
class FRemoveEntry
{

 public: 
	struct UUserWidget* EntryWidget;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.DynamicEntryBox.Reset Size 1
class FReset
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bDeleteWidgets : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.RetainerBox.SetRetainRendering Size 1
class FSetRetainRendering
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bInRetainRendering : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.ExpandableArea.GetIsExpanded Size 1
class FGetIsExpanded
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.GridPanel.SetRowFill Size 8
class FSetRowFill
{

 public: 
	int32_t ColumnIndex;  // Offset: 0 Size: 4
	float Coefficient;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.UniformGridSlot.SetColumn Size 4
class FSetColumn
{

 public: 
	int32_t InColumn;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.GridSlot.SetColumnSpan Size 4
class FSetColumnSpan
{

 public: 
	int32_t InColumnSpan;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.GridSlot.SetRowSpan Size 4
class FSetRowSpan
{

 public: 
	int32_t InRowSpan;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.InvalidationBox.SetCanCache Size 1
class FSetCanCache
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool CanCache : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.UserListEntryLibrary.GetOwningListView Size 24
class FGetOwningListView
{

 public: 
	struct TScriptInterface<IUserListEntry> UserListEntry;  // Offset: 0 Size: 16
	struct UListViewBase* ReturnValue;  // Offset: 16 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.UserObjectListEntryLibrary.GetListItemObject Size 24
class FGetListItemObject
{

 public: 
	struct TScriptInterface<IUserObjectListEntry> UserObjectListEntry;  // Offset: 0 Size: 16
	struct UObject* ReturnValue;  // Offset: 16 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.Viewport.SetViewLocation Size 12
class FSetViewLocation
{

 public: 
	struct FVector Location;  // Offset: 0 Size: 12



 // Functions 
 public:
}; 
 
 //Function UMG.Overlay.AddChildToOverlay Size 16
class FAddChildToOverlay
{

 public: 
	struct UWidget* Content;  // Offset: 0 Size: 8
	struct UOverlaySlot* ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.ProgressBar.SetIsMarquee Size 1
class FSetIsMarquee
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool InbIsMarquee : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.RetainerBox.SetEffectMaterial Size 8
class FSetEffectMaterial
{

 public: 
	struct UMaterialInterface* EffectMaterial;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.RetainerBox.SetTextureParameter Size 8
class FSetTextureParameter
{

 public: 
	struct FName TextureParameter;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.SafeZone.SetSidesToPad Size 4
class FSetSidesToPad
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool InPadLeft : 1;  // Offset: 0 Size: 1
	char pad_1_1 : 7;  // Offset: 1 Size: 1
	bool InPadRight : 1;  // Offset: 1 Size: 1
	char pad_2_1 : 7;  // Offset: 2 Size: 1
	bool InPadTop : 1;  // Offset: 2 Size: 1
	char pad_3_1 : 7;  // Offset: 3 Size: 1
	bool InPadBottom : 1;  // Offset: 3 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.ScaleBox.SetIgnoreInheritedScale Size 1
class FSetIgnoreInheritedScale
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bInIgnoreInheritedScale : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.ScaleBox.SetStretchDirection Size 1
class FSetStretchDirection
{

 public: 
	enum class EStretchDirection InStretchDirection;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.ScrollBox.GetScrollOffset Size 4
class FGetScrollOffset
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.ScrollBox.GetViewOffsetFraction Size 4
class FGetViewOffsetFraction
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.ScrollBox.SetAllowOverscroll Size 1
class FSetAllowOverscroll
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool NewAllowOverscroll : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.ScrollBox.SetOrientation Size 1
class FSetOrientation
{

 public: 
	enum class EOrientation NewOrientation;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.ScrollBox.SetScrollbarThickness Size 8
class FSetScrollbarThickness
{

 public: 
	struct FVector2D NewScrollbarThickness;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.ScrollBox.SetScrollWhenFocusChanges Size 1
class FSetScrollWhenFocusChanges
{

 public: 
	enum class EScrollWhenFocusChanges NewScrollWhenFocusChanges;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.SizeBox.SetHeightOverride Size 4
class FSetHeightOverride
{

 public: 
	float InHeightOverride;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.SizeBox.SetMaxAspectRatio Size 4
class FSetMaxAspectRatio
{

 public: 
	float InMaxAspectRatio;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.SlateBlueprintLibrary.LocalToAbsolute Size 72
class FLocalToAbsolute
{

 public: 
	struct FGeometry Geometry;  // Offset: 0 Size: 56
	struct FVector2D LocalCoordinate;  // Offset: 56 Size: 8
	struct FVector2D ReturnValue;  // Offset: 64 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.SizeBox.SetMaxDesiredHeight Size 4
class FSetMaxDesiredHeight
{

 public: 
	float InMaxDesiredHeight;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.SizeBox.SetMaxDesiredWidth Size 4
class FSetMaxDesiredWidth
{

 public: 
	float InMaxDesiredWidth;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.SizeBox.SetMinDesiredHeight Size 4
class FSetMinDesiredHeight
{

 public: 
	float InMinDesiredHeight;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.SlateBlueprintLibrary.AbsoluteToViewport Size 32
class FAbsoluteToViewport
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct FVector2D AbsoluteDesktopCoordinate;  // Offset: 8 Size: 8
	struct FVector2D PixelPosition;  // Offset: 16 Size: 8
	struct FVector2D ViewportPosition;  // Offset: 24 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.SlateBlueprintLibrary.GetAbsoluteSize Size 64
class FGetAbsoluteSize
{

 public: 
	struct FGeometry Geometry;  // Offset: 0 Size: 56
	struct FVector2D ReturnValue;  // Offset: 56 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.SlateBlueprintLibrary.GetLocalSize Size 64
class FGetLocalSize
{

 public: 
	struct FGeometry Geometry;  // Offset: 0 Size: 56
	struct FVector2D ReturnValue;  // Offset: 56 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.SlateBlueprintLibrary.IsUnderLocation Size 68
class FIsUnderLocation
{

 public: 
	struct FGeometry Geometry;  // Offset: 0 Size: 56
	struct FVector2D AbsoluteCoordinate;  // Offset: 56 Size: 8
	char pad_64_1 : 7;  // Offset: 64 Size: 1
	bool ReturnValue : 1;  // Offset: 64 Size: 1
	char pad_65[3];  // Offset: 65 Size: 3



 // Functions 
 public:
}; 
 
 //Function UMG.SlateBlueprintLibrary.LocalToViewport Size 88
class FLocalToViewport
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct FGeometry Geometry;  // Offset: 8 Size: 56
	struct FVector2D LocalCoordinate;  // Offset: 64 Size: 8
	struct FVector2D PixelPosition;  // Offset: 72 Size: 8
	struct FVector2D ViewportPosition;  // Offset: 80 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.SlateBlueprintLibrary.ScreenToWidgetLocal Size 88
class FScreenToWidgetLocal
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct FGeometry Geometry;  // Offset: 8 Size: 56
	struct FVector2D ScreenPosition;  // Offset: 64 Size: 8
	struct FVector2D LocalCoordinate;  // Offset: 72 Size: 8
	char pad_80_1 : 7;  // Offset: 80 Size: 1
	bool bIncludeWindowPosition : 1;  // Offset: 80 Size: 1
	char pad_81[7];  // Offset: 81 Size: 7



 // Functions 
 public:
}; 
 
 //Function UMG.SlateBlueprintLibrary.TransformScalarLocalToAbsolute Size 64
class FTransformScalarLocalToAbsolute
{

 public: 
	struct FGeometry Geometry;  // Offset: 0 Size: 56
	float LocalScalar;  // Offset: 56 Size: 4
	float ReturnValue;  // Offset: 60 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.SlateBlueprintLibrary.TransformVectorAbsoluteToLocal Size 72
class FTransformVectorAbsoluteToLocal
{

 public: 
	struct FGeometry Geometry;  // Offset: 0 Size: 56
	struct FVector2D AbsoluteVector;  // Offset: 56 Size: 8
	struct FVector2D ReturnValue;  // Offset: 64 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetLayoutLibrary.ProjectWorldLocationToWidgetPosition Size 32
class FProjectWorldLocationToWidgetPosition
{

 public: 
	struct APlayerController* PlayerController;  // Offset: 0 Size: 8
	struct FVector WorldLocation;  // Offset: 8 Size: 12
	struct FVector2D ScreenPosition;  // Offset: 20 Size: 8
	char pad_28_1 : 7;  // Offset: 28 Size: 1
	bool bPlayerViewportRelative : 1;  // Offset: 28 Size: 1
	char pad_29_1 : 7;  // Offset: 29 Size: 1
	bool ReturnValue : 1;  // Offset: 29 Size: 1
	char pad_30[2];  // Offset: 30 Size: 2



 // Functions 
 public:
}; 
 
 //Function UMG.SlateBlueprintLibrary.TransformVectorLocalToAbsolute Size 72
class FTransformVectorLocalToAbsolute
{

 public: 
	struct FGeometry Geometry;  // Offset: 0 Size: 56
	struct FVector2D LocalVector;  // Offset: 56 Size: 8
	struct FVector2D ReturnValue;  // Offset: 64 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.Slider.SetIndentHandle Size 1
class FSetIndentHandle
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool InValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.Slider.SetLocked Size 1
class FSetLocked
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool InValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.Slider.SetStepSize Size 4
class FSetStepSize
{

 public: 
	float InValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.TextBinding.GetTextValue Size 24
class FGetTextValue
{

 public: 
	struct FText ReturnValue;  // Offset: 0 Size: 24



 // Functions 
 public:
}; 
 
 //Function UMG.Throbber.SetAnimateOpacity Size 1
class FSetAnimateOpacity
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bInAnimateOpacity : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetInteractionComponent.IsOverFocusableWidget Size 1
class FIsOverFocusableWidget
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.TreeView.SetItemExpansion Size 16
class FSetItemExpansion
{

 public: 
	struct UObject* Item;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool bExpandItem : 1;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7



 // Functions 
 public:
}; 
 
 //Function UMG.UMGSequencePlayer.GetUserTag Size 8
class FGetUserTag
{

 public: 
	struct FName ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.UMGSequencePlayer.SetUserTag Size 8
class FSetUserTag
{

 public: 
	struct FName InUserTag;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.UniformGridPanel.AddChildToUniformGrid Size 24
class FAddChildToUniformGrid
{

 public: 
	struct UWidget* Content;  // Offset: 0 Size: 8
	int32_t InRow;  // Offset: 8 Size: 4
	int32_t InColumn;  // Offset: 12 Size: 4
	struct UUniformGridSlot* ReturnValue;  // Offset: 16 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.VerticalBox.AddChildToVerticalBox Size 16
class FAddChildToVerticalBox
{

 public: 
	struct UWidget* Content;  // Offset: 0 Size: 8
	struct UVerticalBoxSlot* ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.Viewport.GetViewLocation Size 12
class FGetViewLocation
{

 public: 
	struct FVector ReturnValue;  // Offset: 0 Size: 12



 // Functions 
 public:
}; 
 
 //Function UMG.Viewport.SetViewRotation Size 12
class FSetViewRotation
{

 public: 
	struct FRotator Rotation;  // Offset: 0 Size: 12



 // Functions 
 public:
}; 
 
 //Function UMG.Viewport.Spawn Size 16
class FSpawn
{

 public: 
	AActor* ActorClass;  // Offset: 0 Size: 8
	struct AActor* ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetAnimation.GetStartTime Size 4
class FGetStartTime
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationProxyObject Size 48
class FCreatePlayAnimationProxyObject
{

 public: 
	struct UUMGSequencePlayer* Result;  // Offset: 0 Size: 8
	struct UUserWidget* Widget;  // Offset: 8 Size: 8
	struct UWidgetAnimation* InAnimation;  // Offset: 16 Size: 8
	float StartAtTime;  // Offset: 24 Size: 4
	int32_t NumLoopsToPlay;  // Offset: 28 Size: 4
	enum class EUMGSequencePlayMode PlayMode;  // Offset: 32 Size: 1
	char pad_33[3];  // Offset: 33 Size: 3
	float PlaybackSpeed;  // Offset: 36 Size: 4
	struct UWidgetAnimationPlayCallbackProxy* ReturnValue;  // Offset: 40 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetInteractionComponent.Get2DHitLocation Size 8
class FGet2DHitLocation
{

 public: 
	struct FVector2D ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetInteractionComponent.GetHoveredWidgetComponent Size 8
class FGetHoveredWidgetComponent
{

 public: 
	struct UWidgetComponent* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetInteractionComponent.GetLastHitResult Size 136
class FGetLastHitResult
{

 public: 
	struct FHitResult ReturnValue;  // Offset: 0 Size: 136



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetInteractionComponent.IsOverHitTestVisibleWidget Size 1
class FIsOverHitTestVisibleWidget
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetInteractionComponent.IsOverInteractableWidget Size 1
class FIsOverInteractableWidget
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetInteractionComponent.ReleasePointerKey Size 24
class FReleasePointerKey
{

 public: 
	struct FKey Key;  // Offset: 0 Size: 24



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetInteractionComponent.ScrollWheel Size 4
class FScrollWheel
{

 public: 
	float ScrollDelta;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetLayoutLibrary.GetMousePositionOnPlatform Size 8
class FGetMousePositionOnPlatform
{

 public: 
	struct FVector2D ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetLayoutLibrary.GetMousePositionOnViewport Size 16
class FGetMousePositionOnViewport
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct FVector2D ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetLayoutLibrary.SlotAsSizeBoxSlot Size 16
class FSlotAsSizeBoxSlot
{

 public: 
	struct UWidget* Widget;  // Offset: 0 Size: 8
	struct USizeBoxSlot* ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetLayoutLibrary.GetMousePositionScaledByDPI Size 24
class FGetMousePositionScaledByDPI
{

 public: 
	struct APlayerController* Player;  // Offset: 0 Size: 8
	float LocationX;  // Offset: 8 Size: 4
	float LocationY;  // Offset: 12 Size: 4
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool ReturnValue : 1;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetLayoutLibrary.GetPlayerScreenWidgetGeometry Size 64
class FGetPlayerScreenWidgetGeometry
{

 public: 
	struct APlayerController* PlayerController;  // Offset: 0 Size: 8
	struct FGeometry ReturnValue;  // Offset: 8 Size: 56



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetLayoutLibrary.GetViewportScale Size 16
class FGetViewportScale
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	float ReturnValue;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetLayoutLibrary.GetViewportWidgetGeometry Size 64
class FGetViewportWidgetGeometry
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct FGeometry ReturnValue;  // Offset: 8 Size: 56



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetLayoutLibrary.RemoveAllWidgets Size 8
class FRemoveAllWidgets
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetLayoutLibrary.SlotAsCanvasSlot Size 16
class FSlotAsCanvasSlot
{

 public: 
	struct UWidget* Widget;  // Offset: 0 Size: 8
	struct UCanvasPanelSlot* ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetLayoutLibrary.SlotAsGridSlot Size 16
class FSlotAsGridSlot
{

 public: 
	struct UWidget* Widget;  // Offset: 0 Size: 8
	struct UGridSlot* ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetLayoutLibrary.SlotAsHorizontalBoxSlot Size 16
class FSlotAsHorizontalBoxSlot
{

 public: 
	struct UWidget* Widget;  // Offset: 0 Size: 8
	struct UHorizontalBoxSlot* ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetLayoutLibrary.SlotAsOverlaySlot Size 16
class FSlotAsOverlaySlot
{

 public: 
	struct UWidget* Widget;  // Offset: 0 Size: 8
	struct UOverlaySlot* ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetLayoutLibrary.SlotAsSafeBoxSlot Size 16
class FSlotAsSafeBoxSlot
{

 public: 
	struct UWidget* Widget;  // Offset: 0 Size: 8
	struct USafeZoneSlot* ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetLayoutLibrary.SlotAsScaleBoxSlot Size 16
class FSlotAsScaleBoxSlot
{

 public: 
	struct UWidget* Widget;  // Offset: 0 Size: 8
	struct UScaleBoxSlot* ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetLayoutLibrary.SlotAsScrollBoxSlot Size 16
class FSlotAsScrollBoxSlot
{

 public: 
	struct UWidget* Widget;  // Offset: 0 Size: 8
	struct UScrollBoxSlot* ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetLayoutLibrary.SlotAsWidgetSwitcherSlot Size 16
class FSlotAsWidgetSwitcherSlot
{

 public: 
	struct UWidget* Widget;  // Offset: 0 Size: 8
	struct UWidgetSwitcherSlot* ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetSwitcher.GetActiveWidget Size 8
class FGetActiveWidget
{

 public: 
	struct UWidget* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetSwitcher.GetActiveWidgetIndex Size 4
class FGetActiveWidgetIndex
{

 public: 
	int32_t ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetSwitcher.GetNumWidgets Size 4
class FGetNumWidgets
{

 public: 
	int32_t ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetSwitcher.SetActiveWidget Size 8
class FSetActiveWidget
{

 public: 
	struct UWidget* Widget;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.WidgetSwitcher.SetActiveWidgetIndex Size 4
class FSetActiveWidgetIndex
{

 public: 
	int32_t Index;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function UMG.WrapBox.AddChildToWrapBox Size 16
class FAddChildToWrapBox
{

 public: 
	struct UWidget* Content;  // Offset: 0 Size: 8
	struct UWrapBoxSlot* ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function UMG.WrapBoxSlot.SetFillEmptySpace Size 1
class FSetFillEmptySpace
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool InbFillEmptySpace : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 