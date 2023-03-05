namespace offsets
{
	namespace ULicenseShadowAIData
	{
			constexpr auto bRecord = 0x40; // Size: 1, Type: bool
			constexpr auto bRecorded = 0x41; // Size: 1, Type: bool
			constexpr auto ShadowLapTime = 0x44; // Size: 4, Type: float
			constexpr auto shadowName = 0x48; // Size: 24, Type: struct FText
			constexpr auto ShadowKartDesc = 0x60; // Size: 184, Type: struct FKartDesc
			constexpr auto ShadowCharacterDesc = 0x118; // Size: 96, Type: struct FCharacterDesc
			constexpr auto RecordedData = 0x178; // Size: 368, Type: struct FPawnRecordData
			constexpr auto ShadowPawn = 0x2e8; // Size: 8, Type: struct AKdPawn*
	}
} 
