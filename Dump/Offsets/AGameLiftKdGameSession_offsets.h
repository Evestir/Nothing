namespace offsets
{
	namespace AGameLiftKdGameSession
	{
			constexpr auto SmsPlayerSessionId2PlayerId = 0x268; // Size: 80, Type: struct TMap<struct FString, struct FString>
			constexpr auto SessionRequest = 0x2b8; // Size: 8, Type: struct UKtSessionRequestBody*
			constexpr auto players = 0x2d0; // Size: 80, Type: struct TMap<struct FString, struct UKtSessionPlayer*>
			constexpr auto observers = 0x320; // Size: 80, Type: struct TMap<struct FString, struct UKtSessionObserver*>
			constexpr auto SessionApiServer = 0x3c8; // Size: 8, Type: struct USessionApiServer*
			constexpr auto Sms = 0x3e8; // Size: 8, Type: struct USmsProvider*
	}
} 
