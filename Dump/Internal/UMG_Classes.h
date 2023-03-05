#pragma once 
#include <UMG_Structs.h>
 
 
 
//Class UMG.ContentWidget Size 288
// Inherited 288 bytes 
class UContentWidget : public UPanelWidget
{

 public: 



 // Functions 
 public:
	struct UPanelSlot* SetContent(struct UWidget* Content); // Function UMG.ContentWidget.SetContent
	struct UPanelSlot* GetContentSlot(); // Function UMG.ContentWidget.GetContentSlot
	struct UWidget* GetContent(); // Function UMG.ContentWidget.GetContent
}; 
 
 


//Class UMG.WidgetTree Size 48
// Inherited 40 bytes 
class UWidgetTree : public UObject
{

 public: 
	struct UWidget* RootWidget;  // Offset: 40 Size: 8



 // Functions 
 public:
}; 
 
 


//Class UMG.RichTextBlock Size 1656
// Inherited 296 bytes 
class URichTextBlock : public UTextLayoutWidget
{

 public: 
	struct FText Text;  // Offset: 296 Size: 24
	struct UDataTable* TextStyleSet;  // Offset: 320 Size: 8
	struct TArray<URichTextBlockDecorator*> DecoratorClasses;  // Offset: 328 Size: 16
	char pad_344_1 : 7;  // Offset: 344 Size: 1
	bool bOverrideDefaultStyle : 1;  // Offset: 344 Size: 1
	char pad_345[7];  // Offset: 345 Size: 7
	struct FTextBlockStyle DefaultTextStyleOverride;  // Offset: 352 Size: 624
	float MinDesiredWidth;  // Offset: 976 Size: 4
	enum class ETextTransformPolicy TextTransformPolicy;  // Offset: 980 Size: 1
	char pad_981[3];  // Offset: 981 Size: 3
	struct FTextBlockStyle DefaultTextStyle;  // Offset: 984 Size: 624
	struct TArray<struct URichTextBlockDecorator*> InstanceDecorators;  // Offset: 1608 Size: 16
	char pad_1624[32];  // Offset: 1624 Size: 32



 // Functions 
 public:
	void SetTextTransformPolicy(enum class ETextTransformPolicy InTransformPolicy); // Function UMG.RichTextBlock.SetTextTransformPolicy
	void SetTextStyleSet(struct UDataTable* NewTextStyleSet); // Function UMG.RichTextBlock.SetTextStyleSet
	void SetText(struct FText& InText); // Function UMG.RichTextBlock.SetText
	void SetMinDesiredWidth(float InMinDesiredWidth); // Function UMG.RichTextBlock.SetMinDesiredWidth
	void SetDefaultTextStyle(struct FTextBlockStyle& InDefaultTextStyle); // Function UMG.RichTextBlock.SetDefaultTextStyle
	void SetDefaultStrikeBrush(struct FSlateBrush& InStrikeBrush); // Function UMG.RichTextBlock.SetDefaultStrikeBrush
	void SetDefaultShadowOffset(struct FVector2D InShadowOffset); // Function UMG.RichTextBlock.SetDefaultShadowOffset
	void SetDefaultShadowColorAndOpacity(struct FLinearColor InShadowColorAndOpacity); // Function UMG.RichTextBlock.SetDefaultShadowColorAndOpacity
	void SetDefaultFont(struct FSlateFontInfo InFontInfo); // Function UMG.RichTextBlock.SetDefaultFont
	void SetDefaultColorAndOpacity(struct FSlateColor InColorAndOpacity); // Function UMG.RichTextBlock.SetDefaultColorAndOpacity
	void SetAutoWrapText(bool InAutoTextWrap); // Function UMG.RichTextBlock.SetAutoWrapText
	struct FText GetText(); // Function UMG.RichTextBlock.GetText
	struct URichTextBlockDecorator* GetDecoratorByClass(URichTextBlockDecorator* DecoratorClass); // Function UMG.RichTextBlock.GetDecoratorByClass
	void ClearAllDefaultStyleOverrides(); // Function UMG.RichTextBlock.ClearAllDefaultStyleOverrides
}; 
 
 


//Class UMG.Image Size 528
// Inherited 264 bytes 
class UImage : public UWidget
{

 public: 
	struct FSlateBrush Brush;  // Offset: 264 Size: 136
	struct FDelegate BrushDelegate;  // Offset: 400 Size: 16
	struct FLinearColor ColorAndOpacity;  // Offset: 416 Size: 16
	struct FDelegate ColorAndOpacityDelegate;  // Offset: 432 Size: 16
	char pad_448_1 : 7;  // Offset: 448 Size: 1
	bool bFlipForRightToLeftFlowDirection : 1;  // Offset: 448 Size: 1
	char pad_449[3];  // Offset: 449 Size: 3
	struct FDelegate OnMouseButtonDownEvent;  // Offset: 452 Size: 16
	char pad_468[60];  // Offset: 468 Size: 60



 // Functions 
 public:
	void SetOpacity(float InOpacity); // Function UMG.Image.SetOpacity
	void SetColorAndOpacity(struct FLinearColor InColorAndOpacity); // Function UMG.Image.SetColorAndOpacity
	void SetBrushTintColor(struct FSlateColor TintColor); // Function UMG.Image.SetBrushTintColor
	void SetBrushSize(struct FVector2D DesiredSize); // Function UMG.Image.SetBrushSize
	void SetBrushResourceObject(struct UObject* ResourceObject); // Function UMG.Image.SetBrushResourceObject
	void SetBrushFromTextureDynamic(struct UTexture2DDynamic* Texture, bool bMatchSize); // Function UMG.Image.SetBrushFromTextureDynamic
	void SetBrushFromTexture(struct UTexture2D* Texture, bool bMatchSize); // Function UMG.Image.SetBrushFromTexture
	void SetBrushFromSoftTexture(struct TSoftObjectPtr<UTexture2D> SoftTexture, bool bMatchSize); // Function UMG.Image.SetBrushFromSoftTexture
	void SetBrushFromSoftMaterial(struct TSoftObjectPtr<UMaterialInterface> SoftMaterial); // Function UMG.Image.SetBrushFromSoftMaterial
	void SetBrushFromMaterial(struct UMaterialInterface* Material); // Function UMG.Image.SetBrushFromMaterial
	void SetBrushFromAtlasInterface(struct TScriptInterface<ISlateTextureAtlasInterface> AtlasRegion, bool bMatchSize); // Function UMG.Image.SetBrushFromAtlasInterface
	void SetBrushFromAsset(struct USlateBrushAsset* Asset); // Function UMG.Image.SetBrushFromAsset
	void SetBrush(struct FSlateBrush& InBrush); // Function UMG.Image.SetBrush
	struct UMaterialInstanceDynamic* GetDynamicMaterial(); // Function UMG.Image.GetDynamicMaterial
}; 
 
 


//Class UMG.TextLayoutWidget Size 296
// Inherited 264 bytes 
class UTextLayoutWidget : public UWidget
{

 public: 
	struct FShapedTextOptions ShapedTextOptions;  // Offset: 264 Size: 3
	enum class ETextJustify Justification;  // Offset: 267 Size: 1
	enum class ETextWrappingPolicy WrappingPolicy;  // Offset: 268 Size: 1
	char AutoWrapText : 1;  // Offset: 269 Size: 1
	char pad_269_1 : 7;  // Offset: 269 Size: 1
	char pad_270[3];  // Offset: 270 Size: 3
	float WrapTextAt;  // Offset: 272 Size: 4
	struct FMargin Margin;  // Offset: 276 Size: 16
	float LineHeightPercentage;  // Offset: 292 Size: 4



 // Functions 
 public:
	void SetJustification(enum class ETextJustify InJustification); // Function UMG.TextLayoutWidget.SetJustification
}; 
 
 


//Class UMG.Visual Size 40
// Inherited 40 bytes 
class UVisual : public UObject
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class UMG.Widget Size 264
// Inherited 40 bytes 
class UWidget : public UVisual
{

 public: 
	struct UPanelSlot* Slot;  // Offset: 40 Size: 8
	struct FDelegate bIsEnabledDelegate;  // Offset: 48 Size: 16
	struct FText ToolTipText;  // Offset: 64 Size: 24
	struct FDelegate ToolTipTextDelegate;  // Offset: 88 Size: 16
	struct UWidget* ToolTipWidget;  // Offset: 104 Size: 8
	struct FDelegate ToolTipWidgetDelegate;  // Offset: 112 Size: 16
	struct FDelegate VisibilityDelegate;  // Offset: 128 Size: 16
	struct FWidgetTransform RenderTransform;  // Offset: 144 Size: 28
	struct FVector2D RenderTransformPivot;  // Offset: 172 Size: 8
	char bIsVariable : 1;  // Offset: 180 Size: 1
	char bCreatedByConstructionScript : 1;  // Offset: 180 Size: 1
	char bIsEnabled : 1;  // Offset: 180 Size: 1
	char bOverride_Cursor : 1;  // Offset: 180 Size: 1
	char pad_180_1 : 4;  // Offset: 180 Size: 1
	char pad_181[4];  // Offset: 181 Size: 4
	struct USlateAccessibleWidgetData* AccessibleWidgetData;  // Offset: 184 Size: 8
	char bIsVolatile : 1;  // Offset: 192 Size: 1
	char pad_192_1 : 7;  // Offset: 192 Size: 1
	enum class EMouseCursor Cursor;  // Offset: 193 Size: 1
	enum class EWidgetClipping Clipping;  // Offset: 194 Size: 1
	enum class ESlateVisibility Visibility;  // Offset: 195 Size: 1
	float RenderOpacity;  // Offset: 196 Size: 4
	struct UWidgetNavigation* Navigation;  // Offset: 200 Size: 8
	enum class EFlowDirectionPreference FlowDirectionPreference;  // Offset: 208 Size: 1
	char pad_209[39];  // Offset: 209 Size: 39
	struct TArray<struct UPropertyBinding*> NativeBindings;  // Offset: 248 Size: 16



 // Functions 
 public:
	void SetVisibility(enum class ESlateVisibility InVisibility); // Function UMG.Widget.SetVisibility
	void SetUserFocus(struct APlayerController* PlayerController); // Function UMG.Widget.SetUserFocus
	void SetToolTipText(struct FText& InToolTipText); // Function UMG.Widget.SetToolTipText
	void SetToolTip(struct UWidget* Widget); // Function UMG.Widget.SetToolTip
	void SetRenderTranslation(struct FVector2D Translation); // Function UMG.Widget.SetRenderTranslation
	void SetRenderTransformPivot(struct FVector2D Pivot); // Function UMG.Widget.SetRenderTransformPivot
	void SetRenderTransformAngle(float Angle); // Function UMG.Widget.SetRenderTransformAngle
	void SetRenderTransform(struct FWidgetTransform InTransform); // Function UMG.Widget.SetRenderTransform
	void SetRenderShear(struct FVector2D Shear); // Function UMG.Widget.SetRenderShear
	void SetRenderScale(struct FVector2D Scale); // Function UMG.Widget.SetRenderScale
	void SetRenderOpacity(float InOpacity); // Function UMG.Widget.SetRenderOpacity
	void SetNavigationRuleExplicit(enum class EUINavigation Direction, struct UWidget* InWidget); // Function UMG.Widget.SetNavigationRuleExplicit
	void SetNavigationRuleCustomBoundary(enum class EUINavigation Direction, struct FDelegate InCustomDelegate); // Function UMG.Widget.SetNavigationRuleCustomBoundary
	void SetNavigationRuleCustom(enum class EUINavigation Direction, struct FDelegate InCustomDelegate); // Function UMG.Widget.SetNavigationRuleCustom
	void SetNavigationRuleBase(enum class EUINavigation Direction, enum class EUINavigationRule Rule); // Function UMG.Widget.SetNavigationRuleBase
	void SetNavigationRule(enum class EUINavigation Direction, enum class EUINavigationRule Rule, struct FName WidgetToFocus); // Function UMG.Widget.SetNavigationRule
	void SetKeyboardFocus(); // Function UMG.Widget.SetKeyboardFocus
	void SetIsEnabled(bool bInIsEnabled); // Function UMG.Widget.SetIsEnabled
	void SetFocus(); // Function UMG.Widget.SetFocus
	void SetCursor(enum class EMouseCursor InCursor); // Function UMG.Widget.SetCursor
	void SetClipping(enum class EWidgetClipping InClipping); // Function UMG.Widget.SetClipping
	void SetAllNavigationRules(enum class EUINavigationRule Rule, struct FName WidgetToFocus); // Function UMG.Widget.SetAllNavigationRules
	void ResetCursor(); // Function UMG.Widget.ResetCursor
	void RemoveFromParent(); // Function UMG.Widget.RemoveFromParent
	struct FEventReply OnReply__DelegateSignature(); // DelegateFunction UMG.Widget.OnReply__DelegateSignature
	struct FEventReply OnPointerEvent__DelegateSignature(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // DelegateFunction UMG.Widget.OnPointerEvent__DelegateSignature
	bool IsVisible(); // Function UMG.Widget.IsVisible
	bool IsHovered(); // Function UMG.Widget.IsHovered
	void InvalidateLayoutAndVolatility(); // Function UMG.Widget.InvalidateLayoutAndVolatility
	bool HasUserFocusedDescendants(struct APlayerController* PlayerController); // Function UMG.Widget.HasUserFocusedDescendants
	bool HasUserFocus(struct APlayerController* PlayerController); // Function UMG.Widget.HasUserFocus
	bool HasMouseCaptureByUser(int32_t UserIndex, int32_t PointerIndex); // Function UMG.Widget.HasMouseCaptureByUser
	bool HasMouseCapture(); // Function UMG.Widget.HasMouseCapture
	bool HasKeyboardFocus(); // Function UMG.Widget.HasKeyboardFocus
	bool HasFocusedDescendants(); // Function UMG.Widget.HasFocusedDescendants
	bool HasAnyUserFocus(); // Function UMG.Widget.HasAnyUserFocus
	struct UWidget* GetWidget__DelegateSignature(); // DelegateFunction UMG.Widget.GetWidget__DelegateSignature
	enum class ESlateVisibility GetVisibility(); // Function UMG.Widget.GetVisibility
	struct FGeometry GetTickSpaceGeometry(); // Function UMG.Widget.GetTickSpaceGeometry
	struct FText GetText__DelegateSignature(); // DelegateFunction UMG.Widget.GetText__DelegateSignature
	enum class ESlateVisibility GetSlateVisibility__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateVisibility__DelegateSignature
	struct FSlateColor GetSlateColor__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateColor__DelegateSignature
	struct FSlateBrush GetSlateBrush__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateBrush__DelegateSignature
	float GetRenderTransformAngle(); // Function UMG.Widget.GetRenderTransformAngle
	float GetRenderOpacity(); // Function UMG.Widget.GetRenderOpacity
	struct UPanelWidget* GetParent(); // Function UMG.Widget.GetParent
	struct FGeometry GetPaintSpaceGeometry(); // Function UMG.Widget.GetPaintSpaceGeometry
	struct APlayerController* GetOwningPlayer(); // Function UMG.Widget.GetOwningPlayer
	struct ULocalPlayer* GetOwningLocalPlayer(); // Function UMG.Widget.GetOwningLocalPlayer
	enum class EMouseCursor GetMouseCursor__DelegateSignature(); // DelegateFunction UMG.Widget.GetMouseCursor__DelegateSignature
	struct FLinearColor GetLinearColor__DelegateSignature(); // DelegateFunction UMG.Widget.GetLinearColor__DelegateSignature
	bool GetIsEnabled(); // Function UMG.Widget.GetIsEnabled
	int32_t GetInt32__DelegateSignature(); // DelegateFunction UMG.Widget.GetInt32__DelegateSignature
	struct UGameInstance* GetGameInstance(); // Function UMG.Widget.GetGameInstance
	float GetFloat__DelegateSignature(); // DelegateFunction UMG.Widget.GetFloat__DelegateSignature
	struct FVector2D GetDesiredSize(); // Function UMG.Widget.GetDesiredSize
	enum class EWidgetClipping GetClipping(); // Function UMG.Widget.GetClipping
	enum class ECheckBoxState GetCheckBoxState__DelegateSignature(); // DelegateFunction UMG.Widget.GetCheckBoxState__DelegateSignature
	struct FGeometry GetCachedGeometry(); // Function UMG.Widget.GetCachedGeometry
	bool GetBool__DelegateSignature(); // DelegateFunction UMG.Widget.GetBool__DelegateSignature
	struct FText GetAccessibleText(); // Function UMG.Widget.GetAccessibleText
	struct FText GetAccessibleSummaryText(); // Function UMG.Widget.GetAccessibleSummaryText
	struct UWidget* GenerateWidgetForString__DelegateSignature(struct FString Item); // DelegateFunction UMG.Widget.GenerateWidgetForString__DelegateSignature
	struct UWidget* GenerateWidgetForObject__DelegateSignature(struct UObject* Item); // DelegateFunction UMG.Widget.GenerateWidgetForObject__DelegateSignature
	void ForceVolatile(bool bForce); // Function UMG.Widget.ForceVolatile
	void ForceLayoutPrepass(); // Function UMG.Widget.ForceLayoutPrepass
}; 
 
 


//Class UMG.UserWidget Size 608
// Inherited 264 bytes 
class UUserWidget : public UWidget
{

 public: 
	char pad_264[8];  // Offset: 264 Size: 8
	struct FLinearColor ColorAndOpacity;  // Offset: 272 Size: 16
	struct FDelegate ColorAndOpacityDelegate;  // Offset: 288 Size: 16
	struct FSlateColor ForegroundColor;  // Offset: 304 Size: 40
	struct FDelegate ForegroundColorDelegate;  // Offset: 344 Size: 16
	struct FMulticastInlineDelegate OnVisibilityChanged;  // Offset: 360 Size: 16
	char pad_376[24];  // Offset: 376 Size: 24
	struct FMargin Padding;  // Offset: 400 Size: 16
	struct TArray<struct UUMGSequencePlayer*> ActiveSequencePlayers;  // Offset: 416 Size: 16
	struct UUMGSequenceTickManager* AnimationTickManager;  // Offset: 432 Size: 8
	struct TArray<struct UUMGSequencePlayer*> StoppedSequencePlayers;  // Offset: 440 Size: 16
	struct TArray<struct FNamedSlotBinding> NamedSlotBindings;  // Offset: 456 Size: 16
	struct UWidgetTree* WidgetTree;  // Offset: 472 Size: 8
	int32_t Priority;  // Offset: 480 Size: 4
	char bSupportsKeyboardFocus : 1;  // Offset: 484 Size: 1
	char bIsFocusable : 1;  // Offset: 484 Size: 1
	char bStopAction : 1;  // Offset: 484 Size: 1
	char bHasScriptImplementedTick : 1;  // Offset: 484 Size: 1
	char bHasScriptImplementedPaint : 1;  // Offset: 484 Size: 1
	char pad_484_1 : 3;  // Offset: 484 Size: 1
	char pad_485[12];  // Offset: 485 Size: 12
	enum class EWidgetTickFrequency TickFrequency;  // Offset: 496 Size: 1
	char pad_497[7];  // Offset: 497 Size: 7
	struct UInputComponent* InputComponent;  // Offset: 504 Size: 8
	struct TArray<struct FAnimationEventBinding> AnimationCallbacks;  // Offset: 512 Size: 16
	char pad_528[80];  // Offset: 528 Size: 80



 // Functions 
 public:
	void UnregisterInputComponent(); // Function UMG.UserWidget.UnregisterInputComponent
	void UnbindFromAnimationStarted(struct UWidgetAnimation* Animation, struct FDelegate Delegate); // Function UMG.UserWidget.UnbindFromAnimationStarted
	void UnbindFromAnimationFinished(struct UWidgetAnimation* Animation, struct FDelegate Delegate); // Function UMG.UserWidget.UnbindFromAnimationFinished
	void UnbindAllFromAnimationStarted(struct UWidgetAnimation* Animation); // Function UMG.UserWidget.UnbindAllFromAnimationStarted
	void UnbindAllFromAnimationFinished(struct UWidgetAnimation* Animation); // Function UMG.UserWidget.UnbindAllFromAnimationFinished
	void Tick(struct FGeometry MyGeometry, float inDeltaTime); // Function UMG.UserWidget.Tick
	void StopListeningForInputAction(struct FName ActionName, enum class EInputEvent EventType); // Function UMG.UserWidget.StopListeningForInputAction
	void StopListeningForAllInputActions(); // Function UMG.UserWidget.StopListeningForAllInputActions
	void StopAnimationsAndLatentActions(); // Function UMG.UserWidget.StopAnimationsAndLatentActions
	void StopAnimation(struct UWidgetAnimation* InAnimation); // Function UMG.UserWidget.StopAnimation
	void StopAllAnimations(); // Function UMG.UserWidget.StopAllAnimations
	void SetPositionInViewport(struct FVector2D position, bool bRemoveDPIScale); // Function UMG.UserWidget.SetPositionInViewport
	void SetPlaybackSpeed(struct UWidgetAnimation* InAnimation, float PlaybackSpeed); // Function UMG.UserWidget.SetPlaybackSpeed
	void SetPadding(struct FMargin InPadding); // Function UMG.UserWidget.SetPadding
	void SetOwningPlayer(struct APlayerController* LocalPlayerController); // Function UMG.UserWidget.SetOwningPlayer
	void SetNumLoopsToPlay(struct UWidgetAnimation* InAnimation, int32_t NumLoopsToPlay); // Function UMG.UserWidget.SetNumLoopsToPlay
	void SetInputActionPriority(int32_t NewPriority); // Function UMG.UserWidget.SetInputActionPriority
	void SetInputActionBlocking(bool bShouldBlock); // Function UMG.UserWidget.SetInputActionBlocking
	void SetForegroundColor(struct FSlateColor InForegroundColor); // Function UMG.UserWidget.SetForegroundColor
	void SetDesiredSizeInViewport(struct FVector2D Size); // Function UMG.UserWidget.SetDesiredSizeInViewport
	void SetColorAndOpacity(struct FLinearColor InColorAndOpacity); // Function UMG.UserWidget.SetColorAndOpacity
	void SetAnimationCurrentTime(struct UWidgetAnimation* InAnimation, float InTime); // Function UMG.UserWidget.SetAnimationCurrentTime
	void SetAnchorsInViewport(struct FAnchors Anchors); // Function UMG.UserWidget.SetAnchorsInViewport
	void SetAlignmentInViewport(struct FVector2D Alignment); // Function UMG.UserWidget.SetAlignmentInViewport
	void ReverseAnimation(struct UWidgetAnimation* InAnimation); // Function UMG.UserWidget.ReverseAnimation
	void RemoveFromViewport(); // Function UMG.UserWidget.RemoveFromViewport
	void RegisterInputComponent(); // Function UMG.UserWidget.RegisterInputComponent
	void PreConstruct(bool IsDesignTime); // Function UMG.UserWidget.PreConstruct
	void PlaySound(struct USoundBase* SoundToPlay); // Function UMG.UserWidget.PlaySound
	struct UUMGSequencePlayer* PlayAnimationTimeRange(struct UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed, bool bRestoreState); // Function UMG.UserWidget.PlayAnimationTimeRange
	struct UUMGSequencePlayer* PlayAnimationReverse(struct UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState); // Function UMG.UserWidget.PlayAnimationReverse
	struct UUMGSequencePlayer* PlayAnimationForward(struct UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState); // Function UMG.UserWidget.PlayAnimationForward
	struct UUMGSequencePlayer* PlayAnimation(struct UWidgetAnimation* InAnimation, float StartAtTime, int32_t NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed, bool bRestoreState); // Function UMG.UserWidget.PlayAnimation
	float PauseAnimation(struct UWidgetAnimation* InAnimation); // Function UMG.UserWidget.PauseAnimation
	struct FEventReply OnTouchStarted(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Function UMG.UserWidget.OnTouchStarted
	struct FEventReply OnTouchMoved(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Function UMG.UserWidget.OnTouchMoved
	struct FEventReply OnTouchGesture(struct FGeometry MyGeometry, struct FPointerEvent& GestureEvent); // Function UMG.UserWidget.OnTouchGesture
	struct FEventReply OnTouchForceChanged(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Function UMG.UserWidget.OnTouchForceChanged
	struct FEventReply OnTouchEnded(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Function UMG.UserWidget.OnTouchEnded
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function UMG.UserWidget.OnRemovedFromFocusPath
	struct FEventReply OnPreviewMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UMG.UserWidget.OnPreviewMouseButtonDown
	struct FEventReply OnPreviewKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function UMG.UserWidget.OnPreviewKeyDown
	void OnPaint(struct FPaintContext& Context); // Function UMG.UserWidget.OnPaint
	struct FEventReply OnMouseWheel(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UMG.UserWidget.OnMouseWheel
	struct FEventReply OnMouseMove(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UMG.UserWidget.OnMouseMove
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function UMG.UserWidget.OnMouseLeave
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UMG.UserWidget.OnMouseEnter
	void OnMouseCaptureLost(); // Function UMG.UserWidget.OnMouseCaptureLost
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UMG.UserWidget.OnMouseButtonUp
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UMG.UserWidget.OnMouseButtonDown
	struct FEventReply OnMouseButtonDoubleClick(struct FGeometry InMyGeometry, struct FPointerEvent& InMouseEvent); // Function UMG.UserWidget.OnMouseButtonDoubleClick
	struct FEventReply OnMotionDetected(struct FGeometry MyGeometry, struct FMotionEvent InMotionEvent); // Function UMG.UserWidget.OnMotionDetected
	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function UMG.UserWidget.OnKeyUp
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function UMG.UserWidget.OnKeyDown
	struct FEventReply OnKeyChar(struct FGeometry MyGeometry, struct FCharacterEvent InCharacterEvent); // Function UMG.UserWidget.OnKeyChar
	void OnInitialized(); // Function UMG.UserWidget.OnInitialized
	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function UMG.UserWidget.OnFocusReceived
	void OnFocusLost(struct FFocusEvent InFocusEvent); // Function UMG.UserWidget.OnFocusLost
	bool OnDrop(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UMG.UserWidget.OnDrop
	bool OnDragOver(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UMG.UserWidget.OnDragOver
	void OnDragLeave(struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UMG.UserWidget.OnDragLeave
	void OnDragEnter(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UMG.UserWidget.OnDragEnter
	void OnDragDetected(struct FGeometry MyGeometry, struct FPointerEvent& PointerEvent, struct UDragDropOperation*& Operation); // Function UMG.UserWidget.OnDragDetected
	void OnDragCancelled(struct FPointerEvent& PointerEvent, struct UDragDropOperation* Operation); // Function UMG.UserWidget.OnDragCancelled
	void OnAnimationStarted(struct UWidgetAnimation* Animation); // Function UMG.UserWidget.OnAnimationStarted
	void OnAnimationFinished(struct UWidgetAnimation* Animation); // Function UMG.UserWidget.OnAnimationFinished
	struct FEventReply OnAnalogValueChanged(struct FGeometry MyGeometry, struct FAnalogInputEvent InAnalogInputEvent); // Function UMG.UserWidget.OnAnalogValueChanged
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function UMG.UserWidget.OnAddedToFocusPath
	void ListenForInputAction(struct FName ActionName, enum class EInputEvent EventType, bool bConsume, struct FDelegate Callback); // Function UMG.UserWidget.ListenForInputAction
	bool IsPlayingAnimation(); // Function UMG.UserWidget.IsPlayingAnimation
	bool IsListeningForInputAction(struct FName ActionName); // Function UMG.UserWidget.IsListeningForInputAction
	bool IsInViewport(); // Function UMG.UserWidget.IsInViewport
	bool IsInteractable(); // Function UMG.UserWidget.IsInteractable
	bool IsAnyAnimationPlaying(); // Function UMG.UserWidget.IsAnyAnimationPlaying
	bool IsAnimationPlayingForward(struct UWidgetAnimation* InAnimation); // Function UMG.UserWidget.IsAnimationPlayingForward
	bool IsAnimationPlaying(struct UWidgetAnimation* InAnimation); // Function UMG.UserWidget.IsAnimationPlaying
	struct APawn* GetOwningPlayerPawn(); // Function UMG.UserWidget.GetOwningPlayerPawn
	struct APlayerCameraManager* GetOwningPlayerCameraManager(); // Function UMG.UserWidget.GetOwningPlayerCameraManager
	bool GetIsVisible(); // Function UMG.UserWidget.GetIsVisible
	float GetAnimationCurrentTime(struct UWidgetAnimation* InAnimation); // Function UMG.UserWidget.GetAnimationCurrentTime
	struct FAnchors GetAnchorsInViewport(); // Function UMG.UserWidget.GetAnchorsInViewport
	struct FVector2D GetAlignmentInViewport(); // Function UMG.UserWidget.GetAlignmentInViewport
	void FlushAnimations(); // Function UMG.UserWidget.FlushAnimations
	void Destruct(); // Function UMG.UserWidget.Destruct
	void Construct(); // Function UMG.UserWidget.Construct
	void CancelLatentActions(); // Function UMG.UserWidget.CancelLatentActions
	void BindToAnimationStarted(struct UWidgetAnimation* Animation, struct FDelegate Delegate); // Function UMG.UserWidget.BindToAnimationStarted
	void BindToAnimationFinished(struct UWidgetAnimation* Animation, struct FDelegate Delegate); // Function UMG.UserWidget.BindToAnimationFinished
	void BindToAnimationEvent(struct UWidgetAnimation* Animation, struct FDelegate Delegate, enum class EWidgetAnimationEvent AnimationEvent, struct FName UserTag); // Function UMG.UserWidget.BindToAnimationEvent
	void AddToViewport(int32_t ZOrder); // Function UMG.UserWidget.AddToViewport
	bool AddToPlayerScreen(int32_t ZOrder); // Function UMG.UserWidget.AddToPlayerScreen
}; 
 
 


//Class UMG.TextBlock Size 680
// Inherited 296 bytes 
class UTextBlock : public UTextLayoutWidget
{

 public: 
	struct FText Text;  // Offset: 296 Size: 24
	struct FDelegate TextDelegate;  // Offset: 320 Size: 16
	struct FSlateColor ColorAndOpacity;  // Offset: 336 Size: 40
	struct FDelegate ColorAndOpacityDelegate;  // Offset: 376 Size: 16
	struct FSlateFontInfo Font;  // Offset: 392 Size: 88
	struct FSlateBrush StrikeBrush;  // Offset: 480 Size: 136
	struct FVector2D ShadowOffset;  // Offset: 616 Size: 8
	struct FLinearColor ShadowColorAndOpacity;  // Offset: 624 Size: 16
	struct FDelegate ShadowColorAndOpacityDelegate;  // Offset: 640 Size: 16
	float MinDesiredWidth;  // Offset: 656 Size: 4
	char pad_660_1 : 7;  // Offset: 660 Size: 1
	bool bWrapWithInvalidationPanel : 1;  // Offset: 660 Size: 1
	char pad_661_1 : 7;  // Offset: 661 Size: 1
	bool bAutoWrapText : 1;  // Offset: 661 Size: 1
	enum class ETextTransformPolicy TextTransformPolicy;  // Offset: 662 Size: 1
	char pad_663_1 : 7;  // Offset: 663 Size: 1
	bool bSimpleTextMode : 1;  // Offset: 663 Size: 1
	char pad_664[16];  // Offset: 664 Size: 16



 // Functions 
 public:
	void SetTextTransformPolicy(enum class ETextTransformPolicy InTransformPolicy); // Function UMG.TextBlock.SetTextTransformPolicy
	void SetText(struct FText InText); // Function UMG.TextBlock.SetText
	void SetStrikeBrush(struct FSlateBrush InStrikeBrush); // Function UMG.TextBlock.SetStrikeBrush
	void SetShadowOffset(struct FVector2D InShadowOffset); // Function UMG.TextBlock.SetShadowOffset
	void SetShadowColorAndOpacity(struct FLinearColor InShadowColorAndOpacity); // Function UMG.TextBlock.SetShadowColorAndOpacity
	void SetOpacity(float InOpacity); // Function UMG.TextBlock.SetOpacity
	void SetMinDesiredWidth(float InMinDesiredWidth); // Function UMG.TextBlock.SetMinDesiredWidth
	void SetFont(struct FSlateFontInfo InFontInfo); // Function UMG.TextBlock.SetFont
	void SetColorAndOpacity(struct FSlateColor InColorAndOpacity); // Function UMG.TextBlock.SetColorAndOpacity
	void SetAutoWrapText(bool InAutoTextWrap); // Function UMG.TextBlock.SetAutoWrapText
	struct FText GetText(); // Function UMG.TextBlock.GetText
	struct UMaterialInstanceDynamic* GetDynamicOutlineMaterial(); // Function UMG.TextBlock.GetDynamicOutlineMaterial
	struct UMaterialInstanceDynamic* GetDynamicFontMaterial(); // Function UMG.TextBlock.GetDynamicFontMaterial
}; 
 
 


//Class UMG.RichTextBlockDecorator Size 40
// Inherited 40 bytes 
class URichTextBlockDecorator : public UObject
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class UMG.MovieScene2DTransformPropertySystem Size 88
// Inherited 88 bytes 
class UMovieScene2DTransformPropertySystem : public UMovieScenePropertySystem
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class UMG.ComboBoxString Size 3584
// Inherited 264 bytes 
class UComboBoxString : public UWidget
{

 public: 
	struct TArray<struct FString> DefaultOptions;  // Offset: 264 Size: 16
	struct FString SelectedOption;  // Offset: 280 Size: 16
	struct FComboBoxStyle WidgetStyle;  // Offset: 296 Size: 1008
	struct FTableRowStyle ItemStyle;  // Offset: 1304 Size: 1992
	struct FMargin ContentPadding;  // Offset: 3296 Size: 16
	float MaxListHeight;  // Offset: 3312 Size: 4
	char pad_3316_1 : 7;  // Offset: 3316 Size: 1
	bool HasDownArrow : 1;  // Offset: 3316 Size: 1
	char pad_3317_1 : 7;  // Offset: 3317 Size: 1
	bool EnableGamepadNavigationMode : 1;  // Offset: 3317 Size: 1
	char pad_3318[2];  // Offset: 3318 Size: 2
	struct FSlateFontInfo Font;  // Offset: 3320 Size: 88
	struct FSlateColor ForegroundColor;  // Offset: 3408 Size: 40
	char pad_3448_1 : 7;  // Offset: 3448 Size: 1
	bool bIsFocusable : 1;  // Offset: 3448 Size: 1
	char pad_3449[3];  // Offset: 3449 Size: 3
	struct FDelegate OnGenerateWidgetEvent;  // Offset: 3452 Size: 16
	char pad_3468[4];  // Offset: 3468 Size: 4
	struct FMulticastInlineDelegate OnSelectionChanged;  // Offset: 3472 Size: 16
	struct FMulticastInlineDelegate OnOpening;  // Offset: 3488 Size: 16
	char pad_3504[80];  // Offset: 3504 Size: 80



 // Functions 
 public:
	void SetSelectedOption(struct FString Option); // Function UMG.ComboBoxString.SetSelectedOption
	void SetSelectedIndex(int32_t Index); // Function UMG.ComboBoxString.SetSelectedIndex
	bool RemoveOption(struct FString Option); // Function UMG.ComboBoxString.RemoveOption
	void RefreshOptions(); // Function UMG.ComboBoxString.RefreshOptions
	void OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, enum class ESelectInfo SelectionType); // DelegateFunction UMG.ComboBoxString.OnSelectionChangedEvent__DelegateSignature
	void OnOpeningEvent__DelegateSignature(); // DelegateFunction UMG.ComboBoxString.OnOpeningEvent__DelegateSignature
	bool IsOpen(); // Function UMG.ComboBoxString.IsOpen
	struct FString GetSelectedOption(); // Function UMG.ComboBoxString.GetSelectedOption
	int32_t GetSelectedIndex(); // Function UMG.ComboBoxString.GetSelectedIndex
	int32_t GetOptionCount(); // Function UMG.ComboBoxString.GetOptionCount
	struct FString GetOptionAtIndex(int32_t Index); // Function UMG.ComboBoxString.GetOptionAtIndex
	int32_t FindOptionIndex(struct FString Option); // Function UMG.ComboBoxString.FindOptionIndex
	void ClearSelection(); // Function UMG.ComboBoxString.ClearSelection
	void ClearOptions(); // Function UMG.ComboBoxString.ClearOptions
	void AddOption(struct FString Option); // Function UMG.ComboBoxString.AddOption
}; 
 
 


//Class UMG.ListViewBase Size 536
// Inherited 264 bytes 
class UListViewBase : public UWidget
{

 public: 
	UUserWidget* EntryWidgetClass;  // Offset: 264 Size: 8
	float WheelScrollMultiplier;  // Offset: 272 Size: 4
	char pad_276_1 : 7;  // Offset: 276 Size: 1
	bool bEnableScrollAnimation : 1;  // Offset: 276 Size: 1
	char pad_277_1 : 7;  // Offset: 277 Size: 1
	bool bEnableFixedLineOffset : 1;  // Offset: 277 Size: 1
	char pad_278[2];  // Offset: 278 Size: 2
	float FixedLineScrollOffset;  // Offset: 280 Size: 4
	char pad_284[4];  // Offset: 284 Size: 4
	struct FMulticastInlineDelegate BP_OnEntryGenerated;  // Offset: 288 Size: 16
	struct FMulticastInlineDelegate BP_OnEntryReleased;  // Offset: 304 Size: 16
	struct FUserWidgetPool EntryWidgetPool;  // Offset: 320 Size: 128
	char pad_448[88];  // Offset: 448 Size: 88



 // Functions 
 public:
	void SetWheelScrollMultiplier(float NewWheelScrollMultiplier); // Function UMG.ListViewBase.SetWheelScrollMultiplier
	void SetScrollOffset(float InScrollOffset); // Function UMG.ListViewBase.SetScrollOffset
	void SetScrollbarVisibility(enum class ESlateVisibility InVisibility); // Function UMG.ListViewBase.SetScrollbarVisibility
	void ScrollToTop(); // Function UMG.ListViewBase.ScrollToTop
	void ScrollToBottom(); // Function UMG.ListViewBase.ScrollToBottom
	void RequestRefresh(); // Function UMG.ListViewBase.RequestRefresh
	void RegenerateAllEntries(); // Function UMG.ListViewBase.RegenerateAllEntries
	struct TArray<struct UUserWidget*> GetDisplayedEntryWidgets(); // Function UMG.ListViewBase.GetDisplayedEntryWidgets
}; 
 
 


//Class UMG.ExpandableArea Size 824
// Inherited 264 bytes 
class UExpandableArea : public UWidget
{

 public: 
	char pad_264[8];  // Offset: 264 Size: 8
	struct FExpandableAreaStyle Style;  // Offset: 272 Size: 288
	struct FSlateBrush BorderBrush;  // Offset: 560 Size: 136
	struct FSlateColor BorderColor;  // Offset: 696 Size: 40
	char pad_736_1 : 7;  // Offset: 736 Size: 1
	bool bIsExpanded : 1;  // Offset: 736 Size: 1
	char pad_737[3];  // Offset: 737 Size: 3
	float MaxHeight;  // Offset: 740 Size: 4
	struct FMargin HeaderPadding;  // Offset: 744 Size: 16
	struct FMargin AreaPadding;  // Offset: 760 Size: 16
	struct FMulticastInlineDelegate OnExpansionChanged;  // Offset: 776 Size: 16
	struct UWidget* HeaderContent;  // Offset: 792 Size: 8
	struct UWidget* BodyContent;  // Offset: 800 Size: 8
	char pad_808[16];  // Offset: 808 Size: 16



 // Functions 
 public:
	void SetIsExpanded_Animated(bool IsExpanded); // Function UMG.ExpandableArea.SetIsExpanded_Animated
	void SetIsExpanded(bool IsExpanded); // Function UMG.ExpandableArea.SetIsExpanded
	bool GetIsExpanded(); // Function UMG.ExpandableArea.GetIsExpanded
}; 
 
 


//Class UMG.ListView Size 872
// Inherited 536 bytes 
class UListView : public UListViewBase
{

 public: 
	char pad_536[192];  // Offset: 536 Size: 192
	enum class EOrientation Orientation;  // Offset: 728 Size: 1
	enum class ESelectionMode SelectionMode;  // Offset: 729 Size: 1
	enum class EConsumeMouseWheel ConsumeMouseWheel;  // Offset: 730 Size: 1
	char pad_731_1 : 7;  // Offset: 731 Size: 1
	bool bClearSelectionOnClick : 1;  // Offset: 731 Size: 1
	char pad_732_1 : 7;  // Offset: 732 Size: 1
	bool bIsFocusable : 1;  // Offset: 732 Size: 1
	char pad_733[3];  // Offset: 733 Size: 3
	float EntrySpacing;  // Offset: 736 Size: 4
	char pad_740_1 : 7;  // Offset: 740 Size: 1
	bool bReturnFocusToSelection : 1;  // Offset: 740 Size: 1
	char pad_741[3];  // Offset: 741 Size: 3
	struct TArray<struct UObject*> ListItems;  // Offset: 744 Size: 16
	char pad_760[16];  // Offset: 760 Size: 16
	struct FMulticastInlineDelegate BP_OnEntryInitialized;  // Offset: 776 Size: 16
	struct FMulticastInlineDelegate BP_OnItemClicked;  // Offset: 792 Size: 16
	struct FMulticastInlineDelegate BP_OnItemDoubleClicked;  // Offset: 808 Size: 16
	struct FMulticastInlineDelegate BP_OnItemIsHoveredChanged;  // Offset: 824 Size: 16
	struct FMulticastInlineDelegate BP_OnItemSelectionChanged;  // Offset: 840 Size: 16
	struct FMulticastInlineDelegate BP_OnItemScrolledIntoView;  // Offset: 856 Size: 16



 // Functions 
 public:
	void SetSelectionMode(enum class ESelectionMode SelectionMode); // Function UMG.ListView.SetSelectionMode
	void SetSelectedIndex(int32_t Index); // Function UMG.ListView.SetSelectedIndex
	void ScrollIndexIntoView(int32_t Index); // Function UMG.ListView.ScrollIndexIntoView
	void RemoveItem(struct UObject* Item); // Function UMG.ListView.RemoveItem
	void NavigateToIndex(int32_t Index); // Function UMG.ListView.NavigateToIndex
	bool IsRefreshPending(); // Function UMG.ListView.IsRefreshPending
	int32_t GetNumItems(); // Function UMG.ListView.GetNumItems
	struct TArray<struct UObject*> GetListItems(); // Function UMG.ListView.GetListItems
	struct UObject* GetItemAt(int32_t Index); // Function UMG.ListView.GetItemAt
	int32_t GetIndexForItem(struct UObject* Item); // Function UMG.ListView.GetIndexForItem
	void ClearListItems(); // Function UMG.ListView.ClearListItems
	void BP_SetSelectedItem(struct UObject* Item); // Function UMG.ListView.BP_SetSelectedItem
	void BP_SetListItems(struct TArray<struct UObject*>& InListItems); // Function UMG.ListView.BP_SetListItems
	void BP_SetItemSelection(struct UObject* Item, bool bSelected); // Function UMG.ListView.BP_SetItemSelection
	void BP_ScrollItemIntoView(struct UObject* Item); // Function UMG.ListView.BP_ScrollItemIntoView
	void BP_NavigateToItem(struct UObject* Item); // Function UMG.ListView.BP_NavigateToItem
	bool BP_IsItemVisible(struct UObject* Item); // Function UMG.ListView.BP_IsItemVisible
	bool BP_GetSelectedItems(struct TArray<struct UObject*>& Items); // Function UMG.ListView.BP_GetSelectedItems
	struct UObject* BP_GetSelectedItem(); // Function UMG.ListView.BP_GetSelectedItem
	int32_t BP_GetNumItemsSelected(); // Function UMG.ListView.BP_GetNumItemsSelected
	void BP_ClearSelection(); // Function UMG.ListView.BP_ClearSelection
	void BP_CancelScrollIntoView(); // Function UMG.ListView.BP_CancelScrollIntoView
	void AddItem(struct UObject* Item); // Function UMG.ListView.AddItem
}; 
 
 


//Class UMG.TileView Size 904
// Inherited 872 bytes 
class UTileView : public UListView
{

 public: 
	float EntryHeight;  // Offset: 872 Size: 4
	float EntryWidth;  // Offset: 876 Size: 4
	enum class EListItemAlignment TileAlignment;  // Offset: 880 Size: 1
	char pad_881_1 : 7;  // Offset: 881 Size: 1
	bool bWrapHorizontalNavigation : 1;  // Offset: 881 Size: 1
	char pad_882[22];  // Offset: 882 Size: 22



 // Functions 
 public:
	void SetEntryWidth(float NewWidth); // Function UMG.TileView.SetEntryWidth
	void SetEntryHeight(float NewHeight); // Function UMG.TileView.SetEntryHeight
	float GetEntryWidth(); // Function UMG.TileView.GetEntryWidth
	float GetEntryHeight(); // Function UMG.TileView.GetEntryHeight
}; 
 
 


//Class UMG.UserListEntry Size 40
// Inherited 40 bytes 
class UUserListEntry : public UInterface
{

 public: 



 // Functions 
 public:
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function UMG.UserListEntry.BP_OnItemSelectionChanged
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function UMG.UserListEntry.BP_OnItemExpansionChanged
	void BP_OnEntryReleased(); // Function UMG.UserListEntry.BP_OnEntryReleased
}; 
 
 


//Class UMG.EditableText Size 1120
// Inherited 264 bytes 
class UEditableText : public UWidget
{

 public: 
	struct FText Text;  // Offset: 264 Size: 24
	struct FDelegate TextDelegate;  // Offset: 288 Size: 16
	struct FText HintText;  // Offset: 304 Size: 24
	struct FDelegate HintTextDelegate;  // Offset: 328 Size: 16
	struct FEditableTextStyle WidgetStyle;  // Offset: 344 Size: 544
	struct USlateWidgetStyleAsset* Style;  // Offset: 888 Size: 8
	struct USlateBrushAsset* BackgroundImageSelected;  // Offset: 896 Size: 8
	struct USlateBrushAsset* BackgroundImageComposing;  // Offset: 904 Size: 8
	struct USlateBrushAsset* CaretImage;  // Offset: 912 Size: 8
	struct FSlateFontInfo Font;  // Offset: 920 Size: 88
	struct FSlateColor ColorAndOpacity;  // Offset: 1008 Size: 40
	char pad_1048_1 : 7;  // Offset: 1048 Size: 1
	bool IsReadOnly : 1;  // Offset: 1048 Size: 1
	char pad_1049_1 : 7;  // Offset: 1049 Size: 1
	bool IsPassword : 1;  // Offset: 1049 Size: 1
	char pad_1050[2];  // Offset: 1050 Size: 2
	float MinimumDesiredWidth;  // Offset: 1052 Size: 4
	char pad_1056_1 : 7;  // Offset: 1056 Size: 1
	bool IsCaretMovedWhenGainFocus : 1;  // Offset: 1056 Size: 1
	char pad_1057_1 : 7;  // Offset: 1057 Size: 1
	bool SelectAllTextWhenFocused : 1;  // Offset: 1057 Size: 1
	char pad_1058_1 : 7;  // Offset: 1058 Size: 1
	bool RevertTextOnEscape : 1;  // Offset: 1058 Size: 1
	char pad_1059_1 : 7;  // Offset: 1059 Size: 1
	bool ClearKeyboardFocusOnCommit : 1;  // Offset: 1059 Size: 1
	char pad_1060_1 : 7;  // Offset: 1060 Size: 1
	bool SelectAllTextOnCommit : 1;  // Offset: 1060 Size: 1
	char pad_1061_1 : 7;  // Offset: 1061 Size: 1
	bool AllowContextMenu : 1;  // Offset: 1061 Size: 1
	enum class EVirtualKeyboardType KeyboardType;  // Offset: 1062 Size: 1
	struct FVirtualKeyboardOptions VirtualKeyboardOptions;  // Offset: 1063 Size: 1
	enum class EVirtualKeyboardTrigger VirtualKeyboardTrigger;  // Offset: 1064 Size: 1
	enum class EVirtualKeyboardDismissAction VirtualKeyboardDismissAction;  // Offset: 1065 Size: 1
	enum class ETextJustify Justification;  // Offset: 1066 Size: 1
	struct FShapedTextOptions ShapedTextOptions;  // Offset: 1067 Size: 3
	char pad_1070[2];  // Offset: 1070 Size: 2
	struct FMulticastInlineDelegate OnTextChanged;  // Offset: 1072 Size: 16
	struct FMulticastInlineDelegate OnTextCommitted;  // Offset: 1088 Size: 16
	char pad_1104[16];  // Offset: 1104 Size: 16



 // Functions 
 public:
	void SetText(struct FText InText); // Function UMG.EditableText.SetText
	void SetJustification(enum class ETextJustify InJustification); // Function UMG.EditableText.SetJustification
	void SetIsReadOnly(bool InbIsReadyOnly); // Function UMG.EditableText.SetIsReadOnly
	void SetIsPassword(bool InbIsPassword); // Function UMG.EditableText.SetIsPassword
	void SetHintText(struct FText InHintText); // Function UMG.EditableText.SetHintText
	void OnEditableTextCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // DelegateFunction UMG.EditableText.OnEditableTextCommittedEvent__DelegateSignature
	void OnEditableTextChangedEvent__DelegateSignature(struct FText& Text); // DelegateFunction UMG.EditableText.OnEditableTextChangedEvent__DelegateSignature
	struct FText GetText(); // Function UMG.EditableText.GetText
}; 
 
 


//Class UMG.CheckedStateBinding Size 104
// Inherited 96 bytes 
class UCheckedStateBinding : public UPropertyBinding
{

 public: 
	char pad_96[8];  // Offset: 96 Size: 8



 // Functions 
 public:
	enum class ECheckBoxState GetValue(); // Function UMG.CheckedStateBinding.GetValue
}; 
 
 


//Class UMG.UserObjectListEntry Size 40
// Inherited 40 bytes 
class UUserObjectListEntry : public UUserListEntry
{

 public: 



 // Functions 
 public:
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function UMG.UserObjectListEntry.OnListItemObjectSet
}; 
 
 


//Class UMG.HorizontalBox Size 304
// Inherited 288 bytes 
class UHorizontalBox : public UPanelWidget
{

 public: 
	char pad_288[16];  // Offset: 288 Size: 16



 // Functions 
 public:
	struct UHorizontalBoxSlot* AddChildToHorizontalBox(struct UWidget* Content); // Function UMG.HorizontalBox.AddChildToHorizontalBox
}; 
 
 


//Class UMG.WidgetComponent Size 1488
// Inherited 1200 bytes 
class UWidgetComponent : public UMeshComponent
{

 public: 
	enum class EWidgetSpace Space;  // Offset: 1192 Size: 1
	enum class EWidgetTimingPolicy TimingPolicy;  // Offset: 1193 Size: 1
	UUserWidget* WidgetClass;  // Offset: 1200 Size: 8
	struct FIntPoint DrawSize;  // Offset: 1208 Size: 8
	char pad_1218_1 : 7;  // Offset: 1218 Size: 1
	bool bManuallyRedraw : 1;  // Offset: 1216 Size: 1
	char pad_1219_1 : 7;  // Offset: 1219 Size: 1
	bool bRedrawRequested : 1;  // Offset: 1217 Size: 1
	float RedrawTime;  // Offset: 1220 Size: 4
	char pad_1224[8];  // Offset: 1224 Size: 8
	struct FIntPoint CurrentDrawSize;  // Offset: 1232 Size: 8
	char pad_1240_1 : 7;  // Offset: 1240 Size: 1
	bool bDrawAtDesiredSize : 1;  // Offset: 1240 Size: 1
	char pad_1241[3];  // Offset: 1241 Size: 3
	struct FVector2D Pivot;  // Offset: 1244 Size: 8
	char pad_1252_1 : 7;  // Offset: 1252 Size: 1
	bool bReceiveHardwareInput : 1;  // Offset: 1252 Size: 1
	char pad_1253_1 : 7;  // Offset: 1253 Size: 1
	bool bWindowFocusable : 1;  // Offset: 1253 Size: 1
	enum class EWindowVisibility WindowVisibility;  // Offset: 1254 Size: 1
	char pad_1255_1 : 7;  // Offset: 1255 Size: 1
	bool bApplyGammaCorrection : 1;  // Offset: 1255 Size: 1
	struct ULocalPlayer* OwnerPlayer;  // Offset: 1256 Size: 8
	struct FLinearColor BackgroundColor;  // Offset: 1264 Size: 16
	struct FLinearColor TintColorAndOpacity;  // Offset: 1280 Size: 16
	float OpacityFromTexture;  // Offset: 1296 Size: 4
	enum class EWidgetBlendMode BlendMode;  // Offset: 1300 Size: 1
	char pad_1301_1 : 7;  // Offset: 1301 Size: 1
	bool bIsTwoSided : 1;  // Offset: 1301 Size: 1
	char pad_1302_1 : 7;  // Offset: 1302 Size: 1
	bool TickWhenOffscreen : 1;  // Offset: 1302 Size: 1
	char pad_1303[1];  // Offset: 1303 Size: 1
	struct UBodySetup* BodySetup;  // Offset: 1304 Size: 8
	struct UMaterialInterface* TranslucentMaterial;  // Offset: 1312 Size: 8
	struct UMaterialInterface* TranslucentMaterial_OneSided;  // Offset: 1320 Size: 8
	struct UMaterialInterface* OpaqueMaterial;  // Offset: 1328 Size: 8
	struct UMaterialInterface* OpaqueMaterial_OneSided;  // Offset: 1336 Size: 8
	struct UMaterialInterface* MaskedMaterial;  // Offset: 1344 Size: 8
	struct UMaterialInterface* MaskedMaterial_OneSided;  // Offset: 1352 Size: 8
	struct UTextureRenderTarget2D* RenderTarget;  // Offset: 1360 Size: 8
	struct UMaterialInstanceDynamic* MaterialInstance;  // Offset: 1368 Size: 8
	char pad_1376_1 : 7;  // Offset: 1376 Size: 1
	bool bAddedToScreen : 1;  // Offset: 1376 Size: 1
	char pad_1377_1 : 7;  // Offset: 1377 Size: 1
	bool bEditTimeUsable : 1;  // Offset: 1377 Size: 1
	char pad_1378[2];  // Offset: 1378 Size: 2
	struct FName SharedLayerName;  // Offset: 1380 Size: 8
	int32_t LayerZOrder;  // Offset: 1388 Size: 4
	enum class EWidgetGeometryMode GeometryMode;  // Offset: 1392 Size: 1
	char pad_1393[3];  // Offset: 1393 Size: 3
	float CylinderArcAngle;  // Offset: 1396 Size: 4
	enum class ETickMode TickMode;  // Offset: 1400 Size: 1
	char pad_1401[39];  // Offset: 1401 Size: 39
	struct UUserWidget* Widget;  // Offset: 1440 Size: 8
	char pad_1448[40];  // Offset: 1448 Size: 40



 // Functions 
 public:
	void SetWindowVisibility(enum class EWindowVisibility InVisibility); // Function UMG.WidgetComponent.SetWindowVisibility
	void SetWindowFocusable(bool bInWindowFocusable); // Function UMG.WidgetComponent.SetWindowFocusable
	void SetWidgetSpace(enum class EWidgetSpace NewSpace); // Function UMG.WidgetComponent.SetWidgetSpace
	void SetWidget(struct UUserWidget* Widget); // Function UMG.WidgetComponent.SetWidget
	void SetTwoSided(bool bWantTwoSided); // Function UMG.WidgetComponent.SetTwoSided
	void SetTintColorAndOpacity(struct FLinearColor NewTintColorAndOpacity); // Function UMG.WidgetComponent.SetTintColorAndOpacity
	void SetTickWhenOffscreen(bool bWantTickWhenOffscreen); // Function UMG.WidgetComponent.SetTickWhenOffscreen
	void SetTickMode(enum class ETickMode InTickMode); // Function UMG.WidgetComponent.SetTickMode
	void SetRedrawTime(float InRedrawTime); // Function UMG.WidgetComponent.SetRedrawTime
	void SetPivot(struct FVector2D& InPivot); // Function UMG.WidgetComponent.SetPivot
	void SetOwnerPlayer(struct ULocalPlayer* LocalPlayer); // Function UMG.WidgetComponent.SetOwnerPlayer
	void SetManuallyRedraw(bool bUseManualRedraw); // Function UMG.WidgetComponent.SetManuallyRedraw
	void SetGeometryMode(enum class EWidgetGeometryMode InGeometryMode); // Function UMG.WidgetComponent.SetGeometryMode
	void SetDrawSize(struct FVector2D Size); // Function UMG.WidgetComponent.SetDrawSize
	void SetDrawAtDesiredSize(bool bInDrawAtDesiredSize); // Function UMG.WidgetComponent.SetDrawAtDesiredSize
	void SetCylinderArcAngle(float InCylinderArcAngle); // Function UMG.WidgetComponent.SetCylinderArcAngle
	void SetBackgroundColor(struct FLinearColor NewBackgroundColor); // Function UMG.WidgetComponent.SetBackgroundColor
	void RequestRenderUpdate(); // Function UMG.WidgetComponent.RequestRenderUpdate
	void RequestRedraw(); // Function UMG.WidgetComponent.RequestRedraw
	bool IsWidgetVisible(); // Function UMG.WidgetComponent.IsWidgetVisible
	enum class EWindowVisibility GetWindowVisiblility(); // Function UMG.WidgetComponent.GetWindowVisiblility
	bool GetWindowFocusable(); // Function UMG.WidgetComponent.GetWindowFocusable
	enum class EWidgetSpace GetWidgetSpace(); // Function UMG.WidgetComponent.GetWidgetSpace
	struct UUserWidget* GetWidget(); // Function UMG.WidgetComponent.GetWidget
	struct UUserWidget* GetUserWidgetObject(); // Function UMG.WidgetComponent.GetUserWidgetObject
	bool GetTwoSided(); // Function UMG.WidgetComponent.GetTwoSided
	bool GetTickWhenOffscreen(); // Function UMG.WidgetComponent.GetTickWhenOffscreen
	struct UTextureRenderTarget2D* GetRenderTarget(); // Function UMG.WidgetComponent.GetRenderTarget
	float GetRedrawTime(); // Function UMG.WidgetComponent.GetRedrawTime
	struct FVector2D GetPivot(); // Function UMG.WidgetComponent.GetPivot
	struct ULocalPlayer* GetOwnerPlayer(); // Function UMG.WidgetComponent.GetOwnerPlayer
	struct UMaterialInstanceDynamic* GetMaterialInstance(); // Function UMG.WidgetComponent.GetMaterialInstance
	bool GetManuallyRedraw(); // Function UMG.WidgetComponent.GetManuallyRedraw
	enum class EWidgetGeometryMode GetGeometryMode(); // Function UMG.WidgetComponent.GetGeometryMode
	struct FVector2D GetDrawSize(); // Function UMG.WidgetComponent.GetDrawSize
	bool GetDrawAtDesiredSize(); // Function UMG.WidgetComponent.GetDrawAtDesiredSize
	float GetCylinderArcAngle(); // Function UMG.WidgetComponent.GetCylinderArcAngle
	struct FVector2D GetCurrentDrawSize(); // Function UMG.WidgetComponent.GetCurrentDrawSize
}; 
 
 


//Class UMG.EditableTextBox Size 2616
// Inherited 264 bytes 
class UEditableTextBox : public UWidget
{

 public: 
	struct FText Text;  // Offset: 264 Size: 24
	struct FDelegate TextDelegate;  // Offset: 288 Size: 16
	struct FEditableTextBoxStyle WidgetStyle;  // Offset: 304 Size: 2040
	struct USlateWidgetStyleAsset* Style;  // Offset: 2344 Size: 8
	struct FText HintText;  // Offset: 2352 Size: 24
	struct FDelegate HintTextDelegate;  // Offset: 2376 Size: 16
	struct FSlateFontInfo Font;  // Offset: 2392 Size: 88
	struct FLinearColor ForegroundColor;  // Offset: 2480 Size: 16
	struct FLinearColor BackgroundColor;  // Offset: 2496 Size: 16
	struct FLinearColor ReadOnlyForegroundColor;  // Offset: 2512 Size: 16
	char pad_2528_1 : 7;  // Offset: 2528 Size: 1
	bool IsReadOnly : 1;  // Offset: 2528 Size: 1
	char pad_2529_1 : 7;  // Offset: 2529 Size: 1
	bool IsPassword : 1;  // Offset: 2529 Size: 1
	char pad_2530[2];  // Offset: 2530 Size: 2
	float MinimumDesiredWidth;  // Offset: 2532 Size: 4
	struct FMargin Padding;  // Offset: 2536 Size: 16
	char pad_2552_1 : 7;  // Offset: 2552 Size: 1
	bool IsCaretMovedWhenGainFocus : 1;  // Offset: 2552 Size: 1
	char pad_2553_1 : 7;  // Offset: 2553 Size: 1
	bool SelectAllTextWhenFocused : 1;  // Offset: 2553 Size: 1
	char pad_2554_1 : 7;  // Offset: 2554 Size: 1
	bool RevertTextOnEscape : 1;  // Offset: 2554 Size: 1
	char pad_2555_1 : 7;  // Offset: 2555 Size: 1
	bool ClearKeyboardFocusOnCommit : 1;  // Offset: 2555 Size: 1
	char pad_2556_1 : 7;  // Offset: 2556 Size: 1
	bool SelectAllTextOnCommit : 1;  // Offset: 2556 Size: 1
	char pad_2557_1 : 7;  // Offset: 2557 Size: 1
	bool AllowContextMenu : 1;  // Offset: 2557 Size: 1
	enum class EVirtualKeyboardType KeyboardType;  // Offset: 2558 Size: 1
	struct FVirtualKeyboardOptions VirtualKeyboardOptions;  // Offset: 2559 Size: 1
	enum class EVirtualKeyboardTrigger VirtualKeyboardTrigger;  // Offset: 2560 Size: 1
	enum class EVirtualKeyboardDismissAction VirtualKeyboardDismissAction;  // Offset: 2561 Size: 1
	enum class ETextJustify Justification;  // Offset: 2562 Size: 1
	struct FShapedTextOptions ShapedTextOptions;  // Offset: 2563 Size: 3
	char pad_2566[2];  // Offset: 2566 Size: 2
	struct FMulticastInlineDelegate OnTextChanged;  // Offset: 2568 Size: 16
	struct FMulticastInlineDelegate OnTextCommitted;  // Offset: 2584 Size: 16
	char pad_2600[16];  // Offset: 2600 Size: 16



 // Functions 
 public:
	void SetText(struct FText InText); // Function UMG.EditableTextBox.SetText
	void SetJustification(enum class ETextJustify InJustification); // Function UMG.EditableTextBox.SetJustification
	void SetIsReadOnly(bool bReadOnly); // Function UMG.EditableTextBox.SetIsReadOnly
	void SetIsPassword(bool bIsPassword); // Function UMG.EditableTextBox.SetIsPassword
	void SetHintText(struct FText InText); // Function UMG.EditableTextBox.SetHintText
	void SetError(struct FText InError); // Function UMG.EditableTextBox.SetError
	void OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // DelegateFunction UMG.EditableTextBox.OnEditableTextBoxCommittedEvent__DelegateSignature
	void OnEditableTextBoxChangedEvent__DelegateSignature(struct FText& Text); // DelegateFunction UMG.EditableTextBox.OnEditableTextBoxChangedEvent__DelegateSignature
	bool HasError(); // Function UMG.EditableTextBox.HasError
	struct FText GetText(); // Function UMG.EditableTextBox.GetText
	void ClearError(); // Function UMG.EditableTextBox.ClearError
}; 
 
 


//Class UMG.AsyncTaskDownloadImage Size 80
// Inherited 48 bytes 
class UAsyncTaskDownloadImage : public UBlueprintAsyncActionBase
{

 public: 
	struct FMulticastInlineDelegate OnSuccess;  // Offset: 48 Size: 16
	struct FMulticastInlineDelegate OnFail;  // Offset: 64 Size: 16



 // Functions 
 public:
	struct UAsyncTaskDownloadImage* DownloadImage(struct FString URL); // Function UMG.AsyncTaskDownloadImage.DownloadImage
}; 
 
 


//Class UMG.GridSlot Size 112
// Inherited 56 bytes 
class UGridSlot : public UPanelSlot
{

 public: 
	struct FMargin Padding;  // Offset: 56 Size: 16
	enum class EHorizontalAlignment HorizontalAlignment;  // Offset: 72 Size: 1
	enum class EVerticalAlignment VerticalAlignment;  // Offset: 73 Size: 1
	char pad_74[2];  // Offset: 74 Size: 2
	int32_t Row;  // Offset: 76 Size: 4
	int32_t RowSpan;  // Offset: 80 Size: 4
	int32_t Column;  // Offset: 84 Size: 4
	int32_t ColumnSpan;  // Offset: 88 Size: 4
	int32_t Layer;  // Offset: 92 Size: 4
	struct FVector2D Nudge;  // Offset: 96 Size: 8
	char pad_104[8];  // Offset: 104 Size: 8



 // Functions 
 public:
	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.GridSlot.SetVerticalAlignment
	void SetRowSpan(int32_t InRowSpan); // Function UMG.GridSlot.SetRowSpan
	void SetRow(int32_t InRow); // Function UMG.GridSlot.SetRow
	void SetPadding(struct FMargin InPadding); // Function UMG.GridSlot.SetPadding
	void SetNudge(struct FVector2D InNudge); // Function UMG.GridSlot.SetNudge
	void SetLayer(int32_t InLayer); // Function UMG.GridSlot.SetLayer
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.GridSlot.SetHorizontalAlignment
	void SetColumnSpan(int32_t InColumnSpan); // Function UMG.GridSlot.SetColumnSpan
	void SetColumn(int32_t InColumn); // Function UMG.GridSlot.SetColumn
}; 
 
 


//Class UMG.PanelWidget Size 288
// Inherited 264 bytes 
class UPanelWidget : public UWidget
{

 public: 
	struct TArray<struct UPanelSlot*> Slots;  // Offset: 264 Size: 16
	char pad_280[8];  // Offset: 280 Size: 8



 // Functions 
 public:
	bool RemoveChildAt(int32_t Index); // Function UMG.PanelWidget.RemoveChildAt
	bool RemoveChild(struct UWidget* Content); // Function UMG.PanelWidget.RemoveChild
	bool HasChild(struct UWidget* Content); // Function UMG.PanelWidget.HasChild
	bool HasAnyChildren(); // Function UMG.PanelWidget.HasAnyChildren
	int32_t GetChildrenCount(); // Function UMG.PanelWidget.GetChildrenCount
	int32_t GetChildIndex(struct UWidget* Content); // Function UMG.PanelWidget.GetChildIndex
	struct UWidget* GetChildAt(int32_t Index); // Function UMG.PanelWidget.GetChildAt
	struct TArray<struct UWidget*> GetAllChildren(); // Function UMG.PanelWidget.GetAllChildren
	void ClearChildren(); // Function UMG.PanelWidget.ClearChildren
	struct UPanelSlot* AddChild(struct UWidget* Content); // Function UMG.PanelWidget.AddChild
}; 
 
 


//Class UMG.BackgroundBlur Size 472
// Inherited 288 bytes 
class UBackgroundBlur : public UContentWidget
{

 public: 
	struct FMargin Padding;  // Offset: 288 Size: 16
	enum class EHorizontalAlignment HorizontalAlignment;  // Offset: 304 Size: 1
	enum class EVerticalAlignment VerticalAlignment;  // Offset: 305 Size: 1
	char pad_306_1 : 7;  // Offset: 306 Size: 1
	bool bApplyAlphaToBlur : 1;  // Offset: 306 Size: 1
	char pad_307[1];  // Offset: 307 Size: 1
	float BlurStrength;  // Offset: 308 Size: 4
	char pad_312_1 : 7;  // Offset: 312 Size: 1
	bool bOverrideAutoRadiusCalculation : 1;  // Offset: 312 Size: 1
	char pad_313[3];  // Offset: 313 Size: 3
	int32_t BlurRadius;  // Offset: 316 Size: 4
	struct FSlateBrush LowQualityFallbackBrush;  // Offset: 320 Size: 136
	char pad_456[16];  // Offset: 456 Size: 16



 // Functions 
 public:
	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.BackgroundBlur.SetVerticalAlignment
	void SetPadding(struct FMargin InPadding); // Function UMG.BackgroundBlur.SetPadding
	void SetLowQualityFallbackBrush(struct FSlateBrush& InBrush); // Function UMG.BackgroundBlur.SetLowQualityFallbackBrush
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.BackgroundBlur.SetHorizontalAlignment
	void SetBlurStrength(float InStrength); // Function UMG.BackgroundBlur.SetBlurStrength
	void SetBlurRadius(int32_t InBlurRadius); // Function UMG.BackgroundBlur.SetBlurRadius
	void SetApplyAlphaToBlur(bool bInApplyAlphaToBlur); // Function UMG.BackgroundBlur.SetApplyAlphaToBlur
}; 
 
 


//Class UMG.PanelSlot Size 56
// Inherited 40 bytes 
class UPanelSlot : public UVisual
{

 public: 
	struct UPanelWidget* Parent;  // Offset: 40 Size: 8
	struct UWidget* Content;  // Offset: 48 Size: 8



 // Functions 
 public:
}; 
 
 


//Class UMG.UserListEntryLibrary Size 40
// Inherited 40 bytes 
class UUserListEntryLibrary : public UBlueprintFunctionLibrary
{

 public: 



 // Functions 
 public:
	bool IsListItemSelected(struct TScriptInterface<IUserListEntry> UserListEntry); // Function UMG.UserListEntryLibrary.IsListItemSelected
	bool IsListItemExpanded(struct TScriptInterface<IUserListEntry> UserListEntry); // Function UMG.UserListEntryLibrary.IsListItemExpanded
	struct UListViewBase* GetOwningListView(struct TScriptInterface<IUserListEntry> UserListEntry); // Function UMG.UserListEntryLibrary.GetOwningListView
}; 
 
 


//Class UMG.DynamicEntryBoxBase Size 472
// Inherited 264 bytes 
class UDynamicEntryBoxBase : public UWidget
{

 public: 
	enum class EDynamicBoxType EntryBoxType;  // Offset: 264 Size: 1
	char pad_265[3];  // Offset: 265 Size: 3
	struct FVector2D EntrySpacing;  // Offset: 268 Size: 8
	char pad_276[4];  // Offset: 276 Size: 4
	struct TArray<struct FVector2D> SpacingPattern;  // Offset: 280 Size: 16
	struct FSlateChildSize EntrySizeRule;  // Offset: 296 Size: 8
	enum class EHorizontalAlignment EntryHorizontalAlignment;  // Offset: 304 Size: 1
	enum class EVerticalAlignment EntryVerticalAlignment;  // Offset: 305 Size: 1
	char pad_306[2];  // Offset: 306 Size: 2
	int32_t MaxElementSize;  // Offset: 308 Size: 4
	struct FRadialBoxSettings RadialBoxSettings;  // Offset: 312 Size: 16
	char pad_328[16];  // Offset: 328 Size: 16
	struct FUserWidgetPool EntryWidgetPool;  // Offset: 344 Size: 128



 // Functions 
 public:
	void SetRadialSettings(struct FRadialBoxSettings& InSettings); // Function UMG.DynamicEntryBoxBase.SetRadialSettings
	void SetEntrySpacing(struct FVector2D& InEntrySpacing); // Function UMG.DynamicEntryBoxBase.SetEntrySpacing
	int32_t GetNumEntries(); // Function UMG.DynamicEntryBoxBase.GetNumEntries
	struct TArray<struct UUserWidget*> GetAllEntries(); // Function UMG.DynamicEntryBoxBase.GetAllEntries
}; 
 
 


//Class UMG.BackgroundBlurSlot Size 96
// Inherited 56 bytes 
class UBackgroundBlurSlot : public UPanelSlot
{

 public: 
	struct FMargin Padding;  // Offset: 56 Size: 16
	enum class EHorizontalAlignment HorizontalAlignment;  // Offset: 72 Size: 1
	enum class EVerticalAlignment VerticalAlignment;  // Offset: 73 Size: 1
	char pad_74[22];  // Offset: 74 Size: 22



 // Functions 
 public:
	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.BackgroundBlurSlot.SetVerticalAlignment
	void SetPadding(struct FMargin InPadding); // Function UMG.BackgroundBlurSlot.SetPadding
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.BackgroundBlurSlot.SetHorizontalAlignment
}; 
 
 


//Class UMG.PropertyBinding Size 96
// Inherited 40 bytes 
class UPropertyBinding : public UObject
{

 public: 
	struct TWeakObjectPtr<UObject> SourceObject;  // Offset: 40 Size: 8
	struct FDynamicPropertyPath SourcePath;  // Offset: 48 Size: 40
	struct FName DestinationProperty;  // Offset: 88 Size: 8



 // Functions 
 public:
}; 
 
 


//Class UMG.BrushBinding Size 104
// Inherited 96 bytes 
class UBrushBinding : public UPropertyBinding
{

 public: 
	char pad_96[8];  // Offset: 96 Size: 8



 // Functions 
 public:
	struct FSlateBrush GetValue(); // Function UMG.BrushBinding.GetValue
}; 
 
 


//Class UMG.BoolBinding Size 96
// Inherited 96 bytes 
class UBoolBinding : public UPropertyBinding
{

 public: 



 // Functions 
 public:
	bool GetValue(); // Function UMG.BoolBinding.GetValue
}; 
 
 


//Class UMG.Border Size 624
// Inherited 288 bytes 
class UBorder : public UContentWidget
{

 public: 
	enum class EHorizontalAlignment HorizontalAlignment;  // Offset: 288 Size: 1
	enum class EVerticalAlignment VerticalAlignment;  // Offset: 289 Size: 1
	char bShowEffectWhenDisabled : 1;  // Offset: 290 Size: 1
	char pad_290_1 : 7;  // Offset: 290 Size: 1
	char pad_291[2];  // Offset: 291 Size: 2
	struct FLinearColor ContentColorAndOpacity;  // Offset: 292 Size: 16
	struct FDelegate ContentColorAndOpacityDelegate;  // Offset: 308 Size: 16
	struct FMargin Padding;  // Offset: 324 Size: 16
	char pad_340[4];  // Offset: 340 Size: 4
	struct FSlateBrush Background;  // Offset: 344 Size: 136
	struct FDelegate BackgroundDelegate;  // Offset: 480 Size: 16
	struct FLinearColor BrushColor;  // Offset: 496 Size: 16
	struct FDelegate BrushColorDelegate;  // Offset: 512 Size: 16
	struct FVector2D DesiredSizeScale;  // Offset: 528 Size: 8
	char pad_536_1 : 7;  // Offset: 536 Size: 1
	bool bFlipForRightToLeftFlowDirection : 1;  // Offset: 536 Size: 1
	char pad_537[3];  // Offset: 537 Size: 3
	struct FDelegate OnMouseButtonDownEvent;  // Offset: 540 Size: 16
	struct FDelegate OnMouseButtonUpEvent;  // Offset: 556 Size: 16
	struct FDelegate OnMouseMoveEvent;  // Offset: 572 Size: 16
	struct FDelegate OnMouseDoubleClickEvent;  // Offset: 588 Size: 16
	char pad_604[20];  // Offset: 604 Size: 20



 // Functions 
 public:
	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.Border.SetVerticalAlignment
	void SetPadding(struct FMargin InPadding); // Function UMG.Border.SetPadding
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.Border.SetHorizontalAlignment
	void SetDesiredSizeScale(struct FVector2D InScale); // Function UMG.Border.SetDesiredSizeScale
	void SetContentColorAndOpacity(struct FLinearColor InContentColorAndOpacity); // Function UMG.Border.SetContentColorAndOpacity
	void SetBrushFromTexture(struct UTexture2D* Texture); // Function UMG.Border.SetBrushFromTexture
	void SetBrushFromMaterial(struct UMaterialInterface* Material); // Function UMG.Border.SetBrushFromMaterial
	void SetBrushFromAsset(struct USlateBrushAsset* Asset); // Function UMG.Border.SetBrushFromAsset
	void SetBrushColor(struct FLinearColor InBrushColor); // Function UMG.Border.SetBrushColor
	void SetBrush(struct FSlateBrush& InBrush); // Function UMG.Border.SetBrush
	struct UMaterialInstanceDynamic* GetDynamicMaterial(); // Function UMG.Border.GetDynamicMaterial
}; 
 
 


//Class UMG.BorderSlot Size 96
// Inherited 56 bytes 
class UBorderSlot : public UPanelSlot
{

 public: 
	struct FMargin Padding;  // Offset: 56 Size: 16
	enum class EHorizontalAlignment HorizontalAlignment;  // Offset: 72 Size: 1
	enum class EVerticalAlignment VerticalAlignment;  // Offset: 73 Size: 1
	char pad_74[22];  // Offset: 74 Size: 22



 // Functions 
 public:
	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.BorderSlot.SetVerticalAlignment
	void SetPadding(struct FMargin InPadding); // Function UMG.BorderSlot.SetPadding
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.BorderSlot.SetHorizontalAlignment
}; 
 
 


//Class UMG.Button Size 1064
// Inherited 288 bytes 
class UButton : public UContentWidget
{

 public: 
	struct USlateWidgetStyleAsset* Style;  // Offset: 288 Size: 8
	struct FButtonStyle WidgetStyle;  // Offset: 296 Size: 632
	struct FLinearColor ColorAndOpacity;  // Offset: 928 Size: 16
	struct FLinearColor BackgroundColor;  // Offset: 944 Size: 16
	enum class EButtonClickMethod ClickMethod;  // Offset: 960 Size: 1
	enum class EButtonTouchMethod TouchMethod;  // Offset: 961 Size: 1
	enum class EButtonPressMethod PressMethod;  // Offset: 962 Size: 1
	char pad_963_1 : 7;  // Offset: 963 Size: 1
	bool IsFocusable : 1;  // Offset: 963 Size: 1
	char pad_964[4];  // Offset: 964 Size: 4
	struct FMulticastInlineDelegate OnClicked;  // Offset: 968 Size: 16
	struct FMulticastInlineDelegate OnPressed;  // Offset: 984 Size: 16
	struct FMulticastInlineDelegate OnReleased;  // Offset: 1000 Size: 16
	struct FMulticastInlineDelegate OnHovered;  // Offset: 1016 Size: 16
	struct FMulticastInlineDelegate OnUnHovered;  // Offset: 1032 Size: 16
	char pad_1048[16];  // Offset: 1048 Size: 16



 // Functions 
 public:
	void SetTouchMethod(enum class EButtonTouchMethod InTouchMethod); // Function UMG.Button.SetTouchMethod
	void SetStyle(struct FButtonStyle& InStyle); // Function UMG.Button.SetStyle
	void SetPressMethod(enum class EButtonPressMethod InPressMethod); // Function UMG.Button.SetPressMethod
	void SetColorAndOpacity(struct FLinearColor InColorAndOpacity); // Function UMG.Button.SetColorAndOpacity
	void SetClickMethod(enum class EButtonClickMethod InClickMethod); // Function UMG.Button.SetClickMethod
	void SetBackgroundColor(struct FLinearColor InBackgroundColor); // Function UMG.Button.SetBackgroundColor
	bool IsPressed(); // Function UMG.Button.IsPressed
}; 
 
 


//Class UMG.ScrollBar Size 1552
// Inherited 264 bytes 
class UScrollBar : public UWidget
{

 public: 
	struct FScrollBarStyle WidgetStyle;  // Offset: 264 Size: 1232
	struct USlateWidgetStyleAsset* Style;  // Offset: 1496 Size: 8
	char pad_1504_1 : 7;  // Offset: 1504 Size: 1
	bool bAlwaysShowScrollbar : 1;  // Offset: 1504 Size: 1
	char pad_1505_1 : 7;  // Offset: 1505 Size: 1
	bool bAlwaysShowScrollbarTrack : 1;  // Offset: 1505 Size: 1
	enum class EOrientation Orientation;  // Offset: 1506 Size: 1
	char pad_1507[1];  // Offset: 1507 Size: 1
	struct FVector2D Thickness;  // Offset: 1508 Size: 8
	struct FMargin Padding;  // Offset: 1516 Size: 16
	char pad_1532[20];  // Offset: 1532 Size: 20



 // Functions 
 public:
	void SetState(float InOffsetFraction, float InThumbSizeFraction); // Function UMG.ScrollBar.SetState
}; 
 
 


//Class UMG.ButtonSlot Size 96
// Inherited 56 bytes 
class UButtonSlot : public UPanelSlot
{

 public: 
	struct FMargin Padding;  // Offset: 56 Size: 16
	enum class EHorizontalAlignment HorizontalAlignment;  // Offset: 72 Size: 1
	enum class EVerticalAlignment VerticalAlignment;  // Offset: 73 Size: 1
	char pad_74[22];  // Offset: 74 Size: 22



 // Functions 
 public:
	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.ButtonSlot.SetVerticalAlignment
	void SetPadding(struct FMargin InPadding); // Function UMG.ButtonSlot.SetPadding
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.ButtonSlot.SetHorizontalAlignment
}; 
 
 


//Class UMG.CanvasPanel Size 304
// Inherited 288 bytes 
class UCanvasPanel : public UPanelWidget
{

 public: 
	char pad_288[16];  // Offset: 288 Size: 16



 // Functions 
 public:
	struct UCanvasPanelSlot* AddChildToCanvas(struct UWidget* Content); // Function UMG.CanvasPanel.AddChildToCanvas
}; 
 
 


//Class UMG.CanvasPanelSlot Size 112
// Inherited 56 bytes 
class UCanvasPanelSlot : public UPanelSlot
{

 public: 
	struct FAnchorData LayoutData;  // Offset: 56 Size: 40
	char pad_96_1 : 7;  // Offset: 96 Size: 1
	bool bAutoSize : 1;  // Offset: 96 Size: 1
	char pad_97[3];  // Offset: 97 Size: 3
	int32_t ZOrder;  // Offset: 100 Size: 4
	char pad_104[8];  // Offset: 104 Size: 8



 // Functions 
 public:
	void SetZOrder(int32_t InZOrder); // Function UMG.CanvasPanelSlot.SetZOrder
	void SetSize(struct FVector2D InSize); // Function UMG.CanvasPanelSlot.SetSize
	void SetPosition(struct FVector2D InPosition); // Function UMG.CanvasPanelSlot.SetPosition
	void SetOffsets(struct FMargin InOffset); // Function UMG.CanvasPanelSlot.SetOffsets
	void SetMinimum(struct FVector2D InMinimumAnchors); // Function UMG.CanvasPanelSlot.SetMinimum
	void SetMaximum(struct FVector2D InMaximumAnchors); // Function UMG.CanvasPanelSlot.SetMaximum
	void SetLayout(struct FAnchorData& InLayoutData); // Function UMG.CanvasPanelSlot.SetLayout
	void SetAutoSize(bool InbAutoSize); // Function UMG.CanvasPanelSlot.SetAutoSize
	void SetAnchors(struct FAnchors InAnchors); // Function UMG.CanvasPanelSlot.SetAnchors
	void SetAlignment(struct FVector2D InAlignment); // Function UMG.CanvasPanelSlot.SetAlignment
	int32_t GetZOrder(); // Function UMG.CanvasPanelSlot.GetZOrder
	struct FVector2D GetSize(); // Function UMG.CanvasPanelSlot.GetSize
	struct FVector2D GetPosition(); // Function UMG.CanvasPanelSlot.GetPosition
	struct FMargin GetOffsets(); // Function UMG.CanvasPanelSlot.GetOffsets
	struct FAnchorData GetLayout(); // Function UMG.CanvasPanelSlot.GetLayout
	bool GetAutoSize(); // Function UMG.CanvasPanelSlot.GetAutoSize
	struct FAnchors GetAnchors(); // Function UMG.CanvasPanelSlot.GetAnchors
	struct FVector2D GetAlignment(); // Function UMG.CanvasPanelSlot.GetAlignment
}; 
 
 


//Class UMG.CheckBox Size 1904
// Inherited 288 bytes 
class UCheckBox : public UContentWidget
{

 public: 
	enum class ECheckBoxState CheckedState;  // Offset: 288 Size: 1
	char pad_289[3];  // Offset: 289 Size: 3
	struct FDelegate CheckedStateDelegate;  // Offset: 292 Size: 16
	char pad_308[4];  // Offset: 308 Size: 4
	struct FCheckBoxStyle WidgetStyle;  // Offset: 312 Size: 1408
	struct USlateWidgetStyleAsset* Style;  // Offset: 1720 Size: 8
	struct USlateBrushAsset* UncheckedImage;  // Offset: 1728 Size: 8
	struct USlateBrushAsset* UncheckedHoveredImage;  // Offset: 1736 Size: 8
	struct USlateBrushAsset* UncheckedPressedImage;  // Offset: 1744 Size: 8
	struct USlateBrushAsset* CheckedImage;  // Offset: 1752 Size: 8
	struct USlateBrushAsset* CheckedHoveredImage;  // Offset: 1760 Size: 8
	struct USlateBrushAsset* CheckedPressedImage;  // Offset: 1768 Size: 8
	struct USlateBrushAsset* UndeterminedImage;  // Offset: 1776 Size: 8
	struct USlateBrushAsset* UndeterminedHoveredImage;  // Offset: 1784 Size: 8
	struct USlateBrushAsset* UndeterminedPressedImage;  // Offset: 1792 Size: 8
	enum class EHorizontalAlignment HorizontalAlignment;  // Offset: 1800 Size: 1
	char pad_1801[3];  // Offset: 1801 Size: 3
	struct FMargin Padding;  // Offset: 1804 Size: 16
	char pad_1820[4];  // Offset: 1820 Size: 4
	struct FSlateColor BorderBackgroundColor;  // Offset: 1824 Size: 40
	enum class EButtonClickMethod ClickMethod;  // Offset: 1864 Size: 1
	enum class EButtonTouchMethod TouchMethod;  // Offset: 1865 Size: 1
	enum class EButtonPressMethod PressMethod;  // Offset: 1866 Size: 1
	char pad_1867_1 : 7;  // Offset: 1867 Size: 1
	bool IsFocusable : 1;  // Offset: 1867 Size: 1
	char pad_1868[4];  // Offset: 1868 Size: 4
	struct FMulticastInlineDelegate OnCheckStateChanged;  // Offset: 1872 Size: 16
	char pad_1888[16];  // Offset: 1888 Size: 16



 // Functions 
 public:
	void SetTouchMethod(enum class EButtonTouchMethod InTouchMethod); // Function UMG.CheckBox.SetTouchMethod
	void SetPressMethod(enum class EButtonPressMethod InPressMethod); // Function UMG.CheckBox.SetPressMethod
	void SetIsChecked(bool InIsChecked); // Function UMG.CheckBox.SetIsChecked
	void SetClickMethod(enum class EButtonClickMethod InClickMethod); // Function UMG.CheckBox.SetClickMethod
	void SetCheckedState(enum class ECheckBoxState InCheckedState); // Function UMG.CheckBox.SetCheckedState
	bool IsPressed(); // Function UMG.CheckBox.IsPressed
	bool IsChecked(); // Function UMG.CheckBox.IsChecked
	enum class ECheckBoxState GetCheckedState(); // Function UMG.CheckBox.GetCheckedState
}; 
 
 


//Class UMG.CircularThrobber Size 448
// Inherited 264 bytes 
class UCircularThrobber : public UWidget
{

 public: 
	int32_t NumberOfPieces;  // Offset: 264 Size: 4
	float Period;  // Offset: 268 Size: 4
	float Radius;  // Offset: 272 Size: 4
	char pad_276[4];  // Offset: 276 Size: 4
	struct USlateBrushAsset* PieceImage;  // Offset: 280 Size: 8
	struct FSlateBrush Image;  // Offset: 288 Size: 136
	char pad_424_1 : 7;  // Offset: 424 Size: 1
	bool bEnableRadius : 1;  // Offset: 424 Size: 1
	char pad_425[23];  // Offset: 425 Size: 23



 // Functions 
 public:
	void SetRadius(float InRadius); // Function UMG.CircularThrobber.SetRadius
	void SetPeriod(float InPeriod); // Function UMG.CircularThrobber.SetPeriod
	void SetNumberOfPieces(int32_t InNumberOfPieces); // Function UMG.CircularThrobber.SetNumberOfPieces
}; 
 
 


//Class UMG.InputKeySelector Size 1792
// Inherited 264 bytes 
class UInputKeySelector : public UWidget
{

 public: 
	struct FButtonStyle WidgetStyle;  // Offset: 264 Size: 632
	struct FTextBlockStyle TextStyle;  // Offset: 896 Size: 624
	struct FInputChord SelectedKey;  // Offset: 1520 Size: 32
	struct FSlateFontInfo Font;  // Offset: 1552 Size: 88
	struct FMargin Margin;  // Offset: 1640 Size: 16
	struct FLinearColor ColorAndOpacity;  // Offset: 1656 Size: 16
	struct FText KeySelectionText;  // Offset: 1672 Size: 24
	struct FText NoKeySpecifiedText;  // Offset: 1696 Size: 24
	char pad_1720_1 : 7;  // Offset: 1720 Size: 1
	bool bAllowModifierKeys : 1;  // Offset: 1720 Size: 1
	char pad_1721_1 : 7;  // Offset: 1721 Size: 1
	bool bAllowGamepadKeys : 1;  // Offset: 1721 Size: 1
	char pad_1722[6];  // Offset: 1722 Size: 6
	struct TArray<struct FKey> EscapeKeys;  // Offset: 1728 Size: 16
	struct FMulticastInlineDelegate OnKeySelected;  // Offset: 1744 Size: 16
	struct FMulticastInlineDelegate OnIsSelectingKeyChanged;  // Offset: 1760 Size: 16
	char pad_1776[16];  // Offset: 1776 Size: 16



 // Functions 
 public:
	void SetTextBlockVisibility(enum class ESlateVisibility InVisibility); // Function UMG.InputKeySelector.SetTextBlockVisibility
	void SetSelectedKey(struct FInputChord& InSelectedKey); // Function UMG.InputKeySelector.SetSelectedKey
	void SetNoKeySpecifiedText(struct FText InNoKeySpecifiedText); // Function UMG.InputKeySelector.SetNoKeySpecifiedText
	void SetKeySelectionText(struct FText InKeySelectionText); // Function UMG.InputKeySelector.SetKeySelectionText
	void SetEscapeKeys(struct TArray<struct FKey>& InKeys); // Function UMG.InputKeySelector.SetEscapeKeys
	void SetAllowModifierKeys(bool bInAllowModifierKeys); // Function UMG.InputKeySelector.SetAllowModifierKeys
	void SetAllowGamepadKeys(bool bInAllowGamepadKeys); // Function UMG.InputKeySelector.SetAllowGamepadKeys
	void OnKeySelected__DelegateSignature(struct FInputChord SelectedKey); // DelegateFunction UMG.InputKeySelector.OnKeySelected__DelegateSignature
	void OnIsSelectingKeyChanged__DelegateSignature(); // DelegateFunction UMG.InputKeySelector.OnIsSelectingKeyChanged__DelegateSignature
	bool GetIsSelectingKey(); // Function UMG.InputKeySelector.GetIsSelectingKey
}; 
 
 


//Class UMG.OverlaySlot Size 88
// Inherited 56 bytes 
class UOverlaySlot : public UPanelSlot
{

 public: 
	char pad_56[8];  // Offset: 56 Size: 8
	struct FMargin Padding;  // Offset: 64 Size: 16
	enum class EHorizontalAlignment HorizontalAlignment;  // Offset: 80 Size: 1
	enum class EVerticalAlignment VerticalAlignment;  // Offset: 81 Size: 1
	char pad_82[6];  // Offset: 82 Size: 6



 // Functions 
 public:
	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.OverlaySlot.SetVerticalAlignment
	void SetPadding(struct FMargin InPadding); // Function UMG.OverlaySlot.SetPadding
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.OverlaySlot.SetHorizontalAlignment
}; 
 
 


//Class UMG.ColorBinding Size 104
// Inherited 96 bytes 
class UColorBinding : public UPropertyBinding
{

 public: 
	char pad_96[8];  // Offset: 96 Size: 8



 // Functions 
 public:
	struct FSlateColor GetSlateValue(); // Function UMG.ColorBinding.GetSlateValue
	struct FLinearColor GetLinearValue(); // Function UMG.ColorBinding.GetLinearValue
}; 
 
 


//Class UMG.ComboBox Size 320
// Inherited 264 bytes 
class UComboBox : public UWidget
{

 public: 
	struct TArray<struct UObject*> Items;  // Offset: 264 Size: 16
	struct FDelegate OnGenerateWidgetEvent;  // Offset: 280 Size: 16
	char pad_296_1 : 7;  // Offset: 296 Size: 1
	bool bIsFocusable : 1;  // Offset: 296 Size: 1
	char pad_297[23];  // Offset: 297 Size: 23



 // Functions 
 public:
}; 
 
 


//Class UMG.UserObjectListEntryLibrary Size 40
// Inherited 40 bytes 
class UUserObjectListEntryLibrary : public UBlueprintFunctionLibrary
{

 public: 



 // Functions 
 public:
	struct UObject* GetListItemObject(struct TScriptInterface<IUserObjectListEntry> UserObjectListEntry); // Function UMG.UserObjectListEntryLibrary.GetListItemObject
}; 
 
 


//Class UMG.DragDropOperation Size 136
// Inherited 40 bytes 
class UDragDropOperation : public UObject
{

 public: 
	struct FString Tag;  // Offset: 40 Size: 16
	struct UObject* Payload;  // Offset: 56 Size: 8
	struct UWidget* DefaultDragVisual;  // Offset: 64 Size: 8
	enum class EDragPivot Pivot;  // Offset: 72 Size: 1
	char pad_73[3];  // Offset: 73 Size: 3
	struct FVector2D Offset;  // Offset: 76 Size: 8
	char pad_84[4];  // Offset: 84 Size: 4
	struct FMulticastInlineDelegate OnDrop;  // Offset: 88 Size: 16
	struct FMulticastInlineDelegate OnDragCancelled;  // Offset: 104 Size: 16
	struct FMulticastInlineDelegate OnDragged;  // Offset: 120 Size: 16



 // Functions 
 public:
	void Drop(struct FPointerEvent& PointerEvent); // Function UMG.DragDropOperation.Drop
	void Dragged(struct FPointerEvent& PointerEvent); // Function UMG.DragDropOperation.Dragged
	void DragCancelled(struct FPointerEvent& PointerEvent); // Function UMG.DragDropOperation.DragCancelled
}; 
 
 


//Class UMG.MultiLineEditableText Size 1136
// Inherited 296 bytes 
class UMultiLineEditableText : public UTextLayoutWidget
{

 public: 
	struct FText Text;  // Offset: 296 Size: 24
	struct FText HintText;  // Offset: 320 Size: 24
	struct FDelegate HintTextDelegate;  // Offset: 344 Size: 16
	struct FTextBlockStyle WidgetStyle;  // Offset: 360 Size: 624
	char pad_984_1 : 7;  // Offset: 984 Size: 1
	bool bIsReadOnly : 1;  // Offset: 984 Size: 1
	char pad_985[7];  // Offset: 985 Size: 7
	struct FSlateFontInfo Font;  // Offset: 992 Size: 88
	char pad_1080_1 : 7;  // Offset: 1080 Size: 1
	bool SelectAllTextWhenFocused : 1;  // Offset: 1080 Size: 1
	char pad_1081_1 : 7;  // Offset: 1081 Size: 1
	bool ClearTextSelectionOnFocusLoss : 1;  // Offset: 1081 Size: 1
	char pad_1082_1 : 7;  // Offset: 1082 Size: 1
	bool RevertTextOnEscape : 1;  // Offset: 1082 Size: 1
	char pad_1083_1 : 7;  // Offset: 1083 Size: 1
	bool ClearKeyboardFocusOnCommit : 1;  // Offset: 1083 Size: 1
	char pad_1084_1 : 7;  // Offset: 1084 Size: 1
	bool AllowContextMenu : 1;  // Offset: 1084 Size: 1
	struct FVirtualKeyboardOptions VirtualKeyboardOptions;  // Offset: 1085 Size: 1
	enum class EVirtualKeyboardDismissAction VirtualKeyboardDismissAction;  // Offset: 1086 Size: 1
	char pad_1087[1];  // Offset: 1087 Size: 1
	struct FMulticastInlineDelegate OnTextChanged;  // Offset: 1088 Size: 16
	struct FMulticastInlineDelegate OnTextCommitted;  // Offset: 1104 Size: 16
	char pad_1120[16];  // Offset: 1120 Size: 16



 // Functions 
 public:
	void SetWidgetStyle(struct FTextBlockStyle& InWidgetStyle); // Function UMG.MultiLineEditableText.SetWidgetStyle
	void SetText(struct FText InText); // Function UMG.MultiLineEditableText.SetText
	void SetIsReadOnly(bool bReadOnly); // Function UMG.MultiLineEditableText.SetIsReadOnly
	void SetHintText(struct FText InHintText); // Function UMG.MultiLineEditableText.SetHintText
	void OnMultiLineEditableTextCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextCommittedEvent__DelegateSignature
	void OnMultiLineEditableTextChangedEvent__DelegateSignature(struct FText& Text); // DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextChangedEvent__DelegateSignature
	struct FText GetText(); // Function UMG.MultiLineEditableText.GetText
	struct FText GetHintText(); // Function UMG.MultiLineEditableText.GetHintText
}; 
 
 


//Class UMG.DynamicEntryBox Size 480
// Inherited 472 bytes 
class UDynamicEntryBox : public UDynamicEntryBoxBase
{

 public: 
	UUserWidget* EntryWidgetClass;  // Offset: 472 Size: 8



 // Functions 
 public:
	void Reset(bool bDeleteWidgets); // Function UMG.DynamicEntryBox.Reset
	void RemoveEntry(struct UUserWidget* EntryWidget); // Function UMG.DynamicEntryBox.RemoveEntry
	struct UUserWidget* BP_CreateEntryOfClass(UUserWidget* EntryClass); // Function UMG.DynamicEntryBox.BP_CreateEntryOfClass
	struct UUserWidget* BP_CreateEntry(); // Function UMG.DynamicEntryBox.BP_CreateEntry
}; 
 
 


//Class UMG.FloatBinding Size 96
// Inherited 96 bytes 
class UFloatBinding : public UPropertyBinding
{

 public: 



 // Functions 
 public:
	float GetValue(); // Function UMG.FloatBinding.GetValue
}; 
 
 


//Class UMG.GridPanel Size 336
// Inherited 288 bytes 
class UGridPanel : public UPanelWidget
{

 public: 
	struct TArray<float> ColumnFill;  // Offset: 288 Size: 16
	struct TArray<float> RowFill;  // Offset: 304 Size: 16
	char pad_320[16];  // Offset: 320 Size: 16



 // Functions 
 public:
	void SetRowFill(int32_t ColumnIndex, float Coefficient); // Function UMG.GridPanel.SetRowFill
	void SetColumnFill(int32_t ColumnIndex, float Coefficient); // Function UMG.GridPanel.SetColumnFill
	struct UGridSlot* AddChildToGrid(struct UWidget* Content, int32_t InRow, int32_t InColumn); // Function UMG.GridPanel.AddChildToGrid
}; 
 
 


//Class UMG.Int32Binding Size 96
// Inherited 96 bytes 
class UInt32Binding : public UPropertyBinding
{

 public: 



 // Functions 
 public:
	int32_t GetValue(); // Function UMG.Int32Binding.GetValue
}; 
 
 


//Class UMG.HorizontalBoxSlot Size 96
// Inherited 56 bytes 
class UHorizontalBoxSlot : public UPanelSlot
{

 public: 
	char pad_56[8];  // Offset: 56 Size: 8
	struct FMargin Padding;  // Offset: 64 Size: 16
	struct FSlateChildSize Size;  // Offset: 80 Size: 8
	enum class EHorizontalAlignment HorizontalAlignment;  // Offset: 88 Size: 1
	enum class EVerticalAlignment VerticalAlignment;  // Offset: 89 Size: 1
	char pad_90[6];  // Offset: 90 Size: 6



 // Functions 
 public:
	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.HorizontalBoxSlot.SetVerticalAlignment
	void SetSize(struct FSlateChildSize InSize); // Function UMG.HorizontalBoxSlot.SetSize
	void SetPadding(struct FMargin InPadding); // Function UMG.HorizontalBoxSlot.SetPadding
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.HorizontalBoxSlot.SetHorizontalAlignment
}; 
 
 


//Class UMG.WidgetBlueprintGeneratedClass Size 872
// Inherited 808 bytes 
class UWidgetBlueprintGeneratedClass : public UBlueprintGeneratedClass
{

 public: 
	struct UWidgetTree* WidgetTree;  // Offset: 808 Size: 8
	char bClassRequiresNativeTick : 1;  // Offset: 816 Size: 1
	char pad_816_1 : 7;  // Offset: 816 Size: 1
	char pad_817[8];  // Offset: 817 Size: 8
	struct TArray<struct FDelegateRuntimeBinding> Bindings;  // Offset: 824 Size: 16
	struct TArray<struct UWidgetAnimation*> Animations;  // Offset: 840 Size: 16
	struct TArray<struct FName> NamedSlots;  // Offset: 856 Size: 16



 // Functions 
 public:
}; 
 
 


//Class UMG.InvalidationBox Size 312
// Inherited 288 bytes 
class UInvalidationBox : public UContentWidget
{

 public: 
	char pad_288_1 : 7;  // Offset: 288 Size: 1
	bool bCanCache : 1;  // Offset: 288 Size: 1
	char pad_289_1 : 7;  // Offset: 289 Size: 1
	bool CacheRelativeTransforms : 1;  // Offset: 289 Size: 1
	char pad_290[22];  // Offset: 290 Size: 22



 // Functions 
 public:
	void SetCanCache(bool CanCache); // Function UMG.InvalidationBox.SetCanCache
	void InvalidateCache(); // Function UMG.InvalidationBox.InvalidateCache
	bool GetCanCache(); // Function UMG.InvalidationBox.GetCanCache
}; 
 
 


//Class UMG.ListViewDesignerPreviewItem Size 40
// Inherited 40 bytes 
class UListViewDesignerPreviewItem : public UObject
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class UMG.MenuAnchor Size 368
// Inherited 288 bytes 
class UMenuAnchor : public UContentWidget
{

 public: 
	UUserWidget* MenuClass;  // Offset: 288 Size: 8
	struct FDelegate OnGetMenuContentEvent;  // Offset: 296 Size: 16
	struct FDelegate OnGetUserMenuContentEvent;  // Offset: 312 Size: 16
	enum class EMenuPlacement Placement;  // Offset: 328 Size: 1
	char pad_329_1 : 7;  // Offset: 329 Size: 1
	bool bFitInWindow : 1;  // Offset: 329 Size: 1
	char pad_330_1 : 7;  // Offset: 330 Size: 1
	bool ShouldDeferPaintingAfterWindowContent : 1;  // Offset: 330 Size: 1
	char pad_331_1 : 7;  // Offset: 331 Size: 1
	bool UseApplicationMenuStack : 1;  // Offset: 331 Size: 1
	char pad_332[4];  // Offset: 332 Size: 4
	struct FMulticastInlineDelegate OnMenuOpenChanged;  // Offset: 336 Size: 16
	char pad_352[16];  // Offset: 352 Size: 16



 // Functions 
 public:
	void ToggleOpen(bool bFocusOnOpen); // Function UMG.MenuAnchor.ToggleOpen
	bool ShouldOpenDueToClick(); // Function UMG.MenuAnchor.ShouldOpenDueToClick
	void SetPlacement(enum class EMenuPlacement InPlacement); // Function UMG.MenuAnchor.SetPlacement
	void Open(bool bFocusMenu); // Function UMG.MenuAnchor.Open
	bool IsOpen(); // Function UMG.MenuAnchor.IsOpen
	bool HasOpenSubMenus(); // Function UMG.MenuAnchor.HasOpenSubMenus
	struct UUserWidget* GetUserWidget__DelegateSignature(); // DelegateFunction UMG.MenuAnchor.GetUserWidget__DelegateSignature
	struct FVector2D GetMenuPosition(); // Function UMG.MenuAnchor.GetMenuPosition
	void FitInWindow(bool bFit); // Function UMG.MenuAnchor.FitInWindow
	void Close(); // Function UMG.MenuAnchor.Close
}; 
 
 


//Class UMG.MouseCursorBinding Size 96
// Inherited 96 bytes 
class UMouseCursorBinding : public UPropertyBinding
{

 public: 



 // Functions 
 public:
	enum class EMouseCursor GetValue(); // Function UMG.MouseCursorBinding.GetValue
}; 
 
 


//Class UMG.Overlay Size 304
// Inherited 288 bytes 
class UOverlay : public UPanelWidget
{

 public: 
	char pad_288[16];  // Offset: 288 Size: 16



 // Functions 
 public:
	struct UOverlaySlot* AddChildToOverlay(struct UWidget* Content); // Function UMG.Overlay.AddChildToOverlay
}; 
 
 


//Class UMG.MovieScene2DTransformSection Size 1368
// Inherited 232 bytes 
class UMovieScene2DTransformSection : public UMovieSceneSection
{

 public: 
	char pad_232[8];  // Offset: 232 Size: 8
	struct FMovieScene2DTransformMask TransformMask;  // Offset: 240 Size: 4
	char pad_244[4];  // Offset: 244 Size: 4
	struct FMovieSceneFloatChannel Translation[2];  // Offset: 248 Size: 320
	struct FMovieSceneFloatChannel Rotation;  // Offset: 568 Size: 160
	struct FMovieSceneFloatChannel Scale[2];  // Offset: 728 Size: 320
	struct FMovieSceneFloatChannel Shear[2];  // Offset: 1048 Size: 320



 // Functions 
 public:
}; 
 
 


//Class UMG.MovieScene2DTransformTrack Size 192
// Inherited 192 bytes 
class UMovieScene2DTransformTrack : public UMovieScenePropertyTrack
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class UMG.MovieSceneMarginPropertySystem Size 88
// Inherited 88 bytes 
class UMovieSceneMarginPropertySystem : public UMovieScenePropertySystem
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class UMG.MovieSceneMarginSection Size 880
// Inherited 232 bytes 
class UMovieSceneMarginSection : public UMovieSceneSection
{

 public: 
	char pad_232[8];  // Offset: 232 Size: 8
	struct FMovieSceneFloatChannel TopCurve;  // Offset: 240 Size: 160
	struct FMovieSceneFloatChannel LeftCurve;  // Offset: 400 Size: 160
	struct FMovieSceneFloatChannel RightCurve;  // Offset: 560 Size: 160
	struct FMovieSceneFloatChannel BottomCurve;  // Offset: 720 Size: 160



 // Functions 
 public:
}; 
 
 


//Class UMG.MovieSceneMarginTrack Size 192
// Inherited 192 bytes 
class UMovieSceneMarginTrack : public UMovieScenePropertyTrack
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class UMG.MovieSceneWidgetMaterialTrack Size 192
// Inherited 160 bytes 
class UMovieSceneWidgetMaterialTrack : public UMovieSceneMaterialTrack
{

 public: 
	char pad_160[8];  // Offset: 160 Size: 8
	struct TArray<struct FName> BrushPropertyNamePath;  // Offset: 168 Size: 16
	struct FName TrackName;  // Offset: 184 Size: 8



 // Functions 
 public:
}; 
 
 


//Class UMG.MultiLineEditableTextBox Size 3224
// Inherited 296 bytes 
class UMultiLineEditableTextBox : public UTextLayoutWidget
{

 public: 
	struct FText Text;  // Offset: 296 Size: 24
	struct FText HintText;  // Offset: 320 Size: 24
	struct FDelegate HintTextDelegate;  // Offset: 344 Size: 16
	struct FEditableTextBoxStyle WidgetStyle;  // Offset: 360 Size: 2040
	struct FTextBlockStyle TextStyle;  // Offset: 2400 Size: 624
	char pad_3024_1 : 7;  // Offset: 3024 Size: 1
	bool bIsReadOnly : 1;  // Offset: 3024 Size: 1
	char pad_3025_1 : 7;  // Offset: 3025 Size: 1
	bool AllowContextMenu : 1;  // Offset: 3025 Size: 1
	struct FVirtualKeyboardOptions VirtualKeyboardOptions;  // Offset: 3026 Size: 1
	enum class EVirtualKeyboardDismissAction VirtualKeyboardDismissAction;  // Offset: 3027 Size: 1
	char pad_3028[4];  // Offset: 3028 Size: 4
	struct USlateWidgetStyleAsset* Style;  // Offset: 3032 Size: 8
	struct FSlateFontInfo Font;  // Offset: 3040 Size: 88
	struct FLinearColor ForegroundColor;  // Offset: 3128 Size: 16
	struct FLinearColor BackgroundColor;  // Offset: 3144 Size: 16
	struct FLinearColor ReadOnlyForegroundColor;  // Offset: 3160 Size: 16
	struct FMulticastInlineDelegate OnTextChanged;  // Offset: 3176 Size: 16
	struct FMulticastInlineDelegate OnTextCommitted;  // Offset: 3192 Size: 16
	char pad_3208[16];  // Offset: 3208 Size: 16



 // Functions 
 public:
	void SetTextStyle(struct FTextBlockStyle& InTextStyle); // Function UMG.MultiLineEditableTextBox.SetTextStyle
	void SetText(struct FText InText); // Function UMG.MultiLineEditableTextBox.SetText
	void SetIsReadOnly(bool bReadOnly); // Function UMG.MultiLineEditableTextBox.SetIsReadOnly
	void SetHintText(struct FText InHintText); // Function UMG.MultiLineEditableTextBox.SetHintText
	void SetError(struct FText InError); // Function UMG.MultiLineEditableTextBox.SetError
	void OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature
	void OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(struct FText& Text); // DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxChangedEvent__DelegateSignature
	struct FText GetText(); // Function UMG.MultiLineEditableTextBox.GetText
	struct FText GetHintText(); // Function UMG.MultiLineEditableTextBox.GetHintText
}; 
 
 


//Class UMG.NamedSlot Size 304
// Inherited 288 bytes 
class UNamedSlot : public UContentWidget
{

 public: 
	char pad_288[16];  // Offset: 288 Size: 16



 // Functions 
 public:
}; 
 
 


//Class UMG.NamedSlotInterface Size 40
// Inherited 40 bytes 
class UNamedSlotInterface : public UInterface
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class UMG.NativeWidgetHost Size 280
// Inherited 264 bytes 
class UNativeWidgetHost : public UWidget
{

 public: 
	char pad_264[16];  // Offset: 264 Size: 16



 // Functions 
 public:
}; 
 
 


//Class UMG.ProgressBar Size 792
// Inherited 264 bytes 
class UProgressBar : public UWidget
{

 public: 
	struct FProgressBarStyle WidgetStyle;  // Offset: 264 Size: 416
	struct USlateWidgetStyleAsset* Style;  // Offset: 680 Size: 8
	struct USlateBrushAsset* BackgroundImage;  // Offset: 688 Size: 8
	struct USlateBrushAsset* FillImage;  // Offset: 696 Size: 8
	struct USlateBrushAsset* MarqueeImage;  // Offset: 704 Size: 8
	float Percent;  // Offset: 712 Size: 4
	enum class EProgressBarFillType BarFillType;  // Offset: 716 Size: 1
	char pad_717_1 : 7;  // Offset: 717 Size: 1
	bool bIsMarquee : 1;  // Offset: 717 Size: 1
	char pad_718[2];  // Offset: 718 Size: 2
	struct FVector2D BorderPadding;  // Offset: 720 Size: 8
	struct FDelegate PercentDelegate;  // Offset: 728 Size: 16
	struct FLinearColor FillColorAndOpacity;  // Offset: 744 Size: 16
	struct FDelegate FillColorAndOpacityDelegate;  // Offset: 760 Size: 16
	char pad_776[16];  // Offset: 776 Size: 16



 // Functions 
 public:
	void SetPercent(float InPercent); // Function UMG.ProgressBar.SetPercent
	void SetIsMarquee(bool InbIsMarquee); // Function UMG.ProgressBar.SetIsMarquee
	void SetFillColorAndOpacity(struct FLinearColor InColor); // Function UMG.ProgressBar.SetFillColorAndOpacity
}; 
 
 


//Class UMG.RetainerBox Size 336
// Inherited 288 bytes 
class URetainerBox : public UContentWidget
{

 public: 
	char pad_288_1 : 7;  // Offset: 288 Size: 1
	bool bRetainRender : 1;  // Offset: 288 Size: 1
	char pad_289_1 : 7;  // Offset: 289 Size: 1
	bool RenderOnInvalidation : 1;  // Offset: 289 Size: 1
	char pad_290_1 : 7;  // Offset: 290 Size: 1
	bool RenderOnPhase : 1;  // Offset: 290 Size: 1
	char pad_291[1];  // Offset: 291 Size: 1
	int32_t Phase;  // Offset: 292 Size: 4
	int32_t PhaseCount;  // Offset: 296 Size: 4
	char pad_300[4];  // Offset: 300 Size: 4
	struct UMaterialInterface* EffectMaterial;  // Offset: 304 Size: 8
	struct FName TextureParameter;  // Offset: 312 Size: 8
	char pad_320[16];  // Offset: 320 Size: 16



 // Functions 
 public:
	void SetTextureParameter(struct FName TextureParameter); // Function UMG.RetainerBox.SetTextureParameter
	void SetRetainRendering(bool bInRetainRendering); // Function UMG.RetainerBox.SetRetainRendering
	void SetRenderingPhase(int32_t RenderPhase, int32_t TotalPhases); // Function UMG.RetainerBox.SetRenderingPhase
	void SetEffectMaterial(struct UMaterialInterface* EffectMaterial); // Function UMG.RetainerBox.SetEffectMaterial
	void RequestRender(); // Function UMG.RetainerBox.RequestRender
	struct UMaterialInstanceDynamic* GetEffectMaterial(); // Function UMG.RetainerBox.GetEffectMaterial
}; 
 
 


//Class UMG.RichTextBlockImageDecorator Size 48
// Inherited 40 bytes 
class URichTextBlockImageDecorator : public URichTextBlockDecorator
{

 public: 
	struct UDataTable* ImageSet;  // Offset: 40 Size: 8



 // Functions 
 public:
}; 
 
 


//Class UMG.SafeZone Size 312
// Inherited 288 bytes 
class USafeZone : public UContentWidget
{

 public: 
	char pad_288_1 : 7;  // Offset: 288 Size: 1
	bool PadLeft : 1;  // Offset: 288 Size: 1
	char pad_289_1 : 7;  // Offset: 289 Size: 1
	bool PadRight : 1;  // Offset: 289 Size: 1
	char pad_290_1 : 7;  // Offset: 290 Size: 1
	bool PadTop : 1;  // Offset: 290 Size: 1
	char pad_291_1 : 7;  // Offset: 291 Size: 1
	bool PadBottom : 1;  // Offset: 291 Size: 1
	char pad_292[20];  // Offset: 292 Size: 20



 // Functions 
 public:
	void SetSidesToPad(bool InPadLeft, bool InPadRight, bool InPadTop, bool InPadBottom); // Function UMG.SafeZone.SetSidesToPad
}; 
 
 


//Class UMG.SafeZoneSlot Size 96
// Inherited 56 bytes 
class USafeZoneSlot : public UPanelSlot
{

 public: 
	char pad_56_1 : 7;  // Offset: 56 Size: 1
	bool bIsTitleSafe : 1;  // Offset: 56 Size: 1
	char pad_57[3];  // Offset: 57 Size: 3
	struct FMargin SafeAreaScale;  // Offset: 60 Size: 16
	enum class EHorizontalAlignment HAlign;  // Offset: 76 Size: 1
	enum class EVerticalAlignment VAlign;  // Offset: 77 Size: 1
	char pad_78[2];  // Offset: 78 Size: 2
	struct FMargin Padding;  // Offset: 80 Size: 16



 // Functions 
 public:
}; 
 
 


//Class UMG.ScaleBox Size 320
// Inherited 288 bytes 
class UScaleBox : public UContentWidget
{

 public: 
	enum class EStretch Stretch;  // Offset: 288 Size: 1
	enum class EStretchDirection StretchDirection;  // Offset: 289 Size: 1
	char pad_290[2];  // Offset: 290 Size: 2
	float UserSpecifiedScale;  // Offset: 292 Size: 4
	char pad_296_1 : 7;  // Offset: 296 Size: 1
	bool IgnoreInheritedScale : 1;  // Offset: 296 Size: 1
	char pad_297_1 : 7;  // Offset: 297 Size: 1
	bool ScaleToFitToUserSpecifiedScale : 1;  // Offset: 297 Size: 1
	char pad_298[22];  // Offset: 298 Size: 22



 // Functions 
 public:
	void SetUserSpecifiedScale(float InUserSpecifiedScale); // Function UMG.ScaleBox.SetUserSpecifiedScale
	void SetStretchDirection(enum class EStretchDirection InStretchDirection); // Function UMG.ScaleBox.SetStretchDirection
	void SetStretch(enum class EStretch InStretch); // Function UMG.ScaleBox.SetStretch
	void SetScaleToFitToUserSpecifiedScale(bool bInScaleToFitToUserSpecifiedScale); // Function UMG.ScaleBox.SetScaleToFitToUserSpecifiedScale
	void SetIgnoreInheritedScale(bool bInIgnoreInheritedScale); // Function UMG.ScaleBox.SetIgnoreInheritedScale
}; 
 
 


//Class UMG.ScaleBoxSlot Size 96
// Inherited 56 bytes 
class UScaleBoxSlot : public UPanelSlot
{

 public: 
	struct FMargin Padding;  // Offset: 56 Size: 16
	enum class EHorizontalAlignment HorizontalAlignment;  // Offset: 72 Size: 1
	enum class EVerticalAlignment VerticalAlignment;  // Offset: 73 Size: 1
	char pad_74[22];  // Offset: 74 Size: 22



 // Functions 
 public:
	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.ScaleBoxSlot.SetVerticalAlignment
	void SetPadding(struct FMargin InPadding); // Function UMG.ScaleBoxSlot.SetPadding
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.ScaleBoxSlot.SetHorizontalAlignment
}; 
 
 


//Class UMG.ScrollBox Size 2176
// Inherited 288 bytes 
class UScrollBox : public UPanelWidget
{

 public: 
	struct FScrollBoxStyle WidgetStyle;  // Offset: 288 Size: 552
	struct FScrollBarStyle WidgetBarStyle;  // Offset: 840 Size: 1232
	struct USlateWidgetStyleAsset* Style;  // Offset: 2072 Size: 8
	struct USlateWidgetStyleAsset* BarStyle;  // Offset: 2080 Size: 8
	enum class EOrientation Orientation;  // Offset: 2088 Size: 1
	enum class ESlateVisibility ScrollBarVisibility;  // Offset: 2089 Size: 1
	enum class EConsumeMouseWheel ConsumeMouseWheel;  // Offset: 2090 Size: 1
	char pad_2091[1];  // Offset: 2091 Size: 1
	struct FVector2D ScrollBarThickness;  // Offset: 2092 Size: 8
	struct FMargin ScrollBarPadding;  // Offset: 2100 Size: 16
	char pad_2116_1 : 7;  // Offset: 2116 Size: 1
	bool AlwaysShowScrollbar : 1;  // Offset: 2116 Size: 1
	char pad_2117_1 : 7;  // Offset: 2117 Size: 1
	bool AlwaysShowScrollbarTrack : 1;  // Offset: 2117 Size: 1
	char pad_2118_1 : 7;  // Offset: 2118 Size: 1
	bool AllowOverscroll : 1;  // Offset: 2118 Size: 1
	char pad_2119_1 : 7;  // Offset: 2119 Size: 1
	bool bAnimateWheelScrolling : 1;  // Offset: 2119 Size: 1
	enum class EDescendantScrollDestination NavigationDestination;  // Offset: 2120 Size: 1
	char pad_2121[3];  // Offset: 2121 Size: 3
	float NavigationScrollPadding;  // Offset: 2124 Size: 4
	enum class EScrollWhenFocusChanges ScrollWhenFocusChanges;  // Offset: 2128 Size: 1
	char pad_2129_1 : 7;  // Offset: 2129 Size: 1
	bool bAllowRightClickDragScrolling : 1;  // Offset: 2129 Size: 1
	char pad_2130[2];  // Offset: 2130 Size: 2
	float WheelScrollMultiplier;  // Offset: 2132 Size: 4
	struct FMulticastInlineDelegate OnUserScrolled;  // Offset: 2136 Size: 16
	char pad_2152[24];  // Offset: 2152 Size: 24



 // Functions 
 public:
	void SetWheelScrollMultiplier(float NewWheelScrollMultiplier); // Function UMG.ScrollBox.SetWheelScrollMultiplier
	void SetScrollWhenFocusChanges(enum class EScrollWhenFocusChanges NewScrollWhenFocusChanges); // Function UMG.ScrollBox.SetScrollWhenFocusChanges
	void SetScrollOffset(float NewScrollOffset); // Function UMG.ScrollBox.SetScrollOffset
	void SetScrollbarVisibility(enum class ESlateVisibility NewScrollBarVisibility); // Function UMG.ScrollBox.SetScrollbarVisibility
	void SetScrollbarThickness(struct FVector2D& NewScrollbarThickness); // Function UMG.ScrollBox.SetScrollbarThickness
	void SetScrollbarPadding(struct FMargin& NewScrollbarPadding); // Function UMG.ScrollBox.SetScrollbarPadding
	void SetOrientation(enum class EOrientation NewOrientation); // Function UMG.ScrollBox.SetOrientation
	void SetConsumeMouseWheel(enum class EConsumeMouseWheel NewConsumeMouseWheel); // Function UMG.ScrollBox.SetConsumeMouseWheel
	void SetAnimateWheelScrolling(bool bShouldAnimateWheelScrolling); // Function UMG.ScrollBox.SetAnimateWheelScrolling
	void SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar); // Function UMG.ScrollBox.SetAlwaysShowScrollbar
	void SetAllowOverscroll(bool NewAllowOverscroll); // Function UMG.ScrollBox.SetAllowOverscroll
	void ScrollWidgetIntoView(struct UWidget* WidgetToFind, bool AnimateScroll, enum class EDescendantScrollDestination ScrollDestination, float Padding); // Function UMG.ScrollBox.ScrollWidgetIntoView
	void ScrollToStart(); // Function UMG.ScrollBox.ScrollToStart
	void ScrollToEnd(); // Function UMG.ScrollBox.ScrollToEnd
	float GetViewOffsetFraction(); // Function UMG.ScrollBox.GetViewOffsetFraction
	float GetScrollOffsetOfEnd(); // Function UMG.ScrollBox.GetScrollOffsetOfEnd
	float GetScrollOffset(); // Function UMG.ScrollBox.GetScrollOffset
	void EndInertialScrolling(); // Function UMG.ScrollBox.EndInertialScrolling
}; 
 
 


//Class UMG.ScrollBoxSlot Size 88
// Inherited 56 bytes 
class UScrollBoxSlot : public UPanelSlot
{

 public: 
	struct FMargin Padding;  // Offset: 56 Size: 16
	enum class EHorizontalAlignment HorizontalAlignment;  // Offset: 72 Size: 1
	enum class EVerticalAlignment VerticalAlignment;  // Offset: 73 Size: 1
	char pad_74[14];  // Offset: 74 Size: 14



 // Functions 
 public:
	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.ScrollBoxSlot.SetVerticalAlignment
	void SetPadding(struct FMargin InPadding); // Function UMG.ScrollBoxSlot.SetPadding
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.ScrollBoxSlot.SetHorizontalAlignment
}; 
 
 


//Class UMG.SizeBox Size 344
// Inherited 288 bytes 
class USizeBox : public UContentWidget
{

 public: 
	char pad_288[16];  // Offset: 288 Size: 16
	float WidthOverride;  // Offset: 304 Size: 4
	float HeightOverride;  // Offset: 308 Size: 4
	float MinDesiredWidth;  // Offset: 312 Size: 4
	float MinDesiredHeight;  // Offset: 316 Size: 4
	float MaxDesiredWidth;  // Offset: 320 Size: 4
	float MaxDesiredHeight;  // Offset: 324 Size: 4
	float MinAspectRatio;  // Offset: 328 Size: 4
	float MaxAspectRatio;  // Offset: 332 Size: 4
	char bOverride_WidthOverride : 1;  // Offset: 336 Size: 1
	char bOverride_HeightOverride : 1;  // Offset: 336 Size: 1
	char bOverride_MinDesiredWidth : 1;  // Offset: 336 Size: 1
	char bOverride_MinDesiredHeight : 1;  // Offset: 336 Size: 1
	char bOverride_MaxDesiredWidth : 1;  // Offset: 336 Size: 1
	char bOverride_MaxDesiredHeight : 1;  // Offset: 336 Size: 1
	char bOverride_MinAspectRatio : 1;  // Offset: 336 Size: 1
	char bOverride_MaxAspectRatio : 1;  // Offset: 336 Size: 1
	char pad_337[7];  // Offset: 337 Size: 7



 // Functions 
 public:
	void SetWidthOverride(float InWidthOverride); // Function UMG.SizeBox.SetWidthOverride
	void SetMinDesiredWidth(float InMinDesiredWidth); // Function UMG.SizeBox.SetMinDesiredWidth
	void SetMinDesiredHeight(float InMinDesiredHeight); // Function UMG.SizeBox.SetMinDesiredHeight
	void SetMinAspectRatio(float InMinAspectRatio); // Function UMG.SizeBox.SetMinAspectRatio
	void SetMaxDesiredWidth(float InMaxDesiredWidth); // Function UMG.SizeBox.SetMaxDesiredWidth
	void SetMaxDesiredHeight(float InMaxDesiredHeight); // Function UMG.SizeBox.SetMaxDesiredHeight
	void SetMaxAspectRatio(float InMaxAspectRatio); // Function UMG.SizeBox.SetMaxAspectRatio
	void SetHeightOverride(float InHeightOverride); // Function UMG.SizeBox.SetHeightOverride
	void ClearWidthOverride(); // Function UMG.SizeBox.ClearWidthOverride
	void ClearMinDesiredWidth(); // Function UMG.SizeBox.ClearMinDesiredWidth
	void ClearMinDesiredHeight(); // Function UMG.SizeBox.ClearMinDesiredHeight
	void ClearMinAspectRatio(); // Function UMG.SizeBox.ClearMinAspectRatio
	void ClearMaxDesiredWidth(); // Function UMG.SizeBox.ClearMaxDesiredWidth
	void ClearMaxDesiredHeight(); // Function UMG.SizeBox.ClearMaxDesiredHeight
	void ClearMaxAspectRatio(); // Function UMG.SizeBox.ClearMaxAspectRatio
	void ClearHeightOverride(); // Function UMG.SizeBox.ClearHeightOverride
}; 
 
 


//Class UMG.SizeBoxSlot Size 96
// Inherited 56 bytes 
class USizeBoxSlot : public UPanelSlot
{

 public: 
	struct FMargin Padding;  // Offset: 56 Size: 16
	char pad_72[16];  // Offset: 72 Size: 16
	enum class EHorizontalAlignment HorizontalAlignment;  // Offset: 88 Size: 1
	enum class EVerticalAlignment VerticalAlignment;  // Offset: 89 Size: 1
	char pad_90[6];  // Offset: 90 Size: 6



 // Functions 
 public:
	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.SizeBoxSlot.SetVerticalAlignment
	void SetPadding(struct FMargin InPadding); // Function UMG.SizeBoxSlot.SetPadding
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.SizeBoxSlot.SetHorizontalAlignment
}; 
 
 


//Class UMG.SlateBlueprintLibrary Size 40
// Inherited 40 bytes 
class USlateBlueprintLibrary : public UBlueprintFunctionLibrary
{

 public: 



 // Functions 
 public:
	struct FVector2D TransformVectorLocalToAbsolute(struct FGeometry& Geometry, struct FVector2D LocalVector); // Function UMG.SlateBlueprintLibrary.TransformVectorLocalToAbsolute
	struct FVector2D TransformVectorAbsoluteToLocal(struct FGeometry& Geometry, struct FVector2D AbsoluteVector); // Function UMG.SlateBlueprintLibrary.TransformVectorAbsoluteToLocal
	float TransformScalarLocalToAbsolute(struct FGeometry& Geometry, float LocalScalar); // Function UMG.SlateBlueprintLibrary.TransformScalarLocalToAbsolute
	float TransformScalarAbsoluteToLocal(struct FGeometry& Geometry, float AbsoluteScalar); // Function UMG.SlateBlueprintLibrary.TransformScalarAbsoluteToLocal
	void ScreenToWidgetLocal(struct UObject* WorldContextObject, struct FGeometry& Geometry, struct FVector2D ScreenPosition, struct FVector2D& LocalCoordinate, bool bIncludeWindowPosition); // Function UMG.SlateBlueprintLibrary.ScreenToWidgetLocal
	void ScreenToWidgetAbsolute(struct UObject* WorldContextObject, struct FVector2D ScreenPosition, struct FVector2D& AbsoluteCoordinate, bool bIncludeWindowPosition); // Function UMG.SlateBlueprintLibrary.ScreenToWidgetAbsolute
	void ScreenToViewport(struct UObject* WorldContextObject, struct FVector2D ScreenPosition, struct FVector2D& ViewportPosition); // Function UMG.SlateBlueprintLibrary.ScreenToViewport
	void LocalToViewport(struct UObject* WorldContextObject, struct FGeometry& Geometry, struct FVector2D LocalCoordinate, struct FVector2D& PixelPosition, struct FVector2D& ViewportPosition); // Function UMG.SlateBlueprintLibrary.LocalToViewport
	struct FVector2D LocalToAbsolute(struct FGeometry& Geometry, struct FVector2D LocalCoordinate); // Function UMG.SlateBlueprintLibrary.LocalToAbsolute
	bool IsUnderLocation(struct FGeometry& Geometry, struct FVector2D& AbsoluteCoordinate); // Function UMG.SlateBlueprintLibrary.IsUnderLocation
	struct FVector2D GetLocalTopLeft(struct FGeometry& Geometry); // Function UMG.SlateBlueprintLibrary.GetLocalTopLeft
	struct FVector2D GetLocalSize(struct FGeometry& Geometry); // Function UMG.SlateBlueprintLibrary.GetLocalSize
	struct FVector2D GetAbsoluteSize(struct FGeometry& Geometry); // Function UMG.SlateBlueprintLibrary.GetAbsoluteSize
	bool EqualEqual_SlateBrush(struct FSlateBrush& A, struct FSlateBrush& B); // Function UMG.SlateBlueprintLibrary.EqualEqual_SlateBrush
	void AbsoluteToViewport(struct UObject* WorldContextObject, struct FVector2D AbsoluteDesktopCoordinate, struct FVector2D& PixelPosition, struct FVector2D& ViewportPosition); // Function UMG.SlateBlueprintLibrary.AbsoluteToViewport
	struct FVector2D AbsoluteToLocal(struct FGeometry& Geometry, struct FVector2D AbsoluteCoordinate); // Function UMG.SlateBlueprintLibrary.AbsoluteToLocal
}; 
 
 


//Class UMG.SlateVectorArtData Size 96
// Inherited 40 bytes 
class USlateVectorArtData : public UObject
{

 public: 
	struct TArray<struct FSlateMeshVertex> VertexData;  // Offset: 40 Size: 16
	struct TArray<uint32_t> IndexData;  // Offset: 56 Size: 16
	struct UMaterialInterface* Material;  // Offset: 72 Size: 8
	struct FVector2D ExtentMin;  // Offset: 80 Size: 8
	struct FVector2D ExtentMax;  // Offset: 88 Size: 8



 // Functions 
 public:
}; 
 
 


//Class UMG.SlateAccessibleWidgetData Size 128
// Inherited 40 bytes 
class USlateAccessibleWidgetData : public UObject
{

 public: 
	char pad_40_1 : 7;  // Offset: 40 Size: 1
	bool bCanChildrenBeAccessible : 1;  // Offset: 40 Size: 1
	enum class ESlateAccessibleBehavior AccessibleBehavior;  // Offset: 41 Size: 1
	enum class ESlateAccessibleBehavior AccessibleSummaryBehavior;  // Offset: 42 Size: 1
	char pad_43[5];  // Offset: 43 Size: 5
	struct FText AccessibleText;  // Offset: 48 Size: 24
	struct FDelegate AccessibleTextDelegate;  // Offset: 72 Size: 16
	struct FText AccessibleSummaryText;  // Offset: 88 Size: 24
	struct FDelegate AccessibleSummaryTextDelegate;  // Offset: 112 Size: 16



 // Functions 
 public:
}; 
 
 


//Class UMG.Slider Size 1272
// Inherited 264 bytes 
class USlider : public UWidget
{

 public: 
	float Value;  // Offset: 264 Size: 4
	struct FDelegate ValueDelegate;  // Offset: 268 Size: 16
	float MinValue;  // Offset: 284 Size: 4
	float MaxValue;  // Offset: 288 Size: 4
	char pad_292[4];  // Offset: 292 Size: 4
	struct FSliderStyle WidgetStyle;  // Offset: 296 Size: 832
	enum class EOrientation Orientation;  // Offset: 1128 Size: 1
	char pad_1129[3];  // Offset: 1129 Size: 3
	struct FLinearColor SliderBarColor;  // Offset: 1132 Size: 16
	struct FLinearColor SliderHandleColor;  // Offset: 1148 Size: 16
	char pad_1164_1 : 7;  // Offset: 1164 Size: 1
	bool IndentHandle : 1;  // Offset: 1164 Size: 1
	char pad_1165_1 : 7;  // Offset: 1165 Size: 1
	bool Locked : 1;  // Offset: 1165 Size: 1
	char pad_1166_1 : 7;  // Offset: 1166 Size: 1
	bool MouseUsesStep : 1;  // Offset: 1166 Size: 1
	char pad_1167_1 : 7;  // Offset: 1167 Size: 1
	bool RequiresControllerLock : 1;  // Offset: 1167 Size: 1
	float StepSize;  // Offset: 1168 Size: 4
	char pad_1172_1 : 7;  // Offset: 1172 Size: 1
	bool IsFocusable : 1;  // Offset: 1172 Size: 1
	char pad_1173[3];  // Offset: 1173 Size: 3
	struct FMulticastInlineDelegate OnMouseCaptureBegin;  // Offset: 1176 Size: 16
	struct FMulticastInlineDelegate OnMouseCaptureEnd;  // Offset: 1192 Size: 16
	struct FMulticastInlineDelegate OnControllerCaptureBegin;  // Offset: 1208 Size: 16
	struct FMulticastInlineDelegate OnControllerCaptureEnd;  // Offset: 1224 Size: 16
	struct FMulticastInlineDelegate OnValueChanged;  // Offset: 1240 Size: 16
	char pad_1256[16];  // Offset: 1256 Size: 16



 // Functions 
 public:
	void SetValue(float InValue); // Function UMG.Slider.SetValue
	void SetStepSize(float InValue); // Function UMG.Slider.SetStepSize
	void SetSliderHandleColor(struct FLinearColor InValue); // Function UMG.Slider.SetSliderHandleColor
	void SetSliderBarColor(struct FLinearColor InValue); // Function UMG.Slider.SetSliderBarColor
	void SetMinValue(float InValue); // Function UMG.Slider.SetMinValue
	void SetMaxValue(float InValue); // Function UMG.Slider.SetMaxValue
	void SetLocked(bool InValue); // Function UMG.Slider.SetLocked
	void SetIndentHandle(bool InValue); // Function UMG.Slider.SetIndentHandle
	float GetValue(); // Function UMG.Slider.GetValue
	float GetNormalizedValue(); // Function UMG.Slider.GetNormalizedValue
}; 
 
 


//Class UMG.Spacer Size 288
// Inherited 264 bytes 
class USpacer : public UWidget
{

 public: 
	struct FVector2D Size;  // Offset: 264 Size: 8
	char pad_272[16];  // Offset: 272 Size: 16



 // Functions 
 public:
	void SetSize(struct FVector2D InSize); // Function UMG.Spacer.SetSize
}; 
 
 


//Class UMG.SpinBox Size 1312
// Inherited 264 bytes 
class USpinBox : public UWidget
{

 public: 
	float Value;  // Offset: 264 Size: 4
	struct FDelegate ValueDelegate;  // Offset: 268 Size: 16
	char pad_284[4];  // Offset: 284 Size: 4
	struct FSpinBoxStyle WidgetStyle;  // Offset: 288 Size: 744
	struct USlateWidgetStyleAsset* Style;  // Offset: 1032 Size: 8
	int32_t MinFractionalDigits;  // Offset: 1040 Size: 4
	int32_t MaxFractionalDigits;  // Offset: 1044 Size: 4
	char pad_1048_1 : 7;  // Offset: 1048 Size: 1
	bool bAlwaysUsesDeltaSnap : 1;  // Offset: 1048 Size: 1
	char pad_1049[3];  // Offset: 1049 Size: 3
	float Delta;  // Offset: 1052 Size: 4
	float SliderExponent;  // Offset: 1056 Size: 4
	char pad_1060[4];  // Offset: 1060 Size: 4
	struct FSlateFontInfo Font;  // Offset: 1064 Size: 88
	enum class ETextJustify Justification;  // Offset: 1152 Size: 1
	char pad_1153[3];  // Offset: 1153 Size: 3
	float MinDesiredWidth;  // Offset: 1156 Size: 4
	char pad_1160_1 : 7;  // Offset: 1160 Size: 1
	bool ClearKeyboardFocusOnCommit : 1;  // Offset: 1160 Size: 1
	char pad_1161_1 : 7;  // Offset: 1161 Size: 1
	bool SelectAllTextOnCommit : 1;  // Offset: 1161 Size: 1
	char pad_1162[6];  // Offset: 1162 Size: 6
	struct FSlateColor ForegroundColor;  // Offset: 1168 Size: 40
	struct FMulticastInlineDelegate OnValueChanged;  // Offset: 1208 Size: 16
	struct FMulticastInlineDelegate OnValueCommitted;  // Offset: 1224 Size: 16
	struct FMulticastInlineDelegate OnBeginSliderMovement;  // Offset: 1240 Size: 16
	struct FMulticastInlineDelegate OnEndSliderMovement;  // Offset: 1256 Size: 16
	char bOverride_MinValue : 1;  // Offset: 1272 Size: 1
	char bOverride_MaxValue : 1;  // Offset: 1272 Size: 1
	char bOverride_MinSliderValue : 1;  // Offset: 1272 Size: 1
	char bOverride_MaxSliderValue : 1;  // Offset: 1272 Size: 1
	char pad_1272_1 : 4;  // Offset: 1272 Size: 1
	char pad_1273[4];  // Offset: 1273 Size: 4
	float MinValue;  // Offset: 1276 Size: 4
	float MaxValue;  // Offset: 1280 Size: 4
	float MinSliderValue;  // Offset: 1284 Size: 4
	float MaxSliderValue;  // Offset: 1288 Size: 4
	char pad_1292[20];  // Offset: 1292 Size: 20



 // Functions 
 public:
	void SetValue(float NewValue); // Function UMG.SpinBox.SetValue
	void SetMinValue(float NewValue); // Function UMG.SpinBox.SetMinValue
	void SetMinSliderValue(float NewValue); // Function UMG.SpinBox.SetMinSliderValue
	void SetMinFractionalDigits(int32_t NewValue); // Function UMG.SpinBox.SetMinFractionalDigits
	void SetMaxValue(float NewValue); // Function UMG.SpinBox.SetMaxValue
	void SetMaxSliderValue(float NewValue); // Function UMG.SpinBox.SetMaxSliderValue
	void SetMaxFractionalDigits(int32_t NewValue); // Function UMG.SpinBox.SetMaxFractionalDigits
	void SetForegroundColor(struct FSlateColor InForegroundColor); // Function UMG.SpinBox.SetForegroundColor
	void SetDelta(float NewValue); // Function UMG.SpinBox.SetDelta
	void SetAlwaysUsesDeltaSnap(bool bNewValue); // Function UMG.SpinBox.SetAlwaysUsesDeltaSnap
	void OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod); // DelegateFunction UMG.SpinBox.OnSpinBoxValueCommittedEvent__DelegateSignature
	void OnSpinBoxValueChangedEvent__DelegateSignature(float InValue); // DelegateFunction UMG.SpinBox.OnSpinBoxValueChangedEvent__DelegateSignature
	void OnSpinBoxBeginSliderMovement__DelegateSignature(); // DelegateFunction UMG.SpinBox.OnSpinBoxBeginSliderMovement__DelegateSignature
	float GetValue(); // Function UMG.SpinBox.GetValue
	float GetMinValue(); // Function UMG.SpinBox.GetMinValue
	float GetMinSliderValue(); // Function UMG.SpinBox.GetMinSliderValue
	int32_t GetMinFractionalDigits(); // Function UMG.SpinBox.GetMinFractionalDigits
	float GetMaxValue(); // Function UMG.SpinBox.GetMaxValue
	float GetMaxSliderValue(); // Function UMG.SpinBox.GetMaxSliderValue
	int32_t GetMaxFractionalDigits(); // Function UMG.SpinBox.GetMaxFractionalDigits
	float GetDelta(); // Function UMG.SpinBox.GetDelta
	bool GetAlwaysUsesDeltaSnap(); // Function UMG.SpinBox.GetAlwaysUsesDeltaSnap
	void ClearMinValue(); // Function UMG.SpinBox.ClearMinValue
	void ClearMinSliderValue(); // Function UMG.SpinBox.ClearMinSliderValue
	void ClearMaxValue(); // Function UMG.SpinBox.ClearMaxValue
	void ClearMaxSliderValue(); // Function UMG.SpinBox.ClearMaxSliderValue
}; 
 
 


//Class UMG.TextBinding Size 104
// Inherited 96 bytes 
class UTextBinding : public UPropertyBinding
{

 public: 
	char pad_96[8];  // Offset: 96 Size: 8



 // Functions 
 public:
	struct FText GetTextValue(); // Function UMG.TextBinding.GetTextValue
	struct FString GetStringValue(); // Function UMG.TextBinding.GetStringValue
}; 
 
 


//Class UMG.Throbber Size 432
// Inherited 264 bytes 
class UThrobber : public UWidget
{

 public: 
	int32_t NumberOfPieces;  // Offset: 264 Size: 4
	char pad_268_1 : 7;  // Offset: 268 Size: 1
	bool bAnimateHorizontally : 1;  // Offset: 268 Size: 1
	char pad_269_1 : 7;  // Offset: 269 Size: 1
	bool bAnimateVertically : 1;  // Offset: 269 Size: 1
	char pad_270_1 : 7;  // Offset: 270 Size: 1
	bool bAnimateOpacity : 1;  // Offset: 270 Size: 1
	char pad_271[1];  // Offset: 271 Size: 1
	struct USlateBrushAsset* PieceImage;  // Offset: 272 Size: 8
	struct FSlateBrush Image;  // Offset: 280 Size: 136
	char pad_416[16];  // Offset: 416 Size: 16



 // Functions 
 public:
	void SetNumberOfPieces(int32_t InNumberOfPieces); // Function UMG.Throbber.SetNumberOfPieces
	void SetAnimateVertically(bool bInAnimateVertically); // Function UMG.Throbber.SetAnimateVertically
	void SetAnimateOpacity(bool bInAnimateOpacity); // Function UMG.Throbber.SetAnimateOpacity
	void SetAnimateHorizontally(bool bInAnimateHorizontally); // Function UMG.Throbber.SetAnimateHorizontally
}; 
 
 


//Class UMG.TreeView Size 960
// Inherited 872 bytes 
class UTreeView : public UListView
{

 public: 
	char pad_872[16];  // Offset: 872 Size: 16
	struct FDelegate BP_OnGetItemChildren;  // Offset: 888 Size: 16
	struct FMulticastInlineDelegate BP_OnItemExpansionChanged;  // Offset: 904 Size: 16
	char pad_920[40];  // Offset: 920 Size: 40



 // Functions 
 public:
	void SetItemExpansion(struct UObject* Item, bool bExpandItem); // Function UMG.TreeView.SetItemExpansion
	void ExpandAll(); // Function UMG.TreeView.ExpandAll
	void CollapseAll(); // Function UMG.TreeView.CollapseAll
}; 
 
 


//Class UMG.UMGSequencePlayer Size 968
// Inherited 40 bytes 
class UUMGSequencePlayer : public UObject
{

 public: 
	char pad_40[568];  // Offset: 40 Size: 568
	struct UWidgetAnimation* Animation;  // Offset: 608 Size: 8
	char pad_616[8];  // Offset: 616 Size: 8
	struct FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance;  // Offset: 624 Size: 232
	char pad_856[112];  // Offset: 856 Size: 112



 // Functions 
 public:
	void SetUserTag(struct FName InUserTag); // Function UMG.UMGSequencePlayer.SetUserTag
	struct FName GetUserTag(); // Function UMG.UMGSequencePlayer.GetUserTag
}; 
 
 


//Class UMG.UMGSequenceTickManager Size 288
// Inherited 40 bytes 
class UUMGSequenceTickManager : public UObject
{

 public: 
	struct TSet<struct TWeakObjectPtr<UUserWidget>> WeakUserWidgets;  // Offset: 40 Size: 80
	struct UMovieSceneEntitySystemLinker* Linker;  // Offset: 120 Size: 8
	char pad_128[160];  // Offset: 128 Size: 160



 // Functions 
 public:
}; 
 
 


//Class UMG.UniformGridPanel Size 328
// Inherited 288 bytes 
class UUniformGridPanel : public UPanelWidget
{

 public: 
	struct FMargin SlotPadding;  // Offset: 288 Size: 16
	float MinDesiredSlotWidth;  // Offset: 304 Size: 4
	float MinDesiredSlotHeight;  // Offset: 308 Size: 4
	char pad_312[16];  // Offset: 312 Size: 16



 // Functions 
 public:
	void SetSlotPadding(struct FMargin InSlotPadding); // Function UMG.UniformGridPanel.SetSlotPadding
	void SetMinDesiredSlotWidth(float InMinDesiredSlotWidth); // Function UMG.UniformGridPanel.SetMinDesiredSlotWidth
	void SetMinDesiredSlotHeight(float InMinDesiredSlotHeight); // Function UMG.UniformGridPanel.SetMinDesiredSlotHeight
	struct UUniformGridSlot* AddChildToUniformGrid(struct UWidget* Content, int32_t InRow, int32_t InColumn); // Function UMG.UniformGridPanel.AddChildToUniformGrid
}; 
 
 


//Class UMG.UniformGridSlot Size 80
// Inherited 56 bytes 
class UUniformGridSlot : public UPanelSlot
{

 public: 
	enum class EHorizontalAlignment HorizontalAlignment;  // Offset: 56 Size: 1
	enum class EVerticalAlignment VerticalAlignment;  // Offset: 57 Size: 1
	char pad_58[2];  // Offset: 58 Size: 2
	int32_t Row;  // Offset: 60 Size: 4
	int32_t Column;  // Offset: 64 Size: 4
	char pad_68[12];  // Offset: 68 Size: 12



 // Functions 
 public:
	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.UniformGridSlot.SetVerticalAlignment
	void SetRow(int32_t InRow); // Function UMG.UniformGridSlot.SetRow
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.UniformGridSlot.SetHorizontalAlignment
	void SetColumn(int32_t InColumn); // Function UMG.UniformGridSlot.SetColumn
}; 
 
 


//Class UMG.VerticalBox Size 304
// Inherited 288 bytes 
class UVerticalBox : public UPanelWidget
{

 public: 
	char pad_288[16];  // Offset: 288 Size: 16



 // Functions 
 public:
	struct UVerticalBoxSlot* AddChildToVerticalBox(struct UWidget* Content); // Function UMG.VerticalBox.AddChildToVerticalBox
}; 
 
 


//Class UMG.VerticalBoxSlot Size 96
// Inherited 56 bytes 
class UVerticalBoxSlot : public UPanelSlot
{

 public: 
	struct FSlateChildSize Size;  // Offset: 56 Size: 8
	struct FMargin Padding;  // Offset: 64 Size: 16
	char pad_80[8];  // Offset: 80 Size: 8
	enum class EHorizontalAlignment HorizontalAlignment;  // Offset: 88 Size: 1
	enum class EVerticalAlignment VerticalAlignment;  // Offset: 89 Size: 1
	char pad_90[6];  // Offset: 90 Size: 6



 // Functions 
 public:
	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.VerticalBoxSlot.SetVerticalAlignment
	void SetSize(struct FSlateChildSize InSize); // Function UMG.VerticalBoxSlot.SetSize
	void SetPadding(struct FMargin InPadding); // Function UMG.VerticalBoxSlot.SetPadding
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.VerticalBoxSlot.SetHorizontalAlignment
}; 
 
 


//Class UMG.Viewport Size 360
// Inherited 288 bytes 
class UViewport : public UContentWidget
{

 public: 
	struct FLinearColor BackgroundColor;  // Offset: 288 Size: 16
	char pad_304[56];  // Offset: 304 Size: 56



 // Functions 
 public:
	struct AActor* Spawn(AActor* ActorClass); // Function UMG.Viewport.Spawn
	void SetViewRotation(struct FRotator Rotation); // Function UMG.Viewport.SetViewRotation
	void SetViewLocation(struct FVector Location); // Function UMG.Viewport.SetViewLocation
	struct FRotator GetViewRotation(); // Function UMG.Viewport.GetViewRotation
	struct UWorld* GetViewportWorld(); // Function UMG.Viewport.GetViewportWorld
	struct FVector GetViewLocation(); // Function UMG.Viewport.GetViewLocation
}; 
 
 


//Class UMG.VisibilityBinding Size 96
// Inherited 96 bytes 
class UVisibilityBinding : public UPropertyBinding
{

 public: 



 // Functions 
 public:
	enum class ESlateVisibility GetValue(); // Function UMG.VisibilityBinding.GetValue
}; 
 
 


//Class UMG.WidgetAnimation Size 144
// Inherited 96 bytes 
class UWidgetAnimation : public UMovieSceneSequence
{

 public: 
	struct UMovieScene* MovieScene;  // Offset: 96 Size: 8
	struct TArray<struct FWidgetAnimationBinding> AnimationBindings;  // Offset: 104 Size: 16
	char pad_120_1 : 7;  // Offset: 120 Size: 1
	bool bLegacyFinishOnStop : 1;  // Offset: 120 Size: 1
	char pad_121[7];  // Offset: 121 Size: 7
	struct FString DisplayLabel;  // Offset: 128 Size: 16



 // Functions 
 public:
	void UnbindFromAnimationStarted(struct UUserWidget* Widget, struct FDelegate Delegate); // Function UMG.WidgetAnimation.UnbindFromAnimationStarted
	void UnbindFromAnimationFinished(struct UUserWidget* Widget, struct FDelegate Delegate); // Function UMG.WidgetAnimation.UnbindFromAnimationFinished
	void UnbindAllFromAnimationStarted(struct UUserWidget* Widget); // Function UMG.WidgetAnimation.UnbindAllFromAnimationStarted
	void UnbindAllFromAnimationFinished(struct UUserWidget* Widget); // Function UMG.WidgetAnimation.UnbindAllFromAnimationFinished
	float GetStartTime(); // Function UMG.WidgetAnimation.GetStartTime
	float GetEndTime(); // Function UMG.WidgetAnimation.GetEndTime
	void BindToAnimationStarted(struct UUserWidget* Widget, struct FDelegate Delegate); // Function UMG.WidgetAnimation.BindToAnimationStarted
	void BindToAnimationFinished(struct UUserWidget* Widget, struct FDelegate Delegate); // Function UMG.WidgetAnimation.BindToAnimationFinished
}; 
 
 


//Class UMG.WidgetAnimationDelegateBinding Size 56
// Inherited 40 bytes 
class UWidgetAnimationDelegateBinding : public UDynamicBlueprintBinding
{

 public: 
	struct TArray<struct FBlueprintWidgetAnimationDelegateBinding> WidgetAnimationDelegateBindings;  // Offset: 40 Size: 16



 // Functions 
 public:
}; 
 
 


//Class UMG.WidgetAnimationPlayCallbackProxy Size 72
// Inherited 40 bytes 
class UWidgetAnimationPlayCallbackProxy : public UObject
{

 public: 
	struct FMulticastInlineDelegate Finished;  // Offset: 40 Size: 16
	char pad_56[16];  // Offset: 56 Size: 16



 // Functions 
 public:
	struct UWidgetAnimationPlayCallbackProxy* CreatePlayAnimationTimeRangeProxyObject(struct UUMGSequencePlayer*& Result, struct UUserWidget* Widget, struct UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed); // Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationTimeRangeProxyObject
	struct UWidgetAnimationPlayCallbackProxy* CreatePlayAnimationProxyObject(struct UUMGSequencePlayer*& Result, struct UUserWidget* Widget, struct UWidgetAnimation* InAnimation, float StartAtTime, int32_t NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed); // Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationProxyObject
}; 
 
 


//Class UMG.WidgetBinding Size 96
// Inherited 96 bytes 
class UWidgetBinding : public UPropertyBinding
{

 public: 



 // Functions 
 public:
	struct UWidget* GetValue(); // Function UMG.WidgetBinding.GetValue
}; 
 
 


//Class UMG.WidgetBlueprintLibrary Size 40
// Inherited 40 bytes 
class UWidgetBlueprintLibrary : public UBlueprintFunctionLibrary
{

 public: 



 // Functions 
 public:
	struct FEventReply UnlockMouse(struct FEventReply& Reply); // Function UMG.WidgetBlueprintLibrary.UnlockMouse
	struct FEventReply Unhandled(); // Function UMG.WidgetBlueprintLibrary.Unhandled
	void SetWindowTitleBarState(struct UWidget* TitleBarContent, enum class EWindowTitleBarMode Mode, bool bTitleBarDragEnabled, bool bWindowButtonsVisible, bool bTitleBarVisible); // Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarState
	void SetWindowTitleBarOnCloseClickedDelegate(struct FDelegate Delegate); // Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarOnCloseClickedDelegate
	void SetWindowTitleBarCloseButtonActive(bool bActive); // Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarCloseButtonActive
	struct FEventReply SetUserFocus(struct FEventReply& Reply, struct UWidget* FocusWidget, bool bInAllUsers); // Function UMG.WidgetBlueprintLibrary.SetUserFocus
	struct FEventReply SetMousePosition(struct FEventReply& Reply, struct FVector2D NewMousePosition); // Function UMG.WidgetBlueprintLibrary.SetMousePosition
	void SetInputMode_UIOnlyEx(struct APlayerController* PlayerController, struct UWidget* InWidgetToFocus, enum class EMouseLockMode InMouseLockMode); // Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnlyEx
	void SetInputMode_UIOnly(struct APlayerController* Target, struct UWidget* InWidgetToFocus, bool bLockMouseToViewport); // Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnly
	void SetInputMode_GameOnly(struct APlayerController* PlayerController); // Function UMG.WidgetBlueprintLibrary.SetInputMode_GameOnly
	void SetInputMode_GameAndUIEx(struct APlayerController* PlayerController, struct UWidget* InWidgetToFocus, enum class EMouseLockMode InMouseLockMode, bool bHideCursorDuringCapture); // Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUIEx
	void SetInputMode_GameAndUI(struct APlayerController* Target, struct UWidget* InWidgetToFocus, bool bLockMouseToViewport, bool bHideCursorDuringCapture); // Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUI
	bool SetHardwareCursor(struct UObject* WorldContextObject, enum class EMouseCursor CursorShape, struct FName CursorName, struct FVector2D HotSpot); // Function UMG.WidgetBlueprintLibrary.SetHardwareCursor
	void SetFocusToGameViewport(); // Function UMG.WidgetBlueprintLibrary.SetFocusToGameViewport
	void SetColorVisionDeficiencyType(enum class EColorVisionDeficiency Type, float Severity, bool CorrectDeficiency, bool ShowCorrectionWithDeficiency); // Function UMG.WidgetBlueprintLibrary.SetColorVisionDeficiencyType
	void SetBrushResourceToTexture(struct FSlateBrush& Brush, struct UTexture2D* Texture); // Function UMG.WidgetBlueprintLibrary.SetBrushResourceToTexture
	void SetBrushResourceToMaterial(struct FSlateBrush& Brush, struct UMaterialInterface* Material); // Function UMG.WidgetBlueprintLibrary.SetBrushResourceToMaterial
	void RestorePreviousWindowTitleBarState(); // Function UMG.WidgetBlueprintLibrary.RestorePreviousWindowTitleBarState
	struct FEventReply ReleaseMouseCapture(struct FEventReply& Reply); // Function UMG.WidgetBlueprintLibrary.ReleaseMouseCapture
	struct FEventReply ReleaseJoystickCapture(struct FEventReply& Reply, bool bInAllJoysticks); // Function UMG.WidgetBlueprintLibrary.ReleaseJoystickCapture
	void OnGameWindowCloseButtonClickedDelegate__DelegateSignature(); // DelegateFunction UMG.WidgetBlueprintLibrary.OnGameWindowCloseButtonClickedDelegate__DelegateSignature
	struct FSlateBrush NoResourceBrush(); // Function UMG.WidgetBlueprintLibrary.NoResourceBrush
	struct FSlateBrush MakeBrushFromTexture(struct UTexture2D* Texture, int32_t Width, int32_t Height); // Function UMG.WidgetBlueprintLibrary.MakeBrushFromTexture
	struct FSlateBrush MakeBrushFromMaterial(struct UMaterialInterface* Material, int32_t Width, int32_t Height); // Function UMG.WidgetBlueprintLibrary.MakeBrushFromMaterial
	struct FSlateBrush MakeBrushFromAsset(struct USlateBrushAsset* BrushAsset); // Function UMG.WidgetBlueprintLibrary.MakeBrushFromAsset
	struct FEventReply LockMouse(struct FEventReply& Reply, struct UWidget* CapturingWidget); // Function UMG.WidgetBlueprintLibrary.LockMouse
	bool IsDragDropping(); // Function UMG.WidgetBlueprintLibrary.IsDragDropping
	struct FEventReply Handled(); // Function UMG.WidgetBlueprintLibrary.Handled
	void GetSafeZonePadding(struct UObject* WorldContextObject, struct FVector4& SafePadding, struct FVector2D& SafePaddingScale, struct FVector4& SpillOverPadding); // Function UMG.WidgetBlueprintLibrary.GetSafeZonePadding
	struct FKeyEvent GetKeyEventFromAnalogInputEvent(struct FAnalogInputEvent& Event); // Function UMG.WidgetBlueprintLibrary.GetKeyEventFromAnalogInputEvent
	struct FInputEvent GetInputEventFromPointerEvent(struct FPointerEvent& Event); // Function UMG.WidgetBlueprintLibrary.GetInputEventFromPointerEvent
	struct FInputEvent GetInputEventFromNavigationEvent(struct FNavigationEvent& Event); // Function UMG.WidgetBlueprintLibrary.GetInputEventFromNavigationEvent
	struct FInputEvent GetInputEventFromKeyEvent(struct FKeyEvent& Event); // Function UMG.WidgetBlueprintLibrary.GetInputEventFromKeyEvent
	struct FInputEvent GetInputEventFromCharacterEvent(struct FCharacterEvent& Event); // Function UMG.WidgetBlueprintLibrary.GetInputEventFromCharacterEvent
	struct UMaterialInstanceDynamic* GetDynamicMaterial(struct FSlateBrush& Brush); // Function UMG.WidgetBlueprintLibrary.GetDynamicMaterial
	struct UDragDropOperation* GetDragDroppingContent(); // Function UMG.WidgetBlueprintLibrary.GetDragDroppingContent
	struct UTexture2D* GetBrushResourceAsTexture2D(struct FSlateBrush& Brush); // Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsTexture2D
	struct UMaterialInterface* GetBrushResourceAsMaterial(struct FSlateBrush& Brush); // Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsMaterial
	struct UObject* GetBrushResource(struct FSlateBrush& Brush); // Function UMG.WidgetBlueprintLibrary.GetBrushResource
	void GetAllWidgetsWithInterface(struct UObject* WorldContextObject, struct TArray<struct UUserWidget*>& FoundWidgets, UInterface* Interface, bool TopLevelOnly); // Function UMG.WidgetBlueprintLibrary.GetAllWidgetsWithInterface
	void GetAllWidgetsOfClass(struct UObject* WorldContextObject, struct TArray<struct UUserWidget*>& FoundWidgets, UUserWidget* WidgetClass, bool TopLevelOnly); // Function UMG.WidgetBlueprintLibrary.GetAllWidgetsOfClass
	struct FEventReply EndDragDrop(struct FEventReply& Reply); // Function UMG.WidgetBlueprintLibrary.EndDragDrop
	void DrawTextFormatted(struct FPaintContext& Context, struct FText& Text, struct FVector2D position, struct UFont* Font, int32_t FontSize, struct FName FontTypeFace, struct FLinearColor Tint); // Function UMG.WidgetBlueprintLibrary.DrawTextFormatted
	void DrawText(struct FPaintContext& Context, struct FString inString, struct FVector2D position, struct FLinearColor Tint); // Function UMG.WidgetBlueprintLibrary.DrawText
	void DrawLines(struct FPaintContext& Context, struct TArray<struct FVector2D>& Points, struct FLinearColor Tint, bool bAntiAlias, float Thickness); // Function UMG.WidgetBlueprintLibrary.DrawLines
	void DrawLine(struct FPaintContext& Context, struct FVector2D PositionA, struct FVector2D PositionB, struct FLinearColor Tint, bool bAntiAlias, float Thickness); // Function UMG.WidgetBlueprintLibrary.DrawLine
	void DrawBox(struct FPaintContext& Context, struct FVector2D position, struct FVector2D Size, struct USlateBrushAsset* Brush, struct FLinearColor Tint); // Function UMG.WidgetBlueprintLibrary.DrawBox
	void DismissAllMenus(); // Function UMG.WidgetBlueprintLibrary.DismissAllMenus
	struct FEventReply DetectDragIfPressed(struct FPointerEvent& PointerEvent, struct UWidget* WidgetDetectingDrag, struct FKey DragKey); // Function UMG.WidgetBlueprintLibrary.DetectDragIfPressed
	struct FEventReply DetectDrag(struct FEventReply& Reply, struct UWidget* WidgetDetectingDrag, struct FKey DragKey); // Function UMG.WidgetBlueprintLibrary.DetectDrag
	struct UDragDropOperation* CreateDragDropOperation(UDragDropOperation* OperationClass); // Function UMG.WidgetBlueprintLibrary.CreateDragDropOperation
	struct UUserWidget* Create(struct UObject* WorldContextObject, UUserWidget* WidgetType, struct APlayerController* OwningPlayer); // Function UMG.WidgetBlueprintLibrary.Create
	struct FEventReply ClearUserFocus(struct FEventReply& Reply, bool bInAllUsers); // Function UMG.WidgetBlueprintLibrary.ClearUserFocus
	struct FEventReply CaptureMouse(struct FEventReply& Reply, struct UWidget* CapturingWidget); // Function UMG.WidgetBlueprintLibrary.CaptureMouse
	struct FEventReply CaptureJoystick(struct FEventReply& Reply, struct UWidget* CapturingWidget, bool bInAllJoysticks); // Function UMG.WidgetBlueprintLibrary.CaptureJoystick
	void CancelDragDrop(); // Function UMG.WidgetBlueprintLibrary.CancelDragDrop
}; 
 
 


//Class UMG.WidgetInteractionComponent Size 1024
// Inherited 528 bytes 
class UWidgetInteractionComponent : public USceneComponent
{

 public: 
	struct FMulticastInlineDelegate OnHoveredWidgetChanged;  // Offset: 520 Size: 16
	char pad_544[8];  // Offset: 544 Size: 8
	int32_t VirtualUserIndex;  // Offset: 552 Size: 4
	int32_t PointerIndex;  // Offset: 556 Size: 4
	enum class ECollisionChannel TraceChannel;  // Offset: 560 Size: 1
	char pad_561[3];  // Offset: 561 Size: 3
	float InteractionDistance;  // Offset: 564 Size: 4
	enum class EWidgetInteractionSource InteractionSource;  // Offset: 568 Size: 1
	char pad_569_1 : 7;  // Offset: 569 Size: 1
	bool bEnableHitTesting : 1;  // Offset: 569 Size: 1
	char pad_570_1 : 7;  // Offset: 570 Size: 1
	bool bShowDebug : 1;  // Offset: 570 Size: 1
	char pad_571[1];  // Offset: 571 Size: 1
	float DebugSphereLineThickness;  // Offset: 572 Size: 4
	float DebugLineThickness;  // Offset: 576 Size: 4
	struct FLinearColor DebugColor;  // Offset: 580 Size: 16
	char pad_596[124];  // Offset: 596 Size: 124
	struct FHitResult CustomHitResult;  // Offset: 720 Size: 136
	struct FVector2D LocalHitLocation;  // Offset: 856 Size: 8
	struct FVector2D LastLocalHitLocation;  // Offset: 864 Size: 8
	struct UWidgetComponent* HoveredWidgetComponent;  // Offset: 872 Size: 8
	struct FHitResult LastHitResult;  // Offset: 880 Size: 136
	char pad_1016_1 : 7;  // Offset: 1016 Size: 1
	bool bIsHoveredWidgetInteractable : 1;  // Offset: 1016 Size: 1
	char pad_1017_1 : 7;  // Offset: 1017 Size: 1
	bool bIsHoveredWidgetFocusable : 1;  // Offset: 1017 Size: 1
	char pad_1018_1 : 7;  // Offset: 1018 Size: 1
	bool bIsHoveredWidgetHitTestVisible : 1;  // Offset: 1018 Size: 1
	char pad_1019[5];  // Offset: 1019 Size: 5



 // Functions 
 public:
	void SetFocus(struct UWidget* FocusWidget); // Function UMG.WidgetInteractionComponent.SetFocus
	void SetCustomHitResult(struct FHitResult& HitResult); // Function UMG.WidgetInteractionComponent.SetCustomHitResult
	bool SendKeyChar(struct FString Characters, bool bRepeat); // Function UMG.WidgetInteractionComponent.SendKeyChar
	void ScrollWheel(float ScrollDelta); // Function UMG.WidgetInteractionComponent.ScrollWheel
	void ReleasePointerKey(struct FKey Key); // Function UMG.WidgetInteractionComponent.ReleasePointerKey
	bool ReleaseKey(struct FKey Key); // Function UMG.WidgetInteractionComponent.ReleaseKey
	void PressPointerKey(struct FKey Key); // Function UMG.WidgetInteractionComponent.PressPointerKey
	bool PressKey(struct FKey Key, bool bRepeat); // Function UMG.WidgetInteractionComponent.PressKey
	bool PressAndReleaseKey(struct FKey Key); // Function UMG.WidgetInteractionComponent.PressAndReleaseKey
	bool IsOverInteractableWidget(); // Function UMG.WidgetInteractionComponent.IsOverInteractableWidget
	bool IsOverHitTestVisibleWidget(); // Function UMG.WidgetInteractionComponent.IsOverHitTestVisibleWidget
	bool IsOverFocusableWidget(); // Function UMG.WidgetInteractionComponent.IsOverFocusableWidget
	struct FHitResult GetLastHitResult(); // Function UMG.WidgetInteractionComponent.GetLastHitResult
	struct UWidgetComponent* GetHoveredWidgetComponent(); // Function UMG.WidgetInteractionComponent.GetHoveredWidgetComponent
	struct FVector2D Get2DHitLocation(); // Function UMG.WidgetInteractionComponent.Get2DHitLocation
}; 
 
 


//Class UMG.WidgetLayoutLibrary Size 40
// Inherited 40 bytes 
class UWidgetLayoutLibrary : public UBlueprintFunctionLibrary
{

 public: 



 // Functions 
 public:
	struct UWrapBoxSlot* SlotAsWrapBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsWrapBoxSlot
	struct UWidgetSwitcherSlot* SlotAsWidgetSwitcherSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsWidgetSwitcherSlot
	struct UVerticalBoxSlot* SlotAsVerticalBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsVerticalBoxSlot
	struct UUniformGridSlot* SlotAsUniformGridSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsUniformGridSlot
	struct USizeBoxSlot* SlotAsSizeBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsSizeBoxSlot
	struct UScrollBoxSlot* SlotAsScrollBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsScrollBoxSlot
	struct UScaleBoxSlot* SlotAsScaleBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsScaleBoxSlot
	struct USafeZoneSlot* SlotAsSafeBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsSafeBoxSlot
	struct UOverlaySlot* SlotAsOverlaySlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsOverlaySlot
	struct UHorizontalBoxSlot* SlotAsHorizontalBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsHorizontalBoxSlot
	struct UGridSlot* SlotAsGridSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsGridSlot
	struct UCanvasPanelSlot* SlotAsCanvasSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsCanvasSlot
	struct UBorderSlot* SlotAsBorderSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsBorderSlot
	void RemoveAllWidgets(struct UObject* WorldContextObject); // Function UMG.WidgetLayoutLibrary.RemoveAllWidgets
	bool ProjectWorldLocationToWidgetPosition(struct APlayerController* PlayerController, struct FVector WorldLocation, struct FVector2D& ScreenPosition, bool bPlayerViewportRelative); // Function UMG.WidgetLayoutLibrary.ProjectWorldLocationToWidgetPosition
	struct FGeometry GetViewportWidgetGeometry(struct UObject* WorldContextObject); // Function UMG.WidgetLayoutLibrary.GetViewportWidgetGeometry
	struct FVector2D GetViewportSize(struct UObject* WorldContextObject); // Function UMG.WidgetLayoutLibrary.GetViewportSize
	float GetViewportScale(struct UObject* WorldContextObject); // Function UMG.WidgetLayoutLibrary.GetViewportScale
	struct FGeometry GetPlayerScreenWidgetGeometry(struct APlayerController* PlayerController); // Function UMG.WidgetLayoutLibrary.GetPlayerScreenWidgetGeometry
	bool GetMousePositionScaledByDPI(struct APlayerController* Player, float& LocationX, float& LocationY); // Function UMG.WidgetLayoutLibrary.GetMousePositionScaledByDPI
	struct FVector2D GetMousePositionOnViewport(struct UObject* WorldContextObject); // Function UMG.WidgetLayoutLibrary.GetMousePositionOnViewport
	struct FVector2D GetMousePositionOnPlatform(); // Function UMG.WidgetLayoutLibrary.GetMousePositionOnPlatform
}; 
 
 


//Class UMG.WidgetNavigation Size 256
// Inherited 40 bytes 
class UWidgetNavigation : public UObject
{

 public: 
	struct FWidgetNavigationData Up;  // Offset: 40 Size: 36
	struct FWidgetNavigationData Down;  // Offset: 76 Size: 36
	struct FWidgetNavigationData Left;  // Offset: 112 Size: 36
	struct FWidgetNavigationData Right;  // Offset: 148 Size: 36
	struct FWidgetNavigationData Next;  // Offset: 184 Size: 36
	struct FWidgetNavigationData Previous;  // Offset: 220 Size: 36



 // Functions 
 public:
}; 
 
 


//Class UMG.WidgetSwitcher Size 312
// Inherited 288 bytes 
class UWidgetSwitcher : public UPanelWidget
{

 public: 
	int32_t ActiveWidgetIndex;  // Offset: 288 Size: 4
	char pad_292[20];  // Offset: 292 Size: 20



 // Functions 
 public:
	void SetActiveWidgetIndex(int32_t Index); // Function UMG.WidgetSwitcher.SetActiveWidgetIndex
	void SetActiveWidget(struct UWidget* Widget); // Function UMG.WidgetSwitcher.SetActiveWidget
	struct UWidget* GetWidgetAtIndex(int32_t Index); // Function UMG.WidgetSwitcher.GetWidgetAtIndex
	int32_t GetNumWidgets(); // Function UMG.WidgetSwitcher.GetNumWidgets
	int32_t GetActiveWidgetIndex(); // Function UMG.WidgetSwitcher.GetActiveWidgetIndex
	struct UWidget* GetActiveWidget(); // Function UMG.WidgetSwitcher.GetActiveWidget
}; 
 
 


//Class UMG.WidgetSwitcherSlot Size 88
// Inherited 56 bytes 
class UWidgetSwitcherSlot : public UPanelSlot
{

 public: 
	char pad_56[8];  // Offset: 56 Size: 8
	struct FMargin Padding;  // Offset: 64 Size: 16
	enum class EHorizontalAlignment HorizontalAlignment;  // Offset: 80 Size: 1
	enum class EVerticalAlignment VerticalAlignment;  // Offset: 81 Size: 1
	char pad_82[6];  // Offset: 82 Size: 6



 // Functions 
 public:
	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.WidgetSwitcherSlot.SetVerticalAlignment
	void SetPadding(struct FMargin InPadding); // Function UMG.WidgetSwitcherSlot.SetPadding
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.WidgetSwitcherSlot.SetHorizontalAlignment
}; 
 
 


//Class UMG.WindowTitleBarArea Size 320
// Inherited 288 bytes 
class UWindowTitleBarArea : public UContentWidget
{

 public: 
	char pad_288_1 : 7;  // Offset: 288 Size: 1
	bool bWindowButtonsEnabled : 1;  // Offset: 288 Size: 1
	char pad_289_1 : 7;  // Offset: 289 Size: 1
	bool bDoubleClickTogglesFullscreen : 1;  // Offset: 289 Size: 1
	char pad_290[30];  // Offset: 290 Size: 30



 // Functions 
 public:
	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.WindowTitleBarArea.SetVerticalAlignment
	void SetPadding(struct FMargin InPadding); // Function UMG.WindowTitleBarArea.SetPadding
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.WindowTitleBarArea.SetHorizontalAlignment
}; 
 
 


//Class UMG.WindowTitleBarAreaSlot Size 96
// Inherited 56 bytes 
class UWindowTitleBarAreaSlot : public UPanelSlot
{

 public: 
	struct FMargin Padding;  // Offset: 56 Size: 16
	enum class EHorizontalAlignment HorizontalAlignment;  // Offset: 72 Size: 1
	enum class EVerticalAlignment VerticalAlignment;  // Offset: 73 Size: 1
	char pad_74[22];  // Offset: 74 Size: 22



 // Functions 
 public:
	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.WindowTitleBarAreaSlot.SetVerticalAlignment
	void SetPadding(struct FMargin InPadding); // Function UMG.WindowTitleBarAreaSlot.SetPadding
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.WindowTitleBarAreaSlot.SetHorizontalAlignment
}; 
 
 


//Class UMG.WrapBox Size 328
// Inherited 288 bytes 
class UWrapBox : public UPanelWidget
{

 public: 
	struct FVector2D InnerSlotPadding;  // Offset: 288 Size: 8
	float WrapWidth;  // Offset: 296 Size: 4
	float WrapSize;  // Offset: 300 Size: 4
	char pad_304_1 : 7;  // Offset: 304 Size: 1
	bool bExplicitWrapWidth : 1;  // Offset: 304 Size: 1
	char pad_305_1 : 7;  // Offset: 305 Size: 1
	bool bExplicitWrapSize : 1;  // Offset: 305 Size: 1
	enum class EOrientation Orientation;  // Offset: 306 Size: 1
	char pad_307[21];  // Offset: 307 Size: 21



 // Functions 
 public:
	void SetInnerSlotPadding(struct FVector2D InPadding); // Function UMG.WrapBox.SetInnerSlotPadding
	struct UWrapBoxSlot* AddChildToWrapBox(struct UWidget* Content); // Function UMG.WrapBox.AddChildToWrapBox
}; 
 
 


//Class UMG.WrapBoxSlot Size 96
// Inherited 56 bytes 
class UWrapBoxSlot : public UPanelSlot
{

 public: 
	struct FMargin Padding;  // Offset: 56 Size: 16
	char pad_72_1 : 7;  // Offset: 72 Size: 1
	bool bFillEmptySpace : 1;  // Offset: 72 Size: 1
	char pad_73[3];  // Offset: 73 Size: 3
	float FillSpanWhenLessThan;  // Offset: 76 Size: 4
	enum class EHorizontalAlignment HorizontalAlignment;  // Offset: 80 Size: 1
	enum class EVerticalAlignment VerticalAlignment;  // Offset: 81 Size: 1
	char pad_82[14];  // Offset: 82 Size: 14



 // Functions 
 public:
	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.WrapBoxSlot.SetVerticalAlignment
	void SetPadding(struct FMargin InPadding); // Function UMG.WrapBoxSlot.SetPadding
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.WrapBoxSlot.SetHorizontalAlignment
	void SetFillSpanWhenLessThan(float InFillSpanWhenLessThan); // Function UMG.WrapBoxSlot.SetFillSpanWhenLessThan
	void SetFillEmptySpace(bool InbFillEmptySpace); // Function UMG.WrapBoxSlot.SetFillEmptySpace
}; 
 
 


