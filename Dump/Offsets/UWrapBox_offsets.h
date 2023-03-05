namespace offsets
{
	namespace UWrapBox
	{
			constexpr auto InnerSlotPadding = 0x120; // Size: 8, Type: struct FVector2D
			constexpr auto WrapWidth = 0x128; // Size: 4, Type: float
			constexpr auto WrapSize = 0x12c; // Size: 4, Type: float
			constexpr auto bExplicitWrapWidth = 0x130; // Size: 1, Type: bool
			constexpr auto bExplicitWrapSize = 0x131; // Size: 1, Type: bool
			constexpr auto Orientation = 0x132; // Size: 1, Type: enum class EOrientation
	}
} 
