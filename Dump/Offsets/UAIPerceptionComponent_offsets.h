namespace offsets
{
	namespace UAIPerceptionComponent
	{
			constexpr auto SensesConfig = 0xb0; // Size: 16, Type: struct TArray<struct UAISenseConfig*>
			constexpr auto DominantSense = 0xc0; // Size: 8, Type: UAISense*
			constexpr auto AIOwner = 0xd8; // Size: 8, Type: struct AAIController*
			constexpr auto OnPerceptionUpdated = 0x160; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnTargetPerceptionUpdated = 0x170; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnTargetPerceptionInfoUpdated = 0x180; // Size: 16, Type: struct FMulticastInlineDelegate
	}
} 
