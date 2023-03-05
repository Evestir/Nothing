namespace offsets
{
	namespace UAnimCompress_RemoveLinearKeys
	{
			constexpr auto MaxPosDiff = 0x40; // Size: 4, Type: float
			constexpr auto MaxAngleDiff = 0x44; // Size: 4, Type: float
			constexpr auto MaxScaleDiff = 0x48; // Size: 4, Type: float
			constexpr auto MaxEffectorDiff = 0x4c; // Size: 4, Type: float
			constexpr auto MinEffectorDiff = 0x50; // Size: 4, Type: float
			constexpr auto EffectorDiffSocket = 0x54; // Size: 4, Type: float
			constexpr auto ParentKeyScale = 0x58; // Size: 4, Type: float
			constexpr auto bRetarget = 0x5c; // Size: 1, Type: char
			constexpr auto bActuallyFilterLinearKeys = 0x5c; // Size: 1, Type: char
	}
} 
