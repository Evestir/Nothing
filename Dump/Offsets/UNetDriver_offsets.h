namespace offsets
{
	namespace UNetDriver
	{
			constexpr auto NetConnectionClassName = 0x30; // Size: 16, Type: struct FString
			constexpr auto ReplicationDriverClassName = 0x40; // Size: 16, Type: struct FString
			constexpr auto MaxDownloadSize = 0x50; // Size: 4, Type: int32_t
			constexpr auto bClampListenServerTickRate = 0x54; // Size: 1, Type: char
			constexpr auto NetServerMaxTickRate = 0x58; // Size: 4, Type: int32_t
			constexpr auto MaxNetTickRate = 0x5c; // Size: 4, Type: int32_t
			constexpr auto MaxInternetClientRate = 0x60; // Size: 4, Type: int32_t
			constexpr auto MaxClientRate = 0x64; // Size: 4, Type: int32_t
			constexpr auto ServerTravelPause = 0x68; // Size: 4, Type: float
			constexpr auto SpawnPrioritySeconds = 0x6c; // Size: 4, Type: float
			constexpr auto RelevantTimeout = 0x70; // Size: 4, Type: float
			constexpr auto KeepAliveTime = 0x74; // Size: 4, Type: float
			constexpr auto InitialConnectTimeout = 0x78; // Size: 4, Type: float
			constexpr auto ConnectionTimeout = 0x7c; // Size: 4, Type: float
			constexpr auto TimeoutMultiplierForUnoptimizedBuilds = 0x80; // Size: 4, Type: float
			constexpr auto bNoTimeouts = 0x84; // Size: 1, Type: bool
			constexpr auto bNeverApplyNetworkEmulationSettings = 0x85; // Size: 1, Type: bool
			constexpr auto ServerConnection = 0x88; // Size: 8, Type: struct UNetConnection*
			constexpr auto ClientConnections = 0x90; // Size: 16, Type: struct TArray<struct UNetConnection*>
			constexpr auto RecentlyDisconnectedTrackingTime = 0x100; // Size: 4, Type: int32_t
			constexpr auto World = 0x140; // Size: 8, Type: struct UWorld*
			constexpr auto WorldPackage = 0x148; // Size: 8, Type: struct UPackage*
			constexpr auto NetConnectionClass = 0x170; // Size: 8, Type: UObject*
			constexpr auto ReplicationDriverClass = 0x178; // Size: 8, Type: UObject*
			constexpr auto NetDriverName = 0x190; // Size: 8, Type: struct FName
			constexpr auto ChannelDefinitions = 0x198; // Size: 16, Type: struct TArray<struct FChannelDefinition>
			constexpr auto ChannelDefinitionMap = 0x1a8; // Size: 80, Type: struct TMap<struct FName, struct FChannelDefinition>
			constexpr auto ActorChannelPool = 0x1f8; // Size: 16, Type: struct TArray<struct UChannel*>
			constexpr auto Time = 0x210; // Size: 4, Type: float
			constexpr auto ReplicationDriver = 0x700; // Size: 8, Type: struct UReplicationDriver*
	}
} 
