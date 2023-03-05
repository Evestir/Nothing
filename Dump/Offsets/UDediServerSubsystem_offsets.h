namespace offsets
{
	namespace UDediServerSubsystem
	{
			constexpr auto SmsProvider = 0x30; // Size: 8, Type: struct USmsProvider*
			constexpr auto LastSessionRequest = 0x38; // Size: 8, Type: struct UKtSessionRequestBody*
			constexpr auto PendingRequests = 0x40; // Size: 16, Type: struct TArray<struct UObject*>
	}
} 
