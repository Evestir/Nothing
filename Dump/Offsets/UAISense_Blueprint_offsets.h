namespace offsets
{
	namespace UAISense_Blueprint
	{
			constexpr auto ListenerDataType = 0x80; // Size: 8, Type: UUserDefinedStruct*
			constexpr auto ListenerContainer = 0x88; // Size: 16, Type: struct TArray<struct UAIPerceptionComponent*>
			constexpr auto UnprocessedEvents = 0x98; // Size: 16, Type: struct TArray<struct UAISenseEvent*>
	}
} 
