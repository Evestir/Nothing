namespace offsets
{
	namespace UPqSendReport
	{
			constexpr auto suspectId = 0x38; // Size: 16, Type: struct FString
			constexpr auto suspectSubId = 0x48; // Size: 16, Type: struct FString
			constexpr auto suspectName = 0x58; // Size: 16, Type: struct FString
			constexpr auto suspectPlatform = 0x68; // Size: 1, Type: enum class EKtAccountPlatform
			constexpr auto Category = 0x69; // Size: 1, Type: enum class EKtReportCategory
			constexpr auto subcategory = 0x70; // Size: 16, Type: struct FString
			constexpr auto reportRoute = 0x80; // Size: 16, Type: struct FString
			constexpr auto gameId = 0x90; // Size: 16, Type: struct FString
			constexpr auto replayPath = 0xa0; // Size: 16, Type: struct FString
			constexpr auto Message = 0xb0; // Size: 16, Type: struct FString
			constexpr auto detailInfo = 0xc0; // Size: 16, Type: struct FString
	}
} 
