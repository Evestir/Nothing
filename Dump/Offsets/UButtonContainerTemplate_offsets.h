namespace offsets
{
	namespace UButtonContainerTemplate
	{
			constexpr auto bCheckBox = 0x268; // Size: 1, Type: bool
			constexpr auto CheckType = 0x269; // Size: 1, Type: enum class EContainerCheckType
			constexpr auto bMenuTab = 0x26a; // Size: 1, Type: bool
			constexpr auto bScrollRetainer = 0x26b; // Size: 1, Type: bool
			constexpr auto StartThreshold = 0x26c; // Size: 4, Type: float
			constexpr auto EndThreshold = 0x270; // Size: 4, Type: float
			constexpr auto CheckedState = 0x278; // Size: 16, Type: struct TArray<bool>
			constexpr auto DynamicChildButtonClass = 0x288; // Size: 8, Type: UButtonTemplate*
			constexpr auto ContainerChildren = 0x290; // Size: 16, Type: struct TArray<struct UButtonTemplate*>
			constexpr auto V_Btn_Container = 0x2a0; // Size: 8, Type: struct UPanelWidget*
	}
} 
