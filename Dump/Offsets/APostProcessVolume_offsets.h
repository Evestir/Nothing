namespace offsets
{
	namespace APostProcessVolume
	{
			constexpr auto Settings = 0x260; // Size: 1488, Type: struct FPostProcessSettings
			constexpr auto Priority = 0x830; // Size: 4, Type: float
			constexpr auto BlendRadius = 0x834; // Size: 4, Type: float
			constexpr auto BlendWeight = 0x838; // Size: 4, Type: float
			constexpr auto bEnabled = 0x83c; // Size: 1, Type: char
			constexpr auto bUnbound = 0x83c; // Size: 1, Type: char
	}
} 
