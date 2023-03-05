namespace offsets
{
	namespace UAuthorizedServer
	{
			constexpr auto Account = 0x38; // Size: 8, Type: struct UKdAccount*
			constexpr auto ServerRequester = 0x40; // Size: 8, Type: struct UHttpServerRequester*
			constexpr auto PendingRequests = 0x78; // Size: 16, Type: struct TArray<struct FAuthServerPendingRequest>
	}
} 
