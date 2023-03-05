namespace offsets
{
	namespace UCanvas
	{
			constexpr auto OrgX = 0x28; // Size: 4, Type: float
			constexpr auto OrgY = 0x2c; // Size: 4, Type: float
			constexpr auto ClipX = 0x30; // Size: 4, Type: float
			constexpr auto ClipY = 0x34; // Size: 4, Type: float
			constexpr auto DrawColor = 0x38; // Size: 4, Type: struct FColor
			constexpr auto bCenterX = 0x3c; // Size: 1, Type: char
			constexpr auto bCenterY = 0x3c; // Size: 1, Type: char
			constexpr auto bNoSmooth = 0x3c; // Size: 1, Type: char
			constexpr auto SizeX = 0x40; // Size: 4, Type: int32_t
			constexpr auto SizeY = 0x44; // Size: 4, Type: int32_t
			constexpr auto ColorModulate = 0x50; // Size: 16, Type: struct FPlane
			constexpr auto DefaultTexture = 0x60; // Size: 8, Type: struct UTexture2D*
			constexpr auto GradientTexture0 = 0x68; // Size: 8, Type: struct UTexture2D*
			constexpr auto ReporterGraph = 0x70; // Size: 8, Type: struct UReporterGraph*
	}
} 
