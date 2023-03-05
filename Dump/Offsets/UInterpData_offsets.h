namespace offsets
{
	namespace UInterpData
	{
			constexpr auto InterpLength = 0x28; // Size: 4, Type: float
			constexpr auto PathBuildTime = 0x2c; // Size: 4, Type: float
			constexpr auto InterpGroups = 0x30; // Size: 16, Type: struct TArray<struct UInterpGroup*>
			constexpr auto CurveEdSetup = 0x40; // Size: 8, Type: struct UInterpCurveEdSetup*
			constexpr auto EdSectionStart = 0x48; // Size: 4, Type: float
			constexpr auto EdSectionEnd = 0x4c; // Size: 4, Type: float
			constexpr auto bShouldBakeAndPrune = 0x50; // Size: 1, Type: char
			constexpr auto CachedDirectorGroup = 0x58; // Size: 8, Type: struct UInterpGroupDirector*
			constexpr auto AllEventNames = 0x60; // Size: 16, Type: struct TArray<struct FName>
	}
} 
