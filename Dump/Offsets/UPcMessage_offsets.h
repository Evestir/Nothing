namespace offsets
{
	namespace UPcMessage
	{
			constexpr auto Message = 0x30; // Size: 16, Type: struct FString
			constexpr auto Params = 0x40; // Size: 16, Type: struct TArray<struct FString>
			constexpr auto localizedMessage = 0x50; // Size: 80, Type: struct TMap<struct FString, struct FString>
	}
} 
