namespace offsets
{
	namespace UKdServerList
	{
			constexpr auto GameInstance = 0x38; // Size: 8, Type: struct UGameInstance*
			constexpr auto ServerConfig = 0xb0; // Size: 8, Type: struct UKdServerConfig*
			constexpr auto ServerAddrs = 0xb8; // Size: 16, Type: struct TArray<struct FKdServerAddrConfig>
			constexpr auto Rules = 0xc8; // Size: 16, Type: struct TArray<struct FString>
	}
} 
