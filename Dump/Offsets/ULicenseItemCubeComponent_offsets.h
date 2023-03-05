namespace offsets
{
	namespace ULicenseItemCubeComponent
	{
			constexpr auto Pawn = 0xb0; // Size: 8, Type: struct AKdPawn*
			constexpr auto Data = 0xb8; // Size: 8, Type: struct ULicenseItemCubeData*
			constexpr auto ItemCubeList = 0xc0; // Size: 16, Type: struct TArray<struct FLicenseItemCubeDesc>
			constexpr auto HiddenCubeList = 0xd0; // Size: 16, Type: struct TArray<struct FLicenseItemCubeDesc>
	}
} 
