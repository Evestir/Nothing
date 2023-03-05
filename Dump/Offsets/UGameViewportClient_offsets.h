namespace offsets
{
	namespace UGameViewportClient
	{
			constexpr auto ViewportConsole = 0x40; // Size: 8, Type: struct UConsole*
			constexpr auto DebugProperties = 0x48; // Size: 16, Type: struct TArray<struct FDebugDisplayProperty>
			constexpr auto MaxSplitscreenPlayers = 0x68; // Size: 4, Type: int32_t
			constexpr auto World = 0x78; // Size: 8, Type: struct UWorld*
			constexpr auto GameInstance = 0x80; // Size: 8, Type: struct UGameInstance*
	}
} 
