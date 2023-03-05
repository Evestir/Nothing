namespace offsets
{
	namespace UOptionBarWidget
	{
			constexpr auto V_BtnImage_Bar = 0x3e8; // Size: 8, Type: struct UKdButtonImage*
			constexpr auto V_Base_Container = 0x3f0; // Size: 8, Type: struct UPanelWidget*
			constexpr auto V_Btn_Container = 0x3f8; // Size: 8, Type: struct UPanelWidget*
			constexpr auto ContainerChildren = 0x460; // Size: 16, Type: struct TArray<struct UButtonTemplate*>
			constexpr auto MaxIndex = 0x470; // Size: 4, Type: int32_t
			constexpr auto CurrentIndex = 0x474; // Size: 4, Type: int32_t
			constexpr auto ConfirmIndex = 0x478; // Size: 4, Type: int32_t
			constexpr auto HoveredIndex = 0x47c; // Size: 4, Type: int32_t
			constexpr auto bOptionEnable = 0x480; // Size: 1, Type: bool
			constexpr auto OptionSlider = 0x488; // Size: 8, Type: struct UUserWidget*
			constexpr auto Slider_Item = 0x490; // Size: 8, Type: struct USlider*
			constexpr auto SliderGauge = 0x498; // Size: 8, Type: struct UKdButtonImage*
			constexpr auto FocusAnimSetSlider = 0x4a0; // Size: 8, Type: struct UAnimationPresetWidget*
			constexpr auto MinValue = 0x4a8; // Size: 4, Type: float
			constexpr auto MaxValue = 0x4ac; // Size: 4, Type: float
			constexpr auto ValueStep = 0x4b0; // Size: 4, Type: float
			constexpr auto StartValue = 0x4b4; // Size: 4, Type: float
			constexpr auto EndValue = 0x4b8; // Size: 4, Type: float
			constexpr auto bEnableNavigation = 0x4bc; // Size: 1, Type: bool
	}
} 
