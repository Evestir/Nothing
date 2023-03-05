namespace offsets
{
	namespace UTextRenderComponent
	{
			constexpr auto Text = 0x470; // Size: 24, Type: struct FText
			constexpr auto TextMaterial = 0x488; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto Font = 0x490; // Size: 8, Type: struct UFont*
			constexpr auto HorizontalAlignment = 0x498; // Size: 1, Type: enum class EHorizTextAligment
			constexpr auto VerticalAlignment = 0x499; // Size: 1, Type: enum class EVerticalTextAligment
			constexpr auto TextRenderColor = 0x49c; // Size: 4, Type: struct FColor
			constexpr auto XScale = 0x4a0; // Size: 4, Type: float
			constexpr auto YScale = 0x4a4; // Size: 4, Type: float
			constexpr auto WorldSize = 0x4a8; // Size: 4, Type: float
			constexpr auto InvDefaultSize = 0x4ac; // Size: 4, Type: float
			constexpr auto HorizSpacingAdjust = 0x4b0; // Size: 4, Type: float
			constexpr auto VertSpacingAdjust = 0x4b4; // Size: 4, Type: float
			constexpr auto bAlwaysRenderAsText = 0x4b8; // Size: 1, Type: char
	}
} 
