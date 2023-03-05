namespace offsets
{
	namespace UBTDecorator_Blackboard
	{
			constexpr auto IntValue = 0x90; // Size: 4, Type: int32_t
			constexpr auto FloatValue = 0x94; // Size: 4, Type: float
			constexpr auto StringValue = 0x98; // Size: 16, Type: struct FString
			constexpr auto CachedDescription = 0xa8; // Size: 16, Type: struct FString
			constexpr auto OperationType = 0xb8; // Size: 1, Type: char
			constexpr auto NotifyObserver = 0xb9; // Size: 1, Type: enum class EBTBlackboardRestart
	}
} 
