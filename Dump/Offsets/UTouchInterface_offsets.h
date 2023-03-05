namespace offsets
{
	namespace UTouchInterface
	{
			constexpr auto Controls = 0x28; // Size: 16, Type: struct TArray<struct FTouchInputControl>
			constexpr auto ActiveOpacity = 0x38; // Size: 4, Type: float
			constexpr auto InactiveOpacity = 0x3c; // Size: 4, Type: float
			constexpr auto TimeUntilDeactive = 0x40; // Size: 4, Type: float
			constexpr auto TimeUntilReset = 0x44; // Size: 4, Type: float
			constexpr auto ActivationDelay = 0x48; // Size: 4, Type: float
			constexpr auto bPreventRecenter = 0x4c; // Size: 1, Type: bool
			constexpr auto StartupDelay = 0x50; // Size: 4, Type: float
	}
} 
