namespace offsets
{
	namespace UGfsServer
	{
			constexpr auto Connection = 0x28; // Size: 8, Type: struct UGfsServerConnection*
			constexpr auto GameInstance = 0x30; // Size: 8, Type: struct UGameInstance*
			constexpr auto Account = 0x38; // Size: 8, Type: struct UKdAccount*
			constexpr auto PingTimer = 0x40; // Size: 8, Type: struct FTimerHandle
			constexpr auto MyGfsId = 0x48; // Size: 16, Type: struct FString
			constexpr auto MyNexonTag = 0x58; // Size: 16, Type: struct FString
	}
} 
