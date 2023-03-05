namespace offsets
{
	namespace UTMI_NXLogMajorGameComponent
	{
			constexpr auto LastSaveTime = 0x16c; // Size: 4, Type: float
			constexpr auto bRaceStart = 0x170; // Size: 1, Type: bool
			constexpr auto bRaceEnd = 0x171; // Size: 1, Type: bool
			constexpr auto UserList = 0x178; // Size: 16, Type: struct TArray<struct APawn*>
			constexpr auto TotalLapTime = 0x188; // Size: 4, Type: float
			constexpr auto RaceResult = 0x190; // Size: 8, Type: struct UMajorGameData*
	}
} 
