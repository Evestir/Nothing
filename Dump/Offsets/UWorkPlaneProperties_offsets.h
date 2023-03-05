namespace offsets
{
	namespace UWorkPlaneProperties
	{
			constexpr auto bPropertySetEnabled = 0x60; // Size: 1, Type: bool
			constexpr auto bShowGizmo = 0x61; // Size: 1, Type: bool
			constexpr auto bSnapToGrid = 0x62; // Size: 1, Type: bool
			constexpr auto position = 0x64; // Size: 12, Type: struct FVector
			constexpr auto Rotation = 0x70; // Size: 16, Type: struct FQuat
	}
} 
