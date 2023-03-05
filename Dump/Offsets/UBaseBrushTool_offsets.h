namespace offsets
{
	namespace UBaseBrushTool
	{
			constexpr auto BrushProperties = 0xc0; // Size: 8, Type: struct UBrushBaseProperties*
			constexpr auto bInBrushStroke = 0xc8; // Size: 1, Type: bool
			constexpr auto WorldToLocalScale = 0xcc; // Size: 4, Type: float
			constexpr auto LastBrushStamp = 0xd0; // Size: 168, Type: struct FBrushStampData
			constexpr auto PropertyClass = 0x188; // Size: 40, Type: struct TSoftClassPtr<UObject>
			constexpr auto BrushStampIndicator = 0x1b0; // Size: 8, Type: struct UBrushStampIndicator*
	}
} 
