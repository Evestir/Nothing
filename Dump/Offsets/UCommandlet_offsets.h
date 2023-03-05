namespace offsets
{
	namespace UCommandlet
	{
			constexpr auto HelpDescription = 0x28; // Size: 16, Type: struct FString
			constexpr auto HelpUsage = 0x38; // Size: 16, Type: struct FString
			constexpr auto HelpWebLink = 0x48; // Size: 16, Type: struct FString
			constexpr auto HelpParamNames = 0x58; // Size: 16, Type: struct TArray<struct FString>
			constexpr auto HelpParamDescriptions = 0x68; // Size: 16, Type: struct TArray<struct FString>
			constexpr auto IsServer = 0x78; // Size: 1, Type: char
			constexpr auto IsClient = 0x78; // Size: 1, Type: char
			constexpr auto IsEditor = 0x78; // Size: 1, Type: char
			constexpr auto LogToConsole = 0x78; // Size: 1, Type: char
			constexpr auto ShowErrorCount = 0x78; // Size: 1, Type: char
			constexpr auto ShowProgress = 0x78; // Size: 1, Type: char
	}
} 
