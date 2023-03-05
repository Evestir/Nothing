namespace offsets
{
	namespace UUdpMessagingSettings
	{
			constexpr auto EnabledByDefault = 0x28; // Size: 1, Type: bool
			constexpr auto EnableTransport = 0x29; // Size: 1, Type: bool
			constexpr auto bAutoRepair = 0x2a; // Size: 1, Type: bool
			constexpr auto MaxSendRate = 0x2c; // Size: 4, Type: float
			constexpr auto AutoRepairAttemptLimit = 0x30; // Size: 4, Type: uint32_t
			constexpr auto bStopServiceWhenAppDeactivates = 0x34; // Size: 1, Type: bool
			constexpr auto UnicastEndpoint = 0x38; // Size: 16, Type: struct FString
			constexpr auto MulticastEndpoint = 0x48; // Size: 16, Type: struct FString
			constexpr auto MessageFormat = 0x58; // Size: 1, Type: enum class EUdpMessageFormat
			constexpr auto MulticastTimeToLive = 0x59; // Size: 1, Type: char
			constexpr auto StaticEndpoints = 0x60; // Size: 16, Type: struct TArray<struct FString>
			constexpr auto EnableTunnel = 0x70; // Size: 1, Type: bool
			constexpr auto TunnelUnicastEndpoint = 0x78; // Size: 16, Type: struct FString
			constexpr auto TunnelMulticastEndpoint = 0x88; // Size: 16, Type: struct FString
			constexpr auto RemoteTunnelEndpoints = 0x98; // Size: 16, Type: struct TArray<struct FString>
	}
} 
