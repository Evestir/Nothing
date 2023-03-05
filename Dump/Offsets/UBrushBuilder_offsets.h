namespace offsets
{
	namespace UBrushBuilder
	{
			constexpr auto BitmapFilename = 0x28; // Size: 16, Type: struct FString
			constexpr auto ToolTip = 0x38; // Size: 16, Type: struct FString
			constexpr auto NotifyBadParams = 0x48; // Size: 1, Type: char
			constexpr auto Vertices = 0x50; // Size: 16, Type: struct TArray<struct FVector>
			constexpr auto Polys = 0x60; // Size: 16, Type: struct TArray<struct FBuilderPoly>
			constexpr auto Layer = 0x70; // Size: 8, Type: struct FName
			constexpr auto MergeCoplanars = 0x78; // Size: 1, Type: char
	}
} 
