namespace offsets
{
	namespace UBlackboardData
	{
			constexpr auto Parent = 0x30; // Size: 8, Type: struct UBlackboardData*
			constexpr auto Keys = 0x38; // Size: 16, Type: struct TArray<struct FBlackboardEntry>
			constexpr auto bHasSynchronizedKeys = 0x48; // Size: 1, Type: char
	}
} 
