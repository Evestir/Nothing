namespace offsets
{
	namespace UNetConnection
	{
			constexpr auto Children = 0x48; // Size: 16, Type: struct TArray<struct UChildConnection*>
			constexpr auto Driver = 0x58; // Size: 8, Type: struct UNetDriver*
			constexpr auto PackageMapClass = 0x60; // Size: 8, Type: UPackageMap*
			constexpr auto PackageMap = 0x68; // Size: 8, Type: struct UPackageMap*
			constexpr auto OpenChannels = 0x70; // Size: 16, Type: struct TArray<struct UChannel*>
			constexpr auto SentTemporaries = 0x80; // Size: 16, Type: struct TArray<struct AActor*>
			constexpr auto ViewTarget = 0x90; // Size: 8, Type: struct AActor*
			constexpr auto OwningActor = 0x98; // Size: 8, Type: struct AActor*
			constexpr auto MaxPacket = 0xa0; // Size: 4, Type: int32_t
			constexpr auto InternalAck = 0xa4; // Size: 1, Type: char
			constexpr auto playerId = 0x160; // Size: 40, Type: struct FUniqueNetIdRepl
			constexpr auto LastReceiveTime = 0x1d0; // Size: 8, Type: double
			constexpr auto ChannelsToTick = 0x1510; // Size: 16, Type: struct TArray<struct UChannel*>
	}
} 
