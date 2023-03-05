namespace offsets
{
	namespace URevolveToolProperties
	{
			constexpr auto bConnectOpenProfileToAxis = 0xb0; // Size: 1, Type: bool
			constexpr auto bSnapToWorldGrid = 0xb1; // Size: 1, Type: bool
			constexpr auto DrawPlaneOrigin = 0xb4; // Size: 12, Type: struct FVector
			constexpr auto DrawPlaneOrientation = 0xc0; // Size: 12, Type: struct FRotator
			constexpr auto bEnableSnapping = 0xcc; // Size: 1, Type: bool
			constexpr auto bAllowedToEditDrawPlane = 0xcd; // Size: 1, Type: bool
	}
} 
