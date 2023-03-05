namespace offsets
{
	namespace UAISense
	{
			constexpr auto DefaultExpirationAge = 0x28; // Size: 4, Type: float
			constexpr auto NotifyType = 0x2c; // Size: 1, Type: enum class EAISenseNotifyType
			constexpr auto bWantsNewPawnNotification = 0x30; // Size: 1, Type: char
			constexpr auto bAutoRegisterAllPawnsAsSources = 0x30; // Size: 1, Type: char
			constexpr auto PerceptionSystemInstance = 0x38; // Size: 8, Type: struct UAIPerceptionSystem*
	}
} 
