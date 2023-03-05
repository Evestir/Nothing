namespace offsets
{
	namespace UInterpGroup
	{
			constexpr auto InterpTracks = 0x30; // Size: 16, Type: struct TArray<struct UInterpTrack*>
			constexpr auto GroupName = 0x40; // Size: 8, Type: struct FName
			constexpr auto GroupColor = 0x48; // Size: 4, Type: struct FColor
			constexpr auto bCollapsed = 0x4c; // Size: 1, Type: char
			constexpr auto bVisible = 0x4c; // Size: 1, Type: char
			constexpr auto bIsFolder = 0x4c; // Size: 1, Type: char
			constexpr auto bIsParented = 0x4c; // Size: 1, Type: char
			constexpr auto bIsSelected = 0x4c; // Size: 1, Type: char
	}
} 
