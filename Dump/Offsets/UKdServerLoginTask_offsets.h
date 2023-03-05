namespace offsets
{
	namespace UKdServerLoginTask
	{
			constexpr auto AccountServerConn = 0x40; // Size: 8, Type: struct UServerConnection*
			constexpr auto ServerConfig = 0xa0; // Size: 112, Type: struct FKdServerAddrConfig
			constexpr auto LoginServerConn = 0x110; // Size: 8, Type: struct UServerRequester*
			constexpr auto ReceivedPrAuth = 0x120; // Size: 8, Type: struct UPrAuth*
	}
} 
