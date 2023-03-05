namespace offsets
{
	namespace UButtonTemplate
	{
			constexpr auto Btn_Index = 0x260; // Size: 4, Type: int32_t
			constexpr auto bCheckBox = 0x264; // Size: 1, Type: bool
			constexpr auto ClickMethod = 0x308; // Size: 1, Type: enum class EButtonClickMethod
			constexpr auto TouchMethod = 0x309; // Size: 1, Type: enum class EButtonTouchMethod
			constexpr auto ClickSound = 0x328; // Size: 8, Type: struct UFMODEvent*
			constexpr auto FocusSound = 0x330; // Size: 8, Type: struct UFMODEvent*
			constexpr auto ClickDelay = 0x338; // Size: 4, Type: float
			constexpr auto OnEnabledAnimation = 0x340; // Size: 16, Type: struct TArray<struct FAnimationPresetDef>
			constexpr auto OnDisabledAnimation = 0x350; // Size: 16, Type: struct TArray<struct FAnimationPresetDef>
			constexpr auto OnFocusAnimation = 0x360; // Size: 16, Type: struct TArray<struct FAnimationPresetDef>
			constexpr auto OnUnfocusAnimation = 0x370; // Size: 16, Type: struct TArray<struct FAnimationPresetDef>
			constexpr auto OnCheckedAnimation = 0x380; // Size: 16, Type: struct TArray<struct FAnimationPresetDef>
			constexpr auto OnUncheckedAnimation = 0x390; // Size: 16, Type: struct TArray<struct FAnimationPresetDef>
			constexpr auto OnHoveredAnimation = 0x3a0; // Size: 16, Type: struct TArray<struct FAnimationPresetDef>
			constexpr auto OnUnHoveredAnimation = 0x3b0; // Size: 16, Type: struct TArray<struct FAnimationPresetDef>
			constexpr auto OnPressedAnimation = 0x3c0; // Size: 16, Type: struct TArray<struct FAnimationPresetDef>
			constexpr auto OnUnPressedAnimation = 0x3d0; // Size: 16, Type: struct TArray<struct FAnimationPresetDef>
			constexpr auto bMoveFocusOnMouseClick = 0x3e1; // Size: 1, Type: bool
	}
} 
