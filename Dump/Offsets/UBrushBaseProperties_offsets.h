namespace offsets
{
	namespace UBrushBaseProperties
	{
			constexpr auto BrushSize = 0x60; // Size: 4, Type: float
			constexpr auto bSpecifyRadius = 0x64; // Size: 1, Type: bool
			constexpr auto BrushRadius = 0x68; // Size: 4, Type: float
			constexpr auto BrushStrength = 0x6c; // Size: 4, Type: float
			constexpr auto BrushFalloffAmount = 0x70; // Size: 4, Type: float
			constexpr auto bShowStrength = 0x74; // Size: 1, Type: bool
			constexpr auto bShowFalloff = 0x75; // Size: 1, Type: bool
	}
} 
