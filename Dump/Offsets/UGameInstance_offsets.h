namespace offsets
{
	namespace UGameInstance
	{
			constexpr auto LocalPlayers = 0x38; // Size: 16, Type: struct TArray<struct ULocalPlayer*>
			constexpr auto OnlineSession = 0x48; // Size: 8, Type: struct UOnlineSession*
			constexpr auto ReferencedObjects = 0x50; // Size: 16, Type: struct TArray<struct UObject*>
			constexpr auto OnPawnControllerChangedDelegates = 0x78; // Size: 16, Type: struct FMulticastInlineDelegate
	}
} 
