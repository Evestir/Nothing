namespace offsets
{
	namespace UKdServerConfig
	{
			constexpr auto ServerAddrs = 0x28; // Size: 16, Type: struct TArray<struct FKdServerAddrConfig>
			constexpr auto ServerListUrl = 0x38; // Size: 16, Type: struct FString
			constexpr auto ServerListUrls = 0x48; // Size: 16, Type: struct TArray<struct FKdServerListUrlConfig>
			constexpr auto PreAuthKey = 0x58; // Size: 16, Type: struct FString
			constexpr auto Rules = 0x68; // Size: 16, Type: struct TArray<struct FString>
	}
} 
