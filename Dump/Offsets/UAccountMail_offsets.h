namespace offsets
{
	namespace UAccountMail
	{
			constexpr auto Received = 0x30; // Size: 16, Type: struct TArray<struct FKtMailHeader>
			constexpr auto Sent = 0x48; // Size: 16, Type: struct TArray<struct FKtMail>
			constexpr auto acquired = 0x58; // Size: 16, Type: struct TArray<struct FKtMail>
			constexpr auto ReceivedMailCache = 0xc8; // Size: 80, Type: struct TMap<struct FString, struct FMailCache>
			constexpr auto MailRequests = 0x118; // Size: 16, Type: struct TArray<struct UMailRequest*>
			constexpr auto Barrier = 0x128; // Size: 8, Type: struct UDelegateBarrier*
	}
} 
