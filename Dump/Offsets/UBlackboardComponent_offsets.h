namespace offsets
{
	namespace UBlackboardComponent
	{
			constexpr auto BrainComp = 0xb0; // Size: 8, Type: struct UBrainComponent*
			constexpr auto DefaultBlackboardAsset = 0xb8; // Size: 8, Type: struct UBlackboardData*
			constexpr auto BlackboardAsset = 0xc0; // Size: 8, Type: struct UBlackboardData*
			constexpr auto KeyInstances = 0xe8; // Size: 16, Type: struct TArray<struct UBlackboardKeyType*>
	}
} 
