namespace offsets
{
	namespace UTcpMessagingSettings
	{
			constexpr auto EnableTransport = 0x28; // Size: 1, Type: bool
			constexpr auto ListenEndpoint = 0x30; // Size: 16, Type: struct FString
			constexpr auto ConnectToEndpoints = 0x40; // Size: 16, Type: struct TArray<struct FString>
			constexpr auto ConnectionRetryDelay = 0x50; // Size: 4, Type: int32_t
			constexpr auto bStopServiceWhenAppDeactivates = 0x54; // Size: 1, Type: bool
	}
} 
