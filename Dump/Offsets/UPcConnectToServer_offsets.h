namespace offsets
{
	namespace UPcConnectToServer
	{
			constexpr auto gameId = 0x30; // Size: 16, Type: struct FString
			constexpr auto Addr = 0x40; // Size: 16, Type: struct FString
			constexpr auto Track = 0x50; // Size: 16, Type: struct FString
			constexpr auto gameSettings = 0x60; // Size: 8, Type: struct UObject*
			constexpr auto openLevelOption = 0x68; // Size: 16, Type: struct FString
			constexpr auto packEncKey = 0x78; // Size: 16, Type: struct FString
			constexpr auto bMatchGame = 0x88; // Size: 1, Type: bool
			constexpr auto grandPrixId = 0x90; // Size: 16, Type: struct FString
			constexpr auto vivoxChannelName = 0xa0; // Size: 16, Type: struct FString
			constexpr auto vivoxJoinToken = 0xb0; // Size: 16, Type: struct FString
			constexpr auto vivoxTranscriptionToken = 0xc0; // Size: 16, Type: struct FString
			constexpr auto statusNotificationId = 0xd0; // Size: 16, Type: struct FString
			constexpr auto userGameLogUrl = 0xe0; // Size: 16, Type: struct FString
	}
} 
