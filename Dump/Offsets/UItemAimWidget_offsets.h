namespace offsets
{
	namespace UItemAimWidget
	{
			constexpr auto Anim_OnButtonPress = 0x268; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto Anim_ButtonPressing = 0x270; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto Anim_OnButtonRelease = 0x278; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto Anim_LockOn = 0x280; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto Anim_LockOn_Release = 0x288; // Size: 8, Type: struct UWidgetAnimation*
			constexpr auto MasterOverlay = 0x290; // Size: 8, Type: struct UOverlay*
			constexpr auto OnButtonPressSpeed = 0x2c8; // Size: 4, Type: float
			constexpr auto ButtonPressingSpeed = 0x2cc; // Size: 4, Type: float
			constexpr auto OnButtonReleaseSpeed = 0x2d0; // Size: 4, Type: float
			constexpr auto LockOnSpeed = 0x2d4; // Size: 4, Type: float
			constexpr auto LockOnReleaseSpeed = 0x2d8; // Size: 4, Type: float
			constexpr auto LastTarget = 0x2e0; // Size: 8, Type: struct AActor*
			constexpr auto AimSounds = 0x2f8; // Size: 16, Type: struct TArray<struct UFMODEvent*>
			constexpr auto TargetOnMeSound = 0x308; // Size: 8, Type: struct UFMODEvent*
	}
} 
