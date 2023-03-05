namespace offsets
{
	namespace UPrAuth
	{
			constexpr auto Addr = 0x48; // Size: 16, Type: struct FString
			constexpr auto Token = 0x58; // Size: 16, Type: struct FString
			constexpr auto bNew = 0x68; // Size: 1, Type: bool
			constexpr auto protocolHash = 0x70; // Size: 16, Type: struct FString
			constexpr auto userIp = 0x80; // Size: 16, Type: struct FString
			constexpr auto bChangeName = 0x90; // Size: 1, Type: bool
	}
} 
