namespace offsets
{
	namespace USessionApiServer
	{
			constexpr auto SessionApiServer = 0x28; // Size: 8, Type: struct UHttpServerRequester*
			constexpr auto WaitingSessionAPIRequests = 0x30; // Size: 8, Type: struct UServerRequest*
			constexpr auto PendingSessionAPIRequests = 0x48; // Size: 16, Type: struct TArray<struct FSessionApiPendingRequest>
	}
} 
